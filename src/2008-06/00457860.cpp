// from server: 76% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

void* __cdecl operator new(unsigned int) throw();

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long references;
    volatile long weakReferences;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&) throw();
};

struct S;

struct Message {
    char data[0x18];
    Message(S*, int, Shared) throw();
};

struct Queue {
    void insert(Message* const*);
};

struct Destination {
    void* field0;
    void* field4;
    void method(int);
};

struct S {
    char prefix[4];
    Queue queue;
    char padding[0x1b];
    Destination* destination;
    void method(int, Shared);
};

void S::method(int arg, Shared value)
{
    Message* message = new Message(this, arg, value);
    Message* entry = message;
    queue.insert(&entry);
    destination->method(reinterpret_cast<int>(message));

    Control* control = value.control;
    if (control) {
        if (_InterlockedExchangeAdd(&control->references, -1) == 1) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weakReferences, -1) == 1)
                control->destroy();
        }
    }
}
