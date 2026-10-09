// roc 2009-06 006153d0  unit: UString_sink::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006153d0
//
// 006153d0  56                   push esi
// 006153d1  8bf1                 mov esi, ecx
// 006153d3  e848f9ffff           call 0x614d20
// 006153d8  8b0d40e68900         mov ecx, dword ptr [0x89e640]
// 006153de  8d4614               lea eax, [esi + 0x14]
// 006153e1  8908                 mov dword ptr [eax], ecx
// 006153e3  8b153ce68900         mov edx, dword ptr [0x89e63c]
// 006153e9  50                   push eax
// 006153ea  8910                 mov dword ptr [eax], edx
// 006153ec  ff1538e68900         call dword ptr [0x89e638]
// 006153f2  83c404               add esp, 4
// 006153f5  5e                   pop esi
// 006153f6  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
