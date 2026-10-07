// roc 2008-06 00631cb0  unit: RBX::VBodyAngularVelocity::?$FactoryProduct  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00631cb0
//
// 00631cb0  6aff                 push -1
// 00631cb2  68880d7c00           push 0x7c0d88
// 00631cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00631cbd  50                   push eax
// 00631cbe  64892500000000       mov dword ptr fs:[0], esp
// 00631cc5  83ec08               sub esp, 8
// 00631cc8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00631ccc  56                   push esi
// 00631ccd  57                   push edi
// 00631cce  8bf1                 mov esi, ecx
// 00631cd0  89742408             mov dword ptr [esp + 8], esi
// 00631cd4  50                   push eax
// 00631cd5  51                   push ecx
// 00631cd6  8bc4                 mov eax, esp
// 00631cd8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00631ce0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00631ce8  89642414             mov dword ptr [esp + 0x14], esp
// 00631cec  c70000000000         mov dword ptr [eax], 0
// 00631cf2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00631cf6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00631cfa  51                   push ecx
// 00631cfb  52                   push edx
// 00631cfc  c644242801           mov byte ptr [esp + 0x28], 1
// 00631d01  e80af2ffff           call 0x630f10
// 00631d06  50                   push eax
// 00631d07  8bce                 mov ecx, esi
// 00631d09  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00631d0e  e89d87f6ff           call 0x59a4b0
// 00631d13  6a18                 push 0x18
// 00631d15  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00631d1a  c706e45c8400         mov dword ptr [esi], 0x845ce4
// 00631d20  e8fbeb0600           call 0x6a0920
// 00631d25  83c404               add esp, 4
// 00631d28  85c0                 test eax, eax
// 00631d2a  741e                 je 0x631d4a
// 00631d2c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00631d30  33c9                 xor ecx, ecx
// 00631d32  33d2                 xor edx, edx
// 00631d34  897808               mov dword ptr [eax + 8], edi
// 00631d37  c700a0738400         mov dword ptr [eax], 0x8473a0
// 00631d3d  897004               mov dword ptr [eax + 4], esi
// 00631d40  894810               mov dword ptr [eax + 0x10], ecx
// 00631d43  895014               mov dword ptr [eax + 0x14], edx
// 00631d46  8bf8                 mov edi, eax
// 00631d48  eb02                 jmp 0x631d4c
// 00631d4a  33ff                 xor edi, edi
// 00631d4c  8b4618               mov eax, dword ptr [esi + 0x18]
// 00631d4f  3bf8                 cmp edi, eax
// 00631d51  740d                 je 0x631d60
// 00631d53  85c0                 test eax, eax
// 00631d55  7409                 je 0x631d60
// 00631d57  50                   push eax
// 00631d58  e81de90600           call 0x6a067a
// 00631d5d  83c404               add esp, 4
// 00631d60  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00631d64  897e18               mov dword ptr [esi + 0x18], edi
// 00631d67  5f                   pop edi
// 00631d68  8bc6                 mov eax, esi
// 00631d6a  64890d00000000       mov dword ptr fs:[0], ecx
// 00631d71  5e                   pop esi
// 00631d72  83c414               add esp, 0x14
// 00631d75  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
