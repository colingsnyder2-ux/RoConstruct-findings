// from server: 100% by colin
// roc 2007-08 00492340  unit: RBX::Network::P8Players::?$GetImpl  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492340
//
// 00492340  8b8130010000         mov eax, dword ptr [ecx + 0x130]
// 00492346  8b4804               mov ecx, dword ptr [eax + 4]
// 00492349  85c9                 test ecx, ecx
// 0049234b  7503                 jne 0x492350
// 0049234d  33c0                 xor eax, eax
// 0049234f  c3                   ret 
// 00492350  8b4008               mov eax, dword ptr [eax + 8]
// 00492353  2bc1                 sub eax, ecx
// 00492355  c1f803               sar eax, 3
// 00492358  c3                   ret 

struct T_00492340 {
    char pad[0x130];
    int* field_130;
    int m();
};

int T_00492340::m()
{
    int* p = field_130;
    int first = p[1];
    if (first == 0)
        return 0;
    return (p[2] - first) >> 3;
}
