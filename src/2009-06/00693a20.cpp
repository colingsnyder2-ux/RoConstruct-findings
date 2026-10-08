// roc 2009-06 00693a20  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00693a20
//
// 00693a20  6aff                 push -1
// 00693a22  6868eb8600           push 0x86eb68
// 00693a27  64a100000000         mov eax, dword ptr fs:[0]
// 00693a2d  50                   push eax
// 00693a2e  64892500000000       mov dword ptr fs:[0], esp
// 00693a35  83ec08               sub esp, 8
// 00693a38  8b442424             mov eax, dword ptr [esp + 0x24]
// 00693a3c  56                   push esi
// 00693a3d  57                   push edi
// 00693a3e  8bf1                 mov esi, ecx
// 00693a40  89742408             mov dword ptr [esp + 8], esi
// 00693a44  50                   push eax
// 00693a45  51                   push ecx
// 00693a46  8bc4                 mov eax, esp
// 00693a48  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00693a50  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00693a58  89642414             mov dword ptr [esp + 0x14], esp
// 00693a5c  c70000000000         mov dword ptr [eax], 0
// 00693a62  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00693a66  8b542428             mov edx, dword ptr [esp + 0x28]
// 00693a6a  51                   push ecx
// 00693a6b  52                   push edx
// 00693a6c  c644242801           mov byte ptr [esp + 0x28], 1
// 00693a71  e83a81f5ff           call 0x5ebbb0
// 00693a76  50                   push eax
// 00693a77  8bce                 mov ecx, esi
// 00693a79  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00693a7e  e8cd39f9ff           call 0x627450
// 00693a83  6a00                 push 0
// 00693a85  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00693a8a  e8a34f0800           call 0x718a32
// 00693a8f  6a18                 push 0x18
// 00693a91  c7066cf78d00         mov dword ptr [esi], 0x8df76c
// 00693a97  e89c4f0800           call 0x718a38
// 00693a9c  83c408               add esp, 8
// 00693a9f  85c0                 test eax, eax
// 00693aa1  741e                 je 0x693ac1
// 00693aa3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00693aa7  33c9                 xor ecx, ecx
// 00693aa9  33d2                 xor edx, edx
// 00693aab  897808               mov dword ptr [eax + 8], edi
// 00693aae  c70050708e00         mov dword ptr [eax], 0x8e7050
// 00693ab4  897004               mov dword ptr [eax + 4], esi
// 00693ab7  894810               mov dword ptr [eax + 0x10], ecx
// 00693aba  895014               mov dword ptr [eax + 0x14], edx
// 00693abd  8bf8                 mov edi, eax
// 00693abf  eb02                 jmp 0x693ac3
// 00693ac1  33ff                 xor edi, edi
// 00693ac3  8b4618               mov eax, dword ptr [esi + 0x18]
// 00693ac6  3bf8                 cmp edi, eax
// 00693ac8  7409                 je 0x693ad3
// 00693aca  50                   push eax
// 00693acb  e8624f0800           call 0x718a32
// 00693ad0  83c404               add esp, 4
// 00693ad3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00693ad7  897e18               mov dword ptr [esi + 0x18], edi
// 00693ada  5f                   pop edi
// 00693adb  8bc6                 mov eax, esi
// 00693add  64890d00000000       mov dword ptr fs:[0], ecx
// 00693ae4  5e                   pop esi
// 00693ae5  83c414               add esp, 0x14
// 00693ae8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
