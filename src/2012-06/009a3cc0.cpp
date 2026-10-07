// roc 2012-06 009a3cc0  unit: CXTPCommandBar  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a3cc0
//
// 009a3cc0  56                   push esi
// 009a3cc1  8bf1                 mov esi, ecx
// 009a3cc3  85f6                 test esi, esi
// 009a3cc5  7518                 jne 0x9a3cdf
// 009a3cc7  68704e9800           push 0x984e70
// 009a3ccc  b958a0e500           mov ecx, 0xe5a058
// 009a3cd1  e8a8580f00           call 0xa9957e
// 009a3cd6  85c0                 test eax, eax
// 009a3cd8  752d                 jne 0x9a3d07
// 009a3cda  e8e1e6fdff           call 0x9823c0
// 009a3cdf  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 009a3ce5  85c0                 test eax, eax
// 009a3ce7  751e                 jne 0x9a3d07
// 009a3ce9  68704e9800           push 0x984e70
// 009a3cee  b958a0e500           mov ecx, 0xe5a058
// 009a3cf3  e886580f00           call 0xa9957e
// 009a3cf8  85c0                 test eax, eax
// 009a3cfa  7505                 jne 0x9a3d01
// 009a3cfc  e8bfe6fdff           call 0x9823c0
// 009a3d01  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 009a3d07  5e                   pop esi
// 009a3d08  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?GetMouseManager@CXTPCommandBars@@QBEPAVCXTPMouseManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
