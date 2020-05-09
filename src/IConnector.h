#include "IConnectionPoint.h"
#include "IMessage.h"
#include "IMessageType.h"
#include "map"

using namespace std;

class IConnector 
{
    protected:
        unique_ptr<IConnectionPoint> _connection;
        unique_ptr<map<string,string>> _connection_options; 
    public:
        virtual bool connect() = 0;
        virtual bool disconnect() = 0;
        virtual bool publish_msg(IMessage message) = 0;
        virtual bool subscribe(IMessageType type);
        virtual std::map<string,string> consume_service(IMessage message) = 0;
        virtual bool offer_service(IMessageType type) = 0;
};