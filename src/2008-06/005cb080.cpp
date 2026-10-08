// roc 2008-06 005cb080  unit: RBX::AIChaseController  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb080
//
// 005cb080  d9442404             fld dword ptr [esp + 4]
// 005cb084  83ec0c               sub esp, 0xc
// 005cb087  56                   push esi
// 005cb088  51                   push ecx
// 005cb089  d91c24               fstp dword ptr [esp]
// 005cb08c  6a05                 push 5
// 005cb08e  8bf1                 mov esi, ecx
// 005cb090  e82bfdffff           call 0x5cadc0
// 005cb095  8b4660               mov eax, dword ptr [esi + 0x60]
// 005cb098  85c0                 test eax, eax
// 005cb09a  7421                 je 0x5cb0bd
// 005cb09c  83780400             cmp dword ptr [eax + 4], 0
// 005cb0a0  741b                 je 0x5cb0bd
// 005cb0a2  8d442404             lea eax, [esp + 4]
// 005cb0a6  50                   push eax
// 005cb0a7  8bce                 mov ecx, esi
// 005cb0a9  e872fbffff           call 0x5cac20
// 005cb0ae  50                   push eax
// 005cb0af  8bce                 mov ecx, esi
// 005cb0b1  e87af3ffff           call 0x5ca430
// 005cb0b6  5e                   pop esi
// 005cb0b7  83c40c               add esp, 0xc
// 005cb0ba  c20400               ret 4
// 005cb0bd  d905b8c38100         fld dword ptr [0x81c3b8]
// 005cb0c3  d95e28               fstp dword ptr [esi + 0x28]
// 005cb0c6  d9e8                 fld1 
// 005cb0c8  d9562c               fst dword ptr [esi + 0x2c]
// 005cb0cb  d95e30               fstp dword ptr [esi + 0x30]
// 005cb0ce  5e                   pop esi
// 005cb0cf  83c40c               add esp, 0xc
// 005cb0d2  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?updateBuffer@AIChaseController@RBX@@MAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
