// from server: 100% by auto
// roc 2011-06 0058c1d0  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0058c1d0
//
// 0058c1d0  51                   push ecx
// 0058c1d1  56                   push esi
// 0058c1d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058c1d6  68c48aa800           push 0xa88ac4
// 0058c1db  8bce                 mov ecx, esi
// 0058c1dd  c744240800000000     mov dword ptr [esp + 8], 0
// 0058c1e5  ff15c404a400         call dword ptr [0xa404c4]
// 0058c1eb  8bc6                 mov eax, esi
// 0058c1ed  5e                   pop esi
// 0058c1ee  59                   pop ecx
// 0058c1ef  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
