// roc 2010-06 00782490  unit: seg_00780000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782490
//
// 00782490  56                   push esi
// 00782491  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00782495  81fe01010000         cmp esi, 0x101
// 0078249b  7d3d                 jge 0x7824da
// 0078249d  56                   push esi
// 0078249e  ff1500a89e00         call dword ptr [0x9ea800]
// 007824a4  83c404               add esp, 4
// 007824a7  56                   push esi
// 007824a8  85c0                 test eax, eax
// 007824aa  7417                 je 0x7824c3
// 007824ac  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007824b0  8b4834               mov ecx, dword ptr [eax + 0x34]
// 007824b3  684036a500           push 0xa53640
// 007824b8  51                   push ecx
// 007824b9  e82209fbff           call 0x732de0
// 007824be  83c40c               add esp, 0xc
// 007824c1  5e                   pop esi
// 007824c2  c3                   ret 
// 007824c3  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007824c7  8b4234               mov eax, dword ptr [edx + 0x34]
// 007824ca  683c36a500           push 0xa5363c
// 007824cf  50                   push eax
// 007824d0  e80b09fbff           call 0x732de0
// 007824d5  83c40c               add esp, 0xc
// 007824d8  5e                   pop esi
// 007824d9  c3                   ret 
// 007824da  8b04b59c31a500       mov eax, dword ptr [esi*4 + 0xa5319c]
// 007824e1  5e                   pop esi
// 007824e2  c3                   ret 
// copied from an identical function in another client (function _luaX_token2str)

// roc-cl: 21022
// roc-lang: c
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: lua-5.1-dll llex.c