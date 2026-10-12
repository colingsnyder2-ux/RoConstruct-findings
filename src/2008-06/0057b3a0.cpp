// from server: 66% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Count {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object;

struct Shared {
    Object* px;
    Count* pn;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : px(other.px), pn(other.pn)
{
    if (pn)
        _InterlockedExchangeAdd(&pn->strong, 1);
}

__forceinline Shared::~Shared()
{
    Count* count = pn;
    if (count && _InterlockedExchangeAdd(&count->strong, -1) == 1) {
        count->dispose();
        if (_InterlockedExchangeAdd(&count->weak, -1) == 1)
            count->destroy();
    }
}

struct Iterator {
    unsigned char data[28];
    Iterator(const Iterator&);
};

struct Range {
    Iterator begin();
    Iterator end();
};

struct Guard {
    Shared owner;
    Guard(Shared, int);
};

struct Task {
    unsigned char data[64];
    Task(Iterator, Iterator, Guard*, bool*);
    Task(const Task&);
};

struct Queue {
    void run(int, Task, Task);
};

struct Object {
    unsigned char prefix[8];
    Range range;
    unsigned char padding[0x58 - 8 - sizeof(Range)];
    Queue* queue;
};

struct Model {
    Object* px;
    Count* pn;
    Model(const Model&);
    ~Model();
    int execute(int, Shared, int);
};

int Model::execute(int result, Shared other, int flags)
{
    Model hold(*this);
    Guard guard(other, flags);
    bool active = false;
    Object* object = px;
    Queue* queue = reinterpret_cast<Queue*>(
        reinterpret_cast<unsigned char*>(object->queue) + 4);
    Object* source = hold.px;

    queue->run(
        result,
        Task(source->range.begin(), object->range.end(), &guard, &active),
        Task(source->range.end(), object->range.end(), &guard, &active));

    if (active)
        active = false;
    return result;
}
