// roc 2012-06 009672c0  unit: RBX::CellContact  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009672c0
//
// 009672c0  83380c               cmp dword ptr [eax], 0xc
// 009672c3  7515                 jne 0x9672da
// 009672c5  8b4008               mov eax, dword ptr [eax + 8]
// 009672c8  a900010000           test eax, 0x100
// 009672cd  750b                 jne 0x9672da
// 009672cf  0fb65132             movzx edx, byte ptr [ecx + 0x32]
// 009672d3  3bc2                 cmp eax, edx
// 009672d5  7c03                 jl 0x9672da
// 009672d7  ff4924               dec dword ptr [ecx + 0x24]
// 009672da  c3                   ret 
// library lua-5.1.4/lcode.c (function _freeexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
