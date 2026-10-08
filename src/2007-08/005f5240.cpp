// roc 2007-08 005f5240  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5240
//
// 005f5240  6aff                 push -1
// 005f5242  6890b87500           push 0x75b890
// 005f5247  64a100000000         mov eax, dword ptr fs:[0]
// 005f524d  50                   push eax
// 005f524e  64892500000000       mov dword ptr fs:[0], esp
// 005f5255  83ec14               sub esp, 0x14
// 005f5258  53                   push ebx
// 005f5259  55                   push ebp
// 005f525a  56                   push esi
// 005f525b  8bf1                 mov esi, ecx
// 005f525d  57                   push edi
// 005f525e  89742410             mov dword ptr [esp + 0x10], esi
// 005f5262  e8a9e5ffff           call 0x5f3810
// 005f5267  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f526b  51                   push ecx
// 005f526c  50                   push eax
// 005f526d  8bce                 mov ecx, esi
// 005f526f  e89cb1f7ff           call 0x570410
// 005f5274  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f5278  6aff                 push -1
// 005f527a  52                   push edx
// 005f527b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f5283  c706d40e7c00         mov dword ptr [esi], 0x7c0ed4
// 005f5289  e8b276f3ff           call 0x52c940
// 005f528e  83c408               add esp, 8
// 005f5291  89442414             mov dword ptr [esp + 0x14], eax
// 005f5295  e8a685f7ff           call 0x56d840
// 005f529a  8d4c241c             lea ecx, [esp + 0x1c]
// 005f529e  89442418             mov dword ptr [esp + 0x18], eax
// 005f52a2  e81981f7ff           call 0x56d3c0
// 005f52a7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f52aa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f52ad  8d7e18               lea edi, [esi + 0x18]
// 005f52b0  8d442414             lea eax, [esp + 0x14]
// 005f52b4  50                   push eax
// 005f52b5  51                   push ecx
// 005f52b6  55                   push ebp
// 005f52b7  8bcf                 mov ecx, edi
// 005f52b9  c644243801           mov byte ptr [esp + 0x38], 1
// 005f52be  e87dffe1ff           call 0x415240
// 005f52c3  6a01                 push 1
// 005f52c5  8bcf                 mov ecx, edi
// 005f52c7  8bd8                 mov ebx, eax
// 005f52c9  e8a2f3e1ff           call 0x414670
// 005f52ce  895d04               mov dword ptr [ebp + 4], ebx
// 005f52d1  8b4304               mov eax, dword ptr [ebx + 4]
// 005f52d4  8918                 mov dword ptr [eax], ebx
// 005f52d6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f52da  85c9                 test ecx, ecx
// 005f52dc  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f52e1  7408                 je 0x5f52eb
// 005f52e3  8b11                 mov edx, dword ptr [ecx]
// 005f52e5  8b02                 mov eax, dword ptr [edx]
// 005f52e7  6a01                 push 1
// 005f52e9  ffd0                 call eax
// 005f52eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f52ef  5f                   pop edi
// 005f52f0  8bc6                 mov eax, esi
// 005f52f2  5e                   pop esi
// 005f52f3  5d                   pop ebp
// 005f52f4  5b                   pop ebx
// 005f52f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f52fc  83c420               add esp, 0x20
// 005f52ff  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
