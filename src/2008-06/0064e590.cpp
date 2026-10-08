// roc 2008-06 0064e590  unit: RBX::P8Camera::?$GetSetImpl  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e590
//
// 0064e590  6aff                 push -1
// 0064e592  6830a17d00           push 0x7da130
// 0064e597  64a100000000         mov eax, dword ptr fs:[0]
// 0064e59d  50                   push eax
// 0064e59e  64892500000000       mov dword ptr fs:[0], esp
// 0064e5a5  83ec14               sub esp, 0x14
// 0064e5a8  53                   push ebx
// 0064e5a9  55                   push ebp
// 0064e5aa  56                   push esi
// 0064e5ab  8bf1                 mov esi, ecx
// 0064e5ad  57                   push edi
// 0064e5ae  89742410             mov dword ptr [esp + 0x10], esi
// 0064e5b2  e83902fbff           call 0x5fe7f0
// 0064e5b7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0064e5bb  51                   push ecx
// 0064e5bc  50                   push eax
// 0064e5bd  8bce                 mov ecx, esi
// 0064e5bf  e8ecd4f1ff           call 0x56bab0
// 0064e5c4  8b542438             mov edx, dword ptr [esp + 0x38]
// 0064e5c8  6aff                 push -1
// 0064e5ca  52                   push edx
// 0064e5cb  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0064e5d3  c706acb38400         mov dword ptr [esi], 0x84b3ac
// 0064e5d9  e8b259f0ff           call 0x553f90
// 0064e5de  83c408               add esp, 8
// 0064e5e1  89442414             mov dword ptr [esp + 0x14], eax
// 0064e5e5  e806e8f1ff           call 0x56cdf0
// 0064e5ea  8d4c241c             lea ecx, [esp + 0x1c]
// 0064e5ee  89442418             mov dword ptr [esp + 0x18], eax
// 0064e5f2  e8c964f4ff           call 0x594ac0
// 0064e5f7  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0064e5fa  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0064e5fd  8d7e18               lea edi, [esi + 0x18]
// 0064e600  8d442414             lea eax, [esp + 0x14]
// 0064e604  50                   push eax
// 0064e605  51                   push ecx
// 0064e606  55                   push ebp
// 0064e607  8bcf                 mov ecx, edi
// 0064e609  c644243801           mov byte ptr [esp + 0x38], 1
// 0064e60e  e8ed98dcff           call 0x417f00
// 0064e613  6a01                 push 1
// 0064e615  8bcf                 mov ecx, edi
// 0064e617  8bd8                 mov ebx, eax
// 0064e619  e8a2460300           call 0x682cc0
// 0064e61e  895d04               mov dword ptr [ebp + 4], ebx
// 0064e621  8b4304               mov eax, dword ptr [ebx + 4]
// 0064e624  8918                 mov dword ptr [eax], ebx
// 0064e626  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064e62a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0064e62f  85c9                 test ecx, ecx
// 0064e631  7408                 je 0x64e63b
// 0064e633  8b11                 mov edx, dword ptr [ecx]
// 0064e635  8b02                 mov eax, dword ptr [edx]
// 0064e637  6a01                 push 1
// 0064e639  ffd0                 call eax
// 0064e63b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0064e63f  5f                   pop edi
// 0064e640  8bc6                 mov eax, esi
// 0064e642  5e                   pop esi
// 0064e643  5d                   pop ebp
// 0064e644  5b                   pop ebx
// 0064e645  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e64c  83c420               add esp, 0x20
// 0064e64f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
