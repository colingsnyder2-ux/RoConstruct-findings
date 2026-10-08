// roc 2009-12 005fadb0  unit: G3D::TextInput::TokenException  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fadb0
//
// 005fadb0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005fadb4  8b542404             mov edx, dword ptr [esp + 4]
// 005fadb8  56                   push esi
// 005fadb9  8bf1                 mov esi, ecx
// 005fadbb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fadbf  50                   push eax
// 005fadc0  51                   push ecx
// 005fadc1  52                   push edx
// 005fadc2  8bce                 mov ecx, esi
// 005fadc4  e8e7fdffff           call 0x5fabb0
// 005fadc9  c706e42d9c00         mov dword ptr [esi], 0x9c2de4
// 005fadcf  8bc6                 mov eax, esi
// 005fadd1  5e                   pop esi
// 005fadd2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
