// from server: 63% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int (__stdcall *ReleaseCapture)();
extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

struct Control {
    unsigned int reserved;
    volatile long references;
};

struct Object;

struct Shared {
    Object* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->references, 1);
}

struct Event {
    virtual void invoke(int);
};

struct Object {
    char padding[0x1f0];
    Event event;
};

struct Selection {
    virtual void reserved();
    virtual void destroy(int);
};

struct Map {
    void remove(void*);
    void clean();
};

struct State {
    char padding[0x94];
    Map** map;
};

State* __cdecl state();

struct Item {
    char padding[12];
    Shared value;
};

struct Pair {
    void* data;
    unsigned int position;
};

struct CopyVerb {
    unsigned int storage[2];
    Pair* get();
    Pair* f();
};

struct Guard {
    unsigned int storage[3];
    Guard(Shared);
    ~Guard();
};

void __cdecl callback();
void __cdecl search(Pair*, Pair, Pair, void (__cdecl*)(), Object*);
void __cdecl notify(const char*, Object*);
extern const char drop[];

#define V(N) virtual void slot##N();
#define V10(N) V(N##0) V(N##1) V(N##2) V(N##3) V(N##4) \
               V(N##5) V(N##6) V(N##7) V(N##8) V(N##9)

struct S {
    V10(0)
    V10(1)
    V10(2)
    V10(3)
    V10(4)
    V10(5)
    V10(6)
    V10(7)
    V(80) V(81) V(82) V(83)
    virtual CopyVerb range();

    char padding0[0x1c];
    void* window;
    char padding1[0x100];
    Shared owner;
    Selection* selection;

    void prepare();
    Item* item(long);
    void finish(unsigned int, unsigned int, long);
};

#undef V10
#undef V

void S::finish(unsigned int, unsigned int, long) {
    prepare();
    if (selection) {
        (*state()->map)->remove(window);
        (*state()->map)->clean();
        ReleaseCapture();

        if (selection)
            selection->destroy(1);
        selection = 0;

        long handle = SendMessageA(window, 0x110a, 8, 0);
        if (handle) {
            Item* selected = item(handle);
            if (selected) {
                Object* object = selected->value.object;
                Shared value(selected->value);
                Guard guard(owner);

                if (object) {
                    Pair result;
                    Pair* last = range().f();
                    Pair* first = range().get();
                    search(&result, *first, *last, callback, object);
                }

                notify(drop, owner.object);
                owner.object->event.invoke(1);
            }
        }

        SendMessageA(window, 0x110b, 8, 0);
    }
}
