// from server: 100% by auto
// roc 2008-06 006a2c10  unit: CXTPCommandBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2c10
//
// 006a2c10  56                   push esi
// 006a2c11  8bf1                 mov esi, ecx
// 006a2c13  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006a2c19  e87a931100           call 0x7bbf98
// 006a2c1e  a900004000           test eax, 0x400000
// 006a2c23  b801000000           mov eax, 1
// 006a2c28  7506                 jne 0x6a2c30
// 006a2c2a  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 006a2c30  5e                   pop esi
// 006a2c31  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?IsLayoutRTL@CXTPCommandBars@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
