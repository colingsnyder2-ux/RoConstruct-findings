// from server: 100% by tester
// roc 2011-06 00663ee0  unit: RBX::CoreScript  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00663ee0
//
// 00663ee0  80790300             cmp byte ptr [ecx + 3], 0
// 00663ee4  7509                 jne 0x663eef
// 00663ee6  80790700             cmp byte ptr [ecx + 7], 0
// 00663eea  7503                 jne 0x663eef
// 00663eec  33c0                 xor eax, eax
// 00663eee  c3                   ret 
// 00663eef  b801000000           mov eax, 1
// 00663ef4  c3                   ret 

struct S_func_00663ec0 {
    char pad0[3];
    unsigned char m_flag2;
    char pad3[3];
    unsigned char m_flag6;
    int f();
};

int S_func_00663ec0::f()
{
    return m_flag2 != 0 || m_flag6 != 0;
}
