// from server: 100% by auto
// roc 2010-06 0078f700  unit: RBX::GroupDragTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f700
//
// 0078f700  83380c               cmp dword ptr [eax], 0xc
// 0078f703  7515                 jne 0x78f71a
// 0078f705  8b4008               mov eax, dword ptr [eax + 8]
// 0078f708  a900010000           test eax, 0x100
// 0078f70d  750b                 jne 0x78f71a
// 0078f70f  0fb65132             movzx edx, byte ptr [ecx + 0x32]
// 0078f713  3bc2                 cmp eax, edx
// 0078f715  7c03                 jl 0x78f71a
// 0078f717  ff4924               dec dword ptr [ecx + 0x24]
// 0078f71a  c3                   ret 
// library lua-5.1.4/lcode.c (function _freeexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
