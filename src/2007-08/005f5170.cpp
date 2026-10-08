// roc 2007-08 005f5170  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5170
//
// 005f5170  6aff                 push -1
// 005f5172  6890b87500           push 0x75b890
// 005f5177  64a100000000         mov eax, dword ptr fs:[0]
// 005f517d  50                   push eax
// 005f517e  64892500000000       mov dword ptr fs:[0], esp
// 005f5185  83ec14               sub esp, 0x14
// 005f5188  53                   push ebx
// 005f5189  55                   push ebp
// 005f518a  56                   push esi
// 005f518b  8bf1                 mov esi, ecx
// 005f518d  57                   push edi
// 005f518e  89742410             mov dword ptr [esp + 0x10], esi
// 005f5192  e809e6ffff           call 0x5f37a0
// 005f5197  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f519b  51                   push ecx
// 005f519c  50                   push eax
// 005f519d  8bce                 mov ecx, esi
// 005f519f  e86cb2f7ff           call 0x570410
// 005f51a4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f51a8  6aff                 push -1
// 005f51aa  52                   push edx
// 005f51ab  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f51b3  c706c40e7c00         mov dword ptr [esi], 0x7c0ec4
// 005f51b9  e88277f3ff           call 0x52c940
// 005f51be  83c408               add esp, 8
// 005f51c1  89442414             mov dword ptr [esp + 0x14], eax
// 005f51c5  e80686f7ff           call 0x56d7d0
// 005f51ca  8d4c241c             lea ecx, [esp + 0x1c]
// 005f51ce  89442418             mov dword ptr [esp + 0x18], eax
// 005f51d2  e8e981f7ff           call 0x56d3c0
// 005f51d7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f51da  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f51dd  8d7e18               lea edi, [esi + 0x18]
// 005f51e0  8d442414             lea eax, [esp + 0x14]
// 005f51e4  50                   push eax
// 005f51e5  51                   push ecx
// 005f51e6  55                   push ebp
// 005f51e7  8bcf                 mov ecx, edi
// 005f51e9  c644243801           mov byte ptr [esp + 0x38], 1
// 005f51ee  e84d00e2ff           call 0x415240
// 005f51f3  6a01                 push 1
// 005f51f5  8bcf                 mov ecx, edi
// 005f51f7  8bd8                 mov ebx, eax
// 005f51f9  e872f4e1ff           call 0x414670
// 005f51fe  895d04               mov dword ptr [ebp + 4], ebx
// 005f5201  8b4304               mov eax, dword ptr [ebx + 4]
// 005f5204  8918                 mov dword ptr [eax], ebx
// 005f5206  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f520a  85c9                 test ecx, ecx
// 005f520c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f5211  7408                 je 0x5f521b
// 005f5213  8b11                 mov edx, dword ptr [ecx]
// 005f5215  8b02                 mov eax, dword ptr [edx]
// 005f5217  6a01                 push 1
// 005f5219  ffd0                 call eax
// 005f521b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f521f  5f                   pop edi
// 005f5220  8bc6                 mov eax, esi
// 005f5222  5e                   pop esi
// 005f5223  5d                   pop ebp
// 005f5224  5b                   pop ebx
// 005f5225  64890d00000000       mov dword ptr fs:[0], ecx
// 005f522c  83c420               add esp, 0x20
// 005f522f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
