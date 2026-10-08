// from server: 100% by auto
// roc 2008-06 006b9720  unit: CXTPCommandBar  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9720
//
// 006b9720  56                   push esi
// 006b9721  57                   push edi
// 006b9722  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006b9726  8bf1                 mov esi, ecx
// 006b9728  3b7e08               cmp edi, dword ptr [esi + 8]
// 006b972b  721a                 jb 0x6b9747
// 006b972d  8b06                 mov eax, dword ptr [esi]
// 006b972f  50                   push eax
// 006b9730  ff154c208000         call dword ptr [0x80204c]
// 006b9736  034608               add eax, dword ptr [esi + 8]
// 006b9739  3bf8                 cmp edi, eax
// 006b973b  730a                 jae 0x6b9747
// 006b973d  5f                   pop edi
// 006b973e  b801000000           mov eax, 1
// 006b9743  5e                   pop esi
// 006b9744  c20400               ret 4
// 006b9747  5f                   pop edi
// 006b9748  33c0                 xor eax, eax
// 006b974a  5e                   pop esi
// 006b974b  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?Lookup@CXTPImageManagerImageList@@QAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
