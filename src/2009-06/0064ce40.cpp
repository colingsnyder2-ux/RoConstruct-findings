// roc 2009-06 0064ce40  unit: RBX::VGameSettings::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064ce40
//
// 0064ce40  6aff                 push -1
// 0064ce42  6868eb8600           push 0x86eb68
// 0064ce47  64a100000000         mov eax, dword ptr fs:[0]
// 0064ce4d  50                   push eax
// 0064ce4e  64892500000000       mov dword ptr fs:[0], esp
// 0064ce55  83ec08               sub esp, 8
// 0064ce58  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064ce5c  56                   push esi
// 0064ce5d  57                   push edi
// 0064ce5e  8bf1                 mov esi, ecx
// 0064ce60  89742408             mov dword ptr [esp + 8], esi
// 0064ce64  50                   push eax
// 0064ce65  51                   push ecx
// 0064ce66  8bc4                 mov eax, esp
// 0064ce68  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0064ce70  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0064ce78  89642414             mov dword ptr [esp + 0x14], esp
// 0064ce7c  c70000000000         mov dword ptr [eax], 0
// 0064ce82  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0064ce86  8b542428             mov edx, dword ptr [esp + 0x28]
// 0064ce8a  51                   push ecx
// 0064ce8b  52                   push edx
// 0064ce8c  c644242801           mov byte ptr [esp + 0x28], 1
// 0064ce91  e80aeaf9ff           call 0x5eb8a0
// 0064ce96  50                   push eax
// 0064ce97  8bce                 mov ecx, esi
// 0064ce99  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0064ce9e  e84d0edfff           call 0x43dcf0
// 0064cea3  6a00                 push 0
// 0064cea5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0064ceaa  e883bb0c00           call 0x718a32
// 0064ceaf  6a18                 push 0x18
// 0064ceb1  c7063c5f8b00         mov dword ptr [esi], 0x8b5f3c
// 0064ceb7  e87cbb0c00           call 0x718a38
// 0064cebc  83c408               add esp, 8
// 0064cebf  85c0                 test eax, eax
// 0064cec1  741e                 je 0x64cee1
// 0064cec3  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0064cec7  33c9                 xor ecx, ecx
// 0064cec9  33d2                 xor edx, edx
// 0064cecb  897808               mov dword ptr [eax + 8], edi
// 0064cece  c700c4f48d00         mov dword ptr [eax], 0x8df4c4
// 0064ced4  897004               mov dword ptr [eax + 4], esi
// 0064ced7  894810               mov dword ptr [eax + 0x10], ecx
// 0064ceda  895014               mov dword ptr [eax + 0x14], edx
// 0064cedd  8bf8                 mov edi, eax
// 0064cedf  eb02                 jmp 0x64cee3
// 0064cee1  33ff                 xor edi, edi
// 0064cee3  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064cee6  3bf8                 cmp edi, eax
// 0064cee8  7409                 je 0x64cef3
// 0064ceea  50                   push eax
// 0064ceeb  e842bb0c00           call 0x718a32
// 0064cef0  83c404               add esp, 4
// 0064cef3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064cef7  897e18               mov dword ptr [esi + 0x18], edi
// 0064cefa  5f                   pop edi
// 0064cefb  8bc6                 mov eax, esi
// 0064cefd  64890d00000000       mov dword ptr fs:[0], ecx
// 0064cf04  5e                   pop esi
// 0064cf05  83c414               add esp, 0x14
// 0064cf08  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
