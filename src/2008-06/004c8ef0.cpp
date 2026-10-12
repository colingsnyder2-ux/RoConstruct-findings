// from server: 94% by king_originala
void* __cdecl operator new(unsigned int size);
void __cdecl operator delete(void* p);

struct Node
{
    Node* next;
};

struct Object
{
    char padding[0x290];
    Node link;
    unsigned int extra;
};

struct Result
{
    Object* object;
    bool inserted;

    Result(Object* p, bool b) : object(p), inserted(b) {}
};

struct Table
{
    char padding[0x24];

    Object* receive(unsigned int* key, Object* object);
};

struct Receiver
{
    char padding[0x0c];
    Table table;
    unsigned int count;

    Result insert(unsigned int* key);
};

Result Receiver::insert(unsigned int* key)
{
    Object* object = static_cast<Object*>(operator new(0x298));
    try
    {
        Object* result = table.receive(key, object);
        if (result == object)
        {
            ++count;
            return Result(result, true);
        }

        operator delete(object);
        return Result(result, false);
    }
    catch (...)
    {
        operator delete(object);
        throw;
    }
}
