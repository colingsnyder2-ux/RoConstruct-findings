// roc 2010-06 0068f260  unit: RBX::Mechanism  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068f260
//
// 0068f260  8b442408             mov eax, dword ptr [esp + 8]
// 0068f264  d94008               fld dword ptr [eax + 8]
// 0068f267  56                   push esi
// 0068f268  8b742408             mov esi, dword ptr [esp + 8]
// 0068f26c  83ec24               sub esp, 0x24
// 0068f26f  d95c2420             fstp dword ptr [esp + 0x20]
// 0068f273  8bce                 mov ecx, esi
// 0068f275  d9ee                 fldz 
// 0068f277  d954241c             fst dword ptr [esp + 0x1c]
// 0068f27b  d9542418             fst dword ptr [esp + 0x18]
// 0068f27f  d9542414             fst dword ptr [esp + 0x14]
// 0068f283  d94004               fld dword ptr [eax + 4]
// 0068f286  d95c2410             fstp dword ptr [esp + 0x10]
// 0068f28a  d954240c             fst dword ptr [esp + 0xc]
// 0068f28e  d9542408             fst dword ptr [esp + 8]
// 0068f292  d95c2404             fstp dword ptr [esp + 4]
// 0068f296  d900                 fld dword ptr [eax]
// 0068f298  d91c24               fstp dword ptr [esp]
// 0068f29b  e8407decff           call 0x556fe0
// 0068f2a0  8bc6                 mov eax, esi
// 0068f2a2  5e                   pop esi
// 0068f2a3  c3                   ret 
// library rbxgs/util\Math.cpp (function ?fromDiagonal@Math@RBX@@SA?AVMatrix3@G3D@@ABVVector3@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
