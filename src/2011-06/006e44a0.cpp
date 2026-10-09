// roc 2011-06 006e44a0  unit: UString_sink::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e44a0
//
// 006e44a0  56                   push esi
// 006e44a1  8bf1                 mov esi, ecx
// 006e44a3  e878f5ffff           call 0x6e3a20
// 006e44a8  8b0d6406a400         mov ecx, dword ptr [0xa40664]
// 006e44ae  8d4618               lea eax, [esi + 0x18]
// 006e44b1  8908                 mov dword ptr [eax], ecx
// 006e44b3  8b156006a400         mov edx, dword ptr [0xa40660]
// 006e44b9  50                   push eax
// 006e44ba  8910                 mov dword ptr [eax], edx
// 006e44bc  ff155c06a400         call dword ptr [0xa4065c]
// 006e44c2  83c404               add esp, 4
// 006e44c5  5e                   pop esi
// 006e44c6  c3                   ret 
// copied from an identical function in another client (function ?func_54d4c0@stream_buffer@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
struct stream_buffer {
    char pad[0x18];
    void* field_18;
    void func_54d4c0();
};

extern void* g_77e4dc;
extern void* g_77e4e0;
extern void (__cdecl *g_77e4e4)(void*);

void stream_buffer::func_54d4c0()
{
    this->func_54d4c0();
    this->field_18 = g_77e4dc;
    this->field_18 = g_77e4e0;
    g_77e4e4(&this->field_18);
}
}
