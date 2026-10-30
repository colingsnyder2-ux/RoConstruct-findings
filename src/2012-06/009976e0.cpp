// from server: 100% by auto
// roc 2012-06 009976e0  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009976e0
//
// 009976e0  56                   push esi
// 009976e1  57                   push edi
// 009976e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009976e6  8bf1                 mov esi, ecx
// 009976e8  3b7e08               cmp edi, dword ptr [esi + 8]
// 009976eb  721a                 jb 0x997707
// 009976ed  8b06                 mov eax, dword ptr [esi]
// 009976ef  50                   push eax
// 009976f0  ff157020b200         call dword ptr [0xb22070]
// 009976f6  034608               add eax, dword ptr [esi + 8]
// 009976f9  3bf8                 cmp edi, eax
// 009976fb  730a                 jae 0x997707
// 009976fd  5f                   pop edi
// 009976fe  b801000000           mov eax, 1
// 00997703  5e                   pop esi
// 00997704  c20400               ret 4
// 00997707  5f                   pop edi
// 00997708  33c0                 xor eax, eax
// 0099770a  5e                   pop esi
// 0099770b  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?Lookup@CXTPImageManagerImageList@@QAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
