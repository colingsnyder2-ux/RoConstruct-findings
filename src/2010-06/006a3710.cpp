// roc 2010-06 006a3710  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3710
//
// 006a3710  56                   push esi
// 006a3711  8bf1                 mov esi, ecx
// 006a3713  e808f5ffff           call 0x6a2c20
// 006a3718  8b0d4ca69e00         mov ecx, dword ptr [0x9ea64c]
// 006a371e  8d4618               lea eax, [esi + 0x18]
// 006a3721  8908                 mov dword ptr [eax], ecx
// 006a3723  8b1548a69e00         mov edx, dword ptr [0x9ea648]
// 006a3729  50                   push eax
// 006a372a  8910                 mov dword ptr [eax], edx
// 006a372c  ff153ca69e00         call dword ptr [0x9ea63c]
// 006a3732  83c404               add esp, 4
// 006a3735  5e                   pop esi
// 006a3736  c3                   ret 
// copied from an identical function in another client (function ?func_54d4c0@stream_buffer@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
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
