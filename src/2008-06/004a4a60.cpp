// roc 2008-06 004a4a60  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a4a60
//
// 004a4a60  6aff                 push -1
// 004a4a62  68e87d7c00           push 0x7c7de8
// 004a4a67  64a100000000         mov eax, dword ptr fs:[0]
// 004a4a6d  50                   push eax
// 004a4a6e  64892500000000       mov dword ptr fs:[0], esp
// 004a4a75  51                   push ecx
// 004a4a76  56                   push esi
// 004a4a77  8bf1                 mov esi, ecx
// 004a4a79  89742404             mov dword ptr [esp + 4], esi
// 004a4a7d  e86ef0ffff           call 0x4a3af0
// 004a4a82  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004a4a8a  e841f3ffff           call 0x4a3dd0
// 004a4a8f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a4a93  89461c               mov dword ptr [esi + 0x1c], eax
// 004a4a96  c706943a8200         mov dword ptr [esi], 0x823a94
// 004a4a9c  c74610843a8200       mov dword ptr [esi + 0x10], 0x823a84
// 004a4aa3  c746147c3a8200       mov dword ptr [esi + 0x14], 0x823a7c
// 004a4aaa  c74620743a8200       mov dword ptr [esi + 0x20], 0x823a74
// 004a4ab1  c74624643a8200       mov dword ptr [esi + 0x24], 0x823a64
// 004a4ab8  c74644543a8200       mov dword ptr [esi + 0x44], 0x823a54
// 004a4abf  c74664443a8200       mov dword ptr [esi + 0x64], 0x823a44
// 004a4ac6  c78684000000343a8200 mov dword ptr [esi + 0x84], 0x823a34
// 004a4ad0  c786a4000000243a8200 mov dword ptr [esi + 0xa4], 0x823a24
// 004a4ada  c786c4000000143a8200 mov dword ptr [esi + 0xc4], 0x823a14
// 004a4ae4  c78630010000fc398200 mov dword ptr [esi + 0x130], 0x8239fc
// 004a4aee  8bc6                 mov eax, esi
// 004a4af0  5e                   pop esi
// 004a4af1  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4af8  83c410               add esp, 0x10
// 004a4afb  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??0?$DescribedCreatable@VHole@RBX@@VFeature@2@$1?sHole@2@3QBDB@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
