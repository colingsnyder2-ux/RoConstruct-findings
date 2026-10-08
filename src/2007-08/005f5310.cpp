// roc 2007-08 005f5310  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5310
//
// 005f5310  6aff                 push -1
// 005f5312  6890b87500           push 0x75b890
// 005f5317  64a100000000         mov eax, dword ptr fs:[0]
// 005f531d  50                   push eax
// 005f531e  64892500000000       mov dword ptr fs:[0], esp
// 005f5325  83ec14               sub esp, 0x14
// 005f5328  53                   push ebx
// 005f5329  55                   push ebp
// 005f532a  56                   push esi
// 005f532b  8bf1                 mov esi, ecx
// 005f532d  57                   push edi
// 005f532e  89742410             mov dword ptr [esp + 0x10], esi
// 005f5332  e849e5ffff           call 0x5f3880
// 005f5337  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f533b  51                   push ecx
// 005f533c  50                   push eax
// 005f533d  8bce                 mov ecx, esi
// 005f533f  e8ccb0f7ff           call 0x570410
// 005f5344  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f5348  6aff                 push -1
// 005f534a  52                   push edx
// 005f534b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f5353  c706e40e7c00         mov dword ptr [esi], 0x7c0ee4
// 005f5359  e8e275f3ff           call 0x52c940
// 005f535e  83c408               add esp, 8
// 005f5361  89442414             mov dword ptr [esp + 0x14], eax
// 005f5365  e84685f7ff           call 0x56d8b0
// 005f536a  8d4c241c             lea ecx, [esp + 0x1c]
// 005f536e  89442418             mov dword ptr [esp + 0x18], eax
// 005f5372  e84980f7ff           call 0x56d3c0
// 005f5377  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f537a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f537d  8d7e18               lea edi, [esi + 0x18]
// 005f5380  8d442414             lea eax, [esp + 0x14]
// 005f5384  50                   push eax
// 005f5385  51                   push ecx
// 005f5386  55                   push ebp
// 005f5387  8bcf                 mov ecx, edi
// 005f5389  c644243801           mov byte ptr [esp + 0x38], 1
// 005f538e  e8adfee1ff           call 0x415240
// 005f5393  6a01                 push 1
// 005f5395  8bcf                 mov ecx, edi
// 005f5397  8bd8                 mov ebx, eax
// 005f5399  e8d2f2e1ff           call 0x414670
// 005f539e  895d04               mov dword ptr [ebp + 4], ebx
// 005f53a1  8b4304               mov eax, dword ptr [ebx + 4]
// 005f53a4  8918                 mov dword ptr [eax], ebx
// 005f53a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f53aa  85c9                 test ecx, ecx
// 005f53ac  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f53b1  7408                 je 0x5f53bb
// 005f53b3  8b11                 mov edx, dword ptr [ecx]
// 005f53b5  8b02                 mov eax, dword ptr [edx]
// 005f53b7  6a01                 push 1
// 005f53b9  ffd0                 call eax
// 005f53bb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f53bf  5f                   pop edi
// 005f53c0  8bc6                 mov eax, esi
// 005f53c2  5e                   pop esi
// 005f53c3  5d                   pop ebp
// 005f53c4  5b                   pop ebx
// 005f53c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f53cc  83c420               add esp, 0x20
// 005f53cf  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
