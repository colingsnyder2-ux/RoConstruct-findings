// roc 2008-06 00447cd0  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447cd0
//
// 00447cd0  6aff                 push -1
// 00447cd2  68880d7c00           push 0x7c0d88
// 00447cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00447cdd  50                   push eax
// 00447cde  64892500000000       mov dword ptr fs:[0], esp
// 00447ce5  83ec08               sub esp, 8
// 00447ce8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00447cec  56                   push esi
// 00447ced  57                   push edi
// 00447cee  8bf1                 mov esi, ecx
// 00447cf0  89742408             mov dword ptr [esp + 8], esi
// 00447cf4  50                   push eax
// 00447cf5  51                   push ecx
// 00447cf6  8bc4                 mov eax, esp
// 00447cf8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00447d00  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00447d08  89642414             mov dword ptr [esp + 0x14], esp
// 00447d0c  c70000000000         mov dword ptr [eax], 0
// 00447d12  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00447d16  8b542428             mov edx, dword ptr [esp + 0x28]
// 00447d1a  51                   push ecx
// 00447d1b  52                   push edx
// 00447d1c  c644242801           mov byte ptr [esp + 0x28], 1
// 00447d21  e85afcffff           call 0x447980
// 00447d26  50                   push eax
// 00447d27  8bce                 mov ecx, esi
// 00447d29  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00447d2e  e8fdb4ffff           call 0x443230
// 00447d33  6a18                 push 0x18
// 00447d35  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00447d3a  c70654598100         mov dword ptr [esi], 0x815954
// 00447d40  e8db8b2500           call 0x6a0920
// 00447d45  83c404               add esp, 4
// 00447d48  85c0                 test eax, eax
// 00447d4a  741e                 je 0x447d6a
// 00447d4c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00447d50  33c9                 xor ecx, ecx
// 00447d52  33d2                 xor edx, edx
// 00447d54  897808               mov dword ptr [eax + 8], edi
// 00447d57  c700045c8100         mov dword ptr [eax], 0x815c04
// 00447d5d  897004               mov dword ptr [eax + 4], esi
// 00447d60  894810               mov dword ptr [eax + 0x10], ecx
// 00447d63  895014               mov dword ptr [eax + 0x14], edx
// 00447d66  8bf8                 mov edi, eax
// 00447d68  eb02                 jmp 0x447d6c
// 00447d6a  33ff                 xor edi, edi
// 00447d6c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00447d6f  3bf8                 cmp edi, eax
// 00447d71  740d                 je 0x447d80
// 00447d73  85c0                 test eax, eax
// 00447d75  7409                 je 0x447d80
// 00447d77  50                   push eax
// 00447d78  e8fd882500           call 0x6a067a
// 00447d7d  83c404               add esp, 4
// 00447d80  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00447d84  897e18               mov dword ptr [esi + 0x18], edi
// 00447d87  5f                   pop edi
// 00447d88  8bc6                 mov eax, esi
// 00447d8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00447d91  5e                   pop esi
// 00447d92  83c414               add esp, 0x14
// 00447d95  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
