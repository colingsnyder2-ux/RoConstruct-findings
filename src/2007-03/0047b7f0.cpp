// roc 2007-03 0047b7f0  unit: seg_00470000  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b7f0
//
// 0047b7f0  83ec10               sub esp, 0x10
// 0047b7f3  56                   push esi
// 0047b7f4  8bf1                 mov esi, ecx
// 0047b7f6  db86cc010000         fild dword ptr [esi + 0x1cc]
// 0047b7fc  8b06                 mov eax, dword ptr [esi]
// 0047b7fe  8b5004               mov edx, dword ptr [eax + 4]
// 0047b801  d95c240c             fstp dword ptr [esp + 0xc]
// 0047b805  db86d0010000         fild dword ptr [esi + 0x1d0]
// 0047b80b  d95c2408             fstp dword ptr [esp + 8]
// 0047b80f  ffd2                 call edx
// 0047b811  89442404             mov dword ptr [esp + 4], eax
// 0047b815  db442404             fild dword ptr [esp + 4]
// 0047b819  8b06                 mov eax, dword ptr [esi]
// 0047b81b  8b5008               mov edx, dword ptr [eax + 8]
// 0047b81e  8bce                 mov ecx, esi
// 0047b820  d95c2410             fstp dword ptr [esp + 0x10]
// 0047b824  ffd2                 call edx
// 0047b826  89442404             mov dword ptr [esp + 4], eax
// 0047b82a  db442404             fild dword ptr [esp + 4]
// 0047b82e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047b832  83ec10               sub esp, 0x10
// 0047b835  d95c2414             fstp dword ptr [esp + 0x14]
// 0047b839  d9442418             fld dword ptr [esp + 0x18]
// 0047b83d  d9c0                 fld st(0)
// 0047b83f  d8442414             fadd dword ptr [esp + 0x14]
// 0047b843  d95c2418             fstp dword ptr [esp + 0x18]
// 0047b847  d9442418             fld dword ptr [esp + 0x18]
// 0047b84b  d95c240c             fstp dword ptr [esp + 0xc]
// 0047b84f  d944241c             fld dword ptr [esp + 0x1c]
// 0047b853  d9c0                 fld st(0)
// 0047b855  d8442420             fadd dword ptr [esp + 0x20]
// 0047b859  d95c2420             fstp dword ptr [esp + 0x20]
// 0047b85d  d9442420             fld dword ptr [esp + 0x20]
// 0047b861  d95c2408             fstp dword ptr [esp + 8]
// 0047b865  d9c9                 fxch st(1)
// 0047b867  d95c2404             fstp dword ptr [esp + 4]
// 0047b86b  d91c24               fstp dword ptr [esp]
// 0047b86e  56                   push esi
// 0047b86f  e80ca5fdff           call 0x455d80
// 0047b874  83c414               add esp, 0x14
// 0047b877  8bc6                 mov eax, esi
// 0047b879  5e                   pop esi
// 0047b87a  83c410               add esp, 0x10
// 0047b87d  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?dimensions@Win32Window@G3D@@UBE?AVRect2D@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
