// roc 2010-06 00487890  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487890
//
// 00487890  51                   push ecx
// 00487891  56                   push esi
// 00487892  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00487896  68b435a100           push 0xa135b4
// 0048789b  8bce                 mov ecx, esi
// 0048789d  c744240800000000     mov dword ptr [esp + 8], 0
// 004878a5  ff1510a49e00         call dword ptr [0x9ea410]
// 004878ab  8bc6                 mov eax, esi
// 004878ad  5e                   pop esi
// 004878ae  59                   pop ecx
// 004878af  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIVersion@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
