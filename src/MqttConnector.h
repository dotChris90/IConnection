#include "IConnector.h"
#include "MQTTAsync.h"

class MqttConnector : IConnector
{
    protected :
        unique_ptr<MQTTAsync> _client;  
        unique_ptr<MQTTAsync_connectOptions> _connectOptions;
};