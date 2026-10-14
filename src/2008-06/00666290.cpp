// roc 2008-06 00666290  unit: RBX::PartDragTool  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00666290
//
// 00666290  d9442408             fld dword ptr [esp + 8]
// 00666294  8b442404             mov eax, dword ptr [esp + 4]
// 00666298  d86104               fsub dword ptr [ecx + 4]
// 0066629b  d809                 fmul dword ptr [ecx]
// 0066629d  d84104               fadd dword ptr [ecx + 4]
// 006662a0  d95104               fst dword ptr [ecx + 4]
// 006662a3  d944240c             fld dword ptr [esp + 0xc]
// 006662a7  d86108               fsub dword ptr [ecx + 8]
// 006662aa  d809                 fmul dword ptr [ecx]
// 006662ac  d84108               fadd dword ptr [ecx + 8]
// 006662af  d95108               fst dword ptr [ecx + 8]
// 006662b2  d9442410             fld dword ptr [esp + 0x10]
// 006662b6  d8610c               fsub dword ptr [ecx + 0xc]
// 006662b9  d809                 fmul dword ptr [ecx]
// 006662bb  d8410c               fadd dword ptr [ecx + 0xc]
// 006662be  d9510c               fst dword ptr [ecx + 0xc]
// 006662c1  d9ca                 fxch st(2)
// 006662c3  d918                 fstp dword ptr [eax]
// 006662c5  d95804               fstp dword ptr [eax + 4]
// 006662c8  d95808               fstp dword ptr [eax + 8]
// 006662cb  c21000               ret 0x10
// library rbxgs-dll/util\ExponentialRunningAverage.cpp (function ?pushAndGetAverage@Vector3ERA@RBX@@QAE?AVVector3@G3D@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll util/ExponentialRunningAverage.cpp
