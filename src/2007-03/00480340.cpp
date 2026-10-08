// roc 2007-03 00480340  unit: seg_00480000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480340
//
// 00480340  a1e47f8b00           mov eax, dword ptr [0x8b7fe4]
// 00480345  85c0                 test eax, eax
// 00480347  56                   push esi
// 00480348  8bf1                 mov esi, ecx
// 0048034a  740c                 je 0x480358
// 0048034c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0048034f  51                   push ecx
// 00480350  ffd0                 call eax
// 00480352  c6462c00             mov byte ptr [esi + 0x2c], 0
// 00480356  5e                   pop esi
// 00480357  c3                   ret 
// 00480358  ff1568ec7700         call dword ptr [0x77ec68]
// 0048035e  c6462c00             mov byte ptr [esi + 0x2c], 0
// 00480362  5e                   pop esi
// 00480363  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Milestone.cpp (function ?wait@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Milestone.cpp
