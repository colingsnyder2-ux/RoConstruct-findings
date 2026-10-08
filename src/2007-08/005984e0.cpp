// roc 2007-08 005984e0  unit: RBX::AIChaseController  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005984e0
//
// 005984e0  d9442404             fld dword ptr [esp + 4]
// 005984e4  83ec0c               sub esp, 0xc
// 005984e7  56                   push esi
// 005984e8  51                   push ecx
// 005984e9  d91c24               fstp dword ptr [esp]
// 005984ec  6a05                 push 5
// 005984ee  8bf1                 mov esi, ecx
// 005984f0  e81bfdffff           call 0x598210
// 005984f5  8b4660               mov eax, dword ptr [esi + 0x60]
// 005984f8  85c0                 test eax, eax
// 005984fa  7421                 je 0x59851d
// 005984fc  83780400             cmp dword ptr [eax + 4], 0
// 00598500  741b                 je 0x59851d
// 00598502  8d442404             lea eax, [esp + 4]
// 00598506  50                   push eax
// 00598507  8bce                 mov ecx, esi
// 00598509  e862fbffff           call 0x598070
// 0059850e  50                   push eax
// 0059850f  8bce                 mov ecx, esi
// 00598511  e8baf3ffff           call 0x5978d0
// 00598516  5e                   pop esi
// 00598517  83c40c               add esp, 0xc
// 0059851a  c20400               ret 4
// 0059851d  d9056c647900         fld dword ptr [0x79646c]
// 00598523  d95e28               fstp dword ptr [esi + 0x28]
// 00598526  d9e8                 fld1 
// 00598528  d9562c               fst dword ptr [esi + 0x2c]
// 0059852b  d95e30               fstp dword ptr [esi + 0x30]
// 0059852e  5e                   pop esi
// 0059852f  83c40c               add esp, 0xc
// 00598532  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?updateBuffer@AIChaseController@RBX@@MAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
