// roc 2007-03 005dce40  unit: seg_005d0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dce40
//
// 005dce40  6aff                 push -1
// 005dce42  68089c7500           push 0x759c08
// 005dce47  64a100000000         mov eax, dword ptr fs:[0]
// 005dce4d  50                   push eax
// 005dce4e  64892500000000       mov dword ptr fs:[0], esp
// 005dce55  83ec08               sub esp, 8
// 005dce58  8b442424             mov eax, dword ptr [esp + 0x24]
// 005dce5c  56                   push esi
// 005dce5d  57                   push edi
// 005dce5e  8bf1                 mov esi, ecx
// 005dce60  89742408             mov dword ptr [esp + 8], esi
// 005dce64  50                   push eax
// 005dce65  51                   push ecx
// 005dce66  8bc4                 mov eax, esp
// 005dce68  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005dce70  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dce78  89642414             mov dword ptr [esp + 0x14], esp
// 005dce7c  c70000000000         mov dword ptr [eax], 0
// 005dce82  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005dce86  8b542428             mov edx, dword ptr [esp + 0x28]
// 005dce8a  51                   push ecx
// 005dce8b  52                   push edx
// 005dce8c  c644242801           mov byte ptr [esp + 0x28], 1
// 005dce91  e8caf3ffff           call 0x5dc260
// 005dce96  50                   push eax
// 005dce97  8bce                 mov ecx, esi
// 005dce99  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005dce9e  e84d6af9ff           call 0x5738f0
// 005dcea3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dcea7  50                   push eax
// 005dcea8  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005dcead  e83e120400           call 0x61e0f0
// 005dceb2  6a18                 push 0x18
// 005dceb4  c70690cf7b00         mov dword ptr [esi], 0x7bcf90
// 005dceba  e849120400           call 0x61e108
// 005dcebf  83c408               add esp, 8
// 005dcec2  85c0                 test eax, eax
// 005dcec4  741e                 je 0x5dcee4
// 005dcec6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005dceca  33c9                 xor ecx, ecx
// 005dcecc  33d2                 xor edx, edx
// 005dcece  897808               mov dword ptr [eax + 8], edi
// 005dced1  c700e0cc7b00         mov dword ptr [eax], 0x7bcce0
// 005dced7  897004               mov dword ptr [eax + 4], esi
// 005dceda  894810               mov dword ptr [eax + 0x10], ecx
// 005dcedd  895014               mov dword ptr [eax + 0x14], edx
// 005dcee0  8bf8                 mov edi, eax
// 005dcee2  eb02                 jmp 0x5dcee6
// 005dcee4  33ff                 xor edi, edi
// 005dcee6  8b4618               mov eax, dword ptr [esi + 0x18]
// 005dcee9  3bf8                 cmp edi, eax
// 005dceeb  7409                 je 0x5dcef6
// 005dceed  50                   push eax
// 005dceee  e8fd110400           call 0x61e0f0
// 005dcef3  83c404               add esp, 4
// 005dcef6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005dcefa  897e18               mov dword ptr [esi + 0x18], edi
// 005dcefd  5f                   pop edi
// 005dcefe  8bc6                 mov eax, esi
// 005dcf00  64890d00000000       mov dword ptr fs:[0], ecx
// 005dcf07  5e                   pop esi
// 005dcf08  83c414               add esp, 0x14
// 005dcf0b  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
