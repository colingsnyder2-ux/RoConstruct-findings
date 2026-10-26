// from server: 100% by king_originala
void* __cdecl operator new(unsigned int);
extern void* controlTable[];

struct Deleter {};

struct ControlBlock {
    void** table;
    long strongCount;
    long weakCount;
    void* object;
    unsigned char deleter;

    ControlBlock(void* value, Deleter);
};

inline ControlBlock::ControlBlock(void* value, Deleter)
{
    strongCount = 1;
    weakCount = 1;
    table = controlTable;
    object = value;
}

struct S {
    ControlBlock* control;
    S(void* object, Deleter deleter);
};

S::S(void* object, Deleter deleter) : control(0)
{
    try {
        control = new ControlBlock(object, deleter);
    }
    catch (...) {
        throw;
    }
}
