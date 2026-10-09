// roc 2011-06 006e4fb0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4fb0
//
// 006e4fb0  51                   push ecx
// 006e4fb1  56                   push esi
// 006e4fb2  8bf1                 mov esi, ecx
// 006e4fb4  8b16                 mov edx, dword ptr [esi]
// 006e4fb6  8d4624               lea eax, [esi + 0x24]
// 006e4fb9  8d4c2404             lea ecx, [esp + 4]
// 006e4fbd  89442404             mov dword ptr [esp + 4], eax
// 006e4fc1  8b4208               mov eax, dword ptr [edx + 8]
// 006e4fc4  51                   push ecx
// 006e4fc5  50                   push eax
// 006e4fc6  e8c5fdffff           call 0x6e4d90
// 006e4fcb  8b16                 mov edx, dword ptr [esi]
// 006e4fcd  8b420c               mov eax, dword ptr [edx + 0xc]
// 006e4fd0  8d4c240c             lea ecx, [esp + 0xc]
// 006e4fd4  51                   push ecx
// 006e4fd5  50                   push eax
// 006e4fd6  e8b5fdffff           call 0x6e4d90
// 006e4fdb  83c410               add esp, 0x10
// 006e4fde  834e4402             or dword ptr [esi + 0x44], 2
// 006e4fe2  c7464000000000       mov dword ptr [esi + 0x40], 0
// 006e4fe9  5e                   pop esi
// 006e4fea  59                   pop ecx
// 006e4feb  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00000a@@QAEXXZ)

namespace ns_ROCX00000a {
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
