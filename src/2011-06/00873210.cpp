// roc 2011-06 00873210  unit: CXTPToolTipContext::CHTMLToolTip  size: 398 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00873210
//
// 00873210  6aff                 push -1
// 00873212  68cd79a000           push 0xa079cd
// 00873217  64a100000000         mov eax, dword ptr fs:[0]
// 0087321d  50                   push eax
// 0087321e  81ec5c010000         sub esp, 0x15c
// 00873224  a12058c900           mov eax, dword ptr [0xc95820]
// 00873229  33c4                 xor eax, esp
// 0087322b  89842458010000       mov dword ptr [esp + 0x158], eax
// 00873232  53                   push ebx
// 00873233  55                   push ebp
// 00873234  56                   push esi
// 00873235  57                   push edi
// 00873236  a12058c900           mov eax, dword ptr [0xc95820]
// 0087323b  33c4                 xor eax, esp
// 0087323d  50                   push eax
// 0087323e  8d842470010000       lea eax, [esp + 0x170]
// 00873245  64a300000000         mov dword ptr fs:[0], eax
// 0087324b  8bf1                 mov esi, ecx
// 0087324d  89742414             mov dword ptr [esp + 0x14], esi
// 00873251  e874931500           call 0x9cc5ca
// 00873256  33db                 xor ebx, ebx
// 00873258  8dbe98000000         lea edi, [esi + 0x98]
// 0087325e  c7064ccbac00         mov dword ptr [esi], 0xaccb4c
// 00873264  899c2478010000       mov dword ptr [esp + 0x178], ebx
// 0087326b  895f04               mov dword ptr [edi + 4], ebx
// 0087326e  c7079041a700         mov dword ptr [edi], 0xa74190
// 00873274  8daea0000000         lea ebp, [esi + 0xa0]
// 0087327a  895d04               mov dword ptr [ebp + 4], ebx
// 0087327d  c745009041a700       mov dword ptr [ebp], 0xa74190
// 00873284  53                   push ebx
// 00873285  c684247c01000002     mov byte ptr [esp + 0x17c], 2
// 0087328d  895e60               mov dword ptr [esi + 0x60], ebx
// 00873290  895e20               mov dword ptr [esi + 0x20], ebx
// 00873293  895e24               mov dword ptr [esi + 0x24], ebx
// 00873296  c7462801000000       mov dword ptr [esi + 0x28], 1
// 0087329d  895e2c               mov dword ptr [esi + 0x2c], ebx
// 008732a0  895e30               mov dword ptr [esi + 0x30], ebx
// 008732a3  ff15e019a400         call dword ptr [0xa419e0]
// 008732a9  99                   cdq 
// 008732aa  2bc2                 sub eax, edx
// 008732ac  d1f8                 sar eax, 1
// 008732ae  6a2c                 push 0x2c
// 008732b0  89463c               mov dword ptr [esi + 0x3c], eax
// 008732b3  8d4664               lea eax, [esi + 0x64]
// 008732b6  53                   push ebx
// 008732b7  50                   push eax
// 008732b8  e82780f9ff           call 0x80b2e4
// 008732bd  83c40c               add esp, 0xc
// 008732c0  e8fbddfdff           call 0x8510c0
// 008732c5  8bc8                 mov ecx, eax
// 008732c7  e8c4edfdff           call 0x852090
// 008732cc  53                   push ebx
// 008732cd  53                   push ebx
// 008732ce  53                   push ebx
// 008732cf  894634               mov dword ptr [esi + 0x34], eax
// 008732d2  83c8ff               or eax, 0xffffffff
// 008732d5  53                   push ebx
// 008732d6  8d4e44               lea ecx, [esi + 0x44]
// 008732d9  51                   push ecx
// 008732da  898690000000         mov dword ptr [esi + 0x90], eax
// 008732e0  898694000000         mov dword ptr [esi + 0x94], eax
// 008732e6  c7463801000000       mov dword ptr [esi + 0x38], 1
// 008732ed  c7464002000000       mov dword ptr [esi + 0x40], 2
// 008732f4  ff15c81ba400         call dword ptr [0xa41bc8]
// 008732fa  6854010000           push 0x154
// 008732ff  83c8ff               or eax, 0xffffffff
// 00873302  8d54241c             lea edx, [esp + 0x1c]
// 00873306  53                   push ebx
// 00873307  52                   push edx
// 00873308  894658               mov dword ptr [esi + 0x58], eax
// 0087330b  894654               mov dword ptr [esi + 0x54], eax
// 0087330e  89465c               mov dword ptr [esi + 0x5c], eax
// 00873311  e8ce7ff9ff           call 0x80b2e4
// 00873316  83c40c               add esp, 0xc
// 00873319  53                   push ebx
// 0087331a  8d44241c             lea eax, [esp + 0x1c]
// 0087331e  50                   push eax
// 0087331f  6854010000           push 0x154
// 00873324  6a29                 push 0x29
// 00873326  c744242854010000     mov dword ptr [esp + 0x28], 0x154
// 0087332e  ff155c1ba400         call dword ptr [0xa41b5c]
// 00873334  8b1d2001a400         mov ebx, dword ptr [0xa40120]
// 0087333a  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00873341  51                   push ecx
// 00873342  c784240801000090010000 mov dword ptr [esp + 0x108], 0x190
// 0087334d  ffd3                 call ebx
// 0087334f  50                   push eax
// 00873350  8bcf                 mov ecx, edi
// 00873352  e8d172f9ff           call 0x80a628
// 00873357  8d9424f4000000       lea edx, [esp + 0xf4]
// 0087335e  52                   push edx
// 0087335f  c7842408010000bc020000 mov dword ptr [esp + 0x108], 0x2bc
// 0087336a  ffd3                 call ebx
// 0087336c  50                   push eax
// 0087336d  8bcd                 mov ecx, ebp
// 0087336f  e8b472f9ff           call 0x80a628
// 00873374  8bc6                 mov eax, esi
// 00873376  8b8c2470010000       mov ecx, dword ptr [esp + 0x170]
// 0087337d  64890d00000000       mov dword ptr fs:[0], ecx
// 00873384  59                   pop ecx
// 00873385  5f                   pop edi
// 00873386  5e                   pop esi
// 00873387  5d                   pop ebp
// 00873388  5b                   pop ebx
// 00873389  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 00873390  33cc                 xor ecx, esp
// 00873392  e86085f9ff           call 0x80b8f7
// 00873397  81c468010000         add esp, 0x168
// 0087339d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPToolTipContext@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp