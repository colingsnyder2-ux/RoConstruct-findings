// roc 2009-12 008b0230  unit: CXTPDockingPaneMiniWnd  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0230
//
// 008b0230  83ec2c               sub esp, 0x2c
// 008b0233  56                   push esi
// 008b0234  57                   push edi
// 008b0235  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008b0239  817f14f4240000       cmp dword ptr [edi + 0x14], 0x24f4
// 008b0240  8bf1                 mov esi, ecx
// 008b0242  740a                 je 0x8b024e
// 008b0244  5f                   pop edi
// 008b0245  33c0                 xor eax, eax
// 008b0247  5e                   pop esi
// 008b0248  83c42c               add esp, 0x2c
// 008b024b  c20400               ret 4
// 008b024e  55                   push ebp
// 008b024f  e86cf8ffff           call 0x8afac0
// 008b0254  8be8                 mov ebp, eax
// 008b0256  85ed                 test ebp, ebp
// 008b0258  0f84d8000000         je 0x8b0336
// 008b025e  53                   push ebx
// 008b025f  8d8ef8000000         lea ecx, [esi + 0xf8]
// 008b0265  c786f000000001000000 mov dword ptr [esi + 0xf0], 1
// 008b026f  e8cc050000           call 0x8b0840
// 008b0274  8b4f04               mov ecx, dword ptr [edi + 4]
// 008b0277  8b5708               mov edx, dword ptr [edi + 8]
// 008b027a  8bd8                 mov ebx, eax
// 008b027c  8b07                 mov eax, dword ptr [edi]
// 008b027e  8944242c             mov dword ptr [esp + 0x2c], eax
// 008b0282  8b470c               mov eax, dword ptr [edi + 0xc]
// 008b0285  894c2430             mov dword ptr [esp + 0x30], ecx
// 008b0289  56                   push esi
// 008b028a  8d4c2414             lea ecx, [esp + 0x14]
// 008b028e  89542438             mov dword ptr [esp + 0x38], edx
// 008b0292  8944243c             mov dword ptr [esp + 0x3c], eax
// 008b0296  e8d5aff9ff           call 0x84b270
// 008b029b  8bce                 mov ecx, esi
// 008b029d  e8d6610700           call 0x926478
// 008b02a2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b02a6  a900004000           test eax, 0x400000
// 008b02ab  51                   push ecx
// 008b02ac  8d442430             lea eax, [esp + 0x30]
// 008b02b0  741a                 je 0x8b02cc
// 008b02b2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b02b6  2b542438             sub edx, dword ptr [esp + 0x38]
// 008b02ba  2b542430             sub edx, dword ptr [esp + 0x30]
// 008b02be  52                   push edx
// 008b02bf  50                   push eax
// 008b02c0  ff156ccc9800         call dword ptr [0x98cc6c]
// 008b02c6  8b442434             mov eax, dword ptr [esp + 0x34]
// 008b02ca  eb10                 jmp 0x8b02dc
// 008b02cc  8b542414             mov edx, dword ptr [esp + 0x14]
// 008b02d0  52                   push edx
// 008b02d1  50                   push eax
// 008b02d2  ff156ccc9800         call dword ptr [0x98cc6c]
// 008b02d8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008b02dc  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008b02e0  6a00                 push 0
// 008b02e2  6a00                 push 0
// 008b02e4  894c2430             mov dword ptr [esp + 0x30], ecx
// 008b02e8  c7471801000000       mov dword ptr [edi + 0x18], 1
// 008b02ef  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b02f2  6885000000           push 0x85
// 008b02f7  896c242c             mov dword ptr [esp + 0x2c], ebp
// 008b02fb  8b2dc4cb9800         mov ebp, dword ptr [0x98cbc4]
// 008b0301  51                   push ecx
// 008b0302  89442434             mov dword ptr [esp + 0x34], eax
// 008b0306  ffd5                 call ebp
// 008b0308  8b13                 mov edx, dword ptr [ebx]
// 008b030a  8b9248010000         mov edx, dword ptr [edx + 0x148]
// 008b0310  8d442420             lea eax, [esp + 0x20]
// 008b0314  50                   push eax
// 008b0315  6a05                 push 5
// 008b0317  8bcb                 mov ecx, ebx
// 008b0319  ffd2                 call edx
// 008b031b  c7471800000000       mov dword ptr [edi + 0x18], 0
// 008b0322  8b7620               mov esi, dword ptr [esi + 0x20]
// 008b0325  5b                   pop ebx
// 008b0326  85f6                 test esi, esi
// 008b0328  740c                 je 0x8b0336
// 008b032a  6a00                 push 0
// 008b032c  6a00                 push 0
// 008b032e  6885000000           push 0x85
// 008b0333  56                   push esi
// 008b0334  ffd5                 call ebp
// 008b0336  5d                   pop ebp
// 008b0337  5f                   pop edi
// 008b0338  b801000000           mov eax, 1
// 008b033d  5e                   pop esi
// 008b033e  83c42c               add esp, 0x2c
// 008b0341  c20400               ret 4
// copied from an identical function in another client (function ?OnCaptionButtonDown@CXTPDockingPaneMiniWnd@@MAEHPAVCXTPDockingPaneCaptionButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneMiniWnd.cpp