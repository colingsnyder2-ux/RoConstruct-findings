// roc 2009-06 004ad2c0  unit: G3D::Win32Window  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004ad2c0
//
// 004ad2c0  51                   push ecx
// 004ad2c1  56                   push esi
// 004ad2c2  57                   push edi
// 004ad2c3  8bf1                 mov esi, ecx
// 004ad2c5  c744240800000000     mov dword ptr [esp + 8], 0
// 004ad2cd  e85effffff           call 0x4ad230
// 004ad2d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004ad2d6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ad2da  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 004ad2e0  50                   push eax
// 004ad2e1  57                   push edi
// 004ad2e2  e8f9c8ffff           call 0x4a9be0
// 004ad2e7  8bc7                 mov eax, edi
// 004ad2e9  5f                   pop edi
// 004ad2ea  5e                   pop esi
// 004ad2eb  59                   pop ecx
// 004ad2ec  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?joystickName@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
