// from server: 89% by colin
// roc 2007-08 0054e280  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e280
//
// 0054e280  8b81b0000000         mov eax, dword ptr [ecx + 0xb0]
// 0054e286  c1e803               shr eax, 3
// 0054e289  a801                 test al, 1
// 0054e28b  7422                 je 0x54e2af
// 0054e28d  8b91a4000000         mov edx, dword ptr [ecx + 0xa4]
// 0054e293  8b81a8000000         mov eax, dword ptr [ecx + 0xa8]
// 0054e299  56                   push esi
// 0054e29a  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0054e29d  8916                 mov dword ptr [esi], edx
// 0054e29f  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0054e2a2  8916                 mov dword ptr [esi], edx
// 0054e2a4  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054e2a7  03c2                 add eax, edx
// 0054e2a9  2bc2                 sub eax, edx
// 0054e2ab  8901                 mov dword ptr [ecx], eax
// 0054e2ad  5e                   pop esi
// 0054e2ae  c3                   ret 
// 0054e2af  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054e2b2  c70200000000         mov dword ptr [edx], 0
// 0054e2b8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054e2bb  c70000000000         mov dword ptr [eax], 0
// 0054e2c1  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054e2c4  c70100000000         mov dword ptr [ecx], 0
// 0054e2ca  c3                   ret 

struct S_func_0054e280 {
    char pad0[0x14];
    int* m_p14;
    char pad1[0x0c];
    int* m_p24;
    char pad2[0x0c];
    int* m_p34;
    char pad3[0x6c];
    int m_a4;
    int m_a8;
    char pad4[0x04];
    unsigned int m_b0;
    void f();
};

void S_func_0054e280::f()
{
    unsigned int eax = m_b0;
    eax >>= 3;
    if ((unsigned char)eax & 1) {
        int edx = m_a4;
        int eax2 = m_a8;
        int* esi = m_p14;
        *esi = edx;
        esi = m_p24;
        *esi = edx;
        int* ecx = m_p34;
        eax2 += edx;
        eax2 -= edx;
        *ecx = eax2;
    } else {
        int* edx = m_p14;
        *edx = 0;
        int* eax3 = m_p24;
        *eax3 = 0;
        int* ecx2 = m_p34;
        *ecx2 = 0;
    }
}
