// roc 2009-06 004d55b0  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d55b0
//
// 004d55b0  6aff                 push -1
// 004d55b2  6868eb8600           push 0x86eb68
// 004d55b7  64a100000000         mov eax, dword ptr fs:[0]
// 004d55bd  50                   push eax
// 004d55be  64892500000000       mov dword ptr fs:[0], esp
// 004d55c5  83ec08               sub esp, 8
// 004d55c8  8b442424             mov eax, dword ptr [esp + 0x24]
// 004d55cc  56                   push esi
// 004d55cd  57                   push edi
// 004d55ce  8bf1                 mov esi, ecx
// 004d55d0  89742408             mov dword ptr [esp + 8], esi
// 004d55d4  50                   push eax
// 004d55d5  51                   push ecx
// 004d55d6  8bc4                 mov eax, esp
// 004d55d8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004d55e0  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004d55e8  89642414             mov dword ptr [esp + 0x14], esp
// 004d55ec  c70000000000         mov dword ptr [eax], 0
// 004d55f2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004d55f6  8b542428             mov edx, dword ptr [esp + 0x28]
// 004d55fa  51                   push ecx
// 004d55fb  52                   push edx
// 004d55fc  c644242801           mov byte ptr [esp + 0x28], 1
// 004d5601  e8eaa6ffff           call 0x4cfcf0
// 004d5606  50                   push eax
// 004d5607  8bce                 mov ecx, esi
// 004d5609  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004d560e  e82d41f3ff           call 0x409740
// 004d5613  6a00                 push 0
// 004d5615  c644241c03           mov byte ptr [esp + 0x1c], 3
// 004d561a  e813342400           call 0x718a32
// 004d561f  6a18                 push 0x18
// 004d5621  c70650d48a00         mov dword ptr [esi], 0x8ad450
// 004d5627  e80c342400           call 0x718a38
// 004d562c  83c408               add esp, 8
// 004d562f  85c0                 test eax, eax
// 004d5631  741e                 je 0x4d5651
// 004d5633  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004d5637  33c9                 xor ecx, ecx
// 004d5639  33d2                 xor edx, edx
// 004d563b  897808               mov dword ptr [eax + 8], edi
// 004d563e  c7004c5a8c00         mov dword ptr [eax], 0x8c5a4c
// 004d5644  897004               mov dword ptr [eax + 4], esi
// 004d5647  894810               mov dword ptr [eax + 0x10], ecx
// 004d564a  895014               mov dword ptr [eax + 0x14], edx
// 004d564d  8bf8                 mov edi, eax
// 004d564f  eb02                 jmp 0x4d5653
// 004d5651  33ff                 xor edi, edi
// 004d5653  8b4618               mov eax, dword ptr [esi + 0x18]
// 004d5656  3bf8                 cmp edi, eax
// 004d5658  7409                 je 0x4d5663
// 004d565a  50                   push eax
// 004d565b  e8d2332400           call 0x718a32
// 004d5660  83c404               add esp, 4
// 004d5663  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004d5667  897e18               mov dword ptr [esi + 0x18], edi
// 004d566a  5f                   pop edi
// 004d566b  8bc6                 mov eax, esi
// 004d566d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d5674  5e                   pop esi
// 004d5675  83c414               add esp, 0x14
// 004d5678  c21000               ret 0x10
// library rbxgs/script\Script.cpp (function ??$?0VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@QAE@PBD0PQScript@2@_NW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
