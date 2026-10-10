// from server: 100% by tester
// roc 2008-06 00402f50  unit: ATL::CRegObject  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402f50
//
// 00402f50  8b442404             mov eax, dword ptr [esp + 4]
// 00402f54  56                   push esi
// 00402f55  8bf1                 mov esi, ecx
// 00402f57  83c9ff               or ecx, 0xffffffff
// 00402f5a  2bc8                 sub ecx, eax
// 00402f5c  83f908               cmp ecx, 8
// 00402f5f  7215                 jb 0x402f76
// 00402f61  83c008               add eax, 8
// 00402f64  50                   push eax
// 00402f65  ff15b0288000         call dword ptr [0x8028b0]
// 00402f6b  83c404               add esp, 4
// 00402f6e  85c0                 test eax, eax
// 00402f70  750e                 jne 0x402f80
// 00402f72  5e                   pop esi
// 00402f73  c20400               ret 4
// 00402f76  6857000780           push 0x80070057
// 00402f7b  e880e0ffff           call 0x401000
// 00402f80  8b16                 mov edx, dword ptr [esi]
// 00402f82  8910                 mov dword ptr [eax], edx
// 00402f84  8906                 mov dword ptr [esi], eax
// 00402f86  83c008               add eax, 8
// 00402f89  5e                   pop esi
// 00402f8a  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?Allocate@?$CAtlSafeAllocBufferManager@VCCRTAllocator@ATL@@@_ATL_SAFE_ALLOCA_IMPL@ATL@@QAEPAXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
