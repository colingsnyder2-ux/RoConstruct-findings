// from server: 100% by atomic.potato
// roc 2008-06 00467530  unit: DxUserInput  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467530
//
// 00467530  0fb6442408           movzx eax, byte ptr [esp + 8]
// 00467535  f7d8                 neg eax
// 00467537  1bc0                 sbb eax, eax
// 00467539  23442404             and eax, dword ptr [esp + 4]
// 0046753d  898168010000         mov dword ptr [ecx + 0x168], eax
// 00467543  c20800               ret 8

struct DxUserInput
{
    char pad0[360];
    int m_value;
    void f(int value, unsigned char enabled);
};

void DxUserInput::f(int value, unsigned char enabled)
{
    m_value = enabled ? value : 0;
}
