// from server: 100% by auto
// roc 2009-06 004a8e70  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8e70
//
// 004a8e70  51                   push ecx
// 004a8e71  56                   push esi
// 004a8e72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a8e76  81c188000000         add ecx, 0x88
// 004a8e7c  51                   push ecx
// 004a8e7d  8bce                 mov ecx, esi
// 004a8e7f  c744240800000000     mov dword ptr [esp + 8], 0
// 004a8e87  ff15b8e48900         call dword ptr [0x89e4b8]
// 004a8e8d  8bc6                 mov eax, esi
// 004a8e8f  5e                   pop esi
// 004a8e90  59                   pop ecx
// 004a8e91  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?caption@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
