// from server: 100% by colin
// roc 2007-08 0054f990  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f990
//
// 0054f990  51                   push ecx
// 0054f991  56                   push esi
// 0054f992  8bf1                 mov esi, ecx
// 0054f994  8b16                 mov edx, dword ptr [esi]
// 0054f996  8d4624               lea eax, [esi + 0x24]
// 0054f999  8d4c2404             lea ecx, [esp + 4]
// 0054f99d  89442404             mov dword ptr [esp + 4], eax
// 0054f9a1  8b4208               mov eax, dword ptr [edx + 8]
// 0054f9a4  51                   push ecx
// 0054f9a5  50                   push eax
// 0054f9a6  e825feffff           call 0x54f7d0
// 0054f9ab  8b16                 mov edx, dword ptr [esi]
// 0054f9ad  8b420c               mov eax, dword ptr [edx + 0xc]
// 0054f9b0  8d4c240c             lea ecx, [esp + 0xc]
// 0054f9b4  51                   push ecx
// 0054f9b5  50                   push eax
// 0054f9b6  e815feffff           call 0x54f7d0
// 0054f9bb  83c410               add esp, 0x10
// 0054f9be  834e4402             or dword ptr [esi + 0x44], 2
// 0054f9c2  c7464000000000       mov dword ptr [esi + 0x40], 0
// 0054f9c9  5e                   pop esi
// 0054f9ca  59                   pop ecx
// 0054f9cb  c3                   ret 

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
