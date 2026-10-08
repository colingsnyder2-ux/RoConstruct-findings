// from server: 100% by auto
// roc 2010-06 00738050  unit: seg_00730000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00738050
//
// 00738050  56                   push esi
// 00738051  8b742408             mov esi, dword ptr [esp + 8]
// 00738055  57                   push edi
// 00738056  56                   push esi
// 00738057  e884a3feff           call 0x7223e0
// 0073805c  6a01                 push 1
// 0073805e  56                   push esi
// 0073805f  8bf8                 mov edi, eax
// 00738061  e8da90feff           call 0x721140
// 00738066  83c40c               add esp, 0xc
// 00738069  83f806               cmp eax, 6
// 0073806c  750f                 jne 0x73807d
// 0073806e  6a01                 push 1
// 00738070  56                   push esi
// 00738071  e80a91feff           call 0x721180
// 00738076  83c408               add esp, 8
// 00738079  85c0                 test eax, eax
// 0073807b  7410                 je 0x73808d
// 0073807d  6874e9a400           push 0xa4e974
// 00738082  6a01                 push 1
// 00738084  56                   push esi
// 00738085  e8a6acfeff           call 0x722d30
// 0073808a  83c40c               add esp, 0xc
// 0073808d  6a01                 push 1
// 0073808f  56                   push esi
// 00738090  e87b90feff           call 0x721110
// 00738095  6a01                 push 1
// 00738097  57                   push edi
// 00738098  56                   push esi
// 00738099  e8228efeff           call 0x720ec0
// 0073809e  83c414               add esp, 0x14
// 007380a1  5f                   pop edi
// 007380a2  b801000000           mov eax, 1
// 007380a7  5e                   pop esi
// 007380a8  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_cocreate)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
