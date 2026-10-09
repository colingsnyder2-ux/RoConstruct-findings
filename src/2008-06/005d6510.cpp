// roc 2008-06 005d6510  unit: RBX::Teams  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6510
//
// 005d6510  6aff                 push -1
// 005d6512  68b85b7d00           push 0x7d5bb8
// 005d6517  64a100000000         mov eax, dword ptr fs:[0]
// 005d651d  50                   push eax
// 005d651e  64892500000000       mov dword ptr fs:[0], esp
// 005d6525  51                   push ecx
// 005d6526  56                   push esi
// 005d6527  8bf1                 mov esi, ecx
// 005d6529  89742404             mov dword ptr [esp + 4], esi
// 005d652d  e8aef6ffff           call 0x5d5be0
// 005d6532  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d653a  e8c1faffff           call 0x5d6000
// 005d653f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d6543  89461c               mov dword ptr [esi + 0x1c], eax
// 005d6546  c70614cf8300         mov dword ptr [esi], 0x83cf14
// 005d654c  c7461008cf8300       mov dword ptr [esi + 0x10], 0x83cf08
// 005d6553  c7461400cf8300       mov dword ptr [esi + 0x14], 0x83cf00
// 005d655a  c74620f8ce8300       mov dword ptr [esi + 0x20], 0x83cef8
// 005d6561  c74624e8ce8300       mov dword ptr [esi + 0x24], 0x83cee8
// 005d6568  c74644d8ce8300       mov dword ptr [esi + 0x44], 0x83ced8
// 005d656f  c74664c8ce8300       mov dword ptr [esi + 0x64], 0x83cec8
// 005d6576  c78684000000b8ce8300 mov dword ptr [esi + 0x84], 0x83ceb8
// 005d6580  c786a4000000a8ce8300 mov dword ptr [esi + 0xa4], 0x83cea8
// 005d658a  c786c400000098ce8300 mov dword ptr [esi + 0xc4], 0x83ce98
// 005d6594  8bc6                 mov eax, esi
// 005d6596  5e                   pop esi
// 005d6597  64890d00000000       mov dword ptr fs:[0], ecx
// 005d659e  83c410               add esp, 0x10
// 005d65a1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
