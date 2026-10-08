// roc 2009-06 004421d0  unit: RBX::CRenderSettings::W4MaterialQuality::?$EnumDesc  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004421d0
//
// 004421d0  6aff                 push -1
// 004421d2  6868eb8600           push 0x86eb68
// 004421d7  64a100000000         mov eax, dword ptr fs:[0]
// 004421dd  50                   push eax
// 004421de  64892500000000       mov dword ptr fs:[0], esp
// 004421e5  83ec08               sub esp, 8
// 004421e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004421ec  56                   push esi
// 004421ed  57                   push edi
// 004421ee  8bf1                 mov esi, ecx
// 004421f0  89742408             mov dword ptr [esp + 8], esi
// 004421f4  50                   push eax
// 004421f5  51                   push ecx
// 004421f6  8bc4                 mov eax, esp
// 004421f8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00442200  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00442208  89642414             mov dword ptr [esp + 0x14], esp
// 0044220c  c70000000000         mov dword ptr [eax], 0
// 00442212  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00442216  8b542428             mov edx, dword ptr [esp + 0x28]
// 0044221a  51                   push ecx
// 0044221b  52                   push edx
// 0044221c  c644242801           mov byte ptr [esp + 0x28], 1
// 00442221  e88afcffff           call 0x441eb0
// 00442226  50                   push eax
// 00442227  8bce                 mov ecx, esi
// 00442229  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0044222e  e83dbaffff           call 0x43dc70
// 00442233  6a00                 push 0
// 00442235  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0044223a  e8f3672d00           call 0x718a32
// 0044223f  6a18                 push 0x18
// 00442241  c706085f8b00         mov dword ptr [esi], 0x8b5f08
// 00442247  e8ec672d00           call 0x718a38
// 0044224c  83c408               add esp, 8
// 0044224f  85c0                 test eax, eax
// 00442251  741e                 je 0x442271
// 00442253  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00442257  33c9                 xor ecx, ecx
// 00442259  33d2                 xor edx, edx
// 0044225b  897808               mov dword ptr [eax + 8], edi
// 0044225e  c700ac608b00         mov dword ptr [eax], 0x8b60ac
// 00442264  897004               mov dword ptr [eax + 4], esi
// 00442267  894810               mov dword ptr [eax + 0x10], ecx
// 0044226a  895014               mov dword ptr [eax + 0x14], edx
// 0044226d  8bf8                 mov edi, eax
// 0044226f  eb02                 jmp 0x442273
// 00442271  33ff                 xor edi, edi
// 00442273  8b4618               mov eax, dword ptr [esi + 0x18]
// 00442276  3bf8                 cmp edi, eax
// 00442278  7409                 je 0x442283
// 0044227a  50                   push eax
// 0044227b  e8b2672d00           call 0x718a32
// 00442280  83c404               add esp, 4
// 00442283  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00442287  897e18               mov dword ptr [esi + 0x18], edi
// 0044228a  5f                   pop edi
// 0044228b  8bc6                 mov eax, esi
// 0044228d  64890d00000000       mov dword ptr fs:[0], ecx
// 00442294  5e                   pop esi
// 00442295  83c414               add esp, 0x14
// 00442298  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
