// roc 2011-06 005802a0  unit: seg_00580000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005802a0
//
// 005802a0  53                   push ebx
// 005802a1  56                   push esi
// 005802a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005802a6  8b4604               mov eax, dword ptr [esi + 4]
// 005802a9  8b08                 mov ecx, dword ptr [eax]
// 005802ab  57                   push edi
// 005802ac  6a20                 push 0x20
// 005802ae  6a01                 push 1
// 005802b0  56                   push esi
// 005802b1  ffd1                 call ecx
// 005802b3  8bf8                 mov edi, eax
// 005802b5  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 005802bb  33db                 xor ebx, ebx
// 005802bd  83c40c               add esp, 0xc
// 005802c0  c70760005800         mov dword ptr [edi], 0x580060
// 005802c6  c7470400025800       mov dword ptr [edi + 4], 0x580200
// 005802cd  c7470830025800       mov dword ptr [edi + 8], 0x580230
// 005802d4  885f0d               mov byte ptr [edi + 0xd], bl
// 005802d7  e814f5ffff           call 0x57f7f0
// 005802dc  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 005802e2  7407                 je 0x5802eb
// 005802e4  e8e7f6ffff           call 0x57f9d0
// 005802e9  eb10                 jmp 0x5802fb
// 005802eb  889ed4000000         mov byte ptr [esi + 0xd4], bl
// 005802f1  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 005802fb  389ed4000000         cmp byte ptr [esi + 0xd4], bl
// 00580301  7407                 je 0x58030a
// 00580303  c686b200000001       mov byte ptr [esi + 0xb2], 1
// 0058030a  385c2414             cmp byte ptr [esp + 0x14], bl
// 0058030e  7411                 je 0x580321
// 00580310  33d2                 xor edx, edx
// 00580312  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 00580318  0f94c2               sete dl
// 0058031b  42                   inc edx
// 0058031c  895710               mov dword ptr [edi + 0x10], edx
// 0058031f  eb03                 jmp 0x580324
// 00580321  895f10               mov dword ptr [edi + 0x10], ebx
// 00580324  895f1c               mov dword ptr [edi + 0x1c], ebx
// 00580327  895f14               mov dword ptr [edi + 0x14], ebx
// 0058032a  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 00580330  740f                 je 0x580341
// 00580332  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00580338  03c0                 add eax, eax
// 0058033a  894718               mov dword ptr [edi + 0x18], eax
// 0058033d  5f                   pop edi
// 0058033e  5e                   pop esi
// 0058033f  5b                   pop ebx
// 00580340  c3                   ret 
// 00580341  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00580347  894f18               mov dword ptr [edi + 0x18], ecx
// 0058034a  5f                   pop edi
// 0058034b  5e                   pop esi
// 0058034c  5b                   pop ebx
// 0058034d  c3                   ret 
// library jpeg-6b/jcmaster.c (function _jinit_c_master_control)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
