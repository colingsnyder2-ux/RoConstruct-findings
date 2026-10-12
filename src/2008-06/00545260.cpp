// from server: 78% by king_originala
#pragma optimize("", off)

struct VChunk;
struct ComError {};

extern void* __cdecl identity(void*);
extern char* __cdecl second(VChunk*);
extern char* __cdecl third(VChunk*);

struct Pointer {
    unsigned int storage;
    VChunk* get(int);
};

struct Registry {
    void insert(void*, int*);
};

struct S {
    char padding[12];
    Pointer pointer;
    Registry registry;
    void f();
};

void S::f()
{
    VChunk* count = pointer.get(1);
    int p = 0;
    try {
        int secondValue = 0;
        registry.insert(identity(count), &secondValue);
        ++p;

        int thirdValue = 0;
        registry.insert(second(count), &thirdValue);
        ++p;

        int firstValue = 0;
        registry.insert(third(count), &firstValue);
    }
    catch (const ComError&) {
        throw;
    }
}
