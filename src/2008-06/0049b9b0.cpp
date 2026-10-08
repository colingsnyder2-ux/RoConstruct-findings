// roc 2008-06 0049b9b0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b9b0
//
// 0049b9b0  6aff                 push -1
// 0049b9b2  6830a17d00           push 0x7da130
// 0049b9b7  64a100000000         mov eax, dword ptr fs:[0]
// 0049b9bd  50                   push eax
// 0049b9be  64892500000000       mov dword ptr fs:[0], esp
// 0049b9c5  83ec14               sub esp, 0x14
// 0049b9c8  53                   push ebx
// 0049b9c9  55                   push ebp
// 0049b9ca  56                   push esi
// 0049b9cb  8bf1                 mov esi, ecx
// 0049b9cd  57                   push edi
// 0049b9ce  89742410             mov dword ptr [esp + 0x10], esi
// 0049b9d2  e8c9eeffff           call 0x49a8a0
// 0049b9d7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049b9db  51                   push ecx
// 0049b9dc  50                   push eax
// 0049b9dd  8bce                 mov ecx, esi
// 0049b9df  e8cc000d00           call 0x56bab0
// 0049b9e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 0049b9e8  6aff                 push -1
// 0049b9ea  52                   push edx
// 0049b9eb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0049b9f3  c706d4298200         mov dword ptr [esi], 0x8229d4
// 0049b9f9  e892850b00           call 0x553f90
// 0049b9fe  83c408               add esp, 8
// 0049ba01  89442414             mov dword ptr [esp + 0x14], eax
// 0049ba05  e8d6100d00           call 0x56cae0
// 0049ba0a  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ba0e  89442418             mov dword ptr [esp + 0x18], eax
// 0049ba12  e8a9900f00           call 0x594ac0
// 0049ba17  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0049ba1a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0049ba1d  8d7e18               lea edi, [esi + 0x18]
// 0049ba20  8d442414             lea eax, [esp + 0x14]
// 0049ba24  50                   push eax
// 0049ba25  51                   push ecx
// 0049ba26  55                   push ebp
// 0049ba27  8bcf                 mov ecx, edi
// 0049ba29  c644243801           mov byte ptr [esp + 0x38], 1
// 0049ba2e  e8cdc4f7ff           call 0x417f00
// 0049ba33  6a01                 push 1
// 0049ba35  8bcf                 mov ecx, edi
// 0049ba37  8bd8                 mov ebx, eax
// 0049ba39  e882721e00           call 0x682cc0
// 0049ba3e  895d04               mov dword ptr [ebp + 4], ebx
// 0049ba41  8b4304               mov eax, dword ptr [ebx + 4]
// 0049ba44  8918                 mov dword ptr [eax], ebx
// 0049ba46  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049ba4a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0049ba4f  85c9                 test ecx, ecx
// 0049ba51  7408                 je 0x49ba5b
// 0049ba53  8b11                 mov edx, dword ptr [ecx]
// 0049ba55  8b02                 mov eax, dword ptr [edx]
// 0049ba57  6a01                 push 1
// 0049ba59  ffd0                 call eax
// 0049ba5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0049ba5f  5f                   pop edi
// 0049ba60  8bc6                 mov eax, esi
// 0049ba62  5e                   pop esi
// 0049ba63  5d                   pop ebp
// 0049ba64  5b                   pop ebx
// 0049ba65  64890d00000000       mov dword ptr fs:[0], ecx
// 0049ba6c  83c420               add esp, 0x20
// 0049ba6f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
