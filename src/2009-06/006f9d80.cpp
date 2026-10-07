// roc 2009-06 006f9d80  unit: RBX::GroupDragTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9d80
//
// 006f9d80  83380c               cmp dword ptr [eax], 0xc
// 006f9d83  7515                 jne 0x6f9d9a
// 006f9d85  8b4008               mov eax, dword ptr [eax + 8]
// 006f9d88  a900010000           test eax, 0x100
// 006f9d8d  750b                 jne 0x6f9d9a
// 006f9d8f  0fb65132             movzx edx, byte ptr [ecx + 0x32]
// 006f9d93  3bc2                 cmp eax, edx
// 006f9d95  7c03                 jl 0x6f9d9a
// 006f9d97  ff4924               dec dword ptr [ecx + 0x24]
// 006f9d9a  c3                   ret 
// library lua-5.1.4/lcode.c (function _freeexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
