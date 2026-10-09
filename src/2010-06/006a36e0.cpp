// roc 2010-06 006a36e0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a36e0
//
// 006a36e0  56                   push esi
// 006a36e1  8bf1                 mov esi, ecx
// 006a36e3  e8a8f4ffff           call 0x6a2b90
// 006a36e8  8b0d4ca69e00         mov ecx, dword ptr [0x9ea64c]
// 006a36ee  8d4614               lea eax, [esi + 0x14]
// 006a36f1  8908                 mov dword ptr [eax], ecx
// 006a36f3  8b1548a69e00         mov edx, dword ptr [0x9ea648]
// 006a36f9  50                   push eax
// 006a36fa  8910                 mov dword ptr [eax], edx
// 006a36fc  ff153ca69e00         call dword ptr [0x9ea63c]
// 006a3702  83c404               add esp, 4
// 006a3705  5e                   pop esi
// 006a3706  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
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
