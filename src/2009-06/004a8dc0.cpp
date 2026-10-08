// from server: 100% by auto
// roc 2009-06 004a8dc0  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a8dc0
//
// 004a8dc0  51                   push ecx
// 004a8dc1  56                   push esi
// 004a8dc2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004a8dc6  689c208c00           push 0x8c209c
// 004a8dcb  8bce                 mov ecx, esi
// 004a8dcd  c744240800000000     mov dword ptr [esp + 8], 0
// 004a8dd5  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a8ddb  8bc6                 mov eax, esi
// 004a8ddd  5e                   pop esi
// 004a8dde  59                   pop ecx
// 004a8ddf  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
