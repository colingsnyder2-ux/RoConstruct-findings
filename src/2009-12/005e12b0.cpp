// roc 2009-12 005e12b0  unit: RBX::RbxG3D::RenderScene  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e12b0
//
// 005e12b0  6aff                 push -1
// 005e12b2  6891e09300           push 0x93e091
// 005e12b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e12bd  50                   push eax
// 005e12be  64892500000000       mov dword ptr fs:[0], esp
// 005e12c5  83ec0c               sub esp, 0xc
// 005e12c8  53                   push ebx
// 005e12c9  55                   push ebp
// 005e12ca  56                   push esi
// 005e12cb  57                   push edi
// 005e12cc  8bf9                 mov edi, ecx
// 005e12ce  8b4708               mov eax, dword ptr [edi + 8]
// 005e12d1  8b2f                 mov ebp, dword ptr [edi]
// 005e12d3  8bc8                 mov ecx, eax
// 005e12d5  c1e104               shl ecx, 4
// 005e12d8  03c8                 add ecx, eax
// 005e12da  03c9                 add ecx, ecx
// 005e12dc  03c9                 add ecx, ecx
// 005e12de  6a10                 push 0x10
// 005e12e0  51                   push ecx
// 005e12e1  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005e12e5  e8d68f0000           call 0x5ea2c0
// 005e12ea  8b4f08               mov ecx, dword ptr [edi + 8]
// 005e12ed  8b542434             mov edx, dword ptr [esp + 0x34]
// 005e12f1  83c408               add esp, 8
// 005e12f4  3bd1                 cmp edx, ecx
// 005e12f6  8907                 mov dword ptr [edi], eax
// 005e12f8  7d02                 jge 0x5e12fc
// 005e12fa  8bca                 mov ecx, edx
// 005e12fc  8bf1                 mov esi, ecx
// 005e12fe  c1e604               shl esi, 4
// 005e1301  03f1                 add esi, ecx
// 005e1303  8d1cb0               lea ebx, [eax + esi*4]
// 005e1306  8bf0                 mov esi, eax
// 005e1308  89742410             mov dword ptr [esp + 0x10], esi
// 005e130c  3bf3                 cmp esi, ebx
// 005e130e  0f8385000000         jae 0x5e1399
// 005e1314  8d7d2c               lea edi, [ebp + 0x2c]
// 005e1317  8b2d0cb29800         mov ebp, dword ptr [0x98b20c]
// 005e131d  8d4900               lea ecx, [ecx]
// 005e1320  89742418             mov dword ptr [esp + 0x18], esi
// 005e1324  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005e132c  85f6                 test esi, esi
// 005e132e  744b                 je 0x5e137b
// 005e1330  8d57d4               lea edx, [edi - 0x2c]
// 005e1333  52                   push edx
// 005e1334  8bce                 mov ecx, esi
// 005e1336  e8c5250100           call 0x5f3900
// 005e133b  d947f8               fld dword ptr [edi - 8]
// 005e133e  d95e24               fstp dword ptr [esi + 0x24]
// 005e1341  d947fc               fld dword ptr [edi - 4]
// 005e1344  d95e28               fstp dword ptr [esi + 0x28]
// 005e1347  d907                 fld dword ptr [edi]
// 005e1349  d95e2c               fstp dword ptr [esi + 0x2c]
// 005e134c  d94704               fld dword ptr [edi + 4]
// 005e134f  d95e30               fstp dword ptr [esi + 0x30]
// 005e1352  8b4708               mov eax, dword ptr [edi + 8]
// 005e1355  894634               mov dword ptr [esi + 0x34], eax
// 005e1358  d9470c               fld dword ptr [edi + 0xc]
// 005e135b  d95e38               fstp dword ptr [esi + 0x38]
// 005e135e  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005e1361  894e3c               mov dword ptr [esi + 0x3c], ecx
// 005e1364  c7464000000000       mov dword ptr [esi + 0x40], 0
// 005e136b  8b4714               mov eax, dword ptr [edi + 0x14]
// 005e136e  85c0                 test eax, eax
// 005e1370  7409                 je 0x5e137b
// 005e1372  894640               mov dword ptr [esi + 0x40], eax
// 005e1375  83c004               add eax, 4
// 005e1378  50                   push eax
// 005e1379  ffd5                 call ebp
// 005e137b  83c644               add esi, 0x44
// 005e137e  83c744               add edi, 0x44
// 005e1381  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005e1389  89742410             mov dword ptr [esp + 0x10], esi
// 005e138d  3bf3                 cmp esi, ebx
// 005e138f  728f                 jb 0x5e1320
// 005e1391  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005e1395  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005e1399  8bc2                 mov eax, edx
// 005e139b  c1e004               shl eax, 4
// 005e139e  03c2                 add eax, edx
// 005e13a0  8d4c8500             lea ecx, [ebp + eax*4]
// 005e13a4  3be9                 cmp ebp, ecx
// 005e13a6  736f                 jae 0x5e1417
// 005e13a8  2bcd                 sub ecx, ebp
// 005e13aa  49                   dec ecx
// 005e13ab  b8f1f0f0f0           mov eax, 0xf0f0f0f1
// 005e13b0  f7e1                 mul ecx
// 005e13b2  8bda                 mov ebx, edx
// 005e13b4  c1eb06               shr ebx, 6
// 005e13b7  8d7d40               lea edi, [ebp + 0x40]
// 005e13ba  43                   inc ebx
// 005e13bb  eb03                 jmp 0x5e13c0
// 005e13bd  8d4900               lea ecx, [ecx]
// 005e13c0  8b07                 mov eax, dword ptr [edi]
// 005e13c2  85c0                 test eax, eax
// 005e13c4  7449                 je 0x5e140f
// 005e13c6  83c004               add eax, 4
// 005e13c9  50                   push eax
// 005e13ca  ff1508b29800         call dword ptr [0x98b208]
// 005e13d0  85c0                 test eax, eax
// 005e13d2  7535                 jne 0x5e1409
// 005e13d4  8b0f                 mov ecx, dword ptr [edi]
// 005e13d6  8b7108               mov esi, dword ptr [ecx + 8]
// 005e13d9  85f6                 test esi, esi
// 005e13db  741e                 je 0x5e13fb
// 005e13dd  8d4900               lea ecx, [ecx]
// 005e13e0  8b0e                 mov ecx, dword ptr [esi]
// 005e13e2  8b11                 mov edx, dword ptr [ecx]
// 005e13e4  8b4204               mov eax, dword ptr [edx + 4]
// 005e13e7  ffd0                 call eax
// 005e13e9  8bc6                 mov eax, esi
// 005e13eb  8b7604               mov esi, dword ptr [esi + 4]
// 005e13ee  50                   push eax
// 005e13ef  e866242100           call 0x7f385a
// 005e13f4  83c404               add esp, 4
// 005e13f7  85f6                 test esi, esi
// 005e13f9  75e5                 jne 0x5e13e0
// 005e13fb  8b0f                 mov ecx, dword ptr [edi]
// 005e13fd  85c9                 test ecx, ecx
// 005e13ff  7408                 je 0x5e1409
// 005e1401  8b11                 mov edx, dword ptr [ecx]
// 005e1403  8b02                 mov eax, dword ptr [edx]
// 005e1405  6a01                 push 1
// 005e1407  ffd0                 call eax
// 005e1409  c70700000000         mov dword ptr [edi], 0
// 005e140f  83c744               add edi, 0x44
// 005e1412  83eb01               sub ebx, 1
// 005e1415  75a9                 jne 0x5e13c0
// 005e1417  55                   push ebp
// 005e1418  e8c38f0000           call 0x5ea3e0
// 005e141d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e1421  83c404               add esp, 4
// 005e1424  5f                   pop edi
// 005e1425  5e                   pop esi
// 005e1426  5d                   pop ebp
// 005e1427  5b                   pop ebx
// 005e1428  64890d00000000       mov dword ptr fs:[0], ecx
// 005e142f  83c418               add esp, 0x18
// 005e1432  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?realloc@?$Array@VRenderSurface@Render@RBX@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
