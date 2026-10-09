// roc 2008-06 005ad930  unit: RBX::Reflection::UTuple::?$holder  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ad930
//
// 005ad930  6aff                 push -1
// 005ad932  68a8327d00           push 0x7d32a8
// 005ad937  64a100000000         mov eax, dword ptr fs:[0]
// 005ad93d  50                   push eax
// 005ad93e  64892500000000       mov dword ptr fs:[0], esp
// 005ad945  51                   push ecx
// 005ad946  56                   push esi
// 005ad947  8bf1                 mov esi, ecx
// 005ad949  89742404             mov dword ptr [esp + 4], esi
// 005ad94d  e81eb0ffff           call 0x5a8970
// 005ad952  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ad95a  e8a1f8ffff           call 0x5ad200
// 005ad95f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ad963  89461c               mov dword ptr [esi + 0x1c], eax
// 005ad966  c7065c468300         mov dword ptr [esi], 0x83465c
// 005ad96c  c7461050468300       mov dword ptr [esi + 0x10], 0x834650
// 005ad973  c7461448468300       mov dword ptr [esi + 0x14], 0x834648
// 005ad97a  c7462040468300       mov dword ptr [esi + 0x20], 0x834640
// 005ad981  c7462430468300       mov dword ptr [esi + 0x24], 0x834630
// 005ad988  c7464420468300       mov dword ptr [esi + 0x44], 0x834620
// 005ad98f  c7466410468300       mov dword ptr [esi + 0x64], 0x834610
// 005ad996  c7868400000000468300 mov dword ptr [esi + 0x84], 0x834600
// 005ad9a0  c786a4000000f0458300 mov dword ptr [esi + 0xa4], 0x8345f0
// 005ad9aa  c786c4000000e0458300 mov dword ptr [esi + 0xc4], 0x8345e0
// 005ad9b4  8bc6                 mov eax, esi
// 005ad9b6  5e                   pop esi
// 005ad9b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005ad9be  83c410               add esp, 0x10
// 005ad9c1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
