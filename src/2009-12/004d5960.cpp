// roc 2009-12 004d5960  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5960
//
// 004d5960  51                   push ecx
// 004d5961  56                   push esi
// 004d5962  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d5966  6880799b00           push 0x9b7980
// 004d596b  8bce                 mov ecx, esi
// 004d596d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d5975  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d597b  8bc6                 mov eax, esi
// 004d597d  5e                   pop esi
// 004d597e  59                   pop ecx
// 004d597f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIVersion@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
