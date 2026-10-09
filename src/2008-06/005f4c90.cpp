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
// copied from an identical function in another client (function ?init@S@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct S {
    char pad[0x14];
    void* field14;
    void init();
};

extern void* g_77e4dc;
extern void* g_77e4e0;
extern void (__cdecl *g_77e4e4)(void*);

extern "C" void __cdecl sub_54d430();

void S::init()
{
    sub_54d430();
    field14 = g_77e4dc;
    field14 = g_77e4e0;
    g_77e4e4(&field14);
}
}
