// roc 2009-06 004a8d90  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8d90
//
// 004a8d90  51                   push ecx
// 004a8d91  56                   push esi
// 004a8d92  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a8d96  6898208c00           push 0x8c2098
// 004a8d9b  8bce                 mov ecx, esi
// 004a8d9d  c744240800000000     mov dword ptr [esp + 8], 0
// 004a8da5  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a8dab  8bc6                 mov eax, esi
// 004a8dad  5e                   pop esi
// 004a8dae  59                   pop ecx
// 004a8daf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIVersion@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
