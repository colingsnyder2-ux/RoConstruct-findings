// roc 2009-06 00686c80  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00686c80
//
// 00686c80  8b442404             mov eax, dword ptr [esp + 4]
// 00686c84  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00686c8a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00686c80 {
    char pad0[160];
    int m_x;
    void f(int a1);
};
void S_func_00686c80::f(int a1)
{
    m_x = (int)a1;
}
