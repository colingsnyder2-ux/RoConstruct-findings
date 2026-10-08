// roc 2007-03 00473920  unit: seg_00470000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473920
//
// 00473920  53                   push ebx
// 00473921  8a5c2408             mov bl, byte ptr [esp + 8]
// 00473925  56                   push esi
// 00473926  8bf1                 mov esi, ecx
// 00473928  3a5e1c               cmp bl, byte ptr [esi + 0x1c]
// 0047392b  7416                 je 0x473943
// 0047392d  807e1d00             cmp byte ptr [esi + 0x1d], 0
// 00473931  740d                 je 0x473940
// 00473933  8b0e                 mov ecx, dword ptr [esi]
// 00473935  8b01                 mov eax, dword ptr [ecx]
// 00473937  8b5040               mov edx, dword ptr [eax + 0x40]
// 0047393a  ffd2                 call edx
// 0047393c  c6461d00             mov byte ptr [esi + 0x1d], 0
// 00473940  885e1c               mov byte ptr [esi + 0x1c], bl
// 00473943  5e                   pop esi
// 00473944  5b                   pop ebx
// 00473945  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setSwapBuffersAutomatically@RenderDevice@G3D@@QAEX_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
