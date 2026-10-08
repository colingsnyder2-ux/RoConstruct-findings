// roc 2009-06 0064cf10  unit: RBX::VGameSettings::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064cf10
//
// 0064cf10  6aff                 push -1
// 0064cf12  6868eb8600           push 0x86eb68
// 0064cf17  64a100000000         mov eax, dword ptr fs:[0]
// 0064cf1d  50                   push eax
// 0064cf1e  64892500000000       mov dword ptr fs:[0], esp
// 0064cf25  83ec08               sub esp, 8
// 0064cf28  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064cf2c  56                   push esi
// 0064cf2d  57                   push edi
// 0064cf2e  8bf1                 mov esi, ecx
// 0064cf30  89742408             mov dword ptr [esp + 8], esi
// 0064cf34  50                   push eax
// 0064cf35  51                   push ecx
// 0064cf36  8bc4                 mov eax, esp
// 0064cf38  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0064cf40  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0064cf48  89642414             mov dword ptr [esp + 0x14], esp
// 0064cf4c  c70000000000         mov dword ptr [eax], 0
// 0064cf52  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0064cf56  8b542428             mov edx, dword ptr [esp + 0x28]
// 0064cf5a  51                   push ecx
// 0064cf5b  52                   push edx
// 0064cf5c  c644242801           mov byte ptr [esp + 0x28], 1
// 0064cf61  e83ae9f9ff           call 0x5eb8a0
// 0064cf66  50                   push eax
// 0064cf67  8bce                 mov ecx, esi
// 0064cf69  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0064cf6e  e8cdc7dbff           call 0x409740
// 0064cf73  6a00                 push 0
// 0064cf75  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0064cf7a  e8b3ba0c00           call 0x718a32
// 0064cf7f  6a18                 push 0x18
// 0064cf81  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 0064cf87  e8acba0c00           call 0x718a38
// 0064cf8c  83c408               add esp, 8
// 0064cf8f  85c0                 test eax, eax
// 0064cf91  741e                 je 0x64cfb1
// 0064cf93  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0064cf97  33c9                 xor ecx, ecx
// 0064cf99  33d2                 xor edx, edx
// 0064cf9b  897808               mov dword ptr [eax + 8], edi
// 0064cf9e  c700d8f48d00         mov dword ptr [eax], 0x8df4d8
// 0064cfa4  897004               mov dword ptr [eax + 4], esi
// 0064cfa7  894810               mov dword ptr [eax + 0x10], ecx
// 0064cfaa  895014               mov dword ptr [eax + 0x14], edx
// 0064cfad  8bf8                 mov edi, eax
// 0064cfaf  eb02                 jmp 0x64cfb3
// 0064cfb1  33ff                 xor edi, edi
// 0064cfb3  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064cfb6  3bf8                 cmp edi, eax
// 0064cfb8  7409                 je 0x64cfc3
// 0064cfba  50                   push eax
// 0064cfbb  e872ba0c00           call 0x718a32
// 0064cfc0  83c404               add esp, 4
// 0064cfc3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064cfc7  897e18               mov dword ptr [esi + 0x18], edi
// 0064cfca  5f                   pop edi
// 0064cfcb  8bc6                 mov eax, esi
// 0064cfcd  64890d00000000       mov dword ptr fs:[0], ecx
// 0064cfd4  5e                   pop esi
// 0064cfd5  83c414               add esp, 0x14
// 0064cfd8  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
