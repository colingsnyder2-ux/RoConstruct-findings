// roc 2011-06 00851ee0  unit: CXTPModuleHandle  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851ee0
//
// 00851ee0  56                   push esi
// 00851ee1  57                   push edi
// 00851ee2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00851ee6  57                   push edi
// 00851ee7  8bf1                 mov esi, ecx
// 00851ee9  e842feffff           call 0x851d30
// 00851eee  85c0                 test eax, eax
// 00851ef0  7511                 jne 0x851f03
// 00851ef2  57                   push edi
// 00851ef3  8bce                 mov ecx, esi
// 00851ef5  e876feffff           call 0x851d70
// 00851efa  85c0                 test eax, eax
// 00851efc  7505                 jne 0x851f03
// 00851efe  5f                   pop edi
// 00851eff  5e                   pop esi
// 00851f00  c20400               ret 4
// 00851f03  5f                   pop edi
// 00851f04  b801000000           mov eax, 1
// 00851f09  5e                   pop esi
// 00851f0a  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?Init@CXTPModuleHandle@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
