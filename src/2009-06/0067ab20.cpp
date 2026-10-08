// roc 2009-06 0067ab20  unit: RBX::VLighting::?$BoundFuncDesc  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067ab20
//
// 0067ab20  d9442404             fld dword ptr [esp + 4]
// 0067ab24  83ec10               sub esp, 0x10
// 0067ab27  8bc4                 mov eax, esp
// 0067ab29  d918                 fstp dword ptr [eax]
// 0067ab2b  d9442418             fld dword ptr [esp + 0x18]
// 0067ab2f  d95804               fstp dword ptr [eax + 4]
// 0067ab32  d944241c             fld dword ptr [esp + 0x1c]
// 0067ab36  d95808               fstp dword ptr [eax + 8]
// 0067ab39  d9e8                 fld1 
// 0067ab3b  d9580c               fstp dword ptr [eax + 0xc]
// 0067ab3e  e8ddfcffff           call 0x67a820
// 0067ab43  c20c00               ret 0xc
// library rbxgs/v8datamodel\Lighting.cpp (function ?setClearColor3@Lighting@RBX@@QAEXVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
