// roc 2012-06 009ca0a0  unit: ATL::CRegObject  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ca0a0
//
// 009ca0a0  56                   push esi
// 009ca0a1  8bf1                 mov esi, ecx
// 009ca0a3  8b4604               mov eax, dword ptr [esi + 4]
// 009ca0a6  57                   push edi
// 009ca0a7  85c0                 test eax, eax
// 009ca0a9  741d                 je 0x9ca0c8
// 009ca0ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009ca0af  6a00                 push 0
// 009ca0b1  51                   push ecx
// 009ca0b2  ffd0                 call eax
// 009ca0b4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca0b8  50                   push eax
// 009ca0b9  57                   push edi
// 009ca0ba  8bce                 mov ecx, esi
// 009ca0bc  e80ffeffff           call 0x9c9ed0
// 009ca0c1  8bc7                 mov eax, edi
// 009ca0c3  5f                   pop edi
// 009ca0c4  5e                   pop esi
// 009ca0c5  c20800               ret 8
// 009ca0c8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009ca0cc  33c0                 xor eax, eax
// 009ca0ce  50                   push eax
// 009ca0cf  57                   push edi
// 009ca0d0  8bce                 mov ecx, esi
// 009ca0d2  e8f9fdffff           call 0x9c9ed0
// 009ca0d7  8bc7                 mov eax, edi
// 009ca0d9  5f                   pop edi
// 009ca0da  5e                   pop esi
// 009ca0db  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
