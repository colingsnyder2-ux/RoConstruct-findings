// roc 2009-06 006157c0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006157c0
//
// 006157c0  8b442404             mov eax, dword ptr [esp + 4]
// 006157c4  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 006157ca  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006157c0 {
    char pad0[140];
    int m_x;
    void f(int a1);
};
void S_func_006157c0::f(int a1)
{
    m_x = (int)a1;
}
