// roc 2008-06 00491b20  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491b20
//
// 00491b20  6aff                 push -1
// 00491b22  68880d7c00           push 0x7c0d88
// 00491b27  64a100000000         mov eax, dword ptr fs:[0]
// 00491b2d  50                   push eax
// 00491b2e  64892500000000       mov dword ptr fs:[0], esp
// 00491b35  83ec08               sub esp, 8
// 00491b38  8b442424             mov eax, dword ptr [esp + 0x24]
// 00491b3c  56                   push esi
// 00491b3d  57                   push edi
// 00491b3e  8bf1                 mov esi, ecx
// 00491b40  89742408             mov dword ptr [esp + 8], esi
// 00491b44  50                   push eax
// 00491b45  51                   push ecx
// 00491b46  8bc4                 mov eax, esp
// 00491b48  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00491b50  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00491b58  89642414             mov dword ptr [esp + 0x14], esp
// 00491b5c  c70000000000         mov dword ptr [eax], 0
// 00491b62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00491b66  8b542428             mov edx, dword ptr [esp + 0x28]
// 00491b6a  51                   push ecx
// 00491b6b  52                   push edx
// 00491b6c  c644242801           mov byte ptr [esp + 0x28], 1
// 00491b71  e8eaf7ffff           call 0x491360
// 00491b76  50                   push eax
// 00491b77  8bce                 mov ecx, esi
// 00491b79  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00491b7e  e8dd39fbff           call 0x445560
// 00491b83  6a18                 push 0x18
// 00491b85  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00491b8a  c706081c8200         mov dword ptr [esi], 0x821c08
// 00491b90  e88bed2000           call 0x6a0920
// 00491b95  83c404               add esp, 4
// 00491b98  85c0                 test eax, eax
// 00491b9a  741e                 je 0x491bba
// 00491b9c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00491ba0  33c9                 xor ecx, ecx
// 00491ba2  33d2                 xor edx, edx
// 00491ba4  897808               mov dword ptr [eax + 8], edi
// 00491ba7  c70024168200         mov dword ptr [eax], 0x821624
// 00491bad  897004               mov dword ptr [eax + 4], esi
// 00491bb0  894810               mov dword ptr [eax + 0x10], ecx
// 00491bb3  895014               mov dword ptr [eax + 0x14], edx
// 00491bb6  8bf8                 mov edi, eax
// 00491bb8  eb02                 jmp 0x491bbc
// 00491bba  33ff                 xor edi, edi
// 00491bbc  8b4618               mov eax, dword ptr [esi + 0x18]
// 00491bbf  3bf8                 cmp edi, eax
// 00491bc1  740d                 je 0x491bd0
// 00491bc3  85c0                 test eax, eax
// 00491bc5  7409                 je 0x491bd0
// 00491bc7  50                   push eax
// 00491bc8  e8adea2000           call 0x6a067a
// 00491bcd  83c404               add esp, 4
// 00491bd0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00491bd4  897e18               mov dword ptr [esi + 0x18], edi
// 00491bd7  5f                   pop edi
// 00491bd8  8bc6                 mov eax, esi
// 00491bda  64890d00000000       mov dword ptr fs:[0], ecx
// 00491be1  5e                   pop esi
// 00491be2  83c414               add esp, 0x14
// 00491be5  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
