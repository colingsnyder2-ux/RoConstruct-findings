// from server: 100% by auto
// roc 2012-06 00636000  unit: G3D::TextInput::TokenException  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00636000
//
// 00636000  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00636004  8b542404             mov edx, dword ptr [esp + 4]
// 00636008  56                   push esi
// 00636009  8bf1                 mov esi, ecx
// 0063600b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063600f  50                   push eax
// 00636010  51                   push ecx
// 00636011  52                   push edx
// 00636012  8bce                 mov ecx, esi
// 00636014  e827feffff           call 0x635e40
// 00636019  c7065c3db800         mov dword ptr [esi], 0xb83d5c
// 0063601f  8bc6                 mov eax, esi
// 00636021  5e                   pop esi
// 00636022  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
