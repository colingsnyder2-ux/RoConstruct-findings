// roc 2008-06 005ce0d0  unit: RBX::Camera  size: 805 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ce0d0
//
// 005ce0d0  83ec74               sub esp, 0x74
// 005ce0d3  53                   push ebx
// 005ce0d4  8bd9                 mov ebx, ecx
// 005ce0d6  55                   push ebp
// 005ce0d7  8d44241c             lea eax, [esp + 0x1c]
// 005ce0db  8dab30010000         lea ebp, [ebx + 0x130]
// 005ce0e1  50                   push eax
// 005ce0e2  8bcd                 mov ecx, ebp
// 005ce0e4  e8c726f4ff           call 0x5107b0
// 005ce0e9  d9842480000000       fld dword ptr [esp + 0x80]
// 005ce0f0  d90504e78100         fld dword ptr [0x81e704]
// 005ce0f6  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 005ce0fd  dce9                 fsub st(1), st(0)
// 005ce0ff  d9c9                 fxch st(1)
// 005ce101  d9942480000000       fst dword ptr [esp + 0x80]
// 005ce108  d9842484000000       fld dword ptr [esp + 0x84]
// 005ce10f  d8e2                 fsub st(2)
// 005ce111  d9942484000000       fst dword ptr [esp + 0x84]
// 005ce118  d9842488000000       fld dword ptr [esp + 0x88]
// 005ce11f  d8e3                 fsub st(3)
// 005ce121  d9942488000000       fst dword ptr [esp + 0x88]
// 005ce128  d984248c000000       fld dword ptr [esp + 0x8c]
// 005ce12f  d8c4                 fadd st(4)
// 005ce131  d994248c000000       fst dword ptr [esp + 0x8c]
// 005ce138  d9842490000000       fld dword ptr [esp + 0x90]
// 005ce13f  d8c5                 fadd st(5)
// 005ce141  d9942490000000       fst dword ptr [esp + 0x90]
// 005ce148  d9842494000000       fld dword ptr [esp + 0x94]
// 005ce14f  dec6                 faddp st(6)
// 005ce151  d9cd                 fxch st(5)
// 005ce153  d9942494000000       fst dword ptr [esp + 0x94]
// 005ce15a  83f802               cmp eax, 2
// 005ce15d  750d                 jne 0x5ce16c
// 005ce15f  83bbd401000005       cmp dword ptr [ebx + 0x1d4], 5
// 005ce166  0f8575020000         jne 0x5ce3e1
// 005ce16c  83bbd401000000       cmp dword ptr [ebx + 0x1d4], 0
// 005ce173  d905ac9b8100         fld dword ptr [0x819bac]
// 005ce179  0f856e010000         jne 0x5ce2ed
// 005ce17f  d9ca                 fxch st(2)
// 005ce181  d8c5                 fadd st(5)
// 005ce183  d9ce                 fxch st(6)
// 005ce185  d8c4                 fadd st(4)
// 005ce187  d9c9                 fxch st(1)
// 005ce189  d8c3                 fadd st(3)
// 005ce18b  d9ce                 fxch st(6)
// 005ce18d  d8ca                 fmul st(2)
// 005ce18f  d9c9                 fxch st(1)
// 005ce191  d8ca                 fmul st(2)
// 005ce193  d9ce                 fxch st(6)
// 005ce195  d8ca                 fmul st(2)
// 005ce197  d9c9                 fxch st(1)
// 005ce199  d8a3c8010000         fsub dword ptr [ebx + 0x1c8]
// 005ce19f  d9ce                 fxch st(6)
// 005ce1a1  d8a3cc010000         fsub dword ptr [ebx + 0x1cc]
// 005ce1a7  d9c9                 fxch st(1)
// 005ce1a9  d8a3d0010000         fsub dword ptr [ebx + 0x1d0]
// 005ce1af  d983c8010000         fld dword ptr [ebx + 0x1c8]
// 005ce1b5  d8c7                 fadd st(7)
// 005ce1b7  d99bc8010000         fstp dword ptr [ebx + 0x1c8]
// 005ce1bd  d983cc010000         fld dword ptr [ebx + 0x1cc]
// 005ce1c3  d8c2                 fadd st(2)
// 005ce1c5  d99bcc010000         fstp dword ptr [ebx + 0x1cc]
// 005ce1cb  d983d0010000         fld dword ptr [ebx + 0x1d0]
// 005ce1d1  d8c1                 fadd st(1)
// 005ce1d3  d99bd0010000         fstp dword ptr [ebx + 0x1d0]
// 005ce1d9  d98398010000         fld dword ptr [ebx + 0x198]
// 005ce1df  dec7                 faddp st(7)
// 005ce1e1  d9ce                 fxch st(6)
// 005ce1e3  d99b98010000         fstp dword ptr [ebx + 0x198]
// 005ce1e9  d8839c010000         fadd dword ptr [ebx + 0x19c]
// 005ce1ef  d99b9c010000         fstp dword ptr [ebx + 0x19c]
// 005ce1f5  d983a0010000         fld dword ptr [ebx + 0x1a0]
// 005ce1fb  dec5                 faddp st(5)
// 005ce1fd  d9cc                 fxch st(4)
// 005ce1ff  d99ba0010000         fstp dword ptr [ebx + 0x1a0]
// 005ce205  d9842490000000       fld dword ptr [esp + 0x90]
// 005ce20c  d984248c000000       fld dword ptr [esp + 0x8c]
// 005ce213  d9c9                 fxch st(1)
// 005ce215  d9cd                 fxch st(5)
// 005ce217  83f801               cmp eax, 1
// 005ce21a  7405                 je 0x5ce221
// 005ce21c  83f802               cmp eax, 2
// 005ce21f  753c                 jne 0x5ce25d
// 005ce221  ddd8                 fstp st(0)
// 005ce223  d98398010000         fld dword ptr [ebx + 0x198]
// 005ce229  d8a3c8010000         fsub dword ptr [ebx + 0x1c8]
// 005ce22f  d95c2410             fstp dword ptr [esp + 0x10]
// 005ce233  d9839c010000         fld dword ptr [ebx + 0x19c]
// 005ce239  d8a3cc010000         fsub dword ptr [ebx + 0x1cc]
// 005ce23f  d983a0010000         fld dword ptr [ebx + 0x1a0]
// 005ce245  d8a3d0010000         fsub dword ptr [ebx + 0x1d0]
// 005ce24b  dcc8                 fmul st(0), st(0)
// 005ce24d  d9c1                 fld st(1)
// 005ce24f  deca                 fmulp st(2)
// 005ce251  dec1                 faddp st(1)
// 005ce253  d9442410             fld dword ptr [esp + 0x10]
// 005ce257  dcc8                 fmul st(0), st(0)
// 005ce259  dec1                 faddp st(1)
// 005ce25b  d9fa                 fsqrt 
// 005ce25d  d95c2408             fstp dword ptr [esp + 8]
// 005ce261  d98398010000         fld dword ptr [ebx + 0x198]
// 005ce267  d8a3c8010000         fsub dword ptr [ebx + 0x1c8]
// 005ce26d  d95c2410             fstp dword ptr [esp + 0x10]
// 005ce271  d9839c010000         fld dword ptr [ebx + 0x19c]
// 005ce277  d8a3cc010000         fsub dword ptr [ebx + 0x1cc]
// 005ce27d  d983a0010000         fld dword ptr [ebx + 0x1a0]
// 005ce283  d8a3d0010000         fsub dword ptr [ebx + 0x1d0]
// 005ce289  dcc8                 fmul st(0), st(0)
// 005ce28b  d9c1                 fld st(1)
// 005ce28d  deca                 fmulp st(2)
// 005ce28f  dec1                 faddp st(1)
// 005ce291  d9442410             fld dword ptr [esp + 0x10]
// 005ce295  dcc8                 fmul st(0), st(0)
// 005ce297  dec1                 faddp st(1)
// 005ce299  d9fa                 fsqrt 
// 005ce29b  d95c240c             fstp dword ptr [esp + 0xc]
// 005ce29f  83f802               cmp eax, 2
// 005ce2a2  7550                 jne 0x5ce2f4
// 005ce2a4  d905e4a68300         fld dword ptr [0x83a6e4]
// 005ce2aa  dccc                 fmul st(4), st(0)
// 005ce2ac  d9cc                 fxch st(4)
// 005ce2ae  d99c2480000000       fstp dword ptr [esp + 0x80]
// 005ce2b5  d9ca                 fxch st(2)
// 005ce2b7  d8cb                 fmul st(3)
// 005ce2b9  d99c2484000000       fstp dword ptr [esp + 0x84]
// 005ce2c0  d8ca                 fmul st(2)
// 005ce2c2  d99c2488000000       fstp dword ptr [esp + 0x88]
// 005ce2c9  d8c9                 fmul st(1)
// 005ce2cb  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 005ce2d2  dcc9                 fmul st(1), st(0)
// 005ce2d4  d9c9                 fxch st(1)
// 005ce2d6  d99c2490000000       fstp dword ptr [esp + 0x90]
// 005ce2dd  d88c2494000000       fmul dword ptr [esp + 0x94]
// 005ce2e4  d99c2494000000       fstp dword ptr [esp + 0x94]
// 005ce2eb  eb11                 jmp 0x5ce2fe
// 005ce2ed  ddd9                 fstp st(1)
// 005ce2ef  e923ffffff           jmp 0x5ce217
// 005ce2f4  ddd8                 fstp st(0)
// 005ce2f6  dddb                 fstp st(3)
// 005ce2f8  ddd9                 fstp st(1)
// 005ce2fa  ddd8                 fstp st(0)
// 005ce2fc  ddd8                 fstp st(0)
// 005ce2fe  d9442408             fld dword ptr [esp + 8]
// 005ce302  83ec08               sub esp, 8
// 005ce305  dd1c24               fstp qword ptr [esp]
// 005ce308  e83376edff           call 0x4a5940
// 005ce30d  83c408               add esp, 8
// 005ce310  84c0                 test al, al
// 005ce312  7461                 je 0x5ce375
// 005ce314  d944240c             fld dword ptr [esp + 0xc]
// 005ce318  83ec08               sub esp, 8
// 005ce31b  dd1c24               fstp qword ptr [esp]
// 005ce31e  e81d76edff           call 0x4a5940
// 005ce323  83c408               add esp, 8
// 005ce326  84c0                 test al, al
// 005ce328  744b                 je 0x5ce375
// 005ce32a  dd0580798200         fld qword ptr [0x827980]
// 005ce330  83ec08               sub esp, 8
// 005ce333  dd1c24               fstp qword ptr [esp]
// 005ce336  e80576edff           call 0x4a5940
// 005ce33b  83c408               add esp, 8
// 005ce33e  84c0                 test al, al
// 005ce340  7433                 je 0x5ce375
// 005ce342  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 005ce349  d905cc9d8100         fld dword ptr [0x819dcc]
// 005ce34f  51                   push ecx
// 005ce350  8d942484000000       lea edx, [esp + 0x84]
// 005ce357  52                   push edx
// 005ce358  83ec0c               sub esp, 0xc
// 005ce35b  d95c2408             fstp dword ptr [esp + 8]
// 005ce35f  8bcb                 mov ecx, ebx
// 005ce361  d9442420             fld dword ptr [esp + 0x20]
// 005ce365  d95c2404             fstp dword ptr [esp + 4]
// 005ce369  d944241c             fld dword ptr [esp + 0x1c]
// 005ce36d  d91c24               fstp dword ptr [esp]
// 005ce370  e87bfcffff           call 0x5cdff0
// 005ce375  56                   push esi
// 005ce376  57                   push edi
// 005ce377  8d442454             lea eax, [esp + 0x54]
// 005ce37b  50                   push eax
// 005ce37c  8bcd                 mov ecx, ebp
// 005ce37e  e82d24f4ff           call 0x5107b0
// 005ce383  8d9374010000         lea edx, [ebx + 0x174]
// 005ce389  8bf0                 mov esi, eax
// 005ce38b  8bfa                 mov edi, edx
// 005ce38d  b909000000           mov ecx, 9
// 005ce392  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 005ce394  d94024               fld dword ptr [eax + 0x24]
// 005ce397  d95a24               fstp dword ptr [edx + 0x24]
// 005ce39a  d94028               fld dword ptr [eax + 0x28]
// 005ce39d  d95a28               fstp dword ptr [edx + 0x28]
// 005ce3a0  d9402c               fld dword ptr [eax + 0x2c]
// 005ce3a3  d95a2c               fstp dword ptr [edx + 0x2c]
// 005ce3a6  8d4c2424             lea ecx, [esp + 0x24]
// 005ce3aa  51                   push ecx
// 005ce3ab  e800f60000           call 0x5dd9b0
// 005ce3b0  83c404               add esp, 4
// 005ce3b3  5f                   pop edi
// 005ce3b4  5e                   pop esi
// 005ce3b5  84c0                 test al, al
// 005ce3b7  740c                 je 0x5ce3c5
// 005ce3b9  8d54241c             lea edx, [esp + 0x1c]
// 005ce3bd  52                   push edx
// 005ce3be  8bcd                 mov ecx, ebp
// 005ce3c0  e81b24f4ff           call 0x5107e0
// 005ce3c5  8bcb                 mov ecx, ebx
// 005ce3c7  e884dbffff           call 0x5cbf50
// 005ce3cc  85c0                 test eax, eax
// 005ce3ce  741d                 je 0x5ce3ed
// 005ce3d0  8b10                 mov edx, dword ptr [eax]
// 005ce3d2  8bc8                 mov ecx, eax
// 005ce3d4  8b420c               mov eax, dword ptr [edx + 0xc]
// 005ce3d7  ffd0                 call eax
// 005ce3d9  5d                   pop ebp
// 005ce3da  5b                   pop ebx
// 005ce3db  83c474               add esp, 0x74
// 005ce3de  c22000               ret 0x20
// 005ce3e1  ddd9                 fstp st(1)
// 005ce3e3  dddc                 fstp st(4)
// 005ce3e5  dddb                 fstp st(3)
// 005ce3e7  ddd9                 fstp st(1)
// 005ce3e9  ddd8                 fstp st(0)
// 005ce3eb  ddd8                 fstp st(0)
// 005ce3ed  5d                   pop ebp
// 005ce3ee  5b                   pop ebx
// 005ce3ef  83c474               add esp, 0x74
// 005ce3f2  c22000               ret 0x20
// library rbxgs/roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp (function ?zoomExtents@Camera@RBX@@QAEXVExtents@2@ABVRect2D@G3D@@W4ZoomType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp
