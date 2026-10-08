// from server: 100% by auto
// roc 2007-08 00502010  unit: G3D::Log  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00502010
//
// 00502010  56                   push esi
// 00502011  6a00                 push 0
// 00502013  8bf0                 mov esi, eax
// 00502015  ff15fceb7700         call dword ptr [0x77ebfc]
// 0050201b  85c0                 test eax, eax
// 0050201d  7463                 je 0x502082
// 0050201f  8bc6                 mov eax, esi
// 00502021  8d5001               lea edx, [eax + 1]
// 00502024  8a08                 mov cl, byte ptr [eax]
// 00502026  83c001               add eax, 1
// 00502029  84c9                 test cl, cl
// 0050202b  75f7                 jne 0x502024
// 0050202d  2bc2                 sub eax, edx
// 0050202f  57                   push edi
// 00502030  83c001               add eax, 1
// 00502033  50                   push eax
// 00502034  6842200000           push 0x2042
// 00502039  ff15b8d27700         call dword ptr [0x77d2b8]
// 0050203f  8bf8                 mov edi, eax
// 00502041  85ff                 test edi, edi
// 00502043  742f                 je 0x502074
// 00502045  57                   push edi
// 00502046  ff15bcd27700         call dword ptr [0x77d2bc]
// 0050204c  8d642400             lea esp, [esp]
// 00502050  8a0e                 mov cl, byte ptr [esi]
// 00502052  8808                 mov byte ptr [eax], cl
// 00502054  83c601               add esi, 1
// 00502057  83c001               add eax, 1
// 0050205a  84c9                 test cl, cl
// 0050205c  75f2                 jne 0x502050
// 0050205e  57                   push edi
// 0050205f  ff15c0d27700         call dword ptr [0x77d2c0]
// 00502065  ff1514ec7700         call dword ptr [0x77ec14]
// 0050206b  57                   push edi
// 0050206c  6a01                 push 1
// 0050206e  ff1510ec7700         call dword ptr [0x77ec10]
// 00502074  ff1508ec7700         call dword ptr [0x77ec08]
// 0050207a  57                   push edi
// 0050207b  ff1510d27700         call dword ptr [0x77d210]
// 00502081  5f                   pop edi
// 00502082  5e                   pop esi
// 00502083  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
