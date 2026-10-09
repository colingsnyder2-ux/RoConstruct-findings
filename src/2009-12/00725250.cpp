// roc 2009-12 00725250  unit: UString_sink::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00725250
//
// 00725250  56                   push esi
// 00725251  8bf1                 mov esi, ecx
// 00725253  e8b8f4ffff           call 0x724710
// 00725258  8b0da4b49800         mov ecx, dword ptr [0x98b4a4]
// 0072525e  8d4618               lea eax, [esi + 0x18]
// 00725261  8908                 mov dword ptr [eax], ecx
// 00725263  8b15a0b49800         mov edx, dword ptr [0x98b4a0]
// 00725269  50                   push eax
// 0072526a  8910                 mov dword ptr [eax], edx
// 0072526c  ff1594b49800         call dword ptr [0x98b494]
// 00725272  83c404               add esp, 4
// 00725275  5e                   pop esi
// 00725276  c3                   ret 
// copied from an identical function in another client (function ?func_54d4c0@stream_buffer@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
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
