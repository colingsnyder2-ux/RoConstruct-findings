// roc 2011-06 006e4470  unit: UString_sink::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e4470
//
// 006e4470  56                   push esi
// 006e4471  8bf1                 mov esi, ecx
// 006e4473  e8d8f4ffff           call 0x6e3950
// 006e4478  8b0d6406a400         mov ecx, dword ptr [0xa40664]
// 006e447e  8d4614               lea eax, [esi + 0x14]
// 006e4481  8908                 mov dword ptr [eax], ecx
// 006e4483  8b156006a400         mov edx, dword ptr [0xa40660]
// 006e4489  50                   push eax
// 006e448a  8910                 mov dword ptr [eax], edx
// 006e448c  ff155c06a400         call dword ptr [0xa4065c]
// 006e4492  83c404               add esp, 4
// 006e4495  5e                   pop esi
// 006e4496  c3                   ret 
// copied from an identical function in another client (function ?init@S@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
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
