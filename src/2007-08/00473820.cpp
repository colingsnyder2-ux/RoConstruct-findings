// roc 2007-08 00473820  unit: G3D::VARArea  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473820
//
// 00473820  53                   push ebx
// 00473821  8a5c2408             mov bl, byte ptr [esp + 8]
// 00473825  56                   push esi
// 00473826  8bf1                 mov esi, ecx
// 00473828  3a5e1c               cmp bl, byte ptr [esi + 0x1c]
// 0047382b  7416                 je 0x473843
// 0047382d  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 00473831  740d                 je 0x473840
// 00473833  8b0e                 mov ecx, dword ptr [esi]
// 00473835  8b01                 mov eax, dword ptr [ecx]
// 00473837  8b5040               mov edx, dword ptr [eax + 0x40]
// 0047383a  ffd2                 call edx
// 0047383c  c6461d00             mov byte ptr [esi + 0x1d], 0
// 00473840  885e1c               mov byte ptr [esi + 0x1c], bl
// 00473843  5e                   pop esi
// 00473844  5b                   pop ebx
// 00473845  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSwapBuffersAutomatically@RenderDevice@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
