// from server: 100% by king_originala
typedef unsigned int size_t;
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

extern unsigned char controlTable[];

struct Deleter {};

struct ControlBlock {
    void* table;
    long strong;
    long weak;
    void* object;
    Deleter deleter;

    ControlBlock(int* object, Deleter deleter);
};

__forceinline ControlBlock::ControlBlock(int* p, Deleter d)
    : strong(1), weak(1), deleter(d)
{
    table = controlTable;
    object = p;
}

struct S {
    ControlBlock* control;
    S(int* object, Deleter deleter);
};

S::S(int* object, Deleter deleter) : control(0)
{
    try {
        control = new ControlBlock(object, deleter);
    }
    catch (...) {
        delete object;
        throw;
    }
}
