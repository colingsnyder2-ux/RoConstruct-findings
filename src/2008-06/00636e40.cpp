// roc 2008-06 00636e40  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636e40
//
// 00636e40  6aff                 push -1
// 00636e42  6830a17d00           push 0x7da130
// 00636e47  64a100000000         mov eax, dword ptr fs:[0]
// 00636e4d  50                   push eax
// 00636e4e  64892500000000       mov dword ptr fs:[0], esp
// 00636e55  83ec14               sub esp, 0x14
// 00636e58  53                   push ebx
// 00636e59  55                   push ebp
// 00636e5a  56                   push esi
// 00636e5b  8bf1                 mov esi, ecx
// 00636e5d  57                   push edi
// 00636e5e  89742410             mov dword ptr [esp + 0x10], esi
// 00636e62  e869ffffff           call 0x636dd0
// 00636e67  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00636e6b  51                   push ecx
// 00636e6c  50                   push eax
// 00636e6d  8bce                 mov ecx, esi
// 00636e6f  e83c4cf3ff           call 0x56bab0
// 00636e74  8b542438             mov edx, dword ptr [esp + 0x38]
// 00636e78  6aff                 push -1
// 00636e7a  52                   push edx
// 00636e7b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00636e83  c706748b8400         mov dword ptr [esi], 0x848b74
// 00636e89  e802d1f1ff           call 0x553f90
// 00636e8e  83c408               add esp, 8
// 00636e91  89442414             mov dword ptr [esp + 0x14], eax
// 00636e95  e8c65ff3ff           call 0x56ce60
// 00636e9a  8d4c241c             lea ecx, [esp + 0x1c]
// 00636e9e  89442418             mov dword ptr [esp + 0x18], eax
// 00636ea2  e819dcf5ff           call 0x594ac0
// 00636ea7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00636eaa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00636ead  8d7e18               lea edi, [esi + 0x18]
// 00636eb0  8d442414             lea eax, [esp + 0x14]
// 00636eb4  50                   push eax
// 00636eb5  51                   push ecx
// 00636eb6  55                   push ebp
// 00636eb7  8bcf                 mov ecx, edi
// 00636eb9  c644243801           mov byte ptr [esp + 0x38], 1
// 00636ebe  e83d10deff           call 0x417f00
// 00636ec3  6a01                 push 1
// 00636ec5  8bcf                 mov ecx, edi
// 00636ec7  8bd8                 mov ebx, eax
// 00636ec9  e8f2bd0400           call 0x682cc0
// 00636ece  895d04               mov dword ptr [ebp + 4], ebx
// 00636ed1  8b4304               mov eax, dword ptr [ebx + 4]
// 00636ed4  8918                 mov dword ptr [eax], ebx
// 00636ed6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00636eda  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00636edf  85c9                 test ecx, ecx
// 00636ee1  7408                 je 0x636eeb
// 00636ee3  8b11                 mov edx, dword ptr [ecx]
// 00636ee5  8b02                 mov eax, dword ptr [edx]
// 00636ee7  6a01                 push 1
// 00636ee9  ffd0                 call eax
// 00636eeb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00636eef  5f                   pop edi
// 00636ef0  8bc6                 mov eax, esi
// 00636ef2  5e                   pop esi
// 00636ef3  5d                   pop ebp
// 00636ef4  5b                   pop ebx
// 00636ef5  64890d00000000       mov dword ptr fs:[0], ecx
// 00636efc  83c420               add esp, 0x20
// 00636eff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
