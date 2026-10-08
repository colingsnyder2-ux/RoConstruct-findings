// from server: 75% by colin
// roc 2007-08 0054bf60  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bf60
//
// 0054bf60  8b4154               mov eax, dword ptr [ecx + 0x54]
// 0054bf63  c1e803               shr eax, 3
// 0054bf66  a801                 test al, 1
// 0054bf68  741c                 je 0x54bf86
// 0054bf6a  8b5148               mov edx, dword ptr [ecx + 0x48]
// 0054bf6d  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 0054bf70  56                   push esi
// 0054bf71  8b7114               mov esi, dword ptr [ecx + 0x14]
// 0054bf74  8916                 mov dword ptr [esi], edx
// 0054bf76  8b7124               mov esi, dword ptr [ecx + 0x24]
// 0054bf79  8916                 mov dword ptr [esi], edx
// 0054bf7b  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054bf7e  03c2                 add eax, edx
// 0054bf80  2bc2                 sub eax, edx
// 0054bf82  8901                 mov dword ptr [ecx], eax
// 0054bf84  5e                   pop esi
// 0054bf85  c3                   ret 
// 0054bf86  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054bf89  c70200000000         mov dword ptr [edx], 0
// 0054bf8f  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054bf92  c70000000000         mov dword ptr [eax], 0
// 0054bf98  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0054bf9b  c70100000000         mov dword ptr [ecx], 0
// 0054bfa1  c3                   ret 

struct S {
    char pad[0x14];
    int* p14;
    char pad2[0x0C];
    int* p24;
    char pad3[0x0C];
    int* p34;
    char pad4[0x10];
    int v48;
    int v4c;
    char pad5[0x04];
    unsigned int v54;
    void f();
};

void S::f()
{
    if ((v54 >> 3) & 1) {
        int d = v48;
        int a = v4c;
        *p14 = d;
        *p24 = d;
        *p34 = a + d - d;
    } else {
        *p14 = 0;
        *p24 = 0;
        *p34 = 0;
    }
}
