// roc 2012-06 0085d170  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085d170
//
// 0085d170  51                   push ecx
// 0085d171  56                   push esi
// 0085d172  8bf1                 mov esi, ecx
// 0085d174  8b16                 mov edx, dword ptr [esi]
// 0085d176  8d4624               lea eax, [esi + 0x24]
// 0085d179  8d4c2404             lea ecx, [esp + 4]
// 0085d17d  89442404             mov dword ptr [esp + 4], eax
// 0085d181  8b4208               mov eax, dword ptr [edx + 8]
// 0085d184  51                   push ecx
// 0085d185  50                   push eax
// 0085d186  e8b5fdffff           call 0x85cf40
// 0085d18b  8b16                 mov edx, dword ptr [esi]
// 0085d18d  8b420c               mov eax, dword ptr [edx + 0xc]
// 0085d190  8d4c240c             lea ecx, [esp + 0xc]
// 0085d194  51                   push ecx
// 0085d195  50                   push eax
// 0085d196  e8a5fdffff           call 0x85cf40
// 0085d19b  83c410               add esp, 0x10
// 0085d19e  834e4402             or dword ptr [esi + 0x44], 2
// 0085d1a2  c7464000000000       mov dword ptr [esi + 0x40], 0
// 0085d1a9  5e                   pop esi
// 0085d1aa  59                   pop ecx
// 0085d1ab  c3                   ret 
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
