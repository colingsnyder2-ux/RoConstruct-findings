// from server: 85% by colin
// roc 2007-08 0054b460  unit: UString_sink::?$stream_buffer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b460
//
// 0054b460  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0054b463  c1e803               shr eax, 3
// 0054b466  a801                 test al, 1
// 0054b468  741c                 je 0x54b486
// 0054b46a  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 0054b46d  8b4150               mov eax, dword ptr [ecx + 0x50]
// 0054b470  56                   push esi
// 0054b471  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0054b474  8916                 mov dword ptr [esi], edx
// 0054b476  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0054b479  8916                 mov dword ptr [esi], edx
// 0054b47b  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054b47e  03c2                 add eax, edx
// 0054b480  2bc2                 sub eax, edx
// 0054b482  8901                 mov dword ptr [ecx], eax
// 0054b484  5e                   pop esi
// 0054b485  c3                   ret 
// 0054b486  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054b489  c70200000000         mov dword ptr [edx], 0
// 0054b48f  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054b492  c70000000000         mov dword ptr [eax], 0
// 0054b498  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054b49b  c70100000000         mov dword ptr [ecx], 0
// 0054b4a1  c3                   ret 

struct UString_sink_stream_buffer {
    char pad0[0x14];
    int* p14;
    char pad1[0x0c];
    int* p24;
    char pad2[0x0c];
    int* p34;
    char pad3[0x14];
    int v4c;
    int v50;
    char pad4[0x04];
    unsigned int v58;
    void reset();
};

void UString_sink_stream_buffer::reset()
{
    unsigned int v = v58;
    v >>= 3;
    if ((unsigned char)v & 1)
    {
        int d = v4c;
        int a = v50;
        *p14 = d;
        *p24 = d;
        *p34 = a + d - d;
    }
    else
    {
        *p14 = 0;
        *p24 = 0;
        *p34 = 0;
    }
}
