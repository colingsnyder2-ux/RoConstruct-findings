// from server: 100% by colin
// roc 2007-08 00567f20  unit: RBX::RootInstance  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567f20
//
// 00567f20  51                   push ecx
// 00567f21  56                   push esi
// 00567f22  8d7104               lea esi, [ecx + 4]
// 00567f25  c70104987a00         mov dword ptr [ecx], 0x7a9804
// 00567f2b  8b4604               mov eax, dword ptr [esi + 4]
// 00567f2e  85c0                 test eax, eax
// 00567f30  741c                 je 0x567f4e
// 00567f32  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00567f36  8b5608               mov edx, dword ptr [esi + 8]
// 00567f39  51                   push ecx
// 00567f3a  56                   push esi
// 00567f3b  52                   push edx
// 00567f3c  50                   push eax
// 00567f3d  e81efeffff           call 0x567d60
// 00567f42  8b4604               mov eax, dword ptr [esi + 4]
// 00567f45  50                   push eax
// 00567f46  e8177d0c00           call 0x62fc62
// 00567f4b  83c414               add esp, 0x14
// 00567f4e  c7460400000000       mov dword ptr [esi + 4], 0
// 00567f55  c7460800000000       mov dword ptr [esi + 8], 0
// 00567f5c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00567f63  5e                   pop esi
// 00567f64  59                   pop ecx
// 00567f65  c3                   ret 

struct RootInstance {
    void* vtable;
    char pad[4];
    void* field_8;
    void* field_C;
    void* field_10;
    void func_00567f20();
};

extern "C" void __cdecl func_00567d60(void*, void*, void*, int);
extern "C" void __cdecl func_0062fc62(void*);

void RootInstance::func_00567f20()
{
    int arg;
    this->vtable = (void*)0x7a9804;
    char* esi = (char*)this + 4;
    void* p = *(void**)(esi + 4);
    if (p != 0) {
        void* edx = *(void**)(esi + 8);
        func_00567d60(p, edx, esi, arg);
        void* q = *(void**)(esi + 4);
        func_0062fc62(q);
    }
    *(void**)(esi + 4) = 0;
    *(void**)(esi + 8) = 0;
    *(void**)(esi + 0xc) = 0;
}
