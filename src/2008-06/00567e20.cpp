// roc 2008-06 00567e20  unit: RBX::Selection  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00567e20
//
// 00567e20  6aff                 push -1
// 00567e22  6888f57c00           push 0x7cf588
// 00567e27  64a100000000         mov eax, dword ptr fs:[0]
// 00567e2d  50                   push eax
// 00567e2e  64892500000000       mov dword ptr fs:[0], esp
// 00567e35  51                   push ecx
// 00567e36  56                   push esi
// 00567e37  8bf1                 mov esi, ecx
// 00567e39  89742404             mov dword ptr [esp + 4], esi
// 00567e3d  e86ee9ffff           call 0x5667b0
// 00567e42  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00567e4a  e851f3ffff           call 0x5671a0
// 00567e4f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00567e53  89461c               mov dword ptr [esi + 0x1c], eax
// 00567e56  c70684ee8200         mov dword ptr [esi], 0x82ee84
// 00567e5c  c7461078ee8200       mov dword ptr [esi + 0x10], 0x82ee78
// 00567e63  c7461470ee8200       mov dword ptr [esi + 0x14], 0x82ee70
// 00567e6a  c7462068ee8200       mov dword ptr [esi + 0x20], 0x82ee68
// 00567e71  c7462458ee8200       mov dword ptr [esi + 0x24], 0x82ee58
// 00567e78  c7464448ee8200       mov dword ptr [esi + 0x44], 0x82ee48
// 00567e7f  c7466438ee8200       mov dword ptr [esi + 0x64], 0x82ee38
// 00567e86  c7868400000028ee8200 mov dword ptr [esi + 0x84], 0x82ee28
// 00567e90  c786a400000018ee8200 mov dword ptr [esi + 0xa4], 0x82ee18
// 00567e9a  c786c400000008ee8200 mov dword ptr [esi + 0xc4], 0x82ee08
// 00567ea4  8bc6                 mov eax, esi
// 00567ea6  5e                   pop esi
// 00567ea7  64890d00000000       mov dword ptr fs:[0], ecx
// 00567eae  83c410               add esp, 0x10
// 00567eb1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
