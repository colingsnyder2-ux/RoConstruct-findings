// roc 2007-08 005f54b0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f54b0
//
// 005f54b0  6aff                 push -1
// 005f54b2  6890b87500           push 0x75b890
// 005f54b7  64a100000000         mov eax, dword ptr fs:[0]
// 005f54bd  50                   push eax
// 005f54be  64892500000000       mov dword ptr fs:[0], esp
// 005f54c5  83ec14               sub esp, 0x14
// 005f54c8  53                   push ebx
// 005f54c9  55                   push ebp
// 005f54ca  56                   push esi
// 005f54cb  8bf1                 mov esi, ecx
// 005f54cd  57                   push edi
// 005f54ce  89742410             mov dword ptr [esp + 0x10], esi
// 005f54d2  e889e4ffff           call 0x5f3960
// 005f54d7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f54db  51                   push ecx
// 005f54dc  50                   push eax
// 005f54dd  8bce                 mov ecx, esi
// 005f54df  e82caff7ff           call 0x570410
// 005f54e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f54e8  6aff                 push -1
// 005f54ea  52                   push edx
// 005f54eb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f54f3  c706040f7c00         mov dword ptr [esi], 0x7c0f04
// 005f54f9  e84274f3ff           call 0x52c940
// 005f54fe  83c408               add esp, 8
// 005f5501  89442414             mov dword ptr [esp + 0x14], eax
// 005f5505  e86685f7ff           call 0x56da70
// 005f550a  8d4c241c             lea ecx, [esp + 0x1c]
// 005f550e  89442418             mov dword ptr [esp + 0x18], eax
// 005f5512  e8a97ef7ff           call 0x56d3c0
// 005f5517  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f551a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f551d  8d7e18               lea edi, [esi + 0x18]
// 005f5520  8d442414             lea eax, [esp + 0x14]
// 005f5524  50                   push eax
// 005f5525  51                   push ecx
// 005f5526  55                   push ebp
// 005f5527  8bcf                 mov ecx, edi
// 005f5529  c644243801           mov byte ptr [esp + 0x38], 1
// 005f552e  e80dfde1ff           call 0x415240
// 005f5533  6a01                 push 1
// 005f5535  8bcf                 mov ecx, edi
// 005f5537  8bd8                 mov ebx, eax
// 005f5539  e832f1e1ff           call 0x414670
// 005f553e  895d04               mov dword ptr [ebp + 4], ebx
// 005f5541  8b4304               mov eax, dword ptr [ebx + 4]
// 005f5544  8918                 mov dword ptr [eax], ebx
// 005f5546  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f554a  85c9                 test ecx, ecx
// 005f554c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f5551  7408                 je 0x5f555b
// 005f5553  8b11                 mov edx, dword ptr [ecx]
// 005f5555  8b02                 mov eax, dword ptr [edx]
// 005f5557  6a01                 push 1
// 005f5559  ffd0                 call eax
// 005f555b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f555f  5f                   pop edi
// 005f5560  8bc6                 mov eax, esi
// 005f5562  5e                   pop esi
// 005f5563  5d                   pop ebp
// 005f5564  5b                   pop ebx
// 005f5565  64890d00000000       mov dword ptr fs:[0], ecx
// 005f556c  83c420               add esp, 0x20
// 005f556f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
