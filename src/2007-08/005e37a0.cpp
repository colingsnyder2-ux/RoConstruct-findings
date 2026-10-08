// roc 2007-08 005e37a0  unit: RBX::IMovingManager  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e37a0
//
// 005e37a0  8b442404             mov eax, dword ptr [esp + 4]
// 005e37a4  56                   push esi
// 005e37a5  57                   push edi
// 005e37a6  6a00                 push 0
// 005e37a8  688c1c8a00           push 0x8a1c8c
// 005e37ad  8db0bc000000         lea esi, [eax + 0xbc]
// 005e37b3  684c1f8800           push 0x881f4c
// 005e37b8  8bf8                 mov edi, eax
// 005e37ba  8b06                 mov eax, dword ptr [esi]
// 005e37bc  6a00                 push 0
// 005e37be  50                   push eax
// 005e37bf  e872d50400           call 0x630d36
// 005e37c4  83c414               add esp, 0x14
// 005e37c7  85c0                 test eax, eax
// 005e37c9  754b                 jne 0x5e3816
// 005e37cb  eb03                 jmp 0x5e37d0
// 005e37cd  8d4900               lea ecx, [ecx]
// 005e37d0  8b36                 mov esi, dword ptr [esi]
// 005e37d2  6a00                 push 0
// 005e37d4  6850938900           push 0x899350
// 005e37d9  684c1f8800           push 0x881f4c
// 005e37de  6a00                 push 0
// 005e37e0  56                   push esi
// 005e37e1  e850d50400           call 0x630d36
// 005e37e6  83c414               add esp, 0x14
// 005e37e9  85c0                 test eax, eax
// 005e37eb  7402                 je 0x5e37ef
// 005e37ed  8bfe                 mov edi, esi
// 005e37ef  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 005e37f5  6a00                 push 0
// 005e37f7  688c1c8a00           push 0x8a1c8c
// 005e37fc  684c1f8800           push 0x881f4c
// 005e3801  81c6bc000000         add esi, 0xbc
// 005e3807  6a00                 push 0
// 005e3809  50                   push eax
// 005e380a  e827d50400           call 0x630d36
// 005e380f  83c414               add esp, 0x14
// 005e3812  85c0                 test eax, eax
// 005e3814  74ba                 je 0x5e37d0
// 005e3816  8bc7                 mov eax, edi
// 005e3818  5f                   pop edi
// 005e3819  5e                   pop esi
// 005e381a  c3                   ret 
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getTopSelectable3d@MouseCommand@RBX@@SAPAVInstance@2@PAVPartInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
