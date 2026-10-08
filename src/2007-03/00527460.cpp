// roc 2007-03 00527460  unit: seg_00520000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527460
//
// 00527460  53                   push ebx
// 00527461  55                   push ebp
// 00527462  56                   push esi
// 00527463  8bd8                 mov ebx, eax
// 00527465  85db                 test ebx, ebx
// 00527467  8bf1                 mov esi, ecx
// 00527469  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0052746c  7519                 jne 0x527487
// 0052746e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00527471  8b08                 mov ecx, dword ptr [eax]
// 00527473  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 0052747a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0052747d  8b10                 mov edx, dword ptr [eax]
// 0052747f  50                   push eax
// 00527480  8b02                 mov eax, dword ptr [edx]
// 00527482  ffd0                 call eax
// 00527484  83c404               add esp, 4
// 00527487  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0052748b  0f8588000000         jne 0x527519
// 00527491  57                   push edi
// 00527492  ba01000000           mov edx, 1
// 00527497  8bcb                 mov ecx, ebx
// 00527499  8bfa                 mov edi, edx
// 0052749b  d3e7                 shl edi, cl
// 0052749d  03eb                 add ebp, ebx
// 0052749f  b918000000           mov ecx, 0x18
// 005274a4  2bcd                 sub ecx, ebp
// 005274a6  2bfa                 sub edi, edx
// 005274a8  237c2414             and edi, dword ptr [esp + 0x14]
// 005274ac  d3e7                 shl edi, cl
// 005274ae  0b7e18               or edi, dword ptr [esi + 0x18]
// 005274b1  83fd08               cmp ebp, 8
// 005274b4  7c5c                 jl 0x527512
// 005274b6  8bc5                 mov eax, ebp
// 005274b8  c1e803               shr eax, 3
// 005274bb  89442414             mov dword ptr [esp + 0x14], eax
// 005274bf  f7d8                 neg eax
// 005274c1  8d6cc500             lea ebp, [ebp + eax*8]
// 005274c5  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005274c8  8bdf                 mov ebx, edi
// 005274ca  c1fb10               sar ebx, 0x10
// 005274cd  81e3ff000000         and ebx, 0xff
// 005274d3  8819                 mov byte ptr [ecx], bl
// 005274d5  015610               add dword ptr [esi + 0x10], edx
// 005274d8  834614ff             add dword ptr [esi + 0x14], -1
// 005274dc  750a                 jne 0x5274e8
// 005274de  e83dffffff           call 0x527420
// 005274e3  ba01000000           mov edx, 1
// 005274e8  81fbff000000         cmp ebx, 0xff
// 005274ee  7519                 jne 0x527509
// 005274f0  8b4610               mov eax, dword ptr [esi + 0x10]
// 005274f3  c60000               mov byte ptr [eax], 0
// 005274f6  015610               add dword ptr [esi + 0x10], edx
// 005274f9  834614ff             add dword ptr [esi + 0x14], -1
// 005274fd  750a                 jne 0x527509
// 005274ff  e81cffffff           call 0x527420
// 00527504  ba01000000           mov edx, 1
// 00527509  c1e708               shl edi, 8
// 0052750c  29542414             sub dword ptr [esp + 0x14], edx
// 00527510  75b3                 jne 0x5274c5
// 00527512  897e18               mov dword ptr [esi + 0x18], edi
// 00527515  896e1c               mov dword ptr [esi + 0x1c], ebp
// 00527518  5f                   pop edi
// 00527519  5e                   pop esi
// 0052751a  5d                   pop ebp
// 0052751b  5b                   pop ebx
// 0052751c  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
