// roc 2012-06 009eb760  unit: CXTPToolTipContext::CHTMLToolTip  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009eb760
//
// 009eb760  6aff                 push -1
// 009eb762  688d15ae00           push 0xae158d
// 009eb767  64a100000000         mov eax, dword ptr fs:[0]
// 009eb76d  50                   push eax
// 009eb76e  81ec5c010000         sub esp, 0x15c
// 009eb774  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009eb779  33c4                 xor eax, esp
// 009eb77b  89842458010000       mov dword ptr [esp + 0x158], eax
// 009eb782  53                   push ebx
// 009eb783  55                   push ebp
// 009eb784  56                   push esi
// 009eb785  57                   push edi
// 009eb786  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009eb78b  33c4                 xor eax, esp
// 009eb78d  50                   push eax
// 009eb78e  8d842470010000       lea eax, [esp + 0x170]
// 009eb795  64a300000000         mov dword ptr fs:[0], eax
// 009eb79b  8bf1                 mov esi, ecx
// 009eb79d  89742414             mov dword ptr [esp + 0x14], esi
// 009eb7a1  e8dedd0a00           call 0xa99584
// 009eb7a6  33db                 xor ebx, ebx
// 009eb7a8  8dbe98000000         lea edi, [esi + 0x98]
// 009eb7ae  c7063c82c100         mov dword ptr [esi], 0xc1823c
// 009eb7b4  899c2478010000       mov dword ptr [esp + 0x178], ebx
// 009eb7bb  895f04               mov dword ptr [edi + 4], ebx
// 009eb7be  c7075007b600         mov dword ptr [edi], 0xb60750
// 009eb7c4  8daea0000000         lea ebp, [esi + 0xa0]
// 009eb7ca  895d04               mov dword ptr [ebp + 4], ebx
// 009eb7cd  c745005007b600       mov dword ptr [ebp], 0xb60750
// 009eb7d4  53                   push ebx
// 009eb7d5  c684247c01000002     mov byte ptr [esp + 0x17c], 2
// 009eb7dd  895e60               mov dword ptr [esi + 0x60], ebx
// 009eb7e0  895e20               mov dword ptr [esi + 0x20], ebx
// 009eb7e3  895e24               mov dword ptr [esi + 0x24], ebx
// 009eb7e6  c7462801000000       mov dword ptr [esi + 0x28], 1
// 009eb7ed  895e2c               mov dword ptr [esi + 0x2c], ebx
// 009eb7f0  895e30               mov dword ptr [esi + 0x30], ebx
// 009eb7f3  ff15fc3bb200         call dword ptr [0xb23bfc]
// 009eb7f9  99                   cdq 
// 009eb7fa  2bc2                 sub eax, edx
// 009eb7fc  d1f8                 sar eax, 1
// 009eb7fe  6a2c                 push 0x2c
// 009eb800  89463c               mov dword ptr [esi + 0x3c], eax
// 009eb803  8d4664               lea eax, [esi + 0x64]
// 009eb806  53                   push ebx
// 009eb807  50                   push eax
// 009eb808  e8677bf9ff           call 0x983374
// 009eb80d  83c40c               add esp, 0xc
// 009eb810  e87bddfdff           call 0x9c9590
// 009eb815  8bc8                 mov ecx, eax
// 009eb817  e834edfdff           call 0x9ca550
// 009eb81c  53                   push ebx
// 009eb81d  53                   push ebx
// 009eb81e  53                   push ebx
// 009eb81f  894634               mov dword ptr [esi + 0x34], eax
// 009eb822  83c8ff               or eax, 0xffffffff
// 009eb825  53                   push ebx
// 009eb826  8d4e44               lea ecx, [esi + 0x44]
// 009eb829  51                   push ecx
// 009eb82a  898690000000         mov dword ptr [esi + 0x90], eax
// 009eb830  898694000000         mov dword ptr [esi + 0x94], eax
// 009eb836  c7463801000000       mov dword ptr [esi + 0x38], 1
// 009eb83d  c7464002000000       mov dword ptr [esi + 0x40], 2
// 009eb844  ff156c3bb200         call dword ptr [0xb23b6c]
// 009eb84a  6854010000           push 0x154
// 009eb84f  83c8ff               or eax, 0xffffffff
// 009eb852  8d54241c             lea edx, [esp + 0x1c]
// 009eb856  53                   push ebx
// 009eb857  52                   push edx
// 009eb858  894658               mov dword ptr [esi + 0x58], eax
// 009eb85b  894654               mov dword ptr [esi + 0x54], eax
// 009eb85e  89465c               mov dword ptr [esi + 0x5c], eax
// 009eb861  e80e7bf9ff           call 0x983374
// 009eb866  83c40c               add esp, 0xc
// 009eb869  53                   push ebx
// 009eb86a  8d44241c             lea eax, [esp + 0x1c]
// 009eb86e  50                   push eax
// 009eb86f  6854010000           push 0x154
// 009eb874  6a29                 push 0x29
// 009eb876  c744242854010000     mov dword ptr [esp + 0x28], 0x154
// 009eb87e  ff15543ab200         call dword ptr [0xb23a54]
// 009eb884  8b1da820b200         mov ebx, dword ptr [0xb220a8]
// 009eb88a  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 009eb891  51                   push ecx
// 009eb892  c784240801000090010000 mov dword ptr [esp + 0x108], 0x190
// 009eb89d  ffd3                 call ebx
// 009eb89f  50                   push eax
// 009eb8a0  8bcf                 mov ecx, edi
// 009eb8a2  e8316ef9ff           call 0x9826d8
// 009eb8a7  8d9424f4000000       lea edx, [esp + 0xf4]
// 009eb8ae  52                   push edx
// 009eb8af  c7842408010000bc020000 mov dword ptr [esp + 0x108], 0x2bc
// 009eb8ba  ffd3                 call ebx
// 009eb8bc  50                   push eax
// 009eb8bd  8bcd                 mov ecx, ebp
// 009eb8bf  e8146ef9ff           call 0x9826d8
// 009eb8c4  8bc6                 mov eax, esi
// 009eb8c6  8b8c2470010000       mov ecx, dword ptr [esp + 0x170]
// 009eb8cd  64890d00000000       mov dword ptr fs:[0], ecx
// 009eb8d4  59                   pop ecx
// 009eb8d5  5f                   pop edi
// 009eb8d6  5e                   pop esi
// 009eb8d7  5d                   pop ebp
// 009eb8d8  5b                   pop ebx
// 009eb8d9  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 009eb8e0  33cc                 xor ecx, esp
// 009eb8e2  e85081f9ff           call 0x983a37
// 009eb8e7  81c468010000         add esp, 0x168
// 009eb8ed  c3                   ret 
// copied from an identical function in another client (function ??0CXTPToolTipContext@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp