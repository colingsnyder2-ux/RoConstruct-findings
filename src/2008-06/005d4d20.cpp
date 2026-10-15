// roc 2008-06 005d4d20  unit: RBX::VClothing::?$FactoryProduct  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d4d20
//
// 005d4d20  6aff                 push -1
// 005d4d22  68d8a17d00           push 0x7da1d8
// 005d4d27  64a100000000         mov eax, dword ptr fs:[0]
// 005d4d2d  50                   push eax
// 005d4d2e  64892500000000       mov dword ptr fs:[0], esp
// 005d4d35  83ec08               sub esp, 8
// 005d4d38  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d4d3c  56                   push esi
// 005d4d3d  57                   push edi
// 005d4d3e  8bf1                 mov esi, ecx
// 005d4d40  89742408             mov dword ptr [esp + 8], esi
// 005d4d44  50                   push eax
// 005d4d45  51                   push ecx
// 005d4d46  8bc4                 mov eax, esp
// 005d4d48  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005d4d50  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005d4d58  89642414             mov dword ptr [esp + 0x14], esp
// 005d4d5c  c70000000000         mov dword ptr [eax], 0
// 005d4d62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d4d66  8b542428             mov edx, dword ptr [esp + 0x28]
// 005d4d6a  51                   push ecx
// 005d4d6b  52                   push edx
// 005d4d6c  c644242801           mov byte ptr [esp + 0x28], 1
// 005d4d71  e85ab4feff           call 0x5c01d0
// 005d4d76  50                   push eax
// 005d4d77  8bce                 mov ecx, esi
// 005d4d79  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d4d7e  e81d2bfcff           call 0x5978a0
// 005d4d83  6a18                 push 0x18
// 005d4d85  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005d4d8a  c706ecc48300         mov dword ptr [esi], 0x83c4ec
// 005d4d90  e88bbb0c00           call 0x6a0920
// 005d4d95  83c404               add esp, 4
// 005d4d98  85c0                 test eax, eax
// 005d4d9a  7422                 je 0x5d4dbe
// 005d4d9c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d4da0  c7006cc48300         mov dword ptr [eax], 0x83c46c
// 005d4da6  897004               mov dword ptr [eax + 4], esi
// 005d4da9  894808               mov dword ptr [eax + 8], ecx
// 005d4dac  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005d4db0  895010               mov dword ptr [eax + 0x10], edx
// 005d4db3  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d4db7  894814               mov dword ptr [eax + 0x14], ecx
// 005d4dba  8bf8                 mov edi, eax
// 005d4dbc  eb02                 jmp 0x5d4dc0
// 005d4dbe  33ff                 xor edi, edi
// 005d4dc0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005d4dc3  3bf8                 cmp edi, eax
// 005d4dc5  740d                 je 0x5d4dd4
// 005d4dc7  85c0                 test eax, eax
// 005d4dc9  7409                 je 0x5d4dd4
// 005d4dcb  50                   push eax
// 005d4dcc  e8a9b80c00           call 0x6a067a
// 005d4dd1  83c404               add esp, 4
// 005d4dd4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d4dd8  897e18               mov dword ptr [esi + 0x18], edi
// 005d4ddb  5f                   pop edi
// 005d4ddc  8bc6                 mov eax, esi
// 005d4dde  64890d00000000       mov dword ptr fs:[0], ecx
// 005d4de5  5e                   pop esi
// 005d4de6  83c414               add esp, 0x14
// 005d4de9  c21800               ret 0x18
// library rbxgs/roc_unit_0318bfbc7f245f29.cpp (function ??$?0VScriptContext@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScriptContext@2@_NP832@AEXABVPropertyDescriptor@12@@ZW4Functionality@412@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0318bfbc7f245f29.cpp
