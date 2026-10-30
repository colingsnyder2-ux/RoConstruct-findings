// from server: 100% by auto
// roc 2008-06 00533650  unit: seg_00530000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533650
//
// 00533650  53                   push ebx
// 00533651  56                   push esi
// 00533652  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00533656  8b4604               mov eax, dword ptr [esi + 4]
// 00533659  8b08                 mov ecx, dword ptr [eax]
// 0053365b  6a40                 push 0x40
// 0053365d  6a01                 push 1
// 0053365f  56                   push esi
// 00533660  ffd1                 call ecx
// 00533662  898698010000         mov dword ptr [esi + 0x198], eax
// 00533668  c700f0335300         mov dword ptr [eax], 0x5333f0
// 0053366e  33db                 xor ebx, ebx
// 00533670  89582c               mov dword ptr [eax + 0x2c], ebx
// 00533673  895830               mov dword ptr [eax + 0x30], ebx
// 00533676  895834               mov dword ptr [eax + 0x34], ebx
// 00533679  895838               mov dword ptr [eax + 0x38], ebx
// 0053367c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0053367f  8b5604               mov edx, dword ptr [esi + 4]
// 00533682  8b0a                 mov ecx, dword ptr [edx]
// 00533684  c1e008               shl eax, 8
// 00533687  50                   push eax
// 00533688  6a01                 push 1
// 0053368a  56                   push esi
// 0053368b  ffd1                 call ecx
// 0053368d  83c418               add esp, 0x18
// 00533690  395e24               cmp dword ptr [esi + 0x24], ebx
// 00533693  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00533699  8bd0                 mov edx, eax
// 0053369b  7e1c                 jle 0x5336b9
// 0053369d  57                   push edi
// 0053369e  8bff                 mov edi, edi
// 005336a0  83c8ff               or eax, 0xffffffff
// 005336a3  8bfa                 mov edi, edx
// 005336a5  b940000000           mov ecx, 0x40
// 005336aa  43                   inc ebx
// 005336ab  f3ab                 rep stosd dword ptr es:[edi], eax
// 005336ad  81c200010000         add edx, 0x100
// 005336b3  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 005336b6  7ce8                 jl 0x5336a0
// 005336b8  5f                   pop edi
// 005336b9  5e                   pop esi
// 005336ba  5b                   pop ebx
// 005336bb  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
