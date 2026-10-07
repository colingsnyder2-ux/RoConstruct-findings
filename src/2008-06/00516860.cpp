// roc 2008-06 00516860  unit: G3D::BinaryInput  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516860
//
// 00516860  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00516864  8b542404             mov edx, dword ptr [esp + 4]
// 00516868  56                   push esi
// 00516869  8bf1                 mov esi, ecx
// 0051686b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051686f  50                   push eax
// 00516870  51                   push ecx
// 00516871  52                   push edx
// 00516872  8bce                 mov ecx, esi
// 00516874  e8f7fdffff           call 0x516670
// 00516879  c706848a8200         mov dword ptr [esi], 0x828a84
// 0051687f  8bc6                 mov eax, esi
// 00516881  5e                   pop esi
// 00516882  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
