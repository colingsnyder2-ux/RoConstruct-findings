// roc 2012-06 00993170  unit: CXTPCommandBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00993170
//
// 00993170  8b542404             mov edx, dword ptr [esp + 4]
// 00993174  53                   push ebx
// 00993175  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00993179  56                   push esi
// 0099317a  8bf1                 mov esi, ecx
// 0099317c  8d0c1a               lea ecx, [edx + ebx]
// 0099317f  85d2                 test edx, edx
// 00993181  7c46                 jl 0x9931c9
// 00993183  85db                 test ebx, ebx
// 00993185  7c42                 jl 0x9931c9
// 00993187  8b4608               mov eax, dword ptr [esi + 8]
// 0099318a  3bc8                 cmp ecx, eax
// 0099318c  7f3b                 jg 0x9931c9
// 0099318e  3bca                 cmp ecx, edx
// 00993190  7c37                 jl 0x9931c9
// 00993192  3bcb                 cmp ecx, ebx
// 00993194  7c33                 jl 0x9931c9
// 00993196  2bc1                 sub eax, ecx
// 00993198  57                   push edi
// 00993199  8bf8                 mov edi, eax
// 0099319b  7423                 je 0x9931c0
// 0099319d  8b4604               mov eax, dword ptr [esi + 4]
// 009931a0  8d0c88               lea ecx, [eax + ecx*4]
// 009931a3  8d1490               lea edx, [eax + edx*4]
// 009931a6  8d04bd00000000       lea eax, [edi*4]
// 009931ad  50                   push eax
// 009931ae  51                   push ecx
// 009931af  50                   push eax
// 009931b0  52                   push edx
// 009931b1  ff15c02ab200         call dword ptr [0xb22ac0]
// 009931b7  50                   push eax
// 009931b8  e8630ea7ff           call 0x404020
// 009931bd  83c414               add esp, 0x14
// 009931c0  295e08               sub dword ptr [esi + 8], ebx
// 009931c3  5f                   pop edi
// 009931c4  5e                   pop esi
// 009931c5  5b                   pop ebx
// 009931c6  c20800               ret 8
// 009931c9  e8f2f1feff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp