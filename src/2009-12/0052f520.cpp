// roc 2009-12 0052f520  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052f520
//
// 0052f520  8b442404             mov eax, dword ptr [esp + 4]
// 0052f524  8b08                 mov ecx, dword ptr [eax]
// 0052f526  80b96101000000       cmp byte ptr [ecx + 0x161], 0
// 0052f52d  750e                 jne 0x52f53d
// 0052f52f  90                   nop 
// 0052f530  8bc1                 mov eax, ecx
// 0052f532  8b08                 mov ecx, dword ptr [eax]
// 0052f534  80b96101000000       cmp byte ptr [ecx + 0x161], 0
// 0052f53b  74f3                 je 0x52f530
// 0052f53d  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000012@@YAPAUS_func_004dd930@1@PAU21@@Z)

namespace ns_ROCX000012 {
struct S_func_004dd930
{
    unsigned char *m_vtable;
};

S_func_004dd930 * __cdecl f(S_func_004dd930 *p)
{
    while (p->m_vtable[0x161] == 0)
        p = *(S_func_004dd930 **)p;
    return p;
}
}
