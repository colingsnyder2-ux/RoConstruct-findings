// from server: 100% by auto
// roc 2012-06 00627960  unit: G3D::Log  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00627960
//
// 00627960  56                   push esi
// 00627961  6a00                 push 0
// 00627963  8bf0                 mov esi, eax
// 00627965  ff15583ab200         call dword ptr [0xb23a58]
// 0062796b  85c0                 test eax, eax
// 0062796d  7457                 je 0x6279c6
// 0062796f  8bc6                 mov eax, esi
// 00627971  8d5001               lea edx, [eax + 1]
// 00627974  8a08                 mov cl, byte ptr [eax]
// 00627976  40                   inc eax
// 00627977  84c9                 test cl, cl
// 00627979  75f9                 jne 0x627974
// 0062797b  2bc2                 sub eax, edx
// 0062797d  57                   push edi
// 0062797e  40                   inc eax
// 0062797f  50                   push eax
// 00627980  6842200000           push 0x2042
// 00627985  ff155822b200         call dword ptr [0xb22258]
// 0062798b  8bf8                 mov edi, eax
// 0062798d  85ff                 test edi, edi
// 0062798f  7427                 je 0x6279b8
// 00627991  57                   push edi
// 00627992  ff155422b200         call dword ptr [0xb22254]
// 00627998  8a0e                 mov cl, byte ptr [esi]
// 0062799a  8808                 mov byte ptr [eax], cl
// 0062799c  46                   inc esi
// 0062799d  40                   inc eax
// 0062799e  84c9                 test cl, cl
// 006279a0  75f6                 jne 0x627998
// 006279a2  57                   push edi
// 006279a3  ff155022b200         call dword ptr [0xb22250]
// 006279a9  ff15703ab200         call dword ptr [0xb23a70]
// 006279af  57                   push edi
// 006279b0  6a01                 push 1
// 006279b2  ff156c3ab200         call dword ptr [0xb23a6c]
// 006279b8  ff15643ab200         call dword ptr [0xb23a64]
// 006279be  57                   push edi
// 006279bf  ff15ec21b200         call dword ptr [0xb221ec]
// 006279c5  5f                   pop edi
// 006279c6  5e                   pop esi
// 006279c7  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
