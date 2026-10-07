// roc 2007-08 0045f960  unit: CObjectBrowser  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045f960
//
// 0045f960  8b442404             mov eax, dword ptr [esp + 4]
// 0045f964  50                   push eax
// 0045f965  e8d80a1d00           call 0x630442
// 0045f96a  f7d8                 neg eax
// 0045f96c  1bc0                 sbb eax, eax
// 0045f96e  f7d8                 neg eax
// 0045f970  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTHexEdit.cpp (function ?PreCreateWindow@CXTHexEdit@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTHexEdit.cpp
