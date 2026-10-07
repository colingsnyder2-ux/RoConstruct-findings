// roc 2012-06 00894600  unit: RBX::GeoPairConnector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00894600
//
// 00894600  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00894604  8b542404             mov edx, dword ptr [esp + 4]
// 00894608  56                   push esi
// 00894609  8bf1                 mov esi, ecx
// 0089460b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089460f  50                   push eax
// 00894610  51                   push ecx
// 00894611  52                   push edx
// 00894612  8bce                 mov ecx, esi
// 00894614  e8b7feffff           call 0x8944d0
// 00894619  c70670b1bd00         mov dword ptr [esi], 0xbdb170
// 0089461f  8bc6                 mov eax, esi
// 00894621  5e                   pop esi
// 00894622  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
