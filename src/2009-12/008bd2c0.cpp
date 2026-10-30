// roc 2009-12 008bd2c0  unit: CXTPDockingPaneContext  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd2c0
//
// 008bd2c0  83ec14               sub esp, 0x14
// 008bd2c3  53                   push ebx
// 008bd2c4  55                   push ebp
// 008bd2c5  56                   push esi
// 008bd2c6  57                   push edi
// 008bd2c7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008bd2cb  8d442414             lea eax, [esp + 0x14]
// 008bd2cf  8bf1                 mov esi, ecx
// 008bd2d1  57                   push edi
// 008bd2d2  50                   push eax
// 008bd2d3  89742418             mov dword ptr [esp + 0x18], esi
// 008bd2d7  e894f4f7ff           call 0x83c770
// 008bd2dc  8bc8                 mov ecx, eax
// 008bd2de  e8edeff7ff           call 0x83c2d0
// 008bd2e3  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008bd2e9  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 008bd2ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bd2f3  2b4f04               sub ecx, dword ptr [edi + 4]
// 008bd2f6  8b2d6ccc9800         mov ebp, dword ptr [0x98cc6c]
// 008bd2fc  8bc1                 mov eax, ecx
// 008bd2fe  99                   cdq 
// 008bd2ff  33c2                 xor eax, edx
// 008bd301  2bc2                 sub eax, edx
// 008bd303  3bc6                 cmp eax, esi
// 008bd305  7d06                 jge 0x8bd30d
// 008bd307  51                   push ecx
// 008bd308  6a00                 push 0
// 008bd30a  57                   push edi
// 008bd30b  ffd5                 call ebp
// 008bd30d  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 008bd310  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008bd314  8bc3                 mov eax, ebx
// 008bd316  2bc1                 sub eax, ecx
// 008bd318  99                   cdq 
// 008bd319  33c2                 xor eax, edx
// 008bd31b  2bc2                 sub eax, edx
// 008bd31d  3bc6                 cmp eax, esi
// 008bd31f  7d08                 jge 0x8bd329
// 008bd321  2bcb                 sub ecx, ebx
// 008bd323  51                   push ecx
// 008bd324  6a00                 push 0
// 008bd326  57                   push edi
// 008bd327  ffd5                 call ebp
// 008bd329  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008bd32d  2b4f08               sub ecx, dword ptr [edi + 8]
// 008bd330  8bc1                 mov eax, ecx
// 008bd332  99                   cdq 
// 008bd333  33c2                 xor eax, edx
// 008bd335  2bc2                 sub eax, edx
// 008bd337  3bc6                 cmp eax, esi
// 008bd339  7d06                 jge 0x8bd341
// 008bd33b  6a00                 push 0
// 008bd33d  51                   push ecx
// 008bd33e  57                   push edi
// 008bd33f  ffd5                 call ebp
// 008bd341  8b1f                 mov ebx, dword ptr [edi]
// 008bd343  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008bd347  8bc3                 mov eax, ebx
// 008bd349  2bc1                 sub eax, ecx
// 008bd34b  99                   cdq 
// 008bd34c  33c2                 xor eax, edx
// 008bd34e  2bc2                 sub eax, edx
// 008bd350  3bc6                 cmp eax, esi
// 008bd352  7d08                 jge 0x8bd35c
// 008bd354  6a00                 push 0
// 008bd356  2bcb                 sub ecx, ebx
// 008bd358  51                   push ecx
// 008bd359  57                   push edi
// 008bd35a  ffd5                 call ebp
// 008bd35c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008bd360  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 008bd366  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 008bd36c  e801910600           call 0x926472
// 008bd371  a900000021           test eax, 0x21000000
// 008bd376  7515                 jne 0x8bd38d
// 008bd378  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 008bd37e  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008bd384  51                   push ecx
// 008bd385  57                   push edi
// 008bd386  8bcd                 mov ecx, ebp
// 008bd388  e8c3fdffff           call 0x8bd150
// 008bd38d  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 008bd393  e8d8b2f7ff           call 0x838670
// 008bd398  8b5804               mov ebx, dword ptr [eax + 4]
// 008bd39b  85db                 test ebx, ebx
// 008bd39d  7448                 je 0x8bd3e7
// 008bd39f  90                   nop 
// 008bd3a0  8bc3                 mov eax, ebx
// 008bd3a2  8b4008               mov eax, dword ptr [eax + 8]
// 008bd3a5  83781803             cmp dword ptr [eax + 0x18], 3
// 008bd3a9  8b1b                 mov ebx, dword ptr [ebx]
// 008bd3ab  7536                 jne 0x8bd3e3
// 008bd3ad  8db008ffffff         lea esi, [eax - 0xf8]
// 008bd3b3  85f6                 test esi, esi
// 008bd3b5  742c                 je 0x8bd3e3
// 008bd3b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008bd3ba  85c0                 test eax, eax
// 008bd3bc  7425                 je 0x8bd3e3
// 008bd3be  50                   push eax
// 008bd3bf  ff1564ca9800         call dword ptr [0x98ca64]
// 008bd3c5  85c0                 test eax, eax
// 008bd3c7  741a                 je 0x8bd3e3
// 008bd3c9  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 008bd3cf  8b11                 mov edx, dword ptr [ecx]
// 008bd3d1  8b4218               mov eax, dword ptr [edx + 0x18]
// 008bd3d4  ffd0                 call eax
// 008bd3d6  3bc6                 cmp eax, esi
// 008bd3d8  7409                 je 0x8bd3e3
// 008bd3da  56                   push esi
// 008bd3db  57                   push edi
// 008bd3dc  8bcd                 mov ecx, ebp
// 008bd3de  e86dfdffff           call 0x8bd150
// 008bd3e3  85db                 test ebx, ebx
// 008bd3e5  75b9                 jne 0x8bd3a0
// 008bd3e7  5f                   pop edi
// 008bd3e8  5e                   pop esi
// 008bd3e9  5d                   pop ebp
// 008bd3ea  5b                   pop ebx
// 008bd3eb  83c414               add esp, 0x14
// 008bd3ee  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
