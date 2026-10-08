// roc 2007-03 00474c90  unit: seg_00470000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474c90
//
// 00474c90  d9e8                 fld1 
// 00474c92  8b442408             mov eax, dword ptr [esp + 8]
// 00474c96  83ec10               sub esp, 0x10
// 00474c99  56                   push esi
// 00474c9a  83ec08               sub esp, 8
// 00474c9d  d95c2404             fstp dword ptr [esp + 4]
// 00474ca1  8bf1                 mov esi, ecx
// 00474ca3  d9ee                 fldz 
// 00474ca5  8d4c240c             lea ecx, [esp + 0xc]
// 00474ca9  d91c24               fstp dword ptr [esp]
// 00474cac  50                   push eax
// 00474cad  e86eba0800           call 0x500720
// 00474cb2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00474cb6  50                   push eax
// 00474cb7  51                   push ecx
// 00474cb8  8bce                 mov ecx, esi
// 00474cba  e861ffffff           call 0x474c20
// 00474cbf  5e                   pop esi
// 00474cc0  83c410               add esp, 0x10
// 00474cc3  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexCoord@RenderDevice@G3D@@QAEXIABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
