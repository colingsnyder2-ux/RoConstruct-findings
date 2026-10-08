// from server: 100% by auto
// roc 2007-08 0047b680  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047b680
//
// 0047b680  51                   push ecx
// 0047b681  56                   push esi
// 0047b682  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047b686  68d4887900           push 0x7988d4
// 0047b68b  8bce                 mov ecx, esi
// 0047b68d  c744240800000000     mov dword ptr [esp + 8], 0
// 0047b695  ff1598e67700         call dword ptr [0x77e698]
// 0047b69b  8bc6                 mov eax, esi
// 0047b69d  5e                   pop esi
// 0047b69e  59                   pop ecx
// 0047b69f  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
