// roc 2007-08 005af990  unit: RBX::Lighting  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005af990
//
// 005af990  d9442404             fld dword ptr [esp + 4]
// 005af994  83ec10               sub esp, 0x10
// 005af997  8bc4                 mov eax, esp
// 005af999  d918                 fstp dword ptr [eax]
// 005af99b  d9442418             fld dword ptr [esp + 0x18]
// 005af99f  d95804               fstp dword ptr [eax + 4]
// 005af9a2  d944241c             fld dword ptr [esp + 0x1c]
// 005af9a6  d95808               fstp dword ptr [eax + 8]
// 005af9a9  d9e8                 fld1 
// 005af9ab  d9580c               fstp dword ptr [eax + 0xc]
// 005af9ae  e8adfbffff           call 0x5af560
// 005af9b3  c20c00               ret 0xc
// library rbxgs/v8datamodel\Lighting.cpp (function ?setClearColor3@Lighting@RBX@@QAEXVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
