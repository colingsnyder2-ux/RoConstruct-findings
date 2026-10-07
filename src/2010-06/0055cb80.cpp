// roc 2010-06 0055cb80  unit: G3D::TextInput::TokenException  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055cb80
//
// 0055cb80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055cb84  8b542404             mov edx, dword ptr [esp + 4]
// 0055cb88  56                   push esi
// 0055cb89  8bf1                 mov esi, ecx
// 0055cb8b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055cb8f  50                   push eax
// 0055cb90  51                   push ecx
// 0055cb91  52                   push edx
// 0055cb92  8bce                 mov ecx, esi
// 0055cb94  e8e7fdffff           call 0x55c980
// 0055cb99  c7060c0ba200         mov dword ptr [esi], 0xa20b0c
// 0055cb9f  8bc6                 mov eax, esi
// 0055cba1  5e                   pop esi
// 0055cba2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
