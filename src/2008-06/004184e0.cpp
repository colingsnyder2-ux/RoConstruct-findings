// from server: 97% by king_originala
struct Buffer
{
    unsigned char data[24];
};

typedef void (__cdecl *Manager)(const Buffer&, Buffer&, int);

struct Table
{
    Manager volatile manage;
};

struct Function
{
    const Table* table;
    unsigned int padding;
    Buffer buffer;

    Function(const Function&);
    ~Function();
};

__forceinline Function::Function(const Function& other)
    : table(0)
{
    if (other.table)
    {
        table = other.table;
        other.table->manage(other.buffer, buffer, 0);
    }
}

__forceinline Function::~Function()
{
    if (table)
    {
        Manager manager = table->manage;
        if (manager)
            manager(buffer, buffer, 1);
    }
}

struct S
{
    void (__thiscall *invoke)(void*, Function);
    int adjustment;

    void f(void**, Function);
};

void S::f(void** object, Function function)
{
    invoke(static_cast<char*>(*static_cast<void* volatile*>(object)) + adjustment,
           function);
}
