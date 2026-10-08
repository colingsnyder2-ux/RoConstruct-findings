// roc 2009-12 004d9de0  unit: G3D::Win32Window  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d9de0
//
// 004d9de0  51                   push ecx
// 004d9de1  56                   push esi
// 004d9de2  57                   push edi
// 004d9de3  8bf1                 mov esi, ecx
// 004d9de5  c744240800000000     mov dword ptr [esp + 8], 0
// 004d9ded  e85effffff           call 0x4d9d50
// 004d9df2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d9df6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d9dfa  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 004d9e00  50                   push eax
// 004d9e01  57                   push edi
// 004d9e02  e809c9ffff           call 0x4d6710
// 004d9e07  8bc7                 mov eax, edi
// 004d9e09  5f                   pop edi
// 004d9e0a  5e                   pop esi
// 004d9e0b  59                   pop ecx
// 004d9e0c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?joystickName@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
