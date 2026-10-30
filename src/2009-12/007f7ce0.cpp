// roc 2009-12 007f7ce0  unit: IIHH::?$CMap  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7ce0
//
// 007f7ce0  56                   push esi
// 007f7ce1  8bf1                 mov esi, ecx
// 007f7ce3  837e6400             cmp dword ptr [esi + 0x64], 0
// 007f7ce7  7e17                 jle 0x7f7d00
// 007f7ce9  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f7cec  8b08                 mov ecx, dword ptr [eax]
// 007f7cee  8b11                 mov edx, dword ptr [ecx]
// 007f7cf0  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007f7cf6  6a00                 push 0
// 007f7cf8  ffd0                 call eax
// 007f7cfa  837e6400             cmp dword ptr [esi + 0x64], 0
// 007f7cfe  7fe9                 jg 0x7f7ce9
// 007f7d00  5e                   pop esi
// 007f7d01  c3                   ret 
// copied from an identical function in another client (function ?OnRemoved@CXTPControlAction@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControl.cpp