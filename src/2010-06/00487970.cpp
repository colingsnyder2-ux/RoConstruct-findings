// roc 2010-06 00487970  unit: G3D::Win32Window  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487970
//
// 00487970  51                   push ecx
// 00487971  56                   push esi
// 00487972  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00487976  81c188000000         add ecx, 0x88
// 0048797c  51                   push ecx
// 0048797d  8bce                 mov ecx, esi
// 0048797f  c744240800000000     mov dword ptr [esp + 8], 0
// 00487987  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048798d  8bc6                 mov eax, esi
// 0048798f  5e                   pop esi
// 00487990  59                   pop ecx
// 00487991  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?caption@Win32Window@G3D@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
