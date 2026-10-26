// from server: 100% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);
extern unsigned int controlTable[];

struct ControlBlock {
    const void* table;
    long strong;
    long weak;
    void* object;
    unsigned char deleter[4];

    ControlBlock(void* value);
};

inline ControlBlock::ControlBlock(void* value)
{
    strong = 1;
    weak = 1;
    table = controlTable;
    object = value;
}

struct S {
    ControlBlock* control;
    S(void* object, int);
};

S::S(void* object, int) : control(0)
{
    try {
        control = new ControlBlock(object);
    }
    catch (...) {
        operator delete(object);
        throw;
    }
}
