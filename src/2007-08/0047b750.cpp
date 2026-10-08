// from server: 100% by auto
// roc 2007-08 0047b750  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b750
//
// 0047b750  51                   push ecx
// 0047b751  56                   push esi
// 0047b752  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047b756  81c188000000         add ecx, 0x88
// 0047b75c  51                   push ecx
// 0047b75d  8bce                 mov ecx, esi
// 0047b75f  c744240800000000     mov dword ptr [esp + 8], 0
// 0047b767  ff159ce67700         call dword ptr [0x77e69c]
// 0047b76d  8bc6                 mov eax, esi
// 0047b76f  5e                   pop esi
// 0047b770  59                   pop ecx
// 0047b771  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?caption@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
