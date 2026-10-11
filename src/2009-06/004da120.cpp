// from server: 100% by tester
// roc 2009-06 004da120  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004da120
//
// 004da120  8b442404             mov eax, dword ptr [esp + 4]
// 004da124  8b08                 mov ecx, dword ptr [eax]
// 004da126  80b96101000000       cmp byte ptr [ecx + 0x161], 0
// 004da12d  750e                 jne 0x4da13d
// 004da12f  90                   nop 
// 004da130  8bc1                 mov eax, ecx
// 004da132  8b08                 mov ecx, dword ptr [eax]
// 004da134  80b96101000000       cmp byte ptr [ecx + 0x161], 0
// 004da13b  74f3                 je 0x4da130
// 004da13d  c3                   ret 

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
