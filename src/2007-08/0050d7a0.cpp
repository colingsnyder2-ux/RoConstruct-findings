// roc 2007-08 0050d7a0  unit: G3D::BinaryInput  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050d7a0
//
// 0050d7a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050d7a4  8b542404             mov edx, dword ptr [esp + 4]
// 0050d7a8  56                   push esi
// 0050d7a9  8bf1                 mov esi, ecx
// 0050d7ab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0050d7af  50                   push eax
// 0050d7b0  51                   push ecx
// 0050d7b1  52                   push edx
// 0050d7b2  8bce                 mov ecx, esi
// 0050d7b4  e817feffff           call 0x50d5d0
// 0050d7b9  c706b40d7a00         mov dword ptr [esi], 0x7a0db4
// 0050d7bf  8bc6                 mov eax, esi
// 0050d7c1  5e                   pop esi
// 0050d7c2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
