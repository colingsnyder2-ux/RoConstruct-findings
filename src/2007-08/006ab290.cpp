// from server: 100% by colin
// roc 2007-08 006ab290  unit: CXTPRibbonBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ab290
//
// 006ab290  33c0                 xor eax, eax
// 006ab292  817c240488250000     cmp dword ptr [esp + 4], 0x2588
// 006ab29a  0f94c0               sete al
// 006ab29d  89442404             mov dword ptr [esp + 4], eax
// 006ab2a1  e9eafaffff           jmp 0x6aad90

struct CXTPRibbonBar
{
    int sub_6AAD90(int);
    int func_6AB290(int);
};

int CXTPRibbonBar::func_6AB290(int arg)
{
    return this->sub_6AAD90(arg == 0x2588);
}
