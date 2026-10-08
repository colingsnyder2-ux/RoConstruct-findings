// from server: 100% by auto
// roc 2008-06 0050a1c0  unit: G3D::Log  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050a1c0
//
// 0050a1c0  56                   push esi
// 0050a1c1  6a00                 push 0
// 0050a1c3  8bf0                 mov esi, eax
// 0050a1c5  ff15f42d8000         call dword ptr [0x802df4]
// 0050a1cb  85c0                 test eax, eax
// 0050a1cd  7457                 je 0x50a226
// 0050a1cf  8bc6                 mov eax, esi
// 0050a1d1  8d5001               lea edx, [eax + 1]
// 0050a1d4  8a08                 mov cl, byte ptr [eax]
// 0050a1d6  40                   inc eax
// 0050a1d7  84c9                 test cl, cl
// 0050a1d9  75f9                 jne 0x50a1d4
// 0050a1db  2bc2                 sub eax, edx
// 0050a1dd  57                   push edi
// 0050a1de  40                   inc eax
// 0050a1df  50                   push eax
// 0050a1e0  6842200000           push 0x2042
// 0050a1e5  ff15dc218000         call dword ptr [0x8021dc]
// 0050a1eb  8bf8                 mov edi, eax
// 0050a1ed  85ff                 test edi, edi
// 0050a1ef  7427                 je 0x50a218
// 0050a1f1  57                   push edi
// 0050a1f2  ff15d8218000         call dword ptr [0x8021d8]
// 0050a1f8  8a0e                 mov cl, byte ptr [esi]
// 0050a1fa  8808                 mov byte ptr [eax], cl
// 0050a1fc  46                   inc esi
// 0050a1fd  40                   inc eax
// 0050a1fe  84c9                 test cl, cl
// 0050a200  75f6                 jne 0x50a1f8
// 0050a202  57                   push edi
// 0050a203  ff15d4218000         call dword ptr [0x8021d4]
// 0050a209  ff15dc2d8000         call dword ptr [0x802ddc]
// 0050a20f  57                   push edi
// 0050a210  6a01                 push 1
// 0050a212  ff15e02d8000         call dword ptr [0x802de0]
// 0050a218  ff15e82d8000         call dword ptr [0x802de8]
// 0050a21e  57                   push edi
// 0050a21f  ff1570228000         call dword ptr [0x802270]
// 0050a225  5f                   pop edi
// 0050a226  5e                   pop esi
// 0050a227  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
