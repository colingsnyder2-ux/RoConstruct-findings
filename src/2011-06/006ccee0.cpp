// roc 2011-06 006ccee0  unit: RBX::Mechanism  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ccee0
//
// 006ccee0  8b442408             mov eax, dword ptr [esp + 8]
// 006ccee4  d94008               fld dword ptr [eax + 8]
// 006ccee7  56                   push esi
// 006ccee8  8b742408             mov esi, dword ptr [esp + 8]
// 006cceec  83ec24               sub esp, 0x24
// 006cceef  d95c2420             fstp dword ptr [esp + 0x20]
// 006ccef3  8bce                 mov ecx, esi
// 006ccef5  d9ee                 fldz 
// 006ccef7  d954241c             fst dword ptr [esp + 0x1c]
// 006ccefb  d9542418             fst dword ptr [esp + 0x18]
// 006cceff  d9542414             fst dword ptr [esp + 0x14]
// 006ccf03  d94004               fld dword ptr [eax + 4]
// 006ccf06  d95c2410             fstp dword ptr [esp + 0x10]
// 006ccf0a  d954240c             fst dword ptr [esp + 0xc]
// 006ccf0e  d9542408             fst dword ptr [esp + 8]
// 006ccf12  d95c2404             fstp dword ptr [esp + 4]
// 006ccf16  d900                 fld dword ptr [eax]
// 006ccf18  d91c24               fstp dword ptr [esp]
// 006ccf1b  e8f041e7ff           call 0x541110
// 006ccf20  8bc6                 mov eax, esi
// 006ccf22  5e                   pop esi
// 006ccf23  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
