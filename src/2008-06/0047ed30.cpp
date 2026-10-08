// from server: 100% by auto
// roc 2008-06 0047ed30  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ed30
//
// 0047ed30  51                   push ecx
// 0047ed31  56                   push esi
// 0047ed32  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047ed36  81c188000000         add ecx, 0x88
// 0047ed3c  51                   push ecx
// 0047ed3d  8bce                 mov ecx, esi
// 0047ed3f  c744240800000000     mov dword ptr [esp + 8], 0
// 0047ed47  ff155c248000         call dword ptr [0x80245c]
// 0047ed4d  8bc6                 mov eax, esi
// 0047ed4f  5e                   pop esi
// 0047ed50  59                   pop ecx
// 0047ed51  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?caption@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
