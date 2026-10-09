// roc 2008-06 005f4cc0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4cc0
//
// 005f4cc0  56                   push esi
// 005f4cc1  8bf1                 mov esi, ecx
// 005f4cc3  e838f8ffff           call 0x5f4500
// 005f4cc8  8b0d84258000         mov ecx, dword ptr [0x802584]
// 005f4cce  8d4618               lea eax, [esi + 0x18]
// 005f4cd1  8908                 mov dword ptr [eax], ecx
// 005f4cd3  8b1580258000         mov edx, dword ptr [0x802580]
// 005f4cd9  50                   push eax
// 005f4cda  8910                 mov dword ptr [eax], edx
// 005f4cdc  ff157c258000         call dword ptr [0x80257c]
// 005f4ce2  83c404               add esp, 4
// 005f4ce5  5e                   pop esi
// 005f4ce6  c3                   ret 
// copied from an identical function in another client (function ?func_54d4c0@stream_buffer@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
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
