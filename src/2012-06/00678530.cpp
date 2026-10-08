// from server: 100% by auto
// roc 2012-06 00678530  unit: DummyArbiter  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00678530
//
// 00678530  51                   push ecx
// 00678531  56                   push esi
// 00678532  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00678536  6860dcb800           push 0xb8dc60
// 0067853b  8bce                 mov ecx, esi
// 0067853d  c744240800000000     mov dword ptr [esp + 8], 0
// 00678545  ff154826b200         call dword ptr [0xb22648]
// 0067854b  8bc6                 mov eax, esi
// 0067854d  5e                   pop esi
// 0067854e  59                   pop ecx
// 0067854f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
