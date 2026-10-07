// roc 2009-06 005a64e0  unit: seg_005a0000  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a64e0
//
// 005a64e0  53                   push ebx
// 005a64e1  56                   push esi
// 005a64e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a64e6  8b4604               mov eax, dword ptr [esi + 4]
// 005a64e9  8b08                 mov ecx, dword ptr [eax]
// 005a64eb  57                   push edi
// 005a64ec  6a20                 push 0x20
// 005a64ee  6a01                 push 1
// 005a64f0  56                   push esi
// 005a64f1  ffd1                 call ecx
// 005a64f3  8bf8                 mov edi, eax
// 005a64f5  89be3c010000         mov dword ptr [esi + 0x13c], edi
// 005a64fb  33db                 xor ebx, ebx
// 005a64fd  83c40c               add esp, 0xc
// 005a6500  c707a0625a00         mov dword ptr [edi], 0x5a62a0
// 005a6506  c7470440645a00       mov dword ptr [edi + 4], 0x5a6440
// 005a650d  c7470870645a00       mov dword ptr [edi + 8], 0x5a6470
// 005a6514  885f0d               mov byte ptr [edi + 0xd], bl
// 005a6517  e814f5ffff           call 0x5a5a30
// 005a651c  399eac000000         cmp dword ptr [esi + 0xac], ebx
// 005a6522  7407                 je 0x5a652b
// 005a6524  e8e7f6ffff           call 0x5a5c10
// 005a6529  eb10                 jmp 0x5a653b
// 005a652b  889ed4000000         mov byte ptr [esi + 0xd4], bl
// 005a6531  c786a800000001000000 mov dword ptr [esi + 0xa8], 1
// 005a653b  389ed4000000         cmp byte ptr [esi + 0xd4], bl
// 005a6541  7407                 je 0x5a654a
// 005a6543  c686b200000001       mov byte ptr [esi + 0xb2], 1
// 005a654a  385c2414             cmp byte ptr [esp + 0x14], bl
// 005a654e  7411                 je 0x5a6561
// 005a6550  33d2                 xor edx, edx
// 005a6552  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 005a6558  0f94c2               sete dl
// 005a655b  42                   inc edx
// 005a655c  895710               mov dword ptr [edi + 0x10], edx
// 005a655f  eb03                 jmp 0x5a6564
// 005a6561  895f10               mov dword ptr [edi + 0x10], ebx
// 005a6564  895f1c               mov dword ptr [edi + 0x1c], ebx
// 005a6567  895f14               mov dword ptr [edi + 0x14], ebx
// 005a656a  389eb2000000         cmp byte ptr [esi + 0xb2], bl
// 005a6570  740f                 je 0x5a6581
// 005a6572  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 005a6578  03c0                 add eax, eax
// 005a657a  894718               mov dword ptr [edi + 0x18], eax
// 005a657d  5f                   pop edi
// 005a657e  5e                   pop esi
// 005a657f  5b                   pop ebx
// 005a6580  c3                   ret 
// 005a6581  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 005a6587  894f18               mov dword ptr [edi + 0x18], ecx
// 005a658a  5f                   pop edi
// 005a658b  5e                   pop esi
// 005a658c  5b                   pop ebx
// 005a658d  c3                   ret 
// library jpeg-6b/jcmaster.c (function _jinit_c_master_control)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
