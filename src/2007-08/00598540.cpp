// roc 2007-08 00598540  unit: RBX::AIFleeController  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00598540
//
// 00598540  d9442404             fld dword ptr [esp + 4]
// 00598544  83ec18               sub esp, 0x18
// 00598547  56                   push esi
// 00598548  51                   push ecx
// 00598549  d91c24               fstp dword ptr [esp]
// 0059854c  6a06                 push 6
// 0059854e  8bf1                 mov esi, ecx
// 00598550  e8bbfcffff           call 0x598210
// 00598555  8b4660               mov eax, dword ptr [esi + 0x60]
// 00598558  85c0                 test eax, eax
// 0059855a  7438                 je 0x598594
// 0059855c  83780400             cmp dword ptr [eax + 4], 0
// 00598560  7432                 je 0x598594
// 00598562  8d442410             lea eax, [esp + 0x10]
// 00598566  50                   push eax
// 00598567  8bce                 mov ecx, esi
// 00598569  e802fbffff           call 0x598070
// 0059856e  d900                 fld dword ptr [eax]
// 00598570  d9e0                 fchs 
// 00598572  8d4c2404             lea ecx, [esp + 4]
// 00598576  d95c2404             fstp dword ptr [esp + 4]
// 0059857a  51                   push ecx
// 0059857b  d94004               fld dword ptr [eax + 4]
// 0059857e  8bce                 mov ecx, esi
// 00598580  d9e0                 fchs 
// 00598582  d95c240c             fstp dword ptr [esp + 0xc]
// 00598586  d94008               fld dword ptr [eax + 8]
// 00598589  d9e0                 fchs 
// 0059858b  d95c2410             fstp dword ptr [esp + 0x10]
// 0059858f  e83cf3ffff           call 0x5978d0
// 00598594  5e                   pop esi
// 00598595  83c418               add esp, 0x18
// 00598598  c20400               ret 4
// library rbxgs/v8datamodel\UserController.cpp (function ?updateBuffer@AIFleeController@RBX@@MAEXM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/UserController.cpp
