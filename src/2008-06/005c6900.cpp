// from server: 51% by tester
struct DataModel;

struct TToolVerb {
    char pad[0xc];
    DataModel* dataModel;
    void* construct();
};

struct Helper {
    void init(void* arg);
};

extern "C" void* __cdecl operator_new(unsigned int);

void* TToolVerb::construct() {
    void* mem = operator_new(0x48);
    void* result = 0;
    if (mem) {
        void* p = *(void**)((char*)this + 0xc);
        void* q = *(void**)((char*)p + 0x204);
        ((Helper*)mem)->init(q);
        *(void**)mem = (void*)0x8392cc;
        *(void**)((char*)mem + 4) = (void*)0x8392b4;
        result = mem;
    }
    return result;
}
