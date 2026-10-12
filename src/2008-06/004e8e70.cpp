// from server: 48% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl operator new(unsigned int);

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Owner
{
    Control* control;
    Owner(int*);
    ~Owner()
    {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0)
        {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

extern void __cdecl func_0047d410(Owner*, int*, int*);

struct Object
{
    virtual ~Object();
};

struct Temporary
{
    Object* object;
    Temporary(void*);
    ~Temporary()
    {
        if (object)
            delete object;
    }
};

struct Pair
{
    void* object;
    Control* control;
    ~Pair();
};

struct Node
{
    unsigned char padding[8];
    int enabled;
};

struct SourceObject
{
    unsigned char padding[28];
    Node* node;
};

struct Source
{
    SourceObject* object;
    Control* control;
    unsigned char extra[4];
    Pair func_004915b0();
};

struct Result
{
    int unused;
    void* object;
    Control* control;
    unsigned char valid;
};

struct State
{
    int kind;
    int* value;
    Owner owner;
};

struct Receiver
{
    Result func_0056a900(Temporary*, State*, Pair, int);
};

struct S
{
    Receiver* receiver;
    Result func_004e8e70(const int*, Source*, int);
};

Result S::func_004e8e70(const int* value, Source* source, int argument)
{
    Node* node = source->object->node;
    if (!node || !node->enabled)
    {
        Result result;
        result.object = 0;
        result.control = 0;
        result.valid = 0;
        return result;
    }

    State state = { 3, new int(*value), Owner(state.value) };
    func_0047d410(&state.owner, state.value, state.value);
    Temporary temporary(source->extra);
    return receiver->func_0056a900(
        &temporary, &state, source->func_004915b0(), argument);
}
