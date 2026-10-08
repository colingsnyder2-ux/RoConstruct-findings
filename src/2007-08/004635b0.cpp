// from server: 100% by colin
// roc 2007-08 004635b0  unit: DxUserInput  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004635b0
//
// 004635b0  8a442408             mov al, byte ptr [esp + 8]
// 004635b4  f6d8                 neg al
// 004635b6  1bc0                 sbb eax, eax
// 004635b8  23442404             and eax, dword ptr [esp + 4]
// 004635bc  89817c010000         mov dword ptr [ecx + 0x17c], eax
// 004635c2  c20800               ret 8

struct S_func_004635b0 {
    char pad0[0x17c];
    int m_field;
    void f(int value, char flag);
};

void S_func_004635b0::f(int value, char flag)
{
    m_field = flag ? value : 0;
}
