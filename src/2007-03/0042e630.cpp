// roc 2007-03 0042e630  unit: seg_00420000  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e630
//
// 0042e630  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042e634  83ec0c               sub esp, 0xc
// 0042e637  85c9                 test ecx, ecx
// 0042e639  7716                 ja 0x42e651
// 0042e63b  33c9                 xor ecx, ecx
// 0042e63d  8d14cd00000000       lea edx, [ecx*8]
// 0042e644  52                   push edx
// 0042e645  e8befa1e00           call 0x61e108
// 0042e64a  83c404               add esp, 4
// 0042e64d  83c40c               add esp, 0xc
// 0042e650  c3                   ret 
// 0042e651  83c8ff               or eax, 0xffffffff
// 0042e654  33d2                 xor edx, edx
// 0042e656  f7f1                 div ecx
// 0042e658  83f808               cmp eax, 8
// 0042e65b  73e0                 jae 0x42e63d
// 0042e65d  8d442410             lea eax, [esp + 0x10]
// 0042e661  50                   push eax
// 0042e662  8d4c2404             lea ecx, [esp + 4]
// 0042e666  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0042e66e  ff1554e97700         call dword ptr [0x77e954]
// 0042e674  68e0f18300           push 0x83f1e0
// 0042e679  8d4c2404             lea ecx, [esp + 4]
// 0042e67d  51                   push ecx
// 0042e67e  c74424082c3e7800     mov dword ptr [esp + 8], 0x783e2c
// 0042e686  e8a3091f00           call 0x61f02e
// library openrbx-client/App\v8datamodel\GlobalSettings.cpp (function ??$_Allocate@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YAPAV?$shared_ptr@VInstance@RBX@@@boost@@IPAV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/GlobalSettings.cpp
