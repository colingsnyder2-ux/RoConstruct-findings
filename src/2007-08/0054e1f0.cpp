// roc 2007-08 0054e1f0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e1f0
//
// 0054e1f0  8b442404             mov eax, dword ptr [esp + 4]
// 0054e1f4  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0054e1fa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0054e1f0 {
    char pad0[160];
    int m_x;
    void f(int a1);
};
void S_func_0054e1f0::f(int a1)
{
    m_x = (int)a1;
}
