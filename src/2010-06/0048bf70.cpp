// roc 2010-06 0048bf70  unit: G3D::Win32Window  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048bf70
//
// 0048bf70  51                   push ecx
// 0048bf71  56                   push esi
// 0048bf72  57                   push edi
// 0048bf73  8bf1                 mov esi, ecx
// 0048bf75  c744240800000000     mov dword ptr [esp + 8], 0
// 0048bf7d  e85effffff           call 0x48bee0
// 0048bf82  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048bf86  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0048bf8a  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 0048bf90  50                   push eax
// 0048bf91  57                   push edi
// 0048bf92  e8b9c7ffff           call 0x488750
// 0048bf97  8bc7                 mov eax, edi
// 0048bf99  5f                   pop edi
// 0048bf9a  5e                   pop esi
// 0048bf9b  59                   pop ecx
// 0048bf9c  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?joystickName@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
