// from server: 100% by auto
// roc 2010-06 004894c0  unit: G3D::Win32Window  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004894c0
//
// 004894c0  56                   push esi
// 004894c1  8bf1                 mov esi, ecx
// 004894c3  8b06                 mov eax, dword ptr [esi]
// 004894c5  8b5008               mov edx, dword ptr [eax + 8]
// 004894c8  ffd2                 call edx
// 004894ca  f30f2ac0             cvtsi2ss xmm0, eax
// 004894ce  8b06                 mov eax, dword ptr [esi]
// 004894d0  8b5004               mov edx, dword ptr [eax + 4]
// 004894d3  51                   push ecx
// 004894d4  8bce                 mov ecx, esi
// 004894d6  f30f110424           movss dword ptr [esp], xmm0
// 004894db  ffd2                 call edx
// 004894dd  83ec0c               sub esp, 0xc
// 004894e0  f30f2ac0             cvtsi2ss xmm0, eax
// 004894e4  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004894ea  f30f2a86d0010000     cvtsi2ss xmm0, dword ptr [esi + 0x1d0]
// 004894f2  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004894f8  f30f2a86cc010000     cvtsi2ss xmm0, dword ptr [esi + 0x1cc]
// 00489500  8b742418             mov esi, dword ptr [esp + 0x18]
// 00489504  f30f110424           movss dword ptr [esp], xmm0
// 00489509  56                   push esi
// 0048950a  e8d1bbffff           call 0x4850e0
// 0048950f  83c414               add esp, 0x14
// 00489512  8bc6                 mov eax, esi
// 00489514  5e                   pop esi
// 00489515  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?dimensions@Win32Window@G3D@@UBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
