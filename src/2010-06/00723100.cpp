// roc 2010-06 00723100  unit: RBX::UniversalTool  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723100
//
// 00723100  53                   push ebx
// 00723101  55                   push ebp
// 00723102  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00723106  56                   push esi
// 00723107  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072310b  57                   push edi
// 0072310c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00723110  85ed                 test ebp, ebp
// 00723112  0f8498000000         je 0x7231b0
// 00723118  33db                 xor ebx, ebx
// 0072311a  8bc7                 mov eax, edi
// 0072311c  391f                 cmp dword ptr [edi], ebx
// 0072311e  7409                 je 0x723129
// 00723120  83c008               add eax, 8
// 00723123  43                   inc ebx
// 00723124  833800               cmp dword ptr [eax], 0
// 00723127  75f7                 jne 0x723120
// 00723129  6a01                 push 1
// 0072312b  68d8cfa400           push 0xa4cfd8
// 00723130  68f0d8ffff           push 0xffffd8f0
// 00723135  56                   push esi
// 00723136  e8e5f4ffff           call 0x722620
// 0072313b  55                   push ebp
// 0072313c  6aff                 push -1
// 0072313e  56                   push esi
// 0072313f  e85ce6ffff           call 0x7217a0
// 00723144  6aff                 push -1
// 00723146  56                   push esi
// 00723147  e8f4dfffff           call 0x721140
// 0072314c  83c424               add esp, 0x24
// 0072314f  83f805               cmp eax, 5
// 00723152  743f                 je 0x723193
// 00723154  6afe                 push -2
// 00723156  56                   push esi
// 00723157  e804deffff           call 0x720f60
// 0072315c  53                   push ebx
// 0072315d  55                   push ebp
// 0072315e  68eed8ffff           push 0xffffd8ee
// 00723163  56                   push esi
// 00723164  e8b7f4ffff           call 0x722620
// 00723169  83c418               add esp, 0x18
// 0072316c  85c0                 test eax, eax
// 0072316e  740f                 je 0x72317f
// 00723170  55                   push ebp
// 00723171  68b8cfa400           push 0xa4cfb8
// 00723176  56                   push esi
// 00723177  e824f3ffff           call 0x7224a0
// 0072317c  83c40c               add esp, 0xc
// 0072317f  6aff                 push -1
// 00723181  56                   push esi
// 00723182  e889dfffff           call 0x721110
// 00723187  55                   push ebp
// 00723188  6afd                 push -3
// 0072318a  56                   push esi
// 0072318b  e850e8ffff           call 0x7219e0
// 00723190  83c414               add esp, 0x14
// 00723193  6afe                 push -2
// 00723195  56                   push esi
// 00723196  e815deffff           call 0x720fb0
// 0072319b  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0072319f  83c8ff               or eax, 0xffffffff
// 007231a2  2bc5                 sub eax, ebp
// 007231a4  50                   push eax
// 007231a5  56                   push esi
// 007231a6  e855deffff           call 0x721000
// 007231ab  83c410               add esp, 0x10
// 007231ae  eb04                 jmp 0x7231b4
// 007231b0  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007231b4  833f00               cmp dword ptr [edi], 0
// 007231b7  744e                 je 0x723207
// 007231b9  b8feffffff           mov eax, 0xfffffffe
// 007231be  2bc5                 sub eax, ebp
// 007231c0  89442418             mov dword ptr [esp + 0x18], eax
// 007231c4  85ed                 test ebp, ebp
// 007231c6  7e1b                 jle 0x7231e3
// 007231c8  8bdd                 mov ebx, ebp
// 007231ca  f7db                 neg ebx
// 007231cc  8d642400             lea esp, [esp]
// 007231d0  53                   push ebx
// 007231d1  56                   push esi
// 007231d2  e839dfffff           call 0x721110
// 007231d7  83c408               add esp, 8
// 007231da  83ed01               sub ebp, 1
// 007231dd  75f1                 jne 0x7231d0
// 007231df  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007231e3  8b4f04               mov ecx, dword ptr [edi + 4]
// 007231e6  55                   push ebp
// 007231e7  51                   push ecx
// 007231e8  56                   push esi
// 007231e9  e872e4ffff           call 0x721660
// 007231ee  8b17                 mov edx, dword ptr [edi]
// 007231f0  8b442424             mov eax, dword ptr [esp + 0x24]
// 007231f4  52                   push edx
// 007231f5  50                   push eax
// 007231f6  56                   push esi
// 007231f7  e8e4e7ffff           call 0x7219e0
// 007231fc  83c708               add edi, 8
// 007231ff  83c418               add esp, 0x18
// 00723202  833f00               cmp dword ptr [edi], 0
// 00723205  75bd                 jne 0x7231c4
// 00723207  83c9ff               or ecx, 0xffffffff
// 0072320a  2bcd                 sub ecx, ebp
// 0072320c  51                   push ecx
// 0072320d  56                   push esi
// 0072320e  e84dddffff           call 0x720f60
// 00723213  83c408               add esp, 8
// 00723216  5f                   pop edi
// 00723217  5e                   pop esi
// 00723218  5d                   pop ebp
// 00723219  5b                   pop ebx
// 0072321a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_openlib)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
