// roc 2008-06 005c4d10  unit: RBX::Visit  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c4d10
//
// 005c4d10  6aff                 push -1
// 005c4d12  68f8497d00           push 0x7d49f8
// 005c4d17  64a100000000         mov eax, dword ptr fs:[0]
// 005c4d1d  50                   push eax
// 005c4d1e  64892500000000       mov dword ptr fs:[0], esp
// 005c4d25  51                   push ecx
// 005c4d26  56                   push esi
// 005c4d27  8bf1                 mov esi, ecx
// 005c4d29  89742404             mov dword ptr [esp + 4], esi
// 005c4d2d  e8def7ffff           call 0x5c4510
// 005c4d32  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c4d3a  e881b8ffff           call 0x5c05c0
// 005c4d3f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c4d43  89461c               mov dword ptr [esi + 0x1c], eax
// 005c4d46  c7068c8e8300         mov dword ptr [esi], 0x838e8c
// 005c4d4c  c746107c8e8300       mov dword ptr [esi + 0x10], 0x838e7c
// 005c4d53  c74614748e8300       mov dword ptr [esi + 0x14], 0x838e74
// 005c4d5a  c746206c8e8300       mov dword ptr [esi + 0x20], 0x838e6c
// 005c4d61  c746245c8e8300       mov dword ptr [esi + 0x24], 0x838e5c
// 005c4d68  c746444c8e8300       mov dword ptr [esi + 0x44], 0x838e4c
// 005c4d6f  c746643c8e8300       mov dword ptr [esi + 0x64], 0x838e3c
// 005c4d76  c786840000002c8e8300 mov dword ptr [esi + 0x84], 0x838e2c
// 005c4d80  c786a40000001c8e8300 mov dword ptr [esi + 0xa4], 0x838e1c
// 005c4d8a  c786c40000000c8e8300 mov dword ptr [esi + 0xc4], 0x838e0c
// 005c4d94  8bc6                 mov eax, esi
// 005c4d96  5e                   pop esi
// 005c4d97  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4d9e  83c410               add esp, 0x10
// 005c4da1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
