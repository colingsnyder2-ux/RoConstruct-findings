// from server: 100% by auto
// roc 2011-06 00782c10  unit: seg_00780000  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782c10
//
// 00782c10  56                   push esi
// 00782c11  8b742408             mov esi, dword ptr [esp + 8]
// 00782c15  6a01                 push 1
// 00782c17  56                   push esi
// 00782c18  e84315feff           call 0x764160
// 00782c1d  686cb9a900           push 0xa9b96c
// 00782c22  6a01                 push 1
// 00782c24  56                   push esi
// 00782c25  e8060cfeff           call 0x763830
// 00782c2a  83c414               add esp, 0x14
// 00782c2d  85c0                 test eax, eax
// 00782c2f  0f85b2000000         jne 0x782ce7
// 00782c35  6a01                 push 1
// 00782c37  56                   push esi
// 00782c38  e813f9fdff           call 0x762550
// 00782c3d  83c408               add esp, 8
// 00782c40  83f804               cmp eax, 4
// 00782c43  7775                 ja 0x782cba
// 00782c45  ff2485f02c7800       jmp dword ptr [eax*4 + 0x782cf0]
// 00782c4c  6a00                 push 0
// 00782c4e  6a01                 push 1
// 00782c50  56                   push esi
// 00782c51  e80afbfdff           call 0x762760
// 00782c56  50                   push eax
// 00782c57  56                   push esi
// 00782c58  e843fdfdff           call 0x7629a0
// 00782c5d  83c414               add esp, 0x14
// 00782c60  b801000000           mov eax, 1
// 00782c65  5e                   pop esi
// 00782c66  c3                   ret 
// 00782c67  6a01                 push 1
// 00782c69  56                   push esi
// 00782c6a  e8b1f8fdff           call 0x762520
// 00782c6f  83c408               add esp, 8
// 00782c72  b801000000           mov eax, 1
// 00782c77  5e                   pop esi
// 00782c78  c3                   ret 
// 00782c79  6a01                 push 1
// 00782c7b  56                   push esi
// 00782c7c  e8affafdff           call 0x762730
// 00782c81  83c408               add esp, 8
// 00782c84  85c0                 test eax, eax
// 00782c86  b878f2a600           mov eax, 0xa6f278
// 00782c8b  7505                 jne 0x782c92
// 00782c8d  b85cf9a700           mov eax, 0xa7f95c
// 00782c92  50                   push eax
// 00782c93  56                   push esi
// 00782c94  e807fdfdff           call 0x7629a0
// 00782c99  83c408               add esp, 8
// 00782c9c  b801000000           mov eax, 1
// 00782ca1  5e                   pop esi
// 00782ca2  c3                   ret 
// 00782ca3  6a03                 push 3
// 00782ca5  6874e9a800           push 0xa8e974
// 00782caa  56                   push esi
// 00782cab  e8b0fcfdff           call 0x762960
// 00782cb0  83c40c               add esp, 0xc
// 00782cb3  b801000000           mov eax, 1
// 00782cb8  5e                   pop esi
// 00782cb9  c3                   ret 
// 00782cba  6a01                 push 1
// 00782cbc  56                   push esi
// 00782cbd  e8cefbfdff           call 0x762890
// 00782cc2  83c408               add esp, 8
// 00782cc5  50                   push eax
// 00782cc6  6a01                 push 1
// 00782cc8  56                   push esi
// 00782cc9  e882f8fdff           call 0x762550
// 00782cce  50                   push eax
// 00782ccf  56                   push esi
// 00782cd0  e89bf8fdff           call 0x762570
// 00782cd5  83c410               add esp, 0x10
// 00782cd8  50                   push eax
// 00782cd9  688c82ab00           push 0xab828c
// 00782cde  56                   push esi
// 00782cdf  e85cfdfdff           call 0x762a40
// 00782ce4  83c410               add esp, 0x10
// 00782ce7  b801000000           mov eax, 1
// 00782cec  5e                   pop esi
// 00782ced  c3                   ret 
// 00782cee  8bff                 mov edi, edi
// 00782cf0  a32c780079           mov dword ptr [0x7900782c], eax
// 00782cf5  2c78                 sub al, 0x78
// 00782cf7  00ba2c78004c         add byte ptr [edx + 0x4c00782c], bh
// 00782cfd  2c78                 sub al, 0x78
// 00782cff  00672c               add byte ptr [edi + 0x2c], ah
// 00782d02  7800                 js 0x782d04
// library lua-5.1.4/lbaselib.c (function _luaB_tostring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
