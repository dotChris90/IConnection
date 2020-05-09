#include <string>
#include <memory>

using namespace std;

class IConnectionPoint
{
    public:
        virtual string get_connection_string() = 0;
};