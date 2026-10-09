// from server: 83% by colin
// roc 2007-08 006f5ce0  unit: CXTPPropertyGridInplaceButton  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5ce0
//
// 006f5ce0  56                   push esi
// 006f5ce1  8bf1                 mov esi, ecx
// 006f5ce3  e852260400           call 0x73833a
// 006f5ce8  8d4e48               lea ecx, [esi + 0x48]
// 006f5ceb  c70684c27d00         mov dword ptr [esi], 0x7dc284
// 006f5cf1  ff15acdd7700         call dword ptr [0x77ddac]
// 006f5cf7  8b442408             mov eax, dword ptr [esp + 8]
// 006f5cfb  8d4e34               lea ecx, [esi + 0x34]
// 006f5cfe  51                   push ecx
// 006f5cff  c7462c00000000       mov dword ptr [esi + 0x2c], 0
// 006f5d06  894630               mov dword ptr [esi + 0x30], eax
// 006f5d09  c7462800000000       mov dword ptr [esi + 0x28], 0
// 006f5d10  ff1514ee7700         call dword ptr [0x77ee14]
// 006f5d16  6a0a                 push 0xa
// 006f5d18  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 006f5d1f  c7462000000000       mov dword ptr [esi + 0x20], 0
// 006f5d26  ff15b8ed7700         call dword ptr [0x77edb8]
// 006f5d2c  894644               mov dword ptr [esi + 0x44], eax
// 006f5d2f  c7464cffffffff       mov dword ptr [esi + 0x4c], 0xffffffff
// 006f5d36  8bc6                 mov eax, esi
// 006f5d38  5e                   pop esi
// 006f5d39  c20400               ret 4

struct CXTPPropertyGridInplaceButton {
    void construct(unsigned int);
};

extern "C" void __cdecl sub_73833a();
extern "C" int __stdcall GetSystemMetrics(int);
extern "C" int __stdcall SetRectEmpty(void*);

void CXTPPropertyGridInplaceButton::construct(unsigned int arg) {
    sub_73833a();
    *(int*)this = 0x7dc284;
    SetRectEmpty((char*)this + 0x48);
    *(int*)((char*)this + 0x2c) = 0;
    *(unsigned int*)((char*)this + 0x30) = arg;
    *(int*)((char*)this + 0x28) = 0;
    GetSystemMetrics(0x34);
    *(int*)((char*)this + 0x24) = -1;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x44) = GetSystemMetrics(0xa);
    *(int*)((char*)this + 0x4c) = -1;
}
