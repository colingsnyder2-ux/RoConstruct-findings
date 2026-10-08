// roc 2008-06 005cb0e0  unit: RBX::AIFleeController  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cb0e0
//
// 005cb0e0  d9442404             fld dword ptr [esp + 4]
// 005cb0e4  83ec18               sub esp, 0x18
// 005cb0e7  56                   push esi
// 005cb0e8  51                   push ecx
// 005cb0e9  d91c24               fstp dword ptr [esp]
// 005cb0ec  6a06                 push 6
// 005cb0ee  8bf1                 mov esi, ecx
// 005cb0f0  e8cbfcffff           call 0x5cadc0
// 005cb0f5  8b4660               mov eax, dword ptr [esi + 0x60]
// 005cb0f8  85c0                 test eax, eax
// 005cb0fa  7438                 je 0x5cb134
// 005cb0fc  83780400             cmp dword ptr [eax + 4], 0
// 005cb100  7432                 je 0x5cb134
// 005cb102  8d442410             lea eax, [esp + 0x10]
// 005cb106  50                   push eax
// 005cb107  8bce                 mov ecx, esi
// 005cb109  e812fbffff           call 0x5cac20
// 005cb10e  d900                 fld dword ptr [eax]
// 005cb110  d9e0                 fchs 
// 005cb112  8d4c2404             lea ecx, [esp + 4]
// 005cb116  d95c2404             fstp dword ptr [esp + 4]
// 005cb11a  51                   push ecx
// 005cb11b  d94004               fld dword ptr [eax + 4]
// 005cb11e  8bce                 mov ecx, esi
// 005cb120  d9e0                 fchs 
// 005cb122  d95c240c             fstp dword ptr [esp + 0xc]
// 005cb126  d94008               fld dword ptr [eax + 8]
// 005cb129  d9e0                 fchs 
// 005cb12b  d95c2410             fstp dword ptr [esp + 0x10]
// 005cb12f  e8fcf2ffff           call 0x5ca430
// 005cb134  5e                   pop esi
// 005cb135  83c418               add esp, 0x18
// 005cb138  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?updateBuffer@AIFleeController@RBX@@MAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
