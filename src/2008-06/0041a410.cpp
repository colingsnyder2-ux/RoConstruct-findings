// from server: 90% by colin
// from server: 87% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Iterator
{
    void* owner;
    unsigned int position;
    void* get();
};

struct Queue
{
    void* owner;
    unsigned int data[5];
    void clear();
};

struct Mutex
{
    void lock();
    void unlock();
};

struct Lock
{
    Mutex* mutex;
    bool locked;
    unsigned int reserved;

    Lock(Mutex* p);
    ~Lock();
};

inline Lock::Lock(Mutex* p) : mutex(p), locked(false)
{
    mutex->lock();
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        mutex->unlock();
}

struct Function
{
    typedef void (__cdecl *Manager)(void*, void*, int);
    typedef void (__cdecl *Invoker)(void*);

    struct Table
    {
        Manager manager;
        Invoker invoke;
    };

    Table* table;
    unsigned int reserved;
    char buffer[24];

    Function();
    void assign(void* source);
    ~Function();
};

inline Function::Function() : table(0)
{
}

inline Function::~Function()
{
    if (table)
    {
        Manager manager = table->manager;
        if (manager)
            manager(buffer, buffer, 1);
    }
}

struct Exception
{
    char storage[40];
    Exception();
    ~Exception();
};

__declspec(noreturn) void __cdecl raise(const Exception& exception);

struct Marshaller
{
    char padding[0x2c];
    Queue queue;
    unsigned int first;
    unsigned int count;
    Mutex mutex;

    void execute();
};

void Marshaller::execute()
{
    try
    {
        Function function;
        {
            Lock lock(&mutex);
            unsigned int position = first;
            unsigned int length = count;
            Queue& q = queue;
            unsigned int end = position + length;

            if (position > end)
                invalid_parameter_noinfo();

            Iterator iterator;
            iterator.owner = q.owner;
            iterator.position = position;
            function.assign(iterator.get());
            q.clear();
        }

        if (!function.table)
            raise(Exception());

        Function::Invoker invoke = function.table->invoke;
        invoke(function.buffer);
    }
    catch (...)
    {
    }
}
