// from server: 100% by auto
// roc 2010-06 0054f900  unit: G3D::Log  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054f900
//
// 0054f900  56                   push esi
// 0054f901  6a00                 push 0
// 0054f903  8bf0                 mov esi, eax
// 0054f905  ff15c4ba9e00         call dword ptr [0x9ebac4]
// 0054f90b  85c0                 test eax, eax
// 0054f90d  7457                 je 0x54f966
// 0054f90f  8bc6                 mov eax, esi
// 0054f911  8d5001               lea edx, [eax + 1]
// 0054f914  8a08                 mov cl, byte ptr [eax]
// 0054f916  40                   inc eax
// 0054f917  84c9                 test cl, cl
// 0054f919  75f9                 jne 0x54f914
// 0054f91b  2bc2                 sub eax, edx
// 0054f91d  57                   push edi
// 0054f91e  40                   inc eax
// 0054f91f  50                   push eax
// 0054f920  6842200000           push 0x2042
// 0054f925  ff1538a39e00         call dword ptr [0x9ea338]
// 0054f92b  8bf8                 mov edi, eax
// 0054f92d  85ff                 test edi, edi
// 0054f92f  7427                 je 0x54f958
// 0054f931  57                   push edi
// 0054f932  ff153ca39e00         call dword ptr [0x9ea33c]
// 0054f938  8a0e                 mov cl, byte ptr [esi]
// 0054f93a  8808                 mov byte ptr [eax], cl
// 0054f93c  46                   inc esi
// 0054f93d  40                   inc eax
// 0054f93e  84c9                 test cl, cl
// 0054f940  75f6                 jne 0x54f938
// 0054f942  57                   push edi
// 0054f943  ff1540a39e00         call dword ptr [0x9ea340]
// 0054f949  ff1590bc9e00         call dword ptr [0x9ebc90]
// 0054f94f  57                   push edi
// 0054f950  6a01                 push 1
// 0054f952  ff1594bc9e00         call dword ptr [0x9ebc94]
// 0054f958  ff15a0bc9e00         call dword ptr [0x9ebca0]
// 0054f95e  57                   push edi
// 0054f95f  ff157ca29e00         call dword ptr [0x9ea27c]
// 0054f965  5f                   pop edi
// 0054f966  5e                   pop esi
// 0054f967  c3                   ret 
// library g3d-6.09/G3Dcpp\debugAssert.cpp (function ?postToClipboard@_internal@G3D@@YAXPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/debugAssert.cpp
