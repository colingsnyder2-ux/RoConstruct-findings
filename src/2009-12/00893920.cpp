// roc 2009-12 00893920  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893920
//
// 00893920  6aff                 push -1
// 00893922  6843159600           push 0x961543
// 00893927  64a100000000         mov eax, dword ptr fs:[0]
// 0089392d  50                   push eax
// 0089392e  51                   push ecx
// 0089392f  56                   push esi
// 00893930  a10052b600           mov eax, dword ptr [0xb65200]
// 00893935  33c4                 xor eax, esp
// 00893937  50                   push eax
// 00893938  8d44240c             lea eax, [esp + 0xc]
// 0089393c  64a300000000         mov dword ptr fs:[0], eax
// 00893942  8bf1                 mov esi, ecx
// 00893944  89742408             mov dword ptr [esp + 8], esi
// 00893948  c706cc41a000         mov dword ptr [esi], 0xa041cc
// 0089394e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00893956  e8d5f4ffff           call 0x892e30
// 0089395b  8d4e20               lea ecx, [esi + 0x20]
// 0089395e  c644241400           mov byte ptr [esp + 0x14], 0
// 00893963  e858ffffff           call 0x8938c0
// 00893968  8bce                 mov ecx, esi
// 0089396a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00893972  e86b0af6ff           call 0x7f43e2
// 00893977  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089397b  64890d00000000       mov dword ptr fs:[0], ecx
// 00893982  59                   pop ecx
// 00893983  5e                   pop esi
// 00893984  83c410               add esp, 0x10
// 00893987  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridItemConstraints@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp