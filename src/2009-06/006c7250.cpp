// from server: 100% by auto
// roc 2009-06 006c7250  unit: seg_006c0000  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7250
//
// 006c7250  56                   push esi
// 006c7251  8b742408             mov esi, dword ptr [esp + 8]
// 006c7255  6814c18e00           push 0x8ec114
// 006c725a  6a02                 push 2
// 006c725c  56                   push esi
// 006c725d  e86e30ffff           call 0x6ba2d0
// 006c7262  6a01                 push 1
// 006c7264  56                   push esi
// 006c7265  e8d61cffff           call 0x6b8f40
// 006c726a  6a01                 push 1
// 006c726c  6a00                 push 0
// 006c726e  56                   push esi
// 006c726f  e82c28ffff           call 0x6b9aa0
// 006c7274  6aff                 push -1
// 006c7276  56                   push esi
// 006c7277  e8f41cffff           call 0x6b8f70
// 006c727c  83c428               add esp, 0x28
// 006c727f  85c0                 test eax, eax
// 006c7281  750e                 jne 0x6c7291
// 006c7283  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c7287  c70000000000         mov dword ptr [eax], 0
// 006c728d  33c0                 xor eax, eax
// 006c728f  5e                   pop esi
// 006c7290  c3                   ret 
// 006c7291  6aff                 push -1
// 006c7293  56                   push esi
// 006c7294  e8871dffff           call 0x6b9020
// 006c7299  83c408               add esp, 8
// 006c729c  85c0                 test eax, eax
// 006c729e  741a                 je 0x6c72ba
// 006c72a0  6a03                 push 3
// 006c72a2  56                   push esi
// 006c72a3  e8d81bffff           call 0x6b8e80
// 006c72a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c72ac  51                   push ecx
// 006c72ad  6a03                 push 3
// 006c72af  56                   push esi
// 006c72b0  e8cb1effff           call 0x6b9180
// 006c72b5  83c414               add esp, 0x14
// 006c72b8  5e                   pop esi
// 006c72b9  c3                   ret 
// 006c72ba  68ecc08e00           push 0x8ec0ec
// 006c72bf  56                   push esi
// 006c72c0  e87b2fffff           call 0x6ba240
// 006c72c5  83c408               add esp, 8
// 006c72c8  33c0                 xor eax, eax
// 006c72ca  5e                   pop esi
// 006c72cb  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _generic_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
