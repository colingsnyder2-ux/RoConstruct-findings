// roc 2007-08 005f5650  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5650
//
// 005f5650  6aff                 push -1
// 005f5652  6890b87500           push 0x75b890
// 005f5657  64a100000000         mov eax, dword ptr fs:[0]
// 005f565d  50                   push eax
// 005f565e  64892500000000       mov dword ptr fs:[0], esp
// 005f5665  83ec14               sub esp, 0x14
// 005f5668  53                   push ebx
// 005f5669  55                   push ebp
// 005f566a  56                   push esi
// 005f566b  8bf1                 mov esi, ecx
// 005f566d  57                   push edi
// 005f566e  89742410             mov dword ptr [esp + 0x10], esi
// 005f5672  e8c9e3ffff           call 0x5f3a40
// 005f5677  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f567b  51                   push ecx
// 005f567c  50                   push eax
// 005f567d  8bce                 mov ecx, esi
// 005f567f  e88cadf7ff           call 0x570410
// 005f5684  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f5688  6aff                 push -1
// 005f568a  52                   push edx
// 005f568b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f5693  c706240f7c00         mov dword ptr [esi], 0x7c0f24
// 005f5699  e8a272f3ff           call 0x52c940
// 005f569e  83c408               add esp, 8
// 005f56a1  89442414             mov dword ptr [esp + 0x14], eax
// 005f56a5  e8a684f7ff           call 0x56db50
// 005f56aa  8d4c241c             lea ecx, [esp + 0x1c]
// 005f56ae  89442418             mov dword ptr [esp + 0x18], eax
// 005f56b2  e8097df7ff           call 0x56d3c0
// 005f56b7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f56ba  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f56bd  8d7e18               lea edi, [esi + 0x18]
// 005f56c0  8d442414             lea eax, [esp + 0x14]
// 005f56c4  50                   push eax
// 005f56c5  51                   push ecx
// 005f56c6  55                   push ebp
// 005f56c7  8bcf                 mov ecx, edi
// 005f56c9  c644243801           mov byte ptr [esp + 0x38], 1
// 005f56ce  e86dfbe1ff           call 0x415240
// 005f56d3  6a01                 push 1
// 005f56d5  8bcf                 mov ecx, edi
// 005f56d7  8bd8                 mov ebx, eax
// 005f56d9  e892efe1ff           call 0x414670
// 005f56de  895d04               mov dword ptr [ebp + 4], ebx
// 005f56e1  8b4304               mov eax, dword ptr [ebx + 4]
// 005f56e4  8918                 mov dword ptr [eax], ebx
// 005f56e6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f56ea  85c9                 test ecx, ecx
// 005f56ec  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f56f1  7408                 je 0x5f56fb
// 005f56f3  8b11                 mov edx, dword ptr [ecx]
// 005f56f5  8b02                 mov eax, dword ptr [edx]
// 005f56f7  6a01                 push 1
// 005f56f9  ffd0                 call eax
// 005f56fb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f56ff  5f                   pop edi
// 005f5700  8bc6                 mov eax, esi
// 005f5702  5e                   pop esi
// 005f5703  5d                   pop ebp
// 005f5704  5b                   pop ebx
// 005f5705  64890d00000000       mov dword ptr fs:[0], ecx
// 005f570c  83c420               add esp, 0x20
// 005f570f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
