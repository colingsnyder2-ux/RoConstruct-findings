// roc 2011-06 007f2320  unit: RBX::AdvLuaDragTool  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2320
//
// 007f2320  83380c               cmp dword ptr [eax], 0xc
// 007f2323  7515                 jne 0x7f233a
// 007f2325  8b4008               mov eax, dword ptr [eax + 8]
// 007f2328  a900010000           test eax, 0x100
// 007f232d  750b                 jne 0x7f233a
// 007f232f  0fb65132             movzx edx, byte ptr [ecx + 0x32]
// 007f2333  3bc2                 cmp eax, edx
// 007f2335  7c03                 jl 0x7f233a
// 007f2337  ff4924               dec dword ptr [ecx + 0x24]
// 007f233a  c3                   ret 
// library lua-5.1.4/lcode.c (function _freeexp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
