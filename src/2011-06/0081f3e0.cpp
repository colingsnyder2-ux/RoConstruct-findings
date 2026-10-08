// from server: 100% by auto
// roc 2011-06 0081f3e0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f3e0
//
// 0081f3e0  56                   push esi
// 0081f3e1  57                   push edi
// 0081f3e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0081f3e6  8bf1                 mov esi, ecx
// 0081f3e8  3b7e08               cmp edi, dword ptr [esi + 8]
// 0081f3eb  721a                 jb 0x81f407
// 0081f3ed  8b06                 mov eax, dword ptr [esi]
// 0081f3ef  50                   push eax
// 0081f3f0  ff155c00a400         call dword ptr [0xa4005c]
// 0081f3f6  034608               add eax, dword ptr [esi + 8]
// 0081f3f9  3bf8                 cmp edi, eax
// 0081f3fb  730a                 jae 0x81f407
// 0081f3fd  5f                   pop edi
// 0081f3fe  b801000000           mov eax, 1
// 0081f403  5e                   pop esi
// 0081f404  c20400               ret 4
// 0081f407  5f                   pop edi
// 0081f408  33c0                 xor eax, eax
// 0081f40a  5e                   pop esi
// 0081f40b  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Lookup@CXTPImageManagerImageList@@QAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
