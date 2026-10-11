// from server: 34% by tester
struct S {
    void* field0;
    char pad[4];
    void* field8;
    void* method(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i);
};

extern "C" bool __cdecl func_0060a2f0(void*);
extern "C" void* __cdecl func_006a0920(unsigned int);
extern "C" void __stdcall func_0080245c(void*, void*);
extern "C" void __stdcall func_00802468(void*);

void* S::method(void* a, void* b, void* c, void* d, void* e, void* f, void* g, void* h, void* i)
{
    void* tmp;
    void* obj;

    this->field0 = 0;
    if (func_0060a2f0(&tmp)) {
        this->field0 = 0;
        return this;
    }
    obj = func_006a0920(0x20);
    if (obj) {
        *(void**)obj = tmp;
        func_0080245c((char*)obj + 4, &tmp);
    }
    this->field8 = obj;
    this->field0 = (void*)0x830038;
    func_00802468(&tmp);
    return this;
}
