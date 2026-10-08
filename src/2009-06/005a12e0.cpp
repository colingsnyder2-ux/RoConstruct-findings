// from server: 100% by auto
// roc 2009-06 005a12e0  unit: seg_005a0000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a12e0
//
// 005a12e0  56                   push esi
// 005a12e1  8b742408             mov esi, dword ptr [esp + 8]
// 005a12e5  8b4604               mov eax, dword ptr [esi + 4]
// 005a12e8  8b08                 mov ecx, dword ptr [eax]
// 005a12ea  6a40                 push 0x40
// 005a12ec  6a01                 push 1
// 005a12ee  56                   push esi
// 005a12ef  ffd1                 call ecx
// 005a12f1  898640010000         mov dword ptr [esi + 0x140], eax
// 005a12f7  83c40c               add esp, 0xc
// 005a12fa  c70090125a00         mov dword ptr [eax], 0x5a1290
// 005a1300  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 005a1307  7561                 jne 0x5a136a
// 005a1309  807c240c00           cmp byte ptr [esp + 0xc], 0
// 005a130e  7415                 je 0x5a1325
// 005a1310  8b16                 mov edx, dword ptr [esi]
// 005a1312  c7421404000000       mov dword ptr [edx + 0x14], 4
// 005a1319  8b06                 mov eax, dword ptr [esi]
// 005a131b  8b08                 mov ecx, dword ptr [eax]
// 005a131d  56                   push esi
// 005a131e  ffd1                 call ecx
// 005a1320  83c404               add esp, 4
// 005a1323  5e                   pop esi
// 005a1324  c3                   ret 
// 005a1325  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 005a1328  55                   push ebp
// 005a1329  33ed                 xor ebp, ebp
// 005a132b  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 005a132e  7e39                 jle 0x5a1369
// 005a1330  53                   push ebx
// 005a1331  57                   push edi
// 005a1332  8d791c               lea edi, [ecx + 0x1c]
// 005a1335  8d5818               lea ebx, [eax + 0x18]
// 005a1338  8b47f0               mov eax, dword ptr [edi - 0x10]
// 005a133b  8b0f                 mov ecx, dword ptr [edi]
// 005a133d  8b5604               mov edx, dword ptr [esi + 4]
// 005a1340  8b5208               mov edx, dword ptr [edx + 8]
// 005a1343  03c0                 add eax, eax
// 005a1345  03c9                 add ecx, ecx
// 005a1347  03c0                 add eax, eax
// 005a1349  03c0                 add eax, eax
// 005a134b  50                   push eax
// 005a134c  03c9                 add ecx, ecx
// 005a134e  03c9                 add ecx, ecx
// 005a1350  51                   push ecx
// 005a1351  6a01                 push 1
// 005a1353  56                   push esi
// 005a1354  ffd2                 call edx
// 005a1356  8903                 mov dword ptr [ebx], eax
// 005a1358  45                   inc ebp
// 005a1359  83c410               add esp, 0x10
// 005a135c  83c304               add ebx, 4
// 005a135f  83c754               add edi, 0x54
// 005a1362  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 005a1365  7cd1                 jl 0x5a1338
// 005a1367  5f                   pop edi
// 005a1368  5b                   pop ebx
// 005a1369  5d                   pop ebp
// 005a136a  5e                   pop esi
// 005a136b  c3                   ret 
// library jpeg-6b/jcmainct.c (function _jinit_c_main_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
