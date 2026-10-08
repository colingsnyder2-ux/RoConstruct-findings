// roc 2009-06 0049e2d0  unit: G3D::VARArea  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e2d0
//
// 0049e2d0  53                   push ebx
// 0049e2d1  8a5c2408             mov bl, byte ptr [esp + 8]
// 0049e2d5  56                   push esi
// 0049e2d6  8bf1                 mov esi, ecx
// 0049e2d8  3a5e1c               cmp bl, byte ptr [esi + 0x1c]
// 0049e2db  7416                 je 0x49e2f3
// 0049e2dd  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 0049e2e1  740d                 je 0x49e2f0
// 0049e2e3  8b0e                 mov ecx, dword ptr [esi]
// 0049e2e5  8b01                 mov eax, dword ptr [ecx]
// 0049e2e7  8b5040               mov edx, dword ptr [eax + 0x40]
// 0049e2ea  ffd2                 call edx
// 0049e2ec  c6461d00             mov byte ptr [esi + 0x1d], 0
// 0049e2f0  885e1c               mov byte ptr [esi + 0x1c], bl
// 0049e2f3  5e                   pop esi
// 0049e2f4  5b                   pop ebx
// 0049e2f5  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSwapBuffersAutomatically@RenderDevice@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
