// roc 2008-06 005f56b0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f56b0
//
// 005f56b0  51                   push ecx
// 005f56b1  56                   push esi
// 005f56b2  8bf1                 mov esi, ecx
// 005f56b4  8b16                 mov edx, dword ptr [esi]
// 005f56b6  8d4624               lea eax, [esi + 0x24]
// 005f56b9  8d4c2404             lea ecx, [esp + 4]
// 005f56bd  89442404             mov dword ptr [esp + 4], eax
// 005f56c1  8b4208               mov eax, dword ptr [edx + 8]
// 005f56c4  51                   push ecx
// 005f56c5  50                   push eax
// 005f56c6  e825feffff           call 0x5f54f0
// 005f56cb  8b16                 mov edx, dword ptr [esi]
// 005f56cd  8b420c               mov eax, dword ptr [edx + 0xc]
// 005f56d0  8d4c240c             lea ecx, [esp + 0xc]
// 005f56d4  51                   push ecx
// 005f56d5  50                   push eax
// 005f56d6  e815feffff           call 0x5f54f0
// 005f56db  83c410               add esp, 0x10
// 005f56de  834e4402             or dword ptr [esi + 0x44], 2
// 005f56e2  c7464000000000       mov dword ptr [esi + 0x40], 0
// 005f56e9  5e                   pop esi
// 005f56ea  59                   pop ecx
// 005f56eb  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
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
