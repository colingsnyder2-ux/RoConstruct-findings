// from server: 100% by auto
// roc 2008-06 0066ade0  unit: RBX::GroupDragTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ade0
//
// 0066ade0  83380c               cmp dword ptr [eax], 0xc
// 0066ade3  7515                 jne 0x66adfa
// 0066ade5  8b4008               mov eax, dword ptr [eax + 8]
// 0066ade8  a900010000           test eax, 0x100
// 0066aded  750b                 jne 0x66adfa
// 0066adef  0fb65132             movzx edx, byte ptr [ecx + 0x32]
// 0066adf3  3bc2                 cmp eax, edx
// 0066adf5  7c03                 jl 0x66adfa
// 0066adf7  ff4924               dec dword ptr [ecx + 0x24]
// 0066adfa  c3                   ret 
// library lua-5.1.4/lcode.c (function _freeexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
