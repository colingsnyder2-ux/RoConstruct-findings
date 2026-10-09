// roc 2009-12 00725220  unit: UString_sink::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725220
//
// 00725220  56                   push esi
// 00725221  8bf1                 mov esi, ecx
// 00725223  e858f4ffff           call 0x724680
// 00725228  8b0da4b49800         mov ecx, dword ptr [0x98b4a4]
// 0072522e  8d4614               lea eax, [esi + 0x14]
// 00725231  8908                 mov dword ptr [eax], ecx
// 00725233  8b15a0b49800         mov edx, dword ptr [0x98b4a0]
// 00725239  50                   push eax
// 0072523a  8910                 mov dword ptr [eax], edx
// 0072523c  ff1594b49800         call dword ptr [0x98b494]
// 00725242  83c404               add esp, 4
// 00725245  5e                   pop esi
// 00725246  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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
