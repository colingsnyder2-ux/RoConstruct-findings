// roc 2010-06 0068f1c0  unit: RBX::Mechanism  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0068f1c0
//
// 0068f1c0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068f1c4  8b442408             mov eax, dword ptr [esp + 8]
// 0068f1c8  83ec48               sub esp, 0x48
// 0068f1cb  56                   push esi
// 0068f1cc  8b742450             mov esi, dword ptr [esp + 0x50]
// 0068f1d0  51                   push ecx
// 0068f1d1  56                   push esi
// 0068f1d2  50                   push eax
// 0068f1d3  8d542410             lea edx, [esp + 0x10]
// 0068f1d7  52                   push edx
// 0068f1d8  8d442438             lea eax, [esp + 0x38]
// 0068f1dc  50                   push eax
// 0068f1dd  e83e73ecff           call 0x556520
// 0068f1e2  8bc8                 mov ecx, eax
// 0068f1e4  e84770ecff           call 0x556230
// 0068f1e9  8bc8                 mov ecx, eax
// 0068f1eb  e84070ecff           call 0x556230
// 0068f1f0  8bc6                 mov eax, esi
// 0068f1f2  5e                   pop esi
// 0068f1f3  83c448               add esp, 0x48
// 0068f1f6  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
