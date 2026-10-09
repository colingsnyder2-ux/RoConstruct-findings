// roc 2009-12 004ca8f0  unit: G3D::VARArea  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca8f0
//
// 004ca8f0  53                   push ebx
// 004ca8f1  8a5c2408             mov bl, byte ptr [esp + 8]
// 004ca8f5  56                   push esi
// 004ca8f6  8bf1                 mov esi, ecx
// 004ca8f8  3a5e1c               cmp bl, byte ptr [esi + 0x1c]
// 004ca8fb  7416                 je 0x4ca913
// 004ca8fd  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 004ca901  740d                 je 0x4ca910
// 004ca903  8b0e                 mov ecx, dword ptr [esi]
// 004ca905  8b01                 mov eax, dword ptr [ecx]
// 004ca907  8b5040               mov edx, dword ptr [eax + 0x40]
// 004ca90a  ffd2                 call edx
// 004ca90c  c6461d00             mov byte ptr [esi + 0x1d], 0
// 004ca910  885e1c               mov byte ptr [esi + 0x1c], bl
// 004ca913  5e                   pop esi
// 004ca914  5b                   pop ebx
// 004ca915  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSwapBuffersAutomatically@RenderDevice@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
