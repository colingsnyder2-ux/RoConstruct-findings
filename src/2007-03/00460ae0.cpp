// roc 2007-03 00460ae0  unit: seg_00460000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00460ae0
//
// 00460ae0  d9442404             fld dword ptr [esp + 4]
// 00460ae4  83ec10               sub esp, 0x10
// 00460ae7  8bc4                 mov eax, esp
// 00460ae9  d918                 fstp dword ptr [eax]
// 00460aeb  d9442418             fld dword ptr [esp + 0x18]
// 00460aef  d95804               fstp dword ptr [eax + 4]
// 00460af2  d944241c             fld dword ptr [esp + 0x1c]
// 00460af6  d95808               fstp dword ptr [eax + 8]
// 00460af9  d9e8                 fld1 
// 00460afb  d9580c               fstp dword ptr [eax + 0xc]
// 00460afe  e82d8d1300           call 0x599830
// 00460b03  c20c00               ret 0xc
// library rbxgs/v8datamodel\Lighting.cpp (function ?setClearColor3@Lighting@RBX@@QAEXVColor3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
