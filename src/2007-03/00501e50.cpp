// roc 2007-03 00501e50  unit: seg_00500000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501e50
//
// 00501e50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00501e54  8b542404             mov edx, dword ptr [esp + 4]
// 00501e58  56                   push esi
// 00501e59  8bf1                 mov esi, ecx
// 00501e5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00501e5f  50                   push eax
// 00501e60  51                   push ecx
// 00501e61  52                   push edx
// 00501e62  8bce                 mov ecx, esi
// 00501e64  e807feffff           call 0x501c70
// 00501e69  c70684057a00         mov dword ptr [esi], 0x7a0584
// 00501e6f  8bc6                 mov eax, esi
// 00501e71  5e                   pop esi
// 00501e72  c20c00               ret 0xc
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ??0BadMSVCSpecial@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
