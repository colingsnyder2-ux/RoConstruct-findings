// from server: 92% by king_originala
struct String;
typedef String* (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copyString;

struct String
{
    char data[28];
    String(const String& other);
    ~String();
};

inline String::String(const String& other)
{
    copyString(this, other);
}

struct Worker
{
    void invoke(String first, int value, String second);
};

struct Argument
{
    char padding[16];
    char* worker;
};

struct Data
{
    String first;
    int value;
    String second;
};

struct Client
{
    Data* data;
    void* function(void* result, Argument* argument);
};

void* Client::function(void* result, Argument* argument)
{
    Worker* worker = reinterpret_cast<Worker*>(argument->worker + 8);
    worker->invoke(data->first, data->value, data->second);
    return result;
}
