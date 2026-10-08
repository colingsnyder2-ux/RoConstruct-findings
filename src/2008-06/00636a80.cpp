// roc 2008-06 00636a80  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636a80
//
// 00636a80  6aff                 push -1
// 00636a82  6830a17d00           push 0x7da130
// 00636a87  64a100000000         mov eax, dword ptr fs:[0]
// 00636a8d  50                   push eax
// 00636a8e  64892500000000       mov dword ptr fs:[0], esp
// 00636a95  83ec14               sub esp, 0x14
// 00636a98  53                   push ebx
// 00636a99  55                   push ebp
// 00636a9a  56                   push esi
// 00636a9b  8bf1                 mov esi, ecx
// 00636a9d  57                   push edi
// 00636a9e  89742410             mov dword ptr [esp + 0x10], esi
// 00636aa2  e869ffffff           call 0x636a10
// 00636aa7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00636aab  51                   push ecx
// 00636aac  50                   push eax
// 00636aad  8bce                 mov ecx, esi
// 00636aaf  e8fc4ff3ff           call 0x56bab0
// 00636ab4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00636ab8  6aff                 push -1
// 00636aba  52                   push edx
// 00636abb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00636ac3  c706448b8400         mov dword ptr [esi], 0x848b44
// 00636ac9  e8c2d4f1ff           call 0x553f90
// 00636ace  83c408               add esp, 8
// 00636ad1  89442414             mov dword ptr [esp + 0x14], eax
// 00636ad5  e85661f3ff           call 0x56cc30
// 00636ada  8d4c241c             lea ecx, [esp + 0x1c]
// 00636ade  89442418             mov dword ptr [esp + 0x18], eax
// 00636ae2  e8d9dff5ff           call 0x594ac0
// 00636ae7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00636aea  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00636aed  8d7e18               lea edi, [esi + 0x18]
// 00636af0  8d442414             lea eax, [esp + 0x14]
// 00636af4  50                   push eax
// 00636af5  51                   push ecx
// 00636af6  55                   push ebp
// 00636af7  8bcf                 mov ecx, edi
// 00636af9  c644243801           mov byte ptr [esp + 0x38], 1
// 00636afe  e8fd13deff           call 0x417f00
// 00636b03  6a01                 push 1
// 00636b05  8bcf                 mov ecx, edi
// 00636b07  8bd8                 mov ebx, eax
// 00636b09  e8b2c10400           call 0x682cc0
// 00636b0e  895d04               mov dword ptr [ebp + 4], ebx
// 00636b11  8b4304               mov eax, dword ptr [ebx + 4]
// 00636b14  8918                 mov dword ptr [eax], ebx
// 00636b16  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00636b1a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00636b1f  85c9                 test ecx, ecx
// 00636b21  7408                 je 0x636b2b
// 00636b23  8b11                 mov edx, dword ptr [ecx]
// 00636b25  8b02                 mov eax, dword ptr [edx]
// 00636b27  6a01                 push 1
// 00636b29  ffd0                 call eax
// 00636b2b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00636b2f  5f                   pop edi
// 00636b30  8bc6                 mov eax, esi
// 00636b32  5e                   pop esi
// 00636b33  5d                   pop ebp
// 00636b34  5b                   pop ebx
// 00636b35  64890d00000000       mov dword ptr fs:[0], ecx
// 00636b3c  83c420               add esp, 0x20
// 00636b3f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
