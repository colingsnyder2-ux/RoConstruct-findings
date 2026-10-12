// from server: 92% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern unsigned long tableBase[];
extern unsigned long table0[];
extern unsigned long table1[];
extern unsigned long table2[];
extern unsigned long table3[];

struct S {
    unsigned long* v0;
    unsigned long* v1;
    unsigned long* volatile v2;
    unsigned long state;
    unsigned long outer;
    unsigned long* v3;
    volatile long references;
    unsigned short flags;
    unsigned short padding;

    S();
};

inline S::S()
{
    references = 0;
    outer = 0;
    state = 0;
    v2 = tableBase;
    flags = 0;
    v0 = table0;
    v1 = table1;
    v2 = table2;
    v3 = table3;
}

long __cdecl CreateInstance(S** result)
{
    long status = (long)0x8007000EUL;
    S* object = 0;

    try {
        object = new S;
        if (object) {
            ++object->references;
            status = 0;
            --object->references;
        }
    }
    catch (...) {
    }

    *result = object;
    return status;
}
