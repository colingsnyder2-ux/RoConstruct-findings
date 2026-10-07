// roc 2008-06 00742310  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00742310
//
// 00742310  8b8174010000         mov eax, dword ptr [ecx + 0x174]
// 00742316  8b542404             mov edx, dword ptr [esp + 4]
// 0074231a  89917c010000         mov dword ptr [ecx + 0x17c], edx
// 00742320  85c0                 test eax, eax
// 00742322  7418                 je 0x74233c
// 00742324  83782000             cmp dword ptr [eax + 0x20], 0
// 00742328  7412                 je 0x74233c
// 0074232a  8b4020               mov eax, dword ptr [eax + 0x20]
// 0074232d  6a00                 push 0
// 0074232f  52                   push edx
// 00742330  68cf000000           push 0xcf
// 00742335  50                   push eax
// 00742336  ff15142e8000         call dword ptr [0x802e14]
// 0074233c  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?SetReadOnly@CXTPControlEdit@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
