// roc 2010-06 00491190  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00491190
//
// 00491190  53                   push ebx
// 00491191  8a5c2408             mov bl, byte ptr [esp + 8]
// 00491195  56                   push esi
// 00491196  8bf1                 mov esi, ecx
// 00491198  3a5e1c               cmp bl, byte ptr [esi + 0x1c]
// 0049119b  7416                 je 0x4911b3
// 0049119d  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 004911a1  740d                 je 0x4911b0
// 004911a3  8b0e                 mov ecx, dword ptr [esi]
// 004911a5  8b01                 mov eax, dword ptr [ecx]
// 004911a7  8b5040               mov edx, dword ptr [eax + 0x40]
// 004911aa  ffd2                 call edx
// 004911ac  c6461d00             mov byte ptr [esi + 0x1d], 0
// 004911b0  885e1c               mov byte ptr [esi + 0x1c], bl
// 004911b3  5e                   pop esi
// 004911b4  5b                   pop ebx
// 004911b5  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSwapBuffersAutomatically@RenderDevice@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
