// roc 2009-12 004d7300  unit: G3D::Win32Window  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d7300
//
// 004d7300  56                   push esi
// 004d7301  8bf1                 mov esi, ecx
// 004d7303  8b06                 mov eax, dword ptr [esi]
// 004d7305  8b5008               mov edx, dword ptr [eax + 8]
// 004d7308  ffd2                 call edx
// 004d730a  f30f2ac0             cvtsi2ss xmm0, eax
// 004d730e  8b06                 mov eax, dword ptr [esi]
// 004d7310  8b5004               mov edx, dword ptr [eax + 4]
// 004d7313  51                   push ecx
// 004d7314  8bce                 mov ecx, esi
// 004d7316  f30f110424           movss dword ptr [esp], xmm0
// 004d731b  ffd2                 call edx
// 004d731d  83ec0c               sub esp, 0xc
// 004d7320  f30f2ac0             cvtsi2ss xmm0, eax
// 004d7324  f30f11442408         movss dword ptr [esp + 8], xmm0
// 004d732a  f30f2a86d0010000     cvtsi2ss xmm0, dword ptr [esi + 0x1d0]
// 004d7332  f30f11442404         movss dword ptr [esp + 4], xmm0
// 004d7338  f30f2a86cc010000     cvtsi2ss xmm0, dword ptr [esi + 0x1cc]
// 004d7340  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d7344  f30f110424           movss dword ptr [esp], xmm0
// 004d7349  56                   push esi
// 004d734a  e8d1bdf8ff           call 0x463120
// 004d734f  83c414               add esp, 0x14
// 004d7352  8bc6                 mov eax, esi
// 004d7354  5e                   pop esi
// 004d7355  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?dimensions@Win32Window@G3D@@UBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
