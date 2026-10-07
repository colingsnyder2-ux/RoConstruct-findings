// roc 2007-08 0047d330  unit: G3D::Win32Window  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d330
//
// 0047d330  83ec10               sub esp, 0x10
// 0047d333  56                   push esi
// 0047d334  8bf1                 mov esi, ecx
// 0047d336  db86cc010000         fild dword ptr [esi + 0x1cc]
// 0047d33c  8b06                 mov eax, dword ptr [esi]
// 0047d33e  8b5004               mov edx, dword ptr [eax + 4]
// 0047d341  d95c240c             fstp dword ptr [esp + 0xc]
// 0047d345  db86d0010000         fild dword ptr [esi + 0x1d0]
// 0047d34b  d95c2408             fstp dword ptr [esp + 8]
// 0047d34f  ffd2                 call edx
// 0047d351  89442404             mov dword ptr [esp + 4], eax
// 0047d355  db442404             fild dword ptr [esp + 4]
// 0047d359  8b06                 mov eax, dword ptr [esi]
// 0047d35b  8b5008               mov edx, dword ptr [eax + 8]
// 0047d35e  8bce                 mov ecx, esi
// 0047d360  d95c2410             fstp dword ptr [esp + 0x10]
// 0047d364  ffd2                 call edx
// 0047d366  89442404             mov dword ptr [esp + 4], eax
// 0047d36a  db442404             fild dword ptr [esp + 4]
// 0047d36e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047d372  83ec10               sub esp, 0x10
// 0047d375  d95c2414             fstp dword ptr [esp + 0x14]
// 0047d379  d9442418             fld dword ptr [esp + 0x18]
// 0047d37d  d9c0                 fld st(0)
// 0047d37f  d8442414             fadd dword ptr [esp + 0x14]
// 0047d383  d95c2418             fstp dword ptr [esp + 0x18]
// 0047d387  d9442418             fld dword ptr [esp + 0x18]
// 0047d38b  d95c240c             fstp dword ptr [esp + 0xc]
// 0047d38f  d944241c             fld dword ptr [esp + 0x1c]
// 0047d393  d9c0                 fld st(0)
// 0047d395  d8442420             fadd dword ptr [esp + 0x20]
// 0047d399  d95c2420             fstp dword ptr [esp + 0x20]
// 0047d39d  d9442420             fld dword ptr [esp + 0x20]
// 0047d3a1  d95c2408             fstp dword ptr [esp + 8]
// 0047d3a5  d9c9                 fxch st(1)
// 0047d3a7  d95c2404             fstp dword ptr [esp + 4]
// 0047d3ab  d91c24               fstp dword ptr [esp]
// 0047d3ae  56                   push esi
// 0047d3af  e85caffdff           call 0x458310
// 0047d3b4  83c414               add esp, 0x14
// 0047d3b7  8bc6                 mov eax, esi
// 0047d3b9  5e                   pop esi
// 0047d3ba  83c410               add esp, 0x10
// 0047d3bd  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?dimensions@Win32Window@G3D@@UBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
