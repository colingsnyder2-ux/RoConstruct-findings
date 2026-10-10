// from server: 26% by colin
extern "C" void* __cdecl func_0062fef6(unsigned int);
extern "C" void __cdecl func_0040cc20(void*, void*, void*);

struct S {
    void* field0;
    void* field4;
    void method(void* a, void* b);
};

extern "C" void* __cdecl func_0054bcf0(void* self, void* a, void* b);
extern "C" void __cdecl func_0054cd90(void* self, void* p);

void S::method(void* a, void* b)
{
    void* mem = func_0062fef6(0x28);
    void* obj = 0;
    if (mem != 0) {
        obj = func_0054bcf0(mem, a, b);
    }
    this->field0 = obj;
    func_0054cd90(&this->field4, obj);
    func_0040cc20(&this->field4, obj, obj);
}
