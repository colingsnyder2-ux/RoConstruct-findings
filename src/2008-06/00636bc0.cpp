// roc 2008-06 00636bc0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00636bc0
//
// 00636bc0  6aff                 push -1
// 00636bc2  6830a17d00           push 0x7da130
// 00636bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00636bcd  50                   push eax
// 00636bce  64892500000000       mov dword ptr fs:[0], esp
// 00636bd5  83ec14               sub esp, 0x14
// 00636bd8  53                   push ebx
// 00636bd9  55                   push ebp
// 00636bda  56                   push esi
// 00636bdb  8bf1                 mov esi, ecx
// 00636bdd  57                   push edi
// 00636bde  89742410             mov dword ptr [esp + 0x10], esi
// 00636be2  e869ffffff           call 0x636b50
// 00636be7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00636beb  51                   push ecx
// 00636bec  50                   push eax
// 00636bed  8bce                 mov ecx, esi
// 00636bef  e8bc4ef3ff           call 0x56bab0
// 00636bf4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00636bf8  6aff                 push -1
// 00636bfa  52                   push edx
// 00636bfb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00636c03  c706548b8400         mov dword ptr [esi], 0x848b54
// 00636c09  e882d3f1ff           call 0x553f90
// 00636c0e  83c408               add esp, 8
// 00636c11  89442414             mov dword ptr [esp + 0x14], eax
// 00636c15  e8f660f3ff           call 0x56cd10
// 00636c1a  8d4c241c             lea ecx, [esp + 0x1c]
// 00636c1e  89442418             mov dword ptr [esp + 0x18], eax
// 00636c22  e899def5ff           call 0x594ac0
// 00636c27  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 00636c2a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00636c2d  8d7e18               lea edi, [esi + 0x18]
// 00636c30  8d442414             lea eax, [esp + 0x14]
// 00636c34  50                   push eax
// 00636c35  51                   push ecx
// 00636c36  55                   push ebp
// 00636c37  8bcf                 mov ecx, edi
// 00636c39  c644243801           mov byte ptr [esp + 0x38], 1
// 00636c3e  e8bd12deff           call 0x417f00
// 00636c43  6a01                 push 1
// 00636c45  8bcf                 mov ecx, edi
// 00636c47  8bd8                 mov ebx, eax
// 00636c49  e872c00400           call 0x682cc0
// 00636c4e  895d04               mov dword ptr [ebp + 4], ebx
// 00636c51  8b4304               mov eax, dword ptr [ebx + 4]
// 00636c54  8918                 mov dword ptr [eax], ebx
// 00636c56  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00636c5a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00636c5f  85c9                 test ecx, ecx
// 00636c61  7408                 je 0x636c6b
// 00636c63  8b11                 mov edx, dword ptr [ecx]
// 00636c65  8b02                 mov eax, dword ptr [edx]
// 00636c67  6a01                 push 1
// 00636c69  ffd0                 call eax
// 00636c6b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00636c6f  5f                   pop edi
// 00636c70  8bc6                 mov eax, esi
// 00636c72  5e                   pop esi
// 00636c73  5d                   pop ebp
// 00636c74  5b                   pop ebx
// 00636c75  64890d00000000       mov dword ptr fs:[0], ecx
// 00636c7c  83c420               add esp, 0x20
// 00636c7f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
