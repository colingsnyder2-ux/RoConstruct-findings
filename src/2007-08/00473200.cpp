// from server: 100% by auto
// roc 2007-08 00473200  unit: G3D::VARArea  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473200
//
// 00473200  83ec30               sub esp, 0x30
// 00473203  8b442438             mov eax, dword ptr [esp + 0x38]
// 00473207  d94104               fld dword ptr [ecx + 4]
// 0047320a  d84828               fmul dword ptr [eax + 0x28]
// 0047320d  56                   push esi
// 0047320e  d94024               fld dword ptr [eax + 0x24]
// 00473211  50                   push eax
// 00473212  d809                 fmul dword ptr [ecx]
// 00473214  dec1                 faddp st(1)
// 00473216  d94108               fld dword ptr [ecx + 8]
// 00473219  d8482c               fmul dword ptr [eax + 0x2c]
// 0047321c  dec1                 faddp st(1)
// 0047321e  d84124               fadd dword ptr [ecx + 0x24]
// 00473221  d95c2408             fstp dword ptr [esp + 8]
// 00473225  d9410c               fld dword ptr [ecx + 0xc]
// 00473228  d84824               fmul dword ptr [eax + 0x24]
// 0047322b  d94110               fld dword ptr [ecx + 0x10]
// 0047322e  d84828               fmul dword ptr [eax + 0x28]
// 00473231  dec1                 faddp st(1)
// 00473233  d94114               fld dword ptr [ecx + 0x14]
// 00473236  d8482c               fmul dword ptr [eax + 0x2c]
// 00473239  dec1                 faddp st(1)
// 0047323b  d84128               fadd dword ptr [ecx + 0x28]
// 0047323e  d95c240c             fstp dword ptr [esp + 0xc]
// 00473242  d94118               fld dword ptr [ecx + 0x18]
// 00473245  d84824               fmul dword ptr [eax + 0x24]
// 00473248  d9411c               fld dword ptr [ecx + 0x1c]
// 0047324b  d84828               fmul dword ptr [eax + 0x28]
// 0047324e  dec1                 faddp st(1)
// 00473250  d94120               fld dword ptr [ecx + 0x20]
// 00473253  d8482c               fmul dword ptr [eax + 0x2c]
// 00473256  8d442414             lea eax, [esp + 0x14]
// 0047325a  50                   push eax
// 0047325b  dec1                 faddp st(1)
// 0047325d  d8412c               fadd dword ptr [ecx + 0x2c]
// 00473260  d95c2414             fstp dword ptr [esp + 0x14]
// 00473264  e8e7640900           call 0x509750
// 00473269  8b742438             mov esi, dword ptr [esp + 0x38]
// 0047326d  50                   push eax
// 0047326e  8bce                 mov ecx, esi
// 00473270  e85b630900           call 0x5095d0
// 00473275  d9442404             fld dword ptr [esp + 4]
// 00473279  d95e24               fstp dword ptr [esi + 0x24]
// 0047327c  8bc6                 mov eax, esi
// 0047327e  d9442408             fld dword ptr [esp + 8]
// 00473282  d95e28               fstp dword ptr [esi + 0x28]
// 00473285  d944240c             fld dword ptr [esp + 0xc]
// 00473289  d95e2c               fstp dword ptr [esi + 0x2c]
// 0047328c  5e                   pop esi
// 0047328d  83c430               add esp, 0x30
// 00473290  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??DCoordinateFrame@G3D@@QBE?AV01@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
