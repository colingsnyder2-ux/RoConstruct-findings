// from server: 100% by atomic.potato
// roc 2008-06 005f4c90  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4c90
//
// 005f4c90  56                   push esi
// 005f4c91  8bf1                 mov esi, ecx
// 005f4c93  e8d8f7ffff           call 0x5f4470
// 005f4c98  8b0d84258000         mov ecx, dword ptr [0x802584]
// 005f4c9e  8d4614               lea eax, [esi + 0x14]
// 005f4ca1  8908                 mov dword ptr [eax], ecx
// 005f4ca3  8b1580258000         mov edx, dword ptr [0x802580]
// 005f4ca9  50                   push eax
// 005f4caa  8910                 mov dword ptr [eax], edx
// 005f4cac  ff157c258000         call dword ptr [0x80257c]
// 005f4cb2  83c404               add esp, 4
// 005f4cb5  5e                   pop esi
// 005f4cb6  c3                   ret 

extern "C" void __cdecl func_005f4470();

extern void* g_0080257c;
extern void* g_00802580;
extern void* g_00802584;

struct S
{
    char padding[20];
    void* member_14;
    void f();
};

void S::f()
{
    func_005f4470();
    member_14 = g_00802584;
    member_14 = g_00802580;
    ((void (__cdecl *)(void*))g_0080257c)(&member_14);
}
