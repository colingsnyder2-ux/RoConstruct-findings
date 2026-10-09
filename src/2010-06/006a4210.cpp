// roc 2010-06 006a4210  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a4210
//
// 006a4210  51                   push ecx
// 006a4211  56                   push esi
// 006a4212  8bf1                 mov esi, ecx
// 006a4214  8b16                 mov edx, dword ptr [esi]
// 006a4216  8d4624               lea eax, [esi + 0x24]
// 006a4219  8d4c2404             lea ecx, [esp + 4]
// 006a421d  89442404             mov dword ptr [esp + 4], eax
// 006a4221  8b4208               mov eax, dword ptr [edx + 8]
// 006a4224  51                   push ecx
// 006a4225  50                   push eax
// 006a4226  e8b5fdffff           call 0x6a3fe0
// 006a422b  8b16                 mov edx, dword ptr [esi]
// 006a422d  8b420c               mov eax, dword ptr [edx + 0xc]
// 006a4230  8d4c240c             lea ecx, [esp + 0xc]
// 006a4234  51                   push ecx
// 006a4235  50                   push eax
// 006a4236  e8a5fdffff           call 0x6a3fe0
// 006a423b  83c410               add esp, 0x10
// 006a423e  834e4402             or dword ptr [esi + 0x44], 2
// 006a4242  c7464000000000       mov dword ptr [esi + 0x40], 0
// 006a4249  5e                   pop esi
// 006a424a  59                   pop ecx
// 006a424b  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
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
