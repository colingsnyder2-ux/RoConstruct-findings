// roc 2011-06 008a6050  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6050
//
// 008a6050  8b442404             mov eax, dword ptr [esp + 4]
// 008a6054  56                   push esi
// 008a6055  50                   push eax
// 008a6056  8bf1                 mov esi, ecx
// 008a6058  e82352f7ff           call 0x81b280
// 008a605d  83f8ff               cmp eax, -1
// 008a6060  7506                 jne 0x8a6068
// 008a6062  0bc0                 or eax, eax
// 008a6064  5e                   pop esi
// 008a6065  c20400               ret 4
// 008a6068  8bce                 mov ecx, esi
// 008a606a  e8d1e5ffff           call 0x8a4640
// 008a606f  33c0                 xor eax, eax
// 008a6071  5e                   pop esi
// 008a6072  c20400               ret 4
// library xtp-15.2.1/Source\Ribbon\XTPRibbonBar.cpp (function ?OnCreate@CXTPRibbonBar@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonBar.cpp
