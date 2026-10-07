// roc 2008-06 006e8e50  unit: CXTPModuleHandle  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8e50
//
// 006e8e50  56                   push esi
// 006e8e51  57                   push edi
// 006e8e52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e8e56  57                   push edi
// 006e8e57  8bf1                 mov esi, ecx
// 006e8e59  e842feffff           call 0x6e8ca0
// 006e8e5e  85c0                 test eax, eax
// 006e8e60  7511                 jne 0x6e8e73
// 006e8e62  57                   push edi
// 006e8e63  8bce                 mov ecx, esi
// 006e8e65  e876feffff           call 0x6e8ce0
// 006e8e6a  85c0                 test eax, eax
// 006e8e6c  7505                 jne 0x6e8e73
// 006e8e6e  5f                   pop edi
// 006e8e6f  5e                   pop esi
// 006e8e70  c20400               ret 4
// 006e8e73  5f                   pop edi
// 006e8e74  b801000000           mov eax, 1
// 006e8e79  5e                   pop esi
// 006e8e7a  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?Init@CXTPModuleHandle@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
