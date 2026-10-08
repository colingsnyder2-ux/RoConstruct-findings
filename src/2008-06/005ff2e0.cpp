// roc 2008-06 005ff2e0  unit: RBX::Tool  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ff2e0
//
// 005ff2e0  6aff                 push -1
// 005ff2e2  6830a17d00           push 0x7da130
// 005ff2e7  64a100000000         mov eax, dword ptr fs:[0]
// 005ff2ed  50                   push eax
// 005ff2ee  64892500000000       mov dword ptr fs:[0], esp
// 005ff2f5  83ec14               sub esp, 0x14
// 005ff2f8  53                   push ebx
// 005ff2f9  55                   push ebp
// 005ff2fa  56                   push esi
// 005ff2fb  8bf1                 mov esi, ecx
// 005ff2fd  57                   push edi
// 005ff2fe  89742410             mov dword ptr [esp + 0x10], esi
// 005ff302  e80945fcff           call 0x5c3810
// 005ff307  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005ff30b  51                   push ecx
// 005ff30c  50                   push eax
// 005ff30d  8bce                 mov ecx, esi
// 005ff30f  e89cc7f6ff           call 0x56bab0
// 005ff314  8b542438             mov edx, dword ptr [esp + 0x38]
// 005ff318  6aff                 push -1
// 005ff31a  52                   push edx
// 005ff31b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ff323  c706401c8400         mov dword ptr [esi], 0x841c40
// 005ff329  e8624cf5ff           call 0x553f90
// 005ff32e  83c408               add esp, 8
// 005ff331  89442414             mov dword ptr [esp + 0x14], eax
// 005ff335  e8a6d7f6ff           call 0x56cae0
// 005ff33a  8d4c241c             lea ecx, [esp + 0x1c]
// 005ff33e  89442418             mov dword ptr [esp + 0x18], eax
// 005ff342  e87957f9ff           call 0x594ac0
// 005ff347  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 005ff34a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005ff34d  8d7e18               lea edi, [esi + 0x18]
// 005ff350  8d442414             lea eax, [esp + 0x14]
// 005ff354  50                   push eax
// 005ff355  51                   push ecx
// 005ff356  55                   push ebp
// 005ff357  8bcf                 mov ecx, edi
// 005ff359  c644243801           mov byte ptr [esp + 0x38], 1
// 005ff35e  e89d8be1ff           call 0x417f00
// 005ff363  6a01                 push 1
// 005ff365  8bcf                 mov ecx, edi
// 005ff367  8bd8                 mov ebx, eax
// 005ff369  e852390800           call 0x682cc0
// 005ff36e  895d04               mov dword ptr [ebp + 4], ebx
// 005ff371  8b4304               mov eax, dword ptr [ebx + 4]
// 005ff374  8918                 mov dword ptr [eax], ebx
// 005ff376  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ff37a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005ff37f  85c9                 test ecx, ecx
// 005ff381  7408                 je 0x5ff38b
// 005ff383  8b11                 mov edx, dword ptr [ecx]
// 005ff385  8b02                 mov eax, dword ptr [edx]
// 005ff387  6a01                 push 1
// 005ff389  ffd0                 call eax
// 005ff38b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005ff38f  5f                   pop edi
// 005ff390  8bc6                 mov eax, esi
// 005ff392  5e                   pop esi
// 005ff393  5d                   pop ebp
// 005ff394  5b                   pop ebx
// 005ff395  64890d00000000       mov dword ptr fs:[0], ecx
// 005ff39c  83c420               add esp, 0x20
// 005ff39f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
