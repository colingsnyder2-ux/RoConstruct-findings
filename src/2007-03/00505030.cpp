// roc 2007-03 00505030  unit: seg_00500000  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505030
//
// 00505030  83ec0c               sub esp, 0xc
// 00505033  d9442410             fld dword ptr [esp + 0x10]
// 00505037  83ec08               sub esp, 8
// 0050503a  d8a118000600         fsub dword ptr [ecx + 0x60018]
// 00505040  d95c2408             fstp dword ptr [esp + 8]
// 00505044  d944241c             fld dword ptr [esp + 0x1c]
// 00505048  d8a11c000600         fsub dword ptr [ecx + 0x6001c]
// 0050504e  d95c240c             fstp dword ptr [esp + 0xc]
// 00505052  d9442420             fld dword ptr [esp + 0x20]
// 00505056  d8a120000600         fsub dword ptr [ecx + 0x60020]
// 0050505c  d95c2410             fstp dword ptr [esp + 0x10]
// 00505060  d98124000600         fld dword ptr [ecx + 0x60024]
// 00505066  d84c2408             fmul dword ptr [esp + 8]
// 0050506a  d95c2418             fstp dword ptr [esp + 0x18]
// 0050506e  d98128000600         fld dword ptr [ecx + 0x60028]
// 00505074  d84c240c             fmul dword ptr [esp + 0xc]
// 00505078  d95c241c             fstp dword ptr [esp + 0x1c]
// 0050507c  d9812c000600         fld dword ptr [ecx + 0x6002c]
// 00505082  d84c2410             fmul dword ptr [esp + 0x10]
// 00505086  d95c2420             fstp dword ptr [esp + 0x20]
// 0050508a  d9442418             fld dword ptr [esp + 0x18]
// 0050508e  dc0d88067a00         fmul qword ptr [0x7a0688]
// 00505094  dd1c24               fstp qword ptr [esp]
// 00505097  e82ca51100           call 0x61f5c8
// 0050509c  83c408               add esp, 8
// 0050509f  e85ca11100           call 0x61f200
// 005050a4  85c0                 test eax, eax
// 005050a6  7f04                 jg 0x5050ac
// 005050a8  33c0                 xor eax, eax
// 005050aa  eb0a                 jmp 0x5050b6
// 005050ac  83f81f               cmp eax, 0x1f
// 005050af  7c05                 jl 0x5050b6
// 005050b1  b81f000000           mov eax, 0x1f
// 005050b6  d9442414             fld dword ptr [esp + 0x14]
// 005050ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005050be  dc0d88067a00         fmul qword ptr [0x7a0688]
// 005050c4  83ec08               sub esp, 8
// 005050c7  8901                 mov dword ptr [ecx], eax
// 005050c9  dd1c24               fstp qword ptr [esp]
// 005050cc  e8f7a41100           call 0x61f5c8
// 005050d1  83c408               add esp, 8
// 005050d4  e827a11100           call 0x61f200
// 005050d9  85c0                 test eax, eax
// 005050db  7f04                 jg 0x5050e1
// 005050dd  33c0                 xor eax, eax
// 005050df  eb0a                 jmp 0x5050eb
// 005050e1  83f81f               cmp eax, 0x1f
// 005050e4  7c05                 jl 0x5050eb
// 005050e6  b81f000000           mov eax, 0x1f
// 005050eb  d9442418             fld dword ptr [esp + 0x18]
// 005050ef  8b542420             mov edx, dword ptr [esp + 0x20]
// 005050f3  dc0d88067a00         fmul qword ptr [0x7a0688]
// 005050f9  83ec08               sub esp, 8
// 005050fc  8902                 mov dword ptr [edx], eax
// 005050fe  dd1c24               fstp qword ptr [esp]
// 00505101  e8c2a41100           call 0x61f5c8
// 00505106  83c408               add esp, 8
// 00505109  e8f2a01100           call 0x61f200
// 0050510e  85c0                 test eax, eax
// 00505110  7f0e                 jg 0x505120
// 00505112  33c0                 xor eax, eax
// 00505114  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00505118  8901                 mov dword ptr [ecx], eax
// 0050511a  83c40c               add esp, 0xc
// 0050511d  c21800               ret 0x18
// 00505120  83f81f               cmp eax, 0x1f
// 00505123  7cef                 jl 0x505114
// 00505125  8b542424             mov edx, dword ptr [esp + 0x24]
// 00505129  b81f000000           mov eax, 0x1f
// 0050512e  8902                 mov dword ptr [edx], eax
// 00505130  83c40c               add esp, 0xc
// 00505133  c21800               ret 0x18
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ?toGridCoords@Welder@_internal@G3D@@QBEXVVector3@3@AAH11@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
