// roc 2008-06 0078a030  unit: CXTColorBase  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a030
//
// 0078a030  8b442404             mov eax, dword ptr [esp + 4]
// 0078a034  56                   push esi
// 0078a035  50                   push eax
// 0078a036  8bf1                 mov esi, ecx
// 0078a038  e8cd66f1ff           call 0x6a070a
// 0078a03d  85c0                 test eax, eax
// 0078a03f  7504                 jne 0x78a045
// 0078a041  5e                   pop esi
// 0078a042  c20400               ret 4
// 0078a045  c6465400             mov byte ptr [esi + 0x54], 0
// 0078a049  b801000000           mov eax, 1
// 0078a04e  5e                   pop esi
// 0078a04f  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?PreCreateWindow@CXTColorBase@@MAEHAAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
