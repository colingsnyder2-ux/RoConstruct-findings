// from server: 100% by auto
// roc 2007-08 005261b0  unit: G3D::Line  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005261b0
//
// 005261b0  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 005261b6  57                   push edi
// 005261b7  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 005261bd  8b4710               mov eax, dword ptr [edi + 0x10]
// 005261c0  99                   cdq 
// 005261c1  83e207               and edx, 7
// 005261c4  03c2                 add eax, edx
// 005261c6  c1f803               sar eax, 3
// 005261c9  014114               add dword ptr [ecx + 0x14], eax
// 005261cc  c7471000000000       mov dword ptr [edi + 0x10], 0
// 005261d3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005261d9  8b4808               mov ecx, dword ptr [eax + 8]
// 005261dc  56                   push esi
// 005261dd  ffd1                 call ecx
// 005261df  83c404               add esp, 4
// 005261e2  84c0                 test al, al
// 005261e4  7502                 jne 0x5261e8
// 005261e6  5f                   pop edi
// 005261e7  c3                   ret 
// 005261e8  33c0                 xor eax, eax
// 005261ea  398624010000         cmp dword ptr [esi + 0x124], eax
// 005261f0  7e22                 jle 0x526214
// 005261f2  8d4f14               lea ecx, [edi + 0x14]
// 005261f5  eb09                 jmp 0x526200
// 005261f7  8da42400000000       lea esp, [esp]
// 005261fe  8bff                 mov edi, edi
// 00526200  c70100000000         mov dword ptr [ecx], 0
// 00526206  83c001               add eax, 1
// 00526209  83c104               add ecx, 4
// 0052620c  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00526212  7cec                 jl 0x526200
// 00526214  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0052621a  895724               mov dword ptr [edi + 0x24], edx
// 0052621d  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00526224  7504                 jne 0x52622a
// 00526226  c6470800             mov byte ptr [edi + 8], 0
// 0052622a  b001                 mov al, 1
// 0052622c  5f                   pop edi
// 0052622d  c3                   ret 
// library jpeg-6b/jdhuff.c (function _process_restart)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
