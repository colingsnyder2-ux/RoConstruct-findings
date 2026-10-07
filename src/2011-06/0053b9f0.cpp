// roc 2011-06 0053b9f0  unit: G3D::Log  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053b9f0
//
// 0053b9f0  56                   push esi
// 0053b9f1  6a00                 push 0
// 0053b9f3  8bf0                 mov esi, eax
// 0053b9f5  ff15601ba400         call dword ptr [0xa41b60]
// 0053b9fb  85c0                 test eax, eax
// 0053b9fd  7457                 je 0x53ba56
// 0053b9ff  8bc6                 mov eax, esi
// 0053ba01  8d5001               lea edx, [eax + 1]
// 0053ba04  8a08                 mov cl, byte ptr [eax]
// 0053ba06  40                   inc eax
// 0053ba07  84c9                 test cl, cl
// 0053ba09  75f9                 jne 0x53ba04
// 0053ba0b  2bc2                 sub eax, edx
// 0053ba0d  57                   push edi
// 0053ba0e  40                   inc eax
// 0053ba0f  50                   push eax
// 0053ba10  6842200000           push 0x2042
// 0053ba15  ff151403a400         call dword ptr [0xa40314]
// 0053ba1b  8bf8                 mov edi, eax
// 0053ba1d  85ff                 test edi, edi
// 0053ba1f  7427                 je 0x53ba48
// 0053ba21  57                   push edi
// 0053ba22  ff151803a400         call dword ptr [0xa40318]
// 0053ba28  8a0e                 mov cl, byte ptr [esi]
// 0053ba2a  8808                 mov byte ptr [eax], cl
// 0053ba2c  46                   inc esi
// 0053ba2d  40                   inc eax
// 0053ba2e  84c9                 test cl, cl
// 0053ba30  75f6                 jne 0x53ba28
// 0053ba32  57                   push edi
// 0053ba33  ff151c03a400         call dword ptr [0xa4031c]
// 0053ba39  ff15441ba400         call dword ptr [0xa41b44]
// 0053ba3f  57                   push edi
// 0053ba40  6a01                 push 1
// 0053ba42  ff15481ba400         call dword ptr [0xa41b48]
// 0053ba48  ff15681ba400         call dword ptr [0xa41b68]
// 0053ba4e  57                   push edi
// 0053ba4f  ff158402a400         call dword ptr [0xa40284]
// 0053ba55  5f                   pop edi
// 0053ba56  5e                   pop esi
// 0053ba57  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
