// roc 2007-08 006efcc0  unit: CXTPControlComboBoxPopupBar  size: 6 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006efcc0
//
// 006efcc0  83c8ff               or eax, 0xffffffff
// 006efcc3  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_006efcc0 {

    int f(int a1, int a2);
};
int S_func_006efcc0::f(int a1, int a2)
{
    return -1;
}
