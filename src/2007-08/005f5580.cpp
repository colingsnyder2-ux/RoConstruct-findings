// roc 2007-08 005f5580  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f5580
//
// 005f5580  6aff                 push -1
// 005f5582  6890b87500           push 0x75b890
// 005f5587  64a100000000         mov eax, dword ptr fs:[0]
// 005f558d  50                   push eax
// 005f558e  64892500000000       mov dword ptr fs:[0], esp
// 005f5595  83ec14               sub esp, 0x14
// 005f5598  53                   push ebx
// 005f5599  55                   push ebp
// 005f559a  56                   push esi
// 005f559b  8bf1                 mov esi, ecx
// 005f559d  57                   push edi
// 005f559e  89742410             mov dword ptr [esp + 0x10], esi
// 005f55a2  e829e4ffff           call 0x5f39d0
// 005f55a7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f55ab  51                   push ecx
// 005f55ac  50                   push eax
// 005f55ad  8bce                 mov ecx, esi
// 005f55af  e85caef7ff           call 0x570410
// 005f55b4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f55b8  6aff                 push -1
// 005f55ba  52                   push edx
// 005f55bb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f55c3  c706140f7c00         mov dword ptr [esi], 0x7c0f14
// 005f55c9  e87273f3ff           call 0x52c940
// 005f55ce  83c408               add esp, 8
// 005f55d1  89442414             mov dword ptr [esp + 0x14], eax
// 005f55d5  e8d6ecf7ff           call 0x5742b0
// 005f55da  8d4c241c             lea ecx, [esp + 0x1c]
// 005f55de  89442418             mov dword ptr [esp + 0x18], eax
// 005f55e2  e8d97df7ff           call 0x56d3c0
// 005f55e7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005f55ea  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005f55ed  8d7e18               lea edi, [esi + 0x18]
// 005f55f0  8d442414             lea eax, [esp + 0x14]
// 005f55f4  50                   push eax
// 005f55f5  51                   push ecx
// 005f55f6  55                   push ebp
// 005f55f7  8bcf                 mov ecx, edi
// 005f55f9  c644243801           mov byte ptr [esp + 0x38], 1
// 005f55fe  e83dfce1ff           call 0x415240
// 005f5603  6a01                 push 1
// 005f5605  8bcf                 mov ecx, edi
// 005f5607  8bd8                 mov ebx, eax
// 005f5609  e862f0e1ff           call 0x414670
// 005f560e  895d04               mov dword ptr [ebp + 4], ebx
// 005f5611  8b4304               mov eax, dword ptr [ebx + 4]
// 005f5614  8918                 mov dword ptr [eax], ebx
// 005f5616  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005f561a  85c9                 test ecx, ecx
// 005f561c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005f5621  7408                 je 0x5f562b
// 005f5623  8b11                 mov edx, dword ptr [ecx]
// 005f5625  8b02                 mov eax, dword ptr [edx]
// 005f5627  6a01                 push 1
// 005f5629  ffd0                 call eax
// 005f562b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f562f  5f                   pop edi
// 005f5630  8bc6                 mov eax, esi
// 005f5632  5e                   pop esi
// 005f5633  5d                   pop ebp
// 005f5634  5b                   pop ebx
// 005f5635  64890d00000000       mov dword ptr fs:[0], ecx
// 005f563c  83c420               add esp, 0x20
// 005f563f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
