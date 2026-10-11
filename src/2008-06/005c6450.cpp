// from server: 47% by tester
struct VerbContainer;

struct TToolVerb {
    char pad[0xc];
    void* dataModel;
    void* construct(VerbContainer*);
    void* create();
};

extern "C" void* __cdecl operator_new(unsigned int);

void* TToolVerb::create() {
    void* mem = operator_new(0x48);
    if (mem) {
        void* dm = this->dataModel;
        void* c = *(void**)((char*)dm + 0x204);
        return ((TToolVerb*)mem)->construct((VerbContainer*)c);
    }
    return 0;
}
