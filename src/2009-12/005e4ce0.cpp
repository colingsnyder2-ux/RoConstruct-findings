// roc 2009-12 005e4ce0  unit: RBX::RbxG3D::MegaTextureProxy  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e4ce0
//
// 005e4ce0  8b442404             mov eax, dword ptr [esp + 4]
// 005e4ce4  56                   push esi
// 005e4ce5  50                   push eax
// 005e4ce6  8bf1                 mov esi, ecx
// 005e4ce8  e853feffff           call 0x5e4b40
// 005e4ced  c7061c189c00         mov dword ptr [esi], 0x9c181c
// 005e4cf3  8bc6                 mov eax, esi
// 005e4cf5  5e                   pop esi
// 005e4cf6  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ??0bad_alloc@std@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
