// roc 2008-06 004a02e0  unit: RBX::Network::VClient::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a02e0
//
// 004a02e0  6aff                 push -1
// 004a02e2  6830a17d00           push 0x7da130
// 004a02e7  64a100000000         mov eax, dword ptr fs:[0]
// 004a02ed  50                   push eax
// 004a02ee  64892500000000       mov dword ptr fs:[0], esp
// 004a02f5  83ec14               sub esp, 0x14
// 004a02f8  53                   push ebx
// 004a02f9  55                   push ebp
// 004a02fa  56                   push esi
// 004a02fb  8bf1                 mov esi, ecx
// 004a02fd  57                   push edi
// 004a02fe  89742410             mov dword ptr [esp + 0x10], esi
// 004a0302  e829e8ffff           call 0x49eb30
// 004a0307  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004a030b  51                   push ecx
// 004a030c  50                   push eax
// 004a030d  8bce                 mov ecx, esi
// 004a030f  e89cb70c00           call 0x56bab0
// 004a0314  8b542438             mov edx, dword ptr [esp + 0x38]
// 004a0318  6aff                 push -1
// 004a031a  52                   push edx
// 004a031b  c744243400000000     mov dword ptr [esp + 0x34], 0
// 004a0323  c706d0308200         mov dword ptr [esi], 0x8230d0
// 004a0329  e8623c0b00           call 0x553f90
// 004a032e  83c408               add esp, 8
// 004a0331  89442414             mov dword ptr [esp + 0x14], eax
// 004a0335  e8b6ca0c00           call 0x56cdf0
// 004a033a  8d4c241c             lea ecx, [esp + 0x1c]
// 004a033e  89442418             mov dword ptr [esp + 0x18], eax
// 004a0342  e879470f00           call 0x594ac0
// 004a0347  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 004a034a  8b4d04               mov ecx, dword ptr [ebp + 4]
// 004a034d  8d7e18               lea edi, [esi + 0x18]
// 004a0350  8d442414             lea eax, [esp + 0x14]
// 004a0354  50                   push eax
// 004a0355  51                   push ecx
// 004a0356  55                   push ebp
// 004a0357  8bcf                 mov ecx, edi
// 004a0359  c644243801           mov byte ptr [esp + 0x38], 1
// 004a035e  e89d7bf7ff           call 0x417f00
// 004a0363  6a01                 push 1
// 004a0365  8bcf                 mov ecx, edi
// 004a0367  8bd8                 mov ebx, eax
// 004a0369  e852291e00           call 0x682cc0
// 004a036e  895d04               mov dword ptr [ebp + 4], ebx
// 004a0371  8b4304               mov eax, dword ptr [ebx + 4]
// 004a0374  8918                 mov dword ptr [eax], ebx
// 004a0376  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004a037a  c644242c00           mov byte ptr [esp + 0x2c], 0
// 004a037f  85c9                 test ecx, ecx
// 004a0381  7408                 je 0x4a038b
// 004a0383  8b11                 mov edx, dword ptr [ecx]
// 004a0385  8b02                 mov eax, dword ptr [edx]
// 004a0387  6a01                 push 1
// 004a0389  ffd0                 call eax
// 004a038b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a038f  5f                   pop edi
// 004a0390  8bc6                 mov eax, esi
// 004a0392  5e                   pop esi
// 004a0393  5d                   pop ebp
// 004a0394  5b                   pop ebx
// 004a0395  64890d00000000       mov dword ptr fs:[0], ecx
// 004a039c  83c420               add esp, 0x20
// 004a039f  c20800               ret 8
// library rbxgs/util\RunStateOwner.cpp (function ??0?$SignalDesc@VRunService@RBX@@$$A6AXM@Z@Reflection@RBX@@QAE@PBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
