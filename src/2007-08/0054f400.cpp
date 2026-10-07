// roc 2007-08 0054f400  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 13 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f400
//
// 0054f400  8b442404             mov eax, dword ptr [esp + 4]
// 0054f404  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 0054f40a  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0054f400 {
    char pad0[140];
    int m_x;
    void f(int a1);
};
void S_func_0054f400::f(int a1)
{
    m_x = (int)a1;
}
