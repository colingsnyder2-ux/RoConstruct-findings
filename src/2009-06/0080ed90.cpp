// roc 2009-06 0080ed90  unit: CXTPRibbonGroup  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080ed90
//
// 0080ed90  6aff                 push -1
// 0080ed92  6878228800           push 0x882278
// 0080ed97  64a100000000         mov eax, dword ptr fs:[0]
// 0080ed9d  50                   push eax
// 0080ed9e  83ec20               sub esp, 0x20
// 0080eda1  53                   push ebx
// 0080eda2  56                   push esi
// 0080eda3  57                   push edi
// 0080eda4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0080eda9  33c4                 xor eax, esp
// 0080edab  50                   push eax
// 0080edac  8d442430             lea eax, [esp + 0x30]
// 0080edb0  64a300000000         mov dword ptr fs:[0], eax
// 0080edb6  8bf1                 mov esi, ecx
// 0080edb8  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0080edbb  e8608cfaff           call 0x7b7a20
// 0080edc0  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0080edc4  0554060000           add eax, 0x654
// 0080edc9  50                   push eax
// 0080edca  53                   push ebx
// 0080edcb  8d4c2428             lea ecx, [esp + 0x28]
// 0080edcf  e88c1af6ff           call 0x770860
// 0080edd4  8d442410             lea eax, [esp + 0x10]
// 0080edd8  8d7e28               lea edi, [esi + 0x28]
// 0080eddb  50                   push eax
// 0080eddc  8bcf                 mov ecx, edi
// 0080edde  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0080ede6  ff1554fb8900         call dword ptr [0x89fb54]
// 0080edec  50                   push eax
// 0080eded  8bcf                 mov ecx, edi
// 0080edef  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0080edf5  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0080edf8  50                   push eax
// 0080edf9  51                   push ecx
// 0080edfa  ff1550e18900         call dword ptr [0x89e150]
// 0080ee00  837e7400             cmp dword ptr [esi + 0x74], 0
// 0080ee04  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080ee08  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0080ee0c  8954241c             mov dword ptr [esp + 0x1c], edx
// 0080ee10  7410                 je 0x80ee22
// 0080ee12  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0080ee15  e8068cfaff           call 0x7b7a20
// 0080ee1a  8b8060060000         mov eax, dword ptr [eax + 0x660]
// 0080ee20  03f8                 add edi, eax
// 0080ee22  8d4c2420             lea ecx, [esp + 0x20]
// 0080ee26  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0080ee2e  e8ad1af6ff           call 0x7708e0
// 0080ee33  8bc7                 mov eax, edi
// 0080ee35  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080ee39  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ee40  59                   pop ecx
// 0080ee41  5f                   pop edi
// 0080ee42  5e                   pop esi
// 0080ee43  5b                   pop ebx
// 0080ee44  83c42c               add esp, 0x2c
// 0080ee47  c20400               ret 4
// copied from an identical function in another client (function ?GetMinimumWidth@CXTPRibbonGroup@@MAEHPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonGroup.cpp