// roc 2007-03 00503980  unit: seg_00500000  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503980
//
// 00503980  d9ee                 fldz 
// 00503982  d9442404             fld dword ptr [esp + 4]
// 00503986  dde1                 fucom st(1)
// 00503988  dfe0                 fnstsw ax
// 0050398a  ddd9                 fstp st(1)
// 0050398c  f6c444               test ah, 0x44
// 0050398f  7b29                 jnp 0x5039ba
// 00503991  d9e8                 fld1 
// 00503993  8bc1                 mov eax, ecx
// 00503995  def1                 fdivrp st(1)
// 00503997  d95c2404             fstp dword ptr [esp + 4]
// 0050399b  d901                 fld dword ptr [ecx]
// 0050399d  d9442404             fld dword ptr [esp + 4]
// 005039a1  d9c0                 fld st(0)
// 005039a3  deca                 fmulp st(2)
// 005039a5  d9c9                 fxch st(1)
// 005039a7  d919                 fstp dword ptr [ecx]
// 005039a9  d94104               fld dword ptr [ecx + 4]
// 005039ac  d8c9                 fmul st(1)
// 005039ae  d95904               fstp dword ptr [ecx + 4]
// 005039b1  d84908               fmul dword ptr [ecx + 8]
// 005039b4  d95908               fstp dword ptr [ecx + 8]
// 005039b7  c20400               ret 4
// 005039ba  b801000000           mov eax, 1
// 005039bf  ddd8                 fstp st(0)
// 005039c1  8405d0778b00         test byte ptr [0x8b77d0], al
// 005039c7  7514                 jne 0x5039dd
// 005039c9  8b1528e67700         mov edx, dword ptr [0x77e628]
// 005039cf  0905d0778b00         or dword ptr [0x8b77d0], eax
// 005039d5  dd02                 fld qword ptr [edx]
// 005039d7  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 005039dd  dd05c8778b00         fld qword ptr [0x8b77c8]
// 005039e3  d919                 fstp dword ptr [ecx]
// 005039e5  8405d0778b00         test byte ptr [0x8b77d0], al
// 005039eb  7514                 jne 0x503a01
// 005039ed  8b1528e67700         mov edx, dword ptr [0x77e628]
// 005039f3  0905d0778b00         or dword ptr [0x8b77d0], eax
// 005039f9  dd02                 fld qword ptr [edx]
// 005039fb  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00503a01  dd05c8778b00         fld qword ptr [0x8b77c8]
// 00503a07  d95904               fstp dword ptr [ecx + 4]
// 00503a0a  8405d0778b00         test byte ptr [0x8b77d0], al
// 00503a10  7513                 jne 0x503a25
// 00503a12  0905d0778b00         or dword ptr [0x8b77d0], eax
// 00503a18  a128e67700           mov eax, dword ptr [0x77e628]
// 00503a1d  dd00                 fld qword ptr [eax]
// 00503a1f  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00503a25  dd05c8778b00         fld qword ptr [0x8b77c8]
// 00503a2b  8bc1                 mov eax, ecx
// 00503a2d  d95908               fstp dword ptr [ecx + 8]
// 00503a30  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Color3.cpp (function ??_0Color3@G3D@@QAEAAV01@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Color3.cpp
