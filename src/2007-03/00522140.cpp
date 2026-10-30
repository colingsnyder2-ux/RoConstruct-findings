// roc 2007-03 00522140  unit: seg_00520000  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522140
//
// 00522140  53                   push ebx
// 00522141  56                   push esi
// 00522142  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00522146  8b4604               mov eax, dword ptr [esi + 4]
// 00522149  8b08                 mov ecx, dword ptr [eax]
// 0052214b  6a40                 push 0x40
// 0052214d  6a01                 push 1
// 0052214f  56                   push esi
// 00522150  ffd1                 call ecx
// 00522152  898698010000         mov dword ptr [esi + 0x198], eax
// 00522158  c700d01e5200         mov dword ptr [eax], 0x521ed0
// 0052215e  33db                 xor ebx, ebx
// 00522160  89582c               mov dword ptr [eax + 0x2c], ebx
// 00522163  895830               mov dword ptr [eax + 0x30], ebx
// 00522166  895834               mov dword ptr [eax + 0x34], ebx
// 00522169  895838               mov dword ptr [eax + 0x38], ebx
// 0052216c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0052216f  8b5604               mov edx, dword ptr [esi + 4]
// 00522172  8b0a                 mov ecx, dword ptr [edx]
// 00522174  c1e008               shl eax, 8
// 00522177  50                   push eax
// 00522178  6a01                 push 1
// 0052217a  56                   push esi
// 0052217b  ffd1                 call ecx
// 0052217d  83c418               add esp, 0x18
// 00522180  395e24               cmp dword ptr [esi + 0x24], ebx
// 00522183  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00522189  8bd0                 mov edx, eax
// 0052218b  7e1e                 jle 0x5221ab
// 0052218d  57                   push edi
// 0052218e  8bff                 mov edi, edi
// 00522190  83c8ff               or eax, 0xffffffff
// 00522193  8bfa                 mov edi, edx
// 00522195  b940000000           mov ecx, 0x40
// 0052219a  83c301               add ebx, 1
// 0052219d  f3ab                 rep stosd dword ptr es:[edi], eax
// 0052219f  81c200010000         add edx, 0x100
// 005221a5  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 005221a8  7ce6                 jl 0x522190
// 005221aa  5f                   pop edi
// 005221ab  5e                   pop esi
// 005221ac  5b                   pop ebx
// 005221ad  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
