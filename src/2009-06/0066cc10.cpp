// roc 2009-06 0066cc10  unit: RBX::VHumanoid::?$EventDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066cc10
//
// 0066cc10  8b442408             mov eax, dword ptr [esp + 8]
// 0066cc14  d94008               fld dword ptr [eax + 8]
// 0066cc17  56                   push esi
// 0066cc18  8b742408             mov esi, dword ptr [esp + 8]
// 0066cc1c  83ec24               sub esp, 0x24
// 0066cc1f  d95c2420             fstp dword ptr [esp + 0x20]
// 0066cc23  8bce                 mov ecx, esi
// 0066cc25  d9ee                 fldz 
// 0066cc27  d954241c             fst dword ptr [esp + 0x1c]
// 0066cc2b  d9542418             fst dword ptr [esp + 0x18]
// 0066cc2f  d9542414             fst dword ptr [esp + 0x14]
// 0066cc33  d94004               fld dword ptr [eax + 4]
// 0066cc36  d95c2410             fstp dword ptr [esp + 0x10]
// 0066cc3a  d954240c             fst dword ptr [esp + 0xc]
// 0066cc3e  d9542408             fst dword ptr [esp + 8]
// 0066cc42  d95c2404             fstp dword ptr [esp + 4]
// 0066cc46  d900                 fld dword ptr [eax]
// 0066cc48  d91c24               fstp dword ptr [esp]
// 0066cc4b  e890b8f0ff           call 0x5784e0
// 0066cc50  8bc6                 mov eax, esi
// 0066cc52  5e                   pop esi
// 0066cc53  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
