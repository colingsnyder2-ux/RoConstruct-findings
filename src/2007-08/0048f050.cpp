// from server: 68% by tester
struct VPlayerBoundFuncDesc {
    char pad0[4];
    void* field4;
    void* field8;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl sub_48A740(void*, void*);
extern "C" void __cdecl sub_4893C0(VPlayerBoundFuncDesc*, void*, void*, void*, void*);

void* __cdecl sub_48F050(VPlayerBoundFuncDesc* self, void* arg)
{
    if (arg == 0) {
        VPlayerBoundFuncDesc* p = (VPlayerBoundFuncDesc*)operator_new(0x10);
        sub_48A740(p, self);
        return p;
    }
    void* p = self->field4;
    void* q = *(void**)p;
    sub_4893C0(self, self, q, p, self);
    operator_delete(self->field4);
    self->field4 = 0;
    self->field8 = 0;
    operator_delete(self);
    return 0;
}
