// from server: 100% by auto
// roc 2011-06 00556e90  unit: seg_00550000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556e90
//
// 00556e90  53                   push ebx
// 00556e91  56                   push esi
// 00556e92  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00556e96  8b4604               mov eax, dword ptr [esi + 4]
// 00556e99  8b08                 mov ecx, dword ptr [eax]
// 00556e9b  68a8000000           push 0xa8
// 00556ea0  33db                 xor ebx, ebx
// 00556ea2  53                   push ebx
// 00556ea3  56                   push esi
// 00556ea4  ffd1                 call ecx
// 00556ea6  898694010000         mov dword ptr [esi + 0x194], eax
// 00556eac  83c40c               add esp, 0xc
// 00556eaf  c700606e5500         mov dword ptr [eax], 0x556e60
// 00556eb5  c7400440695500       mov dword ptr [eax + 4], 0x556940
// 00556ebc  c74008c06c5500       mov dword ptr [eax + 8], 0x556cc0
// 00556ec3  c74018d0665500       mov dword ptr [eax + 0x18], 0x5566d0
// 00556eca  89585c               mov dword ptr [eax + 0x5c], ebx
// 00556ecd  8d4860               lea ecx, [eax + 0x60]
// 00556ed0  ba10000000           mov edx, 0x10
// 00556ed5  eb09                 jmp 0x556ee0
// 00556ed7  8da42400000000       lea esp, [esp]
// 00556ede  8bff                 mov edi, edi
// 00556ee0  c741bcd0665500       mov dword ptr [ecx - 0x44], 0x5566d0
// 00556ee7  8919                 mov dword ptr [ecx], ebx
// 00556ee9  83c104               add ecx, 4
// 00556eec  83ea01               sub edx, 1
// 00556eef  75ef                 jne 0x556ee0
// 00556ef1  b970655500           mov ecx, 0x556570
// 00556ef6  89481c               mov dword ptr [eax + 0x1c], ecx
// 00556ef9  894854               mov dword ptr [eax + 0x54], ecx
// 00556efc  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00556f02  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00556f08  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00556f0b  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00556f11  5e                   pop esi
// 00556f12  88580c               mov byte ptr [eax + 0xc], bl
// 00556f15  88580d               mov byte ptr [eax + 0xd], bl
// 00556f18  895814               mov dword ptr [eax + 0x14], ebx
// 00556f1b  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 00556f21  5b                   pop ebx
// 00556f22  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
