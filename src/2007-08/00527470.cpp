// roc 2007-08 00527470  unit: G3D::Line  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527470
//
// 00527470  53                   push ebx
// 00527471  56                   push esi
// 00527472  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00527476  8b4604               mov eax, dword ptr [esi + 4]
// 00527479  8b08                 mov ecx, dword ptr [eax]
// 0052747b  6a40                 push 0x40
// 0052747d  6a01                 push 1
// 0052747f  56                   push esi
// 00527480  ffd1                 call ecx
// 00527482  898698010000         mov dword ptr [esi + 0x198], eax
// 00527488  c70000725200         mov dword ptr [eax], 0x527200
// 0052748e  33db                 xor ebx, ebx
// 00527490  89582c               mov dword ptr [eax + 0x2c], ebx
// 00527493  895830               mov dword ptr [eax + 0x30], ebx
// 00527496  895834               mov dword ptr [eax + 0x34], ebx
// 00527499  895838               mov dword ptr [eax + 0x38], ebx
// 0052749c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0052749f  8b5604               mov edx, dword ptr [esi + 4]
// 005274a2  8b0a                 mov ecx, dword ptr [edx]
// 005274a4  c1e008               shl eax, 8
// 005274a7  50                   push eax
// 005274a8  6a01                 push 1
// 005274aa  56                   push esi
// 005274ab  ffd1                 call ecx
// 005274ad  83c418               add esp, 0x18
// 005274b0  395e24               cmp dword ptr [esi + 0x24], ebx
// 005274b3  89868c000000         mov dword ptr [esi + 0x8c], eax
// 005274b9  8bd0                 mov edx, eax
// 005274bb  7e1e                 jle 0x5274db
// 005274bd  57                   push edi
// 005274be  8bff                 mov edi, edi
// 005274c0  83c8ff               or eax, 0xffffffff
// 005274c3  8bfa                 mov edi, edx
// 005274c5  b940000000           mov ecx, 0x40
// 005274ca  83c301               add ebx, 1
// 005274cd  f3ab                 rep stosd dword ptr es:[edi], eax
// 005274cf  81c200010000         add edx, 0x100
// 005274d5  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 005274d8  7ce6                 jl 0x5274c0
// 005274da  5f                   pop edi
// 005274db  5e                   pop esi
// 005274dc  5b                   pop ebx
// 005274dd  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
