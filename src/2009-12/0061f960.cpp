// roc 2009-12 0061f960  unit: seg_00610000  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061f960
//
// 0061f960  53                   push ebx
// 0061f961  56                   push esi
// 0061f962  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061f966  8b4604               mov eax, dword ptr [esi + 4]
// 0061f969  8b08                 mov ecx, dword ptr [eax]
// 0061f96b  6a40                 push 0x40
// 0061f96d  6a01                 push 1
// 0061f96f  56                   push esi
// 0061f970  ffd1                 call ecx
// 0061f972  898698010000         mov dword ptr [esi + 0x198], eax
// 0061f978  c70000f76100         mov dword ptr [eax], 0x61f700
// 0061f97e  33db                 xor ebx, ebx
// 0061f980  89582c               mov dword ptr [eax + 0x2c], ebx
// 0061f983  895830               mov dword ptr [eax + 0x30], ebx
// 0061f986  895834               mov dword ptr [eax + 0x34], ebx
// 0061f989  895838               mov dword ptr [eax + 0x38], ebx
// 0061f98c  8b4624               mov eax, dword ptr [esi + 0x24]
// 0061f98f  8b5604               mov edx, dword ptr [esi + 4]
// 0061f992  8b0a                 mov ecx, dword ptr [edx]
// 0061f994  c1e008               shl eax, 8
// 0061f997  50                   push eax
// 0061f998  6a01                 push 1
// 0061f99a  56                   push esi
// 0061f99b  ffd1                 call ecx
// 0061f99d  83c418               add esp, 0x18
// 0061f9a0  395e24               cmp dword ptr [esi + 0x24], ebx
// 0061f9a3  89868c000000         mov dword ptr [esi + 0x8c], eax
// 0061f9a9  8bd0                 mov edx, eax
// 0061f9ab  7e1c                 jle 0x61f9c9
// 0061f9ad  57                   push edi
// 0061f9ae  8bff                 mov edi, edi
// 0061f9b0  83c8ff               or eax, 0xffffffff
// 0061f9b3  8bfa                 mov edi, edx
// 0061f9b5  b940000000           mov ecx, 0x40
// 0061f9ba  43                   inc ebx
// 0061f9bb  f3ab                 rep stosd dword ptr es:[edi], eax
// 0061f9bd  81c200010000         add edx, 0x100
// 0061f9c3  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0061f9c6  7ce8                 jl 0x61f9b0
// 0061f9c8  5f                   pop edi
// 0061f9c9  5e                   pop esi
// 0061f9ca  5b                   pop ebx
// 0061f9cb  c3                   ret 
// library jpeg-6b/jdphuff.c (function _jinit_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
