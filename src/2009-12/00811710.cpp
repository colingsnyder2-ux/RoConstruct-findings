// roc 2009-12 00811710  unit: CXTPToolBar  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00811710
//
// 00811710  56                   push esi
// 00811711  8bf1                 mov esi, ecx
// 00811713  8b06                 mov eax, dword ptr [esi]
// 00811715  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 0081171b  ffd2                 call edx
// 0081171d  85c0                 test eax, eax
// 0081171f  7504                 jne 0x811725
// 00811721  33c0                 xor eax, eax
// 00811723  5e                   pop esi
// 00811724  c3                   ret 
// 00811725  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081172b  83793c00             cmp dword ptr [ecx + 0x3c], 0
// 0081172f  7409                 je 0x81173a
// 00811731  e81a540300           call 0x846b50
// 00811736  85c0                 test eax, eax
// 00811738  74e7                 je 0x811721
// 0081173a  b801000000           mov eax, 1
// 0081173f  5e                   pop esi
// 00811740  c3                   ret 
// copied from an identical function in another client (function ?ShouldSerializeBar@CXTPToolBar@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp