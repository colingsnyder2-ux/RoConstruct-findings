// roc 2010-06 00737d00  unit: seg_00730000  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737d00
//
// 00737d00  56                   push esi
// 00737d01  8b742408             mov esi, dword ptr [esp + 8]
// 00737d05  6a01                 push 1
// 00737d07  56                   push esi
// 00737d08  e85392feff           call 0x720f60
// 00737d0d  6a00                 push 0
// 00737d0f  56                   push esi
// 00737d10  e88ba2feff           call 0x721fa0
// 00737d15  6a01                 push 1
// 00737d17  56                   push esi
// 00737d18  e80396feff           call 0x721320
// 00737d1d  83c418               add esp, 0x18
// 00737d20  85c0                 test eax, eax
// 00737d22  0f84a5000000         je 0x737dcd
// 00737d28  6a01                 push 1
// 00737d2a  56                   push esi
// 00737d2b  e81094feff           call 0x721140
// 00737d30  83c408               add esp, 8
// 00737d33  83f801               cmp eax, 1
// 00737d36  753a                 jne 0x737d72
// 00737d38  6a00                 push 0
// 00737d3a  6a00                 push 0
// 00737d3c  56                   push esi
// 00737d3d  e83e9bfeff           call 0x721880
// 00737d42  6aff                 push -1
// 00737d44  56                   push esi
// 00737d45  e8c693feff           call 0x721110
// 00737d4a  6a01                 push 1
// 00737d4c  56                   push esi
// 00737d4d  e8ae99feff           call 0x721700
// 00737d52  68edd8ffff           push 0xffffd8ed
// 00737d57  56                   push esi
// 00737d58  e8e39cfeff           call 0x721a40
// 00737d5d  83c424               add esp, 0x24
// 00737d60  6a02                 push 2
// 00737d62  56                   push esi
// 00737d63  e8c89dfeff           call 0x721b30
// 00737d68  83c408               add esp, 8
// 00737d6b  b801000000           mov eax, 1
// 00737d70  5e                   pop esi
// 00737d71  c3                   ret 
// 00737d72  6a01                 push 1
// 00737d74  56                   push esi
// 00737d75  e8669bfeff           call 0x7218e0
// 00737d7a  83c408               add esp, 8
// 00737d7d  85c0                 test eax, eax
// 00737d7f  7426                 je 0x737da7
// 00737d81  57                   push edi
// 00737d82  68edd8ffff           push 0xffffd8ed
// 00737d87  56                   push esi
// 00737d88  e8739afeff           call 0x721800
// 00737d8d  6aff                 push -1
// 00737d8f  56                   push esi
// 00737d90  e88b95feff           call 0x721320
// 00737d95  6afe                 push -2
// 00737d97  56                   push esi
// 00737d98  8bf8                 mov edi, eax
// 00737d9a  e8c191feff           call 0x720f60
// 00737d9f  83c418               add esp, 0x18
// 00737da2  85ff                 test edi, edi
// 00737da4  5f                   pop edi
// 00737da5  7510                 jne 0x737db7
// 00737da7  68ece8a400           push 0xa4e8ec
// 00737dac  6a01                 push 1
// 00737dae  56                   push esi
// 00737daf  e87caffeff           call 0x722d30
// 00737db4  83c40c               add esp, 0xc
// 00737db7  6a01                 push 1
// 00737db9  56                   push esi
// 00737dba  e8219bfeff           call 0x7218e0
// 00737dbf  83c408               add esp, 8
// 00737dc2  6a02                 push 2
// 00737dc4  56                   push esi
// 00737dc5  e8669dfeff           call 0x721b30
// 00737dca  83c408               add esp, 8
// 00737dcd  b801000000           mov eax, 1
// 00737dd2  5e                   pop esi
// 00737dd3  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_newproxy)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
