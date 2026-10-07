// roc 2008-06 00447c00  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447c00
//
// 00447c00  6aff                 push -1
// 00447c02  68880d7c00           push 0x7c0d88
// 00447c07  64a100000000         mov eax, dword ptr fs:[0]
// 00447c0d  50                   push eax
// 00447c0e  64892500000000       mov dword ptr fs:[0], esp
// 00447c15  83ec08               sub esp, 8
// 00447c18  8b442424             mov eax, dword ptr [esp + 0x24]
// 00447c1c  56                   push esi
// 00447c1d  57                   push edi
// 00447c1e  8bf1                 mov esi, ecx
// 00447c20  89742408             mov dword ptr [esp + 8], esi
// 00447c24  50                   push eax
// 00447c25  51                   push ecx
// 00447c26  8bc4                 mov eax, esp
// 00447c28  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00447c30  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00447c38  89642414             mov dword ptr [esp + 0x14], esp
// 00447c3c  c70000000000         mov dword ptr [eax], 0
// 00447c42  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00447c46  8b542428             mov edx, dword ptr [esp + 0x28]
// 00447c4a  51                   push ecx
// 00447c4b  52                   push edx
// 00447c4c  c644242801           mov byte ptr [esp + 0x28], 1
// 00447c51  e82afdffff           call 0x447980
// 00447c56  50                   push eax
// 00447c57  8bce                 mov ecx, esi
// 00447c59  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00447c5e  e82d26fcff           call 0x40a290
// 00447c63  6a18                 push 0x18
// 00447c65  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00447c6a  c70618bc8000         mov dword ptr [esi], 0x80bc18
// 00447c70  e8ab8c2500           call 0x6a0920
// 00447c75  83c404               add esp, 4
// 00447c78  85c0                 test eax, eax
// 00447c7a  741e                 je 0x447c9a
// 00447c7c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00447c80  33c9                 xor ecx, ecx
// 00447c82  33d2                 xor edx, edx
// 00447c84  897808               mov dword ptr [eax + 8], edi
// 00447c87  c700f05b8100         mov dword ptr [eax], 0x815bf0
// 00447c8d  897004               mov dword ptr [eax + 4], esi
// 00447c90  894810               mov dword ptr [eax + 0x10], ecx
// 00447c93  895014               mov dword ptr [eax + 0x14], edx
// 00447c96  8bf8                 mov edi, eax
// 00447c98  eb02                 jmp 0x447c9c
// 00447c9a  33ff                 xor edi, edi
// 00447c9c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00447c9f  3bf8                 cmp edi, eax
// 00447ca1  740d                 je 0x447cb0
// 00447ca3  85c0                 test eax, eax
// 00447ca5  7409                 je 0x447cb0
// 00447ca7  50                   push eax
// 00447ca8  e8cd892500           call 0x6a067a
// 00447cad  83c404               add esp, 4
// 00447cb0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00447cb4  897e18               mov dword ptr [esi + 0x18], edi
// 00447cb7  5f                   pop edi
// 00447cb8  8bc6                 mov eax, esi
// 00447cba  64890d00000000       mov dword ptr fs:[0], ecx
// 00447cc1  5e                   pop esi
// 00447cc2  83c414               add esp, 0x14
// 00447cc5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
