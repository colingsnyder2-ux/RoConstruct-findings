// from server: 100% by auto
// roc 2012-06 009ca3a0  unit: CXTPModuleHandle  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca3a0
//
// 009ca3a0  56                   push esi
// 009ca3a1  57                   push edi
// 009ca3a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca3a6  57                   push edi
// 009ca3a7  8bf1                 mov esi, ecx
// 009ca3a9  e842feffff           call 0x9ca1f0
// 009ca3ae  85c0                 test eax, eax
// 009ca3b0  7511                 jne 0x9ca3c3
// 009ca3b2  57                   push edi
// 009ca3b3  8bce                 mov ecx, esi
// 009ca3b5  e876feffff           call 0x9ca230
// 009ca3ba  85c0                 test eax, eax
// 009ca3bc  7505                 jne 0x9ca3c3
// 009ca3be  5f                   pop edi
// 009ca3bf  5e                   pop esi
// 009ca3c0  c20400               ret 4
// 009ca3c3  5f                   pop edi
// 009ca3c4  b801000000           mov eax, 1
// 009ca3c9  5e                   pop esi
// 009ca3ca  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?Init@CXTPModuleHandle@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
