// roc 2008-06 005e2540  unit: RBX::Lighting  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2540
//
// 005e2540  d9442404             fld dword ptr [esp + 4]
// 005e2544  83ec10               sub esp, 0x10
// 005e2547  8bc4                 mov eax, esp
// 005e2549  d918                 fstp dword ptr [eax]
// 005e254b  d9442418             fld dword ptr [esp + 0x18]
// 005e254f  d95804               fstp dword ptr [eax + 4]
// 005e2552  d944241c             fld dword ptr [esp + 0x1c]
// 005e2556  d95808               fstp dword ptr [eax + 8]
// 005e2559  d9e8                 fld1 
// 005e255b  d9580c               fstp dword ptr [eax + 0xc]
// 005e255e  e8cdfaffff           call 0x5e2030
// 005e2563  c20c00               ret 0xc
// library rbxgs/v8datamodel\Lighting.cpp (function ?setClearColor3@Lighting@RBX@@QAEXVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
