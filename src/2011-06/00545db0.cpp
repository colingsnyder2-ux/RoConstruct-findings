// from server: 100% by auto
// roc 2011-06 00545db0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00545db0
//
// 00545db0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00545db4  8b542404             mov edx, dword ptr [esp + 4]
// 00545db8  56                   push esi
// 00545db9  8bf1                 mov esi, ecx
// 00545dbb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00545dbf  50                   push eax
// 00545dc0  51                   push ecx
// 00545dc1  52                   push edx
// 00545dc2  8bce                 mov ecx, esi
// 00545dc4  e837feffff           call 0x545c00
// 00545dc9  c706e8fea700         mov dword ptr [esi], 0xa7fee8
// 00545dcf  8bc6                 mov eax, esi
// 00545dd1  5e                   pop esi
// 00545dd2  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
