// roc 2009-12 00575190  unit: RBX::ViewRbxGfx  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00575190
//
// 00575190  8b442404             mov eax, dword ptr [esp + 4]
// 00575194  56                   push esi
// 00575195  8bf1                 mov esi, ecx
// 00575197  c70600000000         mov dword ptr [esi], 0
// 0057519d  8b08                 mov ecx, dword ptr [eax]
// 0057519f  51                   push ecx
// 005751a0  8bce                 mov ecx, esi
// 005751a2  e8c969edff           call 0x44bb70
// 005751a7  8bc6                 mov eax, esi
// 005751a9  5e                   pop esi
// 005751aa  c20400               ret 4
// library rbxgs-appdraw/Fonts.cpp (function ??0?$ReferenceCountedPointer@VGFont@G3D@@@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Fonts.cpp
