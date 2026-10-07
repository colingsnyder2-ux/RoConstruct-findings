// roc 2008-06 00478470  unit: CInstanceRecord::CNameItem  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00478470
//
// 00478470  83ec10               sub esp, 0x10
// 00478473  8b442418             mov eax, dword ptr [esp + 0x18]
// 00478477  d900                 fld dword ptr [eax]
// 00478479  56                   push esi
// 0047847a  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047847e  d95c2404             fstp dword ptr [esp + 4]
// 00478482  d94004               fld dword ptr [eax + 4]
// 00478485  d95c2408             fstp dword ptr [esp + 8]
// 00478489  d94008               fld dword ptr [eax + 8]
// 0047848c  8d442404             lea eax, [esp + 4]
// 00478490  d95c240c             fstp dword ptr [esp + 0xc]
// 00478494  50                   push eax
// 00478495  d9e8                 fld1 
// 00478497  56                   push esi
// 00478498  d95c2418             fstp dword ptr [esp + 0x18]
// 0047849c  e8afb00000           call 0x483550
// 004784a1  83c408               add esp, 8
// 004784a4  8bc6                 mov eax, esi
// 004784a6  5e                   pop esi
// 004784a7  83c410               add esp, 0x10
// 004784aa  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
