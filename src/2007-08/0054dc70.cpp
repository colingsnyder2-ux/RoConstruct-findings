// from server: 75% by colin
// roc 2007-08 0054dc70  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054dc70
//
// 0054dc70  8b415c               mov eax, dword ptr [ecx + 0x5c]
// 0054dc73  c1e803               shr eax, 3
// 0054dc76  a801                 test al, 1
// 0054dc78  741c                 je 0x54dc96
// 0054dc7a  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0054dc7d  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0054dc80  56                   push esi
// 0054dc81  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0054dc84  8916                 mov dword ptr [esi], edx
// 0054dc86  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0054dc89  8916                 mov dword ptr [esi], edx
// 0054dc8b  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054dc8e  03c2                 add eax, edx
// 0054dc90  2bc2                 sub eax, edx
// 0054dc92  8901                 mov dword ptr [ecx], eax
// 0054dc94  5e                   pop esi
// 0054dc95  c3                   ret 
// 0054dc96  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054dc99  c70200000000         mov dword ptr [edx], 0
// 0054dc9f  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054dca2  c70000000000         mov dword ptr [eax], 0
// 0054dca8  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054dcab  c70100000000         mov dword ptr [ecx], 0
// 0054dcb1  c3                   ret 

struct S
{
    char pad0[0x14];
    int* p14;
    char pad18[0x0c];
    int* p24;
    char pad28[0x0c];
    int* p34;
    char pad38[0x18];
    int v50;
    int v54;
    int v5c;
    void f();
};

void S::f()
{
    if ((v5c >> 3) & 1)
    {
        int a = v50;
        int b = v54;
        *p14 = a;
        *p24 = a;
        *p34 = b + a - a;
    }
    else
    {
        *p14 = 0;
        *p24 = 0;
        *p34 = 0;
    }
}
