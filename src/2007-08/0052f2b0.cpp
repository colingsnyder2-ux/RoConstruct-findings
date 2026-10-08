// roc 2007-08 0052f2b0  unit: RBX::VRunService::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052f2b0
//
// 0052f2b0  6aff                 push -1
// 0052f2b2  6890b87500           push 0x75b890
// 0052f2b7  64a100000000         mov eax, dword ptr fs:[0]
// 0052f2bd  50                   push eax
// 0052f2be  64892500000000       mov dword ptr fs:[0], esp
// 0052f2c5  83ec14               sub esp, 0x14
// 0052f2c8  53                   push ebx
// 0052f2c9  55                   push ebp
// 0052f2ca  56                   push esi
// 0052f2cb  8bf1                 mov esi, ecx
// 0052f2cd  57                   push edi
// 0052f2ce  89742410             mov dword ptr [esp + 0x10], esi
// 0052f2d2  e849f9ffff           call 0x52ec20
// 0052f2d7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052f2db  51                   push ecx
// 0052f2dc  50                   push eax
// 0052f2dd  8bce                 mov ecx, esi
// 0052f2df  e82c110400           call 0x570410
// 0052f2e4  8b542438             mov edx, dword ptr [esp + 0x38]
// 0052f2e8  6aff                 push -1
// 0052f2ea  52                   push edx
// 0052f2eb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0052f2f3  c7061c4c7a00         mov dword ptr [esi], 0x7a4c1c
// 0052f2f9  e842d6ffff           call 0x52c940
// 0052f2fe  83c408               add esp, 8
// 0052f301  89442414             mov dword ptr [esp + 0x14], eax
// 0052f305  e8a6e50300           call 0x56d8b0
// 0052f30a  8d4c241c             lea ecx, [esp + 0x1c]
// 0052f30e  89442418             mov dword ptr [esp + 0x18], eax
// 0052f312  e8a9e00300           call 0x56d3c0
// 0052f317  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0052f31a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0052f31d  8d7e18               lea edi, [esi + 0x18]
// 0052f320  8d442414             lea eax, [esp + 0x14]
// 0052f324  50                   push eax
// 0052f325  51                   push ecx
// 0052f326  55                   push ebp
// 0052f327  8bcf                 mov ecx, edi
// 0052f329  c644243801           mov byte ptr [esp + 0x38], 1
// 0052f32e  e80d5feeff           call 0x415240
// 0052f333  6a01                 push 1
// 0052f335  8bcf                 mov ecx, edi
// 0052f337  8bd8                 mov ebx, eax
// 0052f339  e83253eeff           call 0x414670
// 0052f33e  895d04               mov dword ptr [ebp + 4], ebx
// 0052f341  8b4304               mov eax, dword ptr [ebx + 4]
// 0052f344  8918                 mov dword ptr [eax], ebx
// 0052f346  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052f34a  85c9                 test ecx, ecx
// 0052f34c  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0052f351  7408                 je 0x52f35b
// 0052f353  8b11                 mov edx, dword ptr [ecx]
// 0052f355  8b02                 mov eax, dword ptr [edx]
// 0052f357  6a01                 push 1
// 0052f359  ffd0                 call eax
// 0052f35b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052f35f  5f                   pop edi
// 0052f360  8bc6                 mov eax, esi
// 0052f362  5e                   pop esi
// 0052f363  5d                   pop ebp
// 0052f364  5b                   pop ebx
// 0052f365  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f36c  83c420               add esp, 0x20
// 0052f36f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
