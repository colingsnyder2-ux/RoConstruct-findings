// from server: 100% by auto
// roc 2007-08 00480030  unit: G3D::Win32Window  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00480030
//
// 00480030  51                   push ecx
// 00480031  56                   push esi
// 00480032  57                   push edi
// 00480033  8bf1                 mov esi, ecx
// 00480035  c744240800000000     mov dword ptr [esp + 8], 0
// 0048003d  e85effffff           call 0x47ffa0
// 00480042  8b442414             mov eax, dword ptr [esp + 0x14]
// 00480046  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0048004a  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 00480050  50                   push eax
// 00480051  57                   push edi
// 00480052  e819c5ffff           call 0x47c570
// 00480057  8bc7                 mov eax, edi
// 00480059  5f                   pop edi
// 0048005a  5e                   pop esi
// 0048005b  59                   pop ecx
// 0048005c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?joystickName@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
