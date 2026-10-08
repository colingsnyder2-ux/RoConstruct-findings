// roc 2007-03 004982f0  unit: seg_00490000  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004982f0
//
// 004982f0  83ec0c               sub esp, 0xc
// 004982f3  d94108               fld dword ptr [ecx + 8]
// 004982f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 004982fa  d91c24               fstp dword ptr [esp]
// 004982fd  56                   push esi
// 004982fe  d94208               fld dword ptr [edx + 8]
// 00498301  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00498305  d95c2418             fstp dword ptr [esp + 0x18]
// 00498309  d94608               fld dword ptr [esi + 8]
// 0049830c  d95c241c             fstp dword ptr [esp + 0x1c]
// 00498310  d9442404             fld dword ptr [esp + 4]
// 00498314  d9442418             fld dword ptr [esp + 0x18]
// 00498318  d8d1                 fcom st(1)
// 0049831a  dfe0                 fnstsw ax
// 0049831c  f6c401               test ah, 1
// 0049831f  7504                 jne 0x498325
// 00498321  ddd9                 fstp st(1)
// 00498323  eb15                 jmp 0x49833a
// 00498325  ddd8                 fstp st(0)
// 00498327  d944241c             fld dword ptr [esp + 0x1c]
// 0049832b  d8d1                 fcom st(1)
// 0049832d  dfe0                 fnstsw ax
// 0049832f  f6c441               test ah, 0x41
// 00498332  7a04                 jp 0x498338
// 00498334  ddd9                 fstp st(1)
// 00498336  eb02                 jmp 0x49833a
// 00498338  ddd8                 fstp st(0)
// 0049833a  d95c2404             fstp dword ptr [esp + 4]
// 0049833e  d94104               fld dword ptr [ecx + 4]
// 00498341  d95c2418             fstp dword ptr [esp + 0x18]
// 00498345  d94204               fld dword ptr [edx + 4]
// 00498348  d95c241c             fstp dword ptr [esp + 0x1c]
// 0049834c  d94604               fld dword ptr [esi + 4]
// 0049834f  d95c2408             fstp dword ptr [esp + 8]
// 00498353  d9442418             fld dword ptr [esp + 0x18]
// 00498357  d944241c             fld dword ptr [esp + 0x1c]
// 0049835b  d8d1                 fcom st(1)
// 0049835d  dfe0                 fnstsw ax
// 0049835f  f6c401               test ah, 1
// 00498362  7504                 jne 0x498368
// 00498364  ddd9                 fstp st(1)
// 00498366  eb15                 jmp 0x49837d
// 00498368  ddd8                 fstp st(0)
// 0049836a  d9442408             fld dword ptr [esp + 8]
// 0049836e  d8d1                 fcom st(1)
// 00498370  dfe0                 fnstsw ax
// 00498372  f6c441               test ah, 0x41
// 00498375  7a04                 jp 0x49837b
// 00498377  ddd9                 fstp st(1)
// 00498379  eb02                 jmp 0x49837d
// 0049837b  ddd8                 fstp st(0)
// 0049837d  d95c241c             fstp dword ptr [esp + 0x1c]
// 00498381  d901                 fld dword ptr [ecx]
// 00498383  d95c2418             fstp dword ptr [esp + 0x18]
// 00498387  d902                 fld dword ptr [edx]
// 00498389  d95c2408             fstp dword ptr [esp + 8]
// 0049838d  d906                 fld dword ptr [esi]
// 0049838f  5e                   pop esi
// 00498390  d95c2408             fstp dword ptr [esp + 8]
// 00498394  d9442414             fld dword ptr [esp + 0x14]
// 00498398  d9442404             fld dword ptr [esp + 4]
// 0049839c  d8d1                 fcom st(1)
// 0049839e  dfe0                 fnstsw ax
// 004983a0  f6c401               test ah, 1
// 004983a3  7504                 jne 0x4983a9
// 004983a5  ddd9                 fstp st(1)
// 004983a7  eb11                 jmp 0x4983ba
// 004983a9  ddd8                 fstp st(0)
// 004983ab  d9442408             fld dword ptr [esp + 8]
// 004983af  d8d1                 fcom st(1)
// 004983b1  dfe0                 fnstsw ax
// 004983b3  f6c441               test ah, 0x41
// 004983b6  7bed                 jnp 0x4983a5
// 004983b8  ddd8                 fstp st(0)
// 004983ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 004983be  d95c2414             fstp dword ptr [esp + 0x14]
// 004983c2  d9442414             fld dword ptr [esp + 0x14]
// 004983c6  d918                 fstp dword ptr [eax]
// 004983c8  d9442418             fld dword ptr [esp + 0x18]
// 004983cc  d95804               fstp dword ptr [eax + 4]
// 004983cf  d90424               fld dword ptr [esp]
// 004983d2  d95808               fstp dword ptr [eax + 8]
// 004983d5  83c40c               add esp, 0xc
// 004983d8  c20c00               ret 0xc
// library rbxgs/util\Extents.cpp (function ?clamp@Vector3@G3D@@QBE?AV12@ABV12@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Extents.cpp
