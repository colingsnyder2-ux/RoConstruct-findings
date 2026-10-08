// roc 2007-03 00480320  unit: seg_00480000  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00480320
//
// 00480320  a1e07f8b00           mov eax, dword ptr [0x8b7fe0]
// 00480325  85c0                 test eax, eax
// 00480327  56                   push esi
// 00480328  8bf1                 mov esi, ecx
// 0048032a  740b                 je 0x480337
// 0048032c  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0048032f  68f2840000           push 0x84f2
// 00480334  51                   push ecx
// 00480335  ffd0                 call eax
// 00480337  c6462c01             mov byte ptr [esi + 0x2c], 1
// 0048033b  5e                   pop esi
// 0048033c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\Milestone.cpp (function ?set@Milestone@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Milestone.cpp
