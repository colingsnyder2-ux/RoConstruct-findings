// roc 2007-03 005e3590  unit: seg_005e0000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e3590
//
// 005e3590  6aff                 push -1
// 005e3592  6820937500           push 0x759320
// 005e3597  64a100000000         mov eax, dword ptr fs:[0]
// 005e359d  50                   push eax
// 005e359e  64892500000000       mov dword ptr fs:[0], esp
// 005e35a5  83ec14               sub esp, 0x14
// 005e35a8  53                   push ebx
// 005e35a9  55                   push ebp
// 005e35aa  56                   push esi
// 005e35ab  8bf1                 mov esi, ecx
// 005e35ad  57                   push edi
// 005e35ae  89742410             mov dword ptr [esp + 0x10], esi
// 005e35b2  e8f9e5ffff           call 0x5e1bb0
// 005e35b7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e35bb  51                   push ecx
// 005e35bc  50                   push eax
// 005e35bd  8bce                 mov ecx, esi
// 005e35bf  e86ccdf8ff           call 0x570330
// 005e35c4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e35c8  6aff                 push -1
// 005e35ca  52                   push edx
// 005e35cb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e35d3  c706f8eb7b00         mov dword ptr [esi], 0x7bebf8
// 005e35d9  e802a3f4ff           call 0x52d8e0
// 005e35de  83c408               add esp, 8
// 005e35e1  89442414             mov dword ptr [esp + 0x14], eax
// 005e35e5  e8569cf8ff           call 0x56d240
// 005e35ea  8d4c241c             lea ecx, [esp + 0x1c]
// 005e35ee  89442418             mov dword ptr [esp + 0x18], eax
// 005e35f2  e85998f8ff           call 0x56ce50
// 005e35f7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 005e35fa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e35fd  8d7e18               lea edi, [esi + 0x18]
// 005e3600  8d442414             lea eax, [esp + 0x14]
// 005e3604  50                   push eax
// 005e3605  51                   push ecx
// 005e3606  55                   push ebp
// 005e3607  8bcf                 mov ecx, edi
// 005e3609  c644243801           mov byte ptr [esp + 0x38], 1
// 005e360e  e88d2ce3ff           call 0x4162a0
// 005e3613  6a01                 push 1
// 005e3615  8bcf                 mov ecx, edi
// 005e3617  8bd8                 mov ebx, eax
// 005e3619  e86220e3ff           call 0x415680
// 005e361e  895d04               mov dword ptr [ebp + 4], ebx
// 005e3621  8b4304               mov eax, dword ptr [ebx + 4]
// 005e3624  8918                 mov dword ptr [eax], ebx
// 005e3626  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e362a  85c9                 test ecx, ecx
// 005e362c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e3631  7408                 je 0x5e363b
// 005e3633  8b11                 mov edx, dword ptr [ecx]
// 005e3635  8b02                 mov eax, dword ptr [edx]
// 005e3637  6a01                 push 1
// 005e3639  ffd0                 call eax
// 005e363b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e363f  5f                   pop edi
// 005e3640  8bc6                 mov eax, esi
// 005e3642  5e                   pop esi
// 005e3643  5d                   pop ebp
// 005e3644  5b                   pop ebx
// 005e3645  64890d00000000       mov dword ptr fs:[0], ecx
// 005e364c  83c420               add esp, 0x20
// 005e364f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
