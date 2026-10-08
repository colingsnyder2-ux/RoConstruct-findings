// roc 2009-12 004d5a40  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5a40
//
// 004d5a40  51                   push ecx
// 004d5a41  56                   push esi
// 004d5a42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d5a46  81c188000000         add ecx, 0x88
// 004d5a4c  51                   push ecx
// 004d5a4d  8bce                 mov ecx, esi
// 004d5a4f  c744240800000000     mov dword ptr [esp + 8], 0
// 004d5a57  ff15f0b69800         call dword ptr [0x98b6f0]
// 004d5a5d  8bc6                 mov eax, esi
// 004d5a5f  5e                   pop esi
// 004d5a60  59                   pop ecx
// 004d5a61  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?caption@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
