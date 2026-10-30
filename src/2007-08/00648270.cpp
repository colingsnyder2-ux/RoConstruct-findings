// from server: 100% by auto
// roc 2007-08 00648270  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648270
//
// 00648270  56                   push esi
// 00648271  57                   push edi
// 00648272  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00648276  8bf1                 mov esi, ecx
// 00648278  3b7e08               cmp edi, dword ptr [esi + 8]
// 0064827b  721a                 jb 0x648297
// 0064827d  8b06                 mov eax, dword ptr [esi]
// 0064827f  50                   push eax
// 00648280  ff153cd07700         call dword ptr [0x77d03c]
// 00648286  034608               add eax, dword ptr [esi + 8]
// 00648289  3bf8                 cmp edi, eax
// 0064828b  730a                 jae 0x648297
// 0064828d  5f                   pop edi
// 0064828e  b801000000           mov eax, 1
// 00648293  5e                   pop esi
// 00648294  c20400               ret 4
// 00648297  5f                   pop edi
// 00648298  33c0                 xor eax, eax
// 0064829a  5e                   pop esi
// 0064829b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?Lookup@CXTPImageManagerImageList@@QAEHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
