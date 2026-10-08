// from server: 100% by auto
// roc 2008-06 0047ec80  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047ec80
//
// 0047ec80  51                   push ecx
// 0047ec81  56                   push esi
// 0047ec82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047ec86  68ecf08100           push 0x81f0ec
// 0047ec8b  8bce                 mov ecx, esi
// 0047ec8d  c744240800000000     mov dword ptr [esp + 8], 0
// 0047ec95  ff1558248000         call dword ptr [0x802458]
// 0047ec9b  8bc6                 mov eax, esi
// 0047ec9d  5e                   pop esi
// 0047ec9e  59                   pop ecx
// 0047ec9f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
