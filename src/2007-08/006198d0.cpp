// roc 2007-08 006198d0  unit: RBX::Edge  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006198d0
//
// 006198d0  83ec0c               sub esp, 0xc
// 006198d3  53                   push ebx
// 006198d4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006198d8  56                   push esi
// 006198d9  8b742418             mov esi, dword ptr [esp + 0x18]
// 006198dd  d906                 fld dword ptr [esi]
// 006198df  57                   push edi
// 006198e0  d9e0                 fchs 
// 006198e2  8bf9                 mov edi, ecx
// 006198e4  8b470c               mov eax, dword ptr [edi + 0xc]
// 006198e7  d95c240c             fstp dword ptr [esp + 0xc]
// 006198eb  d94604               fld dword ptr [esi + 4]
// 006198ee  8b4804               mov ecx, dword ptr [eax + 4]
// 006198f1  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006198f4  d9e0                 fchs 
// 006198f6  85c9                 test ecx, ecx
// 006198f8  d95c2410             fstp dword ptr [esp + 0x10]
// 006198fc  d94608               fld dword ptr [esi + 8]
// 006198ff  d9e0                 fchs 
// 00619901  d95c2414             fstp dword ptr [esp + 0x14]
// 00619905  740b                 je 0x619912
// 00619907  53                   push ebx
// 00619908  8d542410             lea edx, [esp + 0x10]
// 0061990c  52                   push edx
// 0061990d  e81e57fbff           call 0x5cf030
// 00619912  8b4710               mov eax, dword ptr [edi + 0x10]
// 00619915  8b4804               mov ecx, dword ptr [eax + 4]
// 00619918  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0061991b  85c9                 test ecx, ecx
// 0061991d  7407                 je 0x619926
// 0061991f  53                   push ebx
// 00619920  56                   push esi
// 00619921  e80a57fbff           call 0x5cf030
// 00619926  5f                   pop edi
// 00619927  5e                   pop esi
// 00619928  5b                   pop ebx
// 00619929  83c40c               add esp, 0xc
// 0061992c  c20800               ret 8
// library openrbx-client/App\v8kernel\Pair.cpp (function ?forceToBodies@GeoPair@RBX@@QAEXABVVector3@G3D@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Pair.cpp
