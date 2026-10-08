// roc 2009-06 005cf190  unit: VAuthoringSettings::?$FactoryProduct  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cf190
//
// 005cf190  6aff                 push -1
// 005cf192  6868eb8600           push 0x86eb68
// 005cf197  64a100000000         mov eax, dword ptr fs:[0]
// 005cf19d  50                   push eax
// 005cf19e  64892500000000       mov dword ptr fs:[0], esp
// 005cf1a5  83ec08               sub esp, 8
// 005cf1a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cf1ac  56                   push esi
// 005cf1ad  57                   push edi
// 005cf1ae  8bf1                 mov esi, ecx
// 005cf1b0  89742408             mov dword ptr [esp + 8], esi
// 005cf1b4  50                   push eax
// 005cf1b5  51                   push ecx
// 005cf1b6  8bc4                 mov eax, esp
// 005cf1b8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005cf1c0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005cf1c8  89642414             mov dword ptr [esp + 0x14], esp
// 005cf1cc  c70000000000         mov dword ptr [eax], 0
// 005cf1d2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005cf1d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 005cf1da  51                   push ecx
// 005cf1db  52                   push edx
// 005cf1dc  c644242801           mov byte ptr [esp + 0x28], 1
// 005cf1e1  e80ab3e3ff           call 0x40a4f0
// 005cf1e6  50                   push eax
// 005cf1e7  8bce                 mov ecx, esi
// 005cf1e9  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005cf1ee  e84da5e3ff           call 0x409740
// 005cf1f3  6a00                 push 0
// 005cf1f5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 005cf1fa  e833981400           call 0x718a32
// 005cf1ff  6a18                 push 0x18
// 005cf201  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 005cf207  e82c981400           call 0x718a38
// 005cf20c  83c408               add esp, 8
// 005cf20f  85c0                 test eax, eax
// 005cf211  741e                 je 0x5cf231
// 005cf213  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005cf217  33c9                 xor ecx, ecx
// 005cf219  33d2                 xor edx, edx
// 005cf21b  897808               mov dword ptr [eax + 8], edi
// 005cf21e  c700684e8d00         mov dword ptr [eax], 0x8d4e68
// 005cf224  897004               mov dword ptr [eax + 4], esi
// 005cf227  894810               mov dword ptr [eax + 0x10], ecx
// 005cf22a  895014               mov dword ptr [eax + 0x14], edx
// 005cf22d  8bf8                 mov edi, eax
// 005cf22f  eb02                 jmp 0x5cf233
// 005cf231  33ff                 xor edi, edi
// 005cf233  8b4618               mov eax, dword ptr [esi + 0x18]
// 005cf236  3bf8                 cmp edi, eax
// 005cf238  7409                 je 0x5cf243
// 005cf23a  50                   push eax
// 005cf23b  e8f2971400           call 0x718a32
// 005cf240  83c404               add esp, 4
// 005cf243  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005cf247  897e18               mov dword ptr [esi + 0x18], edi
// 005cf24a  5f                   pop edi
// 005cf24b  8bc6                 mov eax, esi
// 005cf24d  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf254  5e                   pop esi
// 005cf255  83c414               add esp, 0x14
// 005cf258  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
