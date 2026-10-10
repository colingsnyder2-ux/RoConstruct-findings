// from server: 71% by colin
struct VerbContainer;

struct Verb {
    char pad[0x14];
    VerbContainer* getContainer();

    bool isEnabled();
};

struct VerbContainer {
    char pad[0x104];
    void* begin;
    void* end;
};

bool Verb::isEnabled()
{
    VerbContainer* c = getContainer();
    void* p = *(void**)((char*)c + 0x104);
    void* b = *(void**)((char*)p + 4);
    if (b == 0) {
        int e = 0;
        return (e - (int)b) != 0;
    }
    void* e = *(void**)((char*)p + 8);
    int n = (int)((char*)e - (char*)b) >> 3;
    int z = 0;
    return (z - n) != 0;
}
