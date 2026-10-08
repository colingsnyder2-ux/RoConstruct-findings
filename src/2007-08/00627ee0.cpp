// from server: 66% by colin
// roc 2007-08 00627ee0  unit: RBX::AssemblyStage  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627ee0
//
// 00627ee0  83ec0c               sub esp, 0xc
// 00627ee3  56                   push esi
// 00627ee4  8b742414             mov esi, dword ptr [esp + 0x14]
// 00627ee8  57                   push edi
// 00627ee9  56                   push esi
// 00627eea  8bf9                 mov edi, ecx
// 00627eec  e8aff2ffff           call 0x6271a0
// 00627ef1  8b06                 mov eax, dword ptr [esi]
// 00627ef3  8b500c               mov edx, dword ptr [eax + 0xc]
// 00627ef6  8bce                 mov ecx, esi
// 00627ef8  ffd2                 call edx
// 00627efa  85c0                 test eax, eax
// 00627efc  7516                 jne 0x627f14
// 00627efe  8d442418             lea eax, [esp + 0x18]
// 00627f02  50                   push eax
// 00627f03  8d4c240c             lea ecx, [esp + 0xc]
// 00627f07  51                   push ecx
// 00627f08  8d4f1c               lea ecx, [edi + 0x1c]
// 00627f0b  89742420             mov dword ptr [esp + 0x20], esi
// 00627f0f  e89caafbff           call 0x5e29b0
// 00627f14  5f                   pop edi
// 00627f15  5e                   pop esi
// 00627f16  83c40c               add esp, 0xc
// 00627f19  c20400               ret 4

struct Assembly;
struct World;

struct IStage {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3();
};

struct EdgeBuffer {
    char pad[0x1c];
    void addEdge(Assembly* a, Assembly** out);
};

struct AssemblyStage : EdgeBuffer {
    void onEngineChanging(Assembly* a);
};

void __stdcall sub_6271A0(Assembly* a);

void AssemblyStage::onEngineChanging(Assembly* a) {
    sub_6271A0(a);
    int r = ((IStage*)a)->v3();
    if (r == 0) {
        Assembly* tmp;
        addEdge(a, &tmp);
    }
}
