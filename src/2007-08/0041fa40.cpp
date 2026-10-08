// from server: 66% by colin
// roc 2007-08 0041fa40  unit: CSelectionTreeCtrl  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fa40
//
// 0041fa40  8b442414             mov eax, dword ptr [esp + 0x14]
// 0041fa44  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041fa48  50                   push eax
// 0041fa49  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041fa4d  52                   push edx
// 0041fa4e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0041fa52  50                   push eax
// 0041fa53  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041fa57  52                   push edx
// 0041fa58  50                   push eax
// 0041fa59  e8126a2400           call 0x666470
// 0041fa5e  c21400               ret 0x14

extern "C" int __cdecl func_00666470(int, int, int, int, int);

struct CSelectionTreeCtrl
{
    int func_0041fa40(int, int, int, int, int);
};

int CSelectionTreeCtrl::func_0041fa40(int a1, int a2, int a3, int a4, int a5)
{
    return func_00666470(a1, a2, a3, a4, a5);
}
