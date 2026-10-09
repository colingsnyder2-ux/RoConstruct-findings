// from server: 74% by colin
// roc 2007-08 00627790  unit: RBX::CollisionStage  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00627790
//
// 00627790  56                   push esi
// 00627791  8bf1                 mov esi, ecx
// 00627793  8b4e08               mov ecx, dword ptr [esi + 8]
// 00627796  8b01                 mov eax, dword ptr [ecx]
// 00627798  8b5010               mov edx, dword ptr [eax + 0x10]
// 0062779b  57                   push edi
// 0062779c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006277a0  57                   push edi
// 006277a1  ffd2                 call edx
// 006277a3  8b470c               mov eax, dword ptr [edi + 0xc]
// 006277a6  8b7f08               mov edi, dword ptr [edi + 8]
// 006277a9  50                   push eax
// 006277aa  57                   push edi
// 006277ab  e8c0d6f8ff           call 0x5b4e70
// 006277b0  8bf8                 mov edi, eax
// 006277b2  83c408               add esp, 8
// 006277b5  85ff                 test edi, edi
// 006277b7  7423                 je 0x6277dc
// 006277b9  8b4f04               mov ecx, dword ptr [edi + 4]
// 006277bc  8b01                 mov eax, dword ptr [ecx]
// 006277be  8b5004               mov edx, dword ptr [eax + 4]
// 006277c1  53                   push ebx
// 006277c2  ffd2                 call edx
// 006277c4  8bd8                 mov ebx, eax
// 006277c6  8b06                 mov eax, dword ptr [esi]
// 006277c8  8b5004               mov edx, dword ptr [eax + 4]
// 006277cb  8bce                 mov ecx, esi
// 006277cd  ffd2                 call edx
// 006277cf  3bd8                 cmp ebx, eax
// 006277d1  5b                   pop ebx
// 006277d2  7c08                 jl 0x6277dc
// 006277d4  57                   push edi
// 006277d5  8bce                 mov ecx, esi
// 006277d7  e844ffffff           call 0x627720
// 006277dc  5f                   pop edi
// 006277dd  5e                   pop esi
// 006277de  c20400               ret 4

struct CollisionStage {
    int field0;
    void* field4;
    void* field8;
    void process(void*);
    void sub_627720(void*);
};

struct Vtbl1 {
    void* pad0;
    void* pad4;
    void* pad8;
    void* padC;
    void (__stdcall* fn10)(void*);
};

struct Vtbl2 {
    void* pad0;
    int (__stdcall* fn4)();
};

struct Obj1 {
    Vtbl1* vtbl;
};

struct Obj2 {
    Vtbl2* vtbl;
};

struct ArgObj {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

extern "C" void* __cdecl sub_5B4E70(void*, void*);

void CollisionStage::process(void* arg) {
    Obj1* o1 = (Obj1*)field8;
    o1->vtbl->fn10(arg);

    ArgObj* a = (ArgObj*)arg;
    void* r = sub_5B4E70(a->field8, a->fieldC);
    if (r != 0) {
        Obj2* o2 = (Obj2*)((char*)r + 4);
        int v = o2->vtbl->fn4();
        int w = ((Vtbl2*)(*(void**)this))->fn4();
        if (v >= w) {
            sub_627720(r);
        }
    }
}
