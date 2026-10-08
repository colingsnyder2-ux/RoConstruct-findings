// roc 2007-03 004f5b80  unit: seg_004f0000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5b80
//
// 004f5b80  56                   push esi
// 004f5b81  6a00                 push 0
// 004f5b83  8bf0                 mov esi, eax
// 004f5b85  ff15ccec7700         call dword ptr [0x77eccc]
// 004f5b8b  85c0                 test eax, eax
// 004f5b8d  7463                 je 0x4f5bf2
// 004f5b8f  8bc6                 mov eax, esi
// 004f5b91  8d5001               lea edx, [eax + 1]
// 004f5b94  8a08                 mov cl, byte ptr [eax]
// 004f5b96  83c001               add eax, 1
// 004f5b99  84c9                 test cl, cl
// 004f5b9b  75f7                 jne 0x4f5b94
// 004f5b9d  2bc2                 sub eax, edx
// 004f5b9f  57                   push edi
// 004f5ba0  83c001               add eax, 1
// 004f5ba3  50                   push eax
// 004f5ba4  6842200000           push 0x2042
// 004f5ba9  ff1578d27700         call dword ptr [0x77d278]
// 004f5baf  8bf8                 mov edi, eax
// 004f5bb1  85ff                 test edi, edi
// 004f5bb3  742f                 je 0x4f5be4
// 004f5bb5  57                   push edi
// 004f5bb6  ff157cd27700         call dword ptr [0x77d27c]
// 004f5bbc  8d642400             lea esp, [esp]
// 004f5bc0  8a0e                 mov cl, byte ptr [esi]
// 004f5bc2  8808                 mov byte ptr [eax], cl
// 004f5bc4  83c601               add esi, 1
// 004f5bc7  83c001               add eax, 1
// 004f5bca  84c9                 test cl, cl
// 004f5bcc  75f2                 jne 0x4f5bc0
// 004f5bce  57                   push edi
// 004f5bcf  ff1580d27700         call dword ptr [0x77d280]
// 004f5bd5  ff15e4ec7700         call dword ptr [0x77ece4]
// 004f5bdb  57                   push edi
// 004f5bdc  6a01                 push 1
// 004f5bde  ff15e0ec7700         call dword ptr [0x77ece0]
// 004f5be4  ff15d8ec7700         call dword ptr [0x77ecd8]
// 004f5bea  57                   push edi
// 004f5beb  ff15d4d17700         call dword ptr [0x77d1d4]
// 004f5bf1  5f                   pop edi
// 004f5bf2  5e                   pop esi
// 004f5bf3  c3                   ret 
// library rbxgs-g3d/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/debugAssert.cpp
