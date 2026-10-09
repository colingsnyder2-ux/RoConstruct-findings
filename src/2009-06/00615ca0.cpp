// roc 2009-06 00615ca0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00615ca0
//
// 00615ca0  51                   push ecx
// 00615ca1  56                   push esi
// 00615ca2  8bf1                 mov esi, ecx
// 00615ca4  8b16                 mov edx, dword ptr [esi]
// 00615ca6  8d4624               lea eax, [esi + 0x24]
// 00615ca9  8d4c2404             lea ecx, [esp + 4]
// 00615cad  89442404             mov dword ptr [esp + 4], eax
// 00615cb1  8b4208               mov eax, dword ptr [edx + 8]
// 00615cb4  51                   push ecx
// 00615cb5  50                   push eax
// 00615cb6  e8c5fdffff           call 0x615a80
// 00615cbb  8b16                 mov edx, dword ptr [esi]
// 00615cbd  8b420c               mov eax, dword ptr [edx + 0xc]
// 00615cc0  8d4c240c             lea ecx, [esp + 0xc]
// 00615cc4  51                   push ecx
// 00615cc5  50                   push eax
// 00615cc6  e8b5fdffff           call 0x615a80
// 00615ccb  83c410               add esp, 0x10
// 00615cce  834e4402             or dword ptr [esi + 0x44], 2
// 00615cd2  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00615cd9  5e                   pop esi
// 00615cda  59                   pop ecx
// 00615cdb  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
struct S {
    void* vtable;
    char pad[0x20];
    int field24;
    char pad2[0x1c];
    int field44;
    int field40;
    void f();
};

extern "C" void __cdecl helper(void*, void*);

void S::f() {
    void* p = &field24;
    helper(*(void**)((char*)vtable + 8), &p);
    helper(*(void**)((char*)vtable + 12), &p);
    field44 |= 2;
    *(int*)((char*)this + 0x40) = 0;
}
}
