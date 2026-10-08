// roc 2008-06 005e1490  unit: RBX::VLighting::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1490
//
// 005e1490  6aff                 push -1
// 005e1492  6830a17d00           push 0x7da130
// 005e1497  64a100000000         mov eax, dword ptr fs:[0]
// 005e149d  50                   push eax
// 005e149e  64892500000000       mov dword ptr fs:[0], esp
// 005e14a5  83ec14               sub esp, 0x14
// 005e14a8  53                   push ebx
// 005e14a9  55                   push ebp
// 005e14aa  56                   push esi
// 005e14ab  8bf1                 mov esi, ecx
// 005e14ad  57                   push edi
// 005e14ae  89742410             mov dword ptr [esp + 0x10], esi
// 005e14b2  e849fcffff           call 0x5e1100
// 005e14b7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e14bb  51                   push ecx
// 005e14bc  50                   push eax
// 005e14bd  8bce                 mov ecx, esi
// 005e14bf  e8eca5f8ff           call 0x56bab0
// 005e14c4  8b542438             mov edx, dword ptr [esp + 0x38]
// 005e14c8  6aff                 push -1
// 005e14ca  52                   push edx
// 005e14cb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005e14d3  c706f0dd8300         mov dword ptr [esi], 0x83ddf0
// 005e14d9  e8b22af7ff           call 0x553f90
// 005e14de  83c408               add esp, 8
// 005e14e1  89442414             mov dword ptr [esp + 0x14], eax
// 005e14e5  e846b7f8ff           call 0x56cc30
// 005e14ea  8d4c241c             lea ecx, [esp + 0x1c]
// 005e14ee  89442418             mov dword ptr [esp + 0x18], eax
// 005e14f2  e8c935fbff           call 0x594ac0
// 005e14f7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 005e14fa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005e14fd  8d7e18               lea edi, [esi + 0x18]
// 005e1500  8d442414             lea eax, [esp + 0x14]
// 005e1504  50                   push eax
// 005e1505  51                   push ecx
// 005e1506  55                   push ebp
// 005e1507  8bcf                 mov ecx, edi
// 005e1509  c644243801           mov byte ptr [esp + 0x38], 1
// 005e150e  e8ed69e3ff           call 0x417f00
// 005e1513  6a01                 push 1
// 005e1515  8bcf                 mov ecx, edi
// 005e1517  8bd8                 mov ebx, eax
// 005e1519  e8a2170a00           call 0x682cc0
// 005e151e  895d04               mov dword ptr [ebp + 4], ebx
// 005e1521  8b4304               mov eax, dword ptr [ebx + 4]
// 005e1524  8918                 mov dword ptr [eax], ebx
// 005e1526  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e152a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005e152f  85c9                 test ecx, ecx
// 005e1531  7408                 je 0x5e153b
// 005e1533  8b11                 mov edx, dword ptr [ecx]
// 005e1535  8b02                 mov eax, dword ptr [edx]
// 005e1537  6a01                 push 1
// 005e1539  ffd0                 call eax
// 005e153b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005e153f  5f                   pop edi
// 005e1540  8bc6                 mov eax, esi
// 005e1542  5e                   pop esi
// 005e1543  5d                   pop ebp
// 005e1544  5b                   pop ebx
// 005e1545  64890d00000000       mov dword ptr fs:[0], ecx
// 005e154c  83c420               add esp, 0x20
// 005e154f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
