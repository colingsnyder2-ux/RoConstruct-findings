// roc 2008-06 005f51a0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f51a0
//
// 005f51a0  8b442404             mov eax, dword ptr [esp + 4]
// 005f51a4  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 005f51aa  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005f51a0 {
    char pad0[140];
    int m_x;
    void f(int a1);
};
void S_func_005f51a0::f(int a1)
{
    m_x = (int)a1;
}
