// roc 2007-03 0062d0b0  unit: seg_00620000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0062d0b0
//
// 0062d0b0  56                   push esi
// 0062d0b1  8bf1                 mov esi, ecx
// 0062d0b3  85f6                 test esi, esi
// 0062d0b5  7518                 jne 0x62d0cf
// 0062d0b7  68300c6200           push 0x620c30
// 0062d0bc  b910238c00           mov ecx, 0x8c2310
// 0062d0c1  e8ded91000           call 0x73aaa4
// 0062d0c6  85c0                 test eax, eax
// 0062d0c8  752d                 jne 0x62d0f7
// 0062d0ca  e9df12ffff           jmp 0x61e3ae
// 0062d0cf  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0062d0d5  85c0                 test eax, eax
// 0062d0d7  751e                 jne 0x62d0f7
// 0062d0d9  68300c6200           push 0x620c30
// 0062d0de  b910238c00           mov ecx, 0x8c2310
// 0062d0e3  e8bcd91000           call 0x73aaa4
// 0062d0e8  85c0                 test eax, eax
// 0062d0ea  7505                 jne 0x62d0f1
// 0062d0ec  e9bd12ffff           jmp 0x61e3ae
// 0062d0f1  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0062d0f7  5e                   pop esi
// 0062d0f8  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?GetMouseManager@CXTPCommandBars@@QBEPAVCXTPMouseManager@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
