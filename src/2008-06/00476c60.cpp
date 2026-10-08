// roc 2008-06 00476c60  unit: G3D::VARArea  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476c60
//
// 00476c60  53                   push ebx
// 00476c61  8a5c2408             mov bl, byte ptr [esp + 8]
// 00476c65  56                   push esi
// 00476c66  8bf1                 mov esi, ecx
// 00476c68  3a5e1c               cmp bl, byte ptr [esi + 0x1c]
// 00476c6b  7416                 je 0x476c83
// 00476c6d  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 00476c71  740d                 je 0x476c80
// 00476c73  8b0e                 mov ecx, dword ptr [esi]
// 00476c75  8b01                 mov eax, dword ptr [ecx]
// 00476c77  8b5040               mov edx, dword ptr [eax + 0x40]
// 00476c7a  ffd2                 call edx
// 00476c7c  c6461d00             mov byte ptr [esi + 0x1d], 0
// 00476c80  885e1c               mov byte ptr [esi + 0x1c], bl
// 00476c83  5e                   pop esi
// 00476c84  5b                   pop ebx
// 00476c85  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSwapBuffersAutomatically@RenderDevice@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
