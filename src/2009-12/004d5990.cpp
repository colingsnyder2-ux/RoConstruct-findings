// roc 2009-12 004d5990  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5990
//
// 004d5990  51                   push ecx
// 004d5991  56                   push esi
// 004d5992  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004d5996  6884799b00           push 0x9b7984
// 004d599b  8bce                 mov ecx, esi
// 004d599d  c744240800000000     mov dword ptr [esp + 8], 0
// 004d59a5  ff15f4b69800         call dword ptr [0x98b6f4]
// 004d59ab  8bc6                 mov eax, esi
// 004d59ad  5e                   pop esi
// 004d59ae  59                   pop ecx
// 004d59af  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
