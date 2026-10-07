// roc 2007-08 00720a40  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 10 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00720a40
//
// 00720a40  8b442404             mov eax, dword ptr [esp + 4]
// 00720a44  89414c               mov dword ptr [ecx + 0x4c], eax
// 00720a47  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00720a40 {
    char pad0[76];
    int m_x;
    void f(int a1);
};
void S_func_00720a40::f(int a1)
{
    m_x = (int)a1;
}
