// roc 2010-06 005814c0  unit: seg_00580000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005814c0
//
// 005814c0  53                   push ebx
// 005814c1  56                   push esi
// 005814c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005814c6  8b4604               mov eax, dword ptr [esi + 4]
// 005814c9  8b08                 mov ecx, dword ptr [eax]
// 005814cb  6a40                 push 0x40
// 005814cd  6a01                 push 1
// 005814cf  56                   push esi
// 005814d0  ffd1                 call ecx
// 005814d2  898698010000         mov dword ptr [esi + 0x198], eax
// 005814d8  c70060125800         mov dword ptr [eax], 0x581260
// 005814de  33db                 xor ebx, ebx
// 005814e0  89582c               mov dword ptr [eax + 0x2c], ebx
// 005814e3  895830               mov dword ptr [eax + 0x30], ebx
// 005814e6  895834               mov dword ptr [eax + 0x34], ebx
// 005814e9  895838               mov dword ptr [eax + 0x38], ebx
// 005814ec  8b4624               mov eax, dword ptr [esi + 0x24]
// 005814ef  8b5604               mov edx, dword ptr [esi + 4]
// 005814f2  8b0a                 mov ecx, dword ptr [edx]
// 005814f4  c1e008               shl eax, 8
// 005814f7  50                   push eax
// 005814f8  6a01                 push 1
// 005814fa  56                   push esi
// 005814fb  ffd1                 call ecx
// 005814fd  83c418               add esp, 0x18
// 00581500  395e24               cmp dword ptr [esi + 0x24], ebx
// 00581503  89868c000000         mov dword ptr [esi + 0x8c], eax
// 00581509  8bd0                 mov edx, eax
// 0058150b  7e1c                 jle 0x581529
// 0058150d  57                   push edi
// 0058150e  8bff                 mov edi, edi
// 00581510  83c8ff               or eax, 0xffffffff
// 00581513  8bfa                 mov edi, edx
// 00581515  b940000000           mov ecx, 0x40
// 0058151a  43                   inc ebx
// 0058151b  f3ab                 rep stosd dword ptr es:[edi], eax
// 0058151d  81c200010000         add edx, 0x100
// 00581523  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 00581526  7ce8                 jl 0x581510
// 00581528  5f                   pop edi
// 00581529  5e                   pop esi
// 0058152a  5b                   pop ebx
// 0058152b  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
