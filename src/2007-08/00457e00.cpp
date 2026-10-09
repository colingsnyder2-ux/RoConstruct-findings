// from server: 35% by colin
// roc 2007-08 00457e00  unit: G3D::GImage  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457e00
//
// 00457e00  6aff                 push -1
// 00457e02  68181e7400           push 0x741e18
// 00457e07  64a100000000         mov eax, dword ptr fs:[0]
// 00457e0d  50                   push eax
// 00457e0e  51                   push ecx
// 00457e0f  56                   push esi
// 00457e10  a188518b00           mov eax, dword ptr [0x8b5188]
// 00457e15  33c4                 xor eax, esp
// 00457e17  50                   push eax
// 00457e18  8d44240c             lea eax, [esp + 0xc]
// 00457e1c  64a300000000         mov dword ptr fs:[0], eax
// 00457e22  8bf1                 mov esi, ecx
// 00457e24  89742408             mov dword ptr [esp + 8], esi
// 00457e28  c706a4317900         mov dword ptr [esi], 0x7931a4
// 00457e2e  8d4e04               lea ecx, [esi + 4]
// 00457e31  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00457e39  ff15ace67700         call dword ptr [0x77e6ac]
// 00457e3f  c70678317900         mov dword ptr [esi], 0x793178
// 00457e45  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00457e49  64890d00000000       mov dword ptr fs:[0], ecx
// 00457e50  59                   pop ecx
// 00457e51  5e                   pop esi
// 00457e52  83c410               add esp, 0x10
// 00457e55  c3                   ret 

struct GImage {
    void* vtable;
    char pad[0x4];
    void* string_obj;
    GImage();
};

extern "C" void __stdcall sub_77E6AC(void*);

GImage::GImage() {
    vtable = (void*)0x7931a4;
    string_obj = 0;
    sub_77E6AC(&string_obj);
    vtable = (void*)0x793178;
}
