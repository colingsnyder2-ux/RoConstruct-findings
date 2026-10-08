// roc 2009-06 0064e4b0  unit: RBX::VExplosion::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064e4b0
//
// 0064e4b0  6aff                 push -1
// 0064e4b2  6868eb8600           push 0x86eb68
// 0064e4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0064e4bd  50                   push eax
// 0064e4be  64892500000000       mov dword ptr fs:[0], esp
// 0064e4c5  83ec08               sub esp, 8
// 0064e4c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064e4cc  56                   push esi
// 0064e4cd  57                   push edi
// 0064e4ce  8bf1                 mov esi, ecx
// 0064e4d0  89742408             mov dword ptr [esp + 8], esi
// 0064e4d4  50                   push eax
// 0064e4d5  51                   push ecx
// 0064e4d6  8bc4                 mov eax, esp
// 0064e4d8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0064e4e0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0064e4e8  89642414             mov dword ptr [esp + 0x14], esp
// 0064e4ec  c70000000000         mov dword ptr [eax], 0
// 0064e4f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0064e4f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0064e4fa  51                   push ecx
// 0064e4fb  52                   push edx
// 0064e4fc  c644242801           mov byte ptr [esp + 0x28], 1
// 0064e501  e8dacaf9ff           call 0x5eafe0
// 0064e506  50                   push eax
// 0064e507  8bce                 mov ecx, esi
// 0064e509  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0064e50e  e8ed1bdfff           call 0x440100
// 0064e513  6a00                 push 0
// 0064e515  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0064e51a  e813a50c00           call 0x718a32
// 0064e51f  6a18                 push 0x18
// 0064e521  c706ac468c00         mov dword ptr [esi], 0x8c46ac
// 0064e527  e80ca50c00           call 0x718a38
// 0064e52c  83c408               add esp, 8
// 0064e52f  85c0                 test eax, eax
// 0064e531  741e                 je 0x64e551
// 0064e533  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0064e537  33c9                 xor ecx, ecx
// 0064e539  33d2                 xor edx, edx
// 0064e53b  897808               mov dword ptr [eax + 8], edi
// 0064e53e  c70004f78d00         mov dword ptr [eax], 0x8df704
// 0064e544  897004               mov dword ptr [eax + 4], esi
// 0064e547  894810               mov dword ptr [eax + 0x10], ecx
// 0064e54a  895014               mov dword ptr [eax + 0x14], edx
// 0064e54d  8bf8                 mov edi, eax
// 0064e54f  eb02                 jmp 0x64e553
// 0064e551  33ff                 xor edi, edi
// 0064e553  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064e556  3bf8                 cmp edi, eax
// 0064e558  7409                 je 0x64e563
// 0064e55a  50                   push eax
// 0064e55b  e8d2a40c00           call 0x718a32
// 0064e560  83c404               add esp, 4
// 0064e563  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064e567  897e18               mov dword ptr [esi + 0x18], edi
// 0064e56a  5f                   pop edi
// 0064e56b  8bc6                 mov eax, esi
// 0064e56d  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e574  5e                   pop esi
// 0064e575  83c414               add esp, 0x14
// 0064e578  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
