// roc 2008-06 00568a50  unit: RBX::VInstance::?$NonFactoryProduct  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00568a50
//
// 00568a50  6aff                 push -1
// 00568a52  68c8d37b00           push 0x7bd3c8
// 00568a57  64a100000000         mov eax, dword ptr fs:[0]
// 00568a5d  50                   push eax
// 00568a5e  64892500000000       mov dword ptr fs:[0], esp
// 00568a65  51                   push ecx
// 00568a66  56                   push esi
// 00568a67  8bf1                 mov esi, ecx
// 00568a69  89742404             mov dword ptr [esp + 4], esi
// 00568a6d  e8aefaffff           call 0x568520
// 00568a72  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00568a7a  e8215ff3ff           call 0x49e9a0
// 00568a7f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00568a83  89461c               mov dword ptr [esi + 0x1c], eax
// 00568a86  c706dcf08200         mov dword ptr [esi], 0x82f0dc
// 00568a8c  c74610d0f08200       mov dword ptr [esi + 0x10], 0x82f0d0
// 00568a93  c74614c8f08200       mov dword ptr [esi + 0x14], 0x82f0c8
// 00568a9a  c74620c0f08200       mov dword ptr [esi + 0x20], 0x82f0c0
// 00568aa1  c74624b0f08200       mov dword ptr [esi + 0x24], 0x82f0b0
// 00568aa8  c74644a0f08200       mov dword ptr [esi + 0x44], 0x82f0a0
// 00568aaf  c7466490f08200       mov dword ptr [esi + 0x64], 0x82f090
// 00568ab6  c7868400000080f08200 mov dword ptr [esi + 0x84], 0x82f080
// 00568ac0  c786a400000070f08200 mov dword ptr [esi + 0xa4], 0x82f070
// 00568aca  c786c400000060f08200 mov dword ptr [esi + 0xc4], 0x82f060
// 00568ad4  8bc6                 mov eax, esi
// 00568ad6  5e                   pop esi
// 00568ad7  64890d00000000       mov dword ptr fs:[0], ecx
// 00568ade  83c410               add esp, 0x10
// 00568ae1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
