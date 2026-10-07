// roc 2010-06 004878c0  unit: G3D::Win32Window  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004878c0
//
// 004878c0  51                   push ecx
// 004878c1  56                   push esi
// 004878c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004878c6  68b835a100           push 0xa135b8
// 004878cb  8bce                 mov ecx, esi
// 004878cd  c744240800000000     mov dword ptr [esp + 8], 0
// 004878d5  ff1510a49e00         call dword ptr [0x9ea410]
// 004878db  8bc6                 mov eax, esi
// 004878dd  5e                   pop esi
// 004878de  59                   pop ecx
// 004878df  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?getAPIName@Win32Window@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
