// from server: 70% by colin
struct SignalDesc {
    char pad0[8];
    int field8;
    int fieldC;
};

struct VHumanoid {
    char pad0[0x18];
    char field18[0x1a];
    char field32;
    char pad33[0x1];
    char field34[0x1e];
    char field52;
    char pad53[0x11];
    int field64;
    char pad68[0x8];
    int field70;
    void fire(SignalDesc* desc);
};

extern "C" int __cdecl sub_5B4E20(int a, int b);
extern "C" void __cdecl sub_5A99C0(void* p, int v);
extern "C" void __cdecl sub_5E29B0(void* p, void* a, void* b);

void VHumanoid::fire(SignalDesc* desc)
{
    if (desc->field8 != 0 && desc->fieldC != 0) {
        int r = sub_5B4E20(desc->field8, desc->fieldC);
        if (r != 0) {
            field52 = 1;
            sub_5A99C0(field18, r);
            field52 = 0;
        }
    }
    void* p = *(void**)field34;
    void (*fn)(void*, SignalDesc*) = *(void (**)(void*, SignalDesc*))(*(int*)p + 0x10);
    fn(p, desc);
    field70++;
    char (*fn2)(SignalDesc*) = *(char (**)(SignalDesc*))(*(int*)desc + 0x18);
    if (fn2(desc)) {
        sub_5E29B0(&field64, (void*)((char*)desc + 0x18), (void*)((char*)desc + 0x18));
    }
}
