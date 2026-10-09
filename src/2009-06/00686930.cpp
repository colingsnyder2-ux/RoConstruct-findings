// roc 2009-06 00686930  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00686930
//
// 00686930  56                   push esi
// 00686931  8bf1                 mov esi, ecx
// 00686933  e8d8faffff           call 0x686410
// 00686938  8b0d40e68900         mov ecx, dword ptr [0x89e640]
// 0068693e  8d4618               lea eax, [esi + 0x18]
// 00686941  8908                 mov dword ptr [eax], ecx
// 00686943  8b153ce68900         mov edx, dword ptr [0x89e63c]
// 00686949  50                   push eax
// 0068694a  8910                 mov dword ptr [eax], edx
// 0068694c  ff1538e68900         call dword ptr [0x89e638]
// 00686952  83c404               add esp, 4
// 00686955  5e                   pop esi
// 00686956  c3                   ret 
// copied from an identical function in another client (function ?func_54d4c0@stream_buffer@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
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
