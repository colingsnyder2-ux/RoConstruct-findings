// from server: 95% by colin
// roc 2007-08 0058c5f0  unit: VStockSound::?$FactoryProduct  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058c5f0
//
// 0058c5f0  83ec08               sub esp, 8
// 0058c5f3  56                   push esi
// 0058c5f4  8bf1                 mov esi, ecx
// 0058c5f6  56                   push esi
// 0058c5f7  e8b4fbffff           call 0x58c1b0
// 0058c5fc  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 0058c602  83c001               add eax, 1
// 0058c605  89442408             mov dword ptr [esp + 8], eax
// 0058c609  83f801               cmp eax, 1
// 0058c60c  c744240401000000     mov dword ptr [esp + 4], 1
// 0058c614  8d442404             lea eax, [esp + 4]
// 0058c618  7c04                 jl 0x58c61e
// 0058c61a  8d442408             lea eax, [esp + 8]
// 0058c61e  8b00                 mov eax, dword ptr [eax]
// 0058c620  68e8338c00           push 0x8c33e8
// 0058c625  8bce                 mov ecx, esi
// 0058c627  898620010000         mov dword ptr [esi + 0x120], eax
// 0058c62d  e8de80ebff           call 0x444710
// 0058c632  5e                   pop esi
// 0058c633  83c408               add esp, 8
// 0058c636  c3                   ret 

struct VStockSound {
    char pad[0x120];
    int field_120;
    void sub_58c1b0();
    void sub_444710(int);
    void FactoryProduct();
};

void VStockSound::FactoryProduct() {
    sub_58c1b0();
    int v = field_120 + 1;
    int a = 1;
    int* p;
    if (v < 1) {
        p = &a;
    } else {
        p = &v;
    }
    int r = *p;
    field_120 = r;
    sub_444710(0x8c33e8);
}
