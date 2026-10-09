// roc 2009-12 006ee840  unit: RBX::Primitive  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ee840
//
// 006ee840  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ee844  8b442408             mov eax, dword ptr [esp + 8]
// 006ee848  83ec48               sub esp, 0x48
// 006ee84b  56                   push esi
// 006ee84c  8b742450             mov esi, dword ptr [esp + 0x50]
// 006ee850  51                   push ecx
// 006ee851  56                   push esi
// 006ee852  50                   push eax
// 006ee853  8d542410             lea edx, [esp + 0x10]
// 006ee857  52                   push edx
// 006ee858  8d442438             lea eax, [esp + 0x38]
// 006ee85c  50                   push eax
// 006ee85d  e84e55f0ff           call 0x5f3db0
// 006ee862  8bc8                 mov ecx, eax
// 006ee864  e85752f0ff           call 0x5f3ac0
// 006ee869  8bc8                 mov ecx, eax
// 006ee86b  e85052f0ff           call 0x5f3ac0
// 006ee870  8bc6                 mov eax, esi
// 006ee872  5e                   pop esi
// 006ee873  83c448               add esp, 0x48
// 006ee876  c3                   ret 
// library rbxgs/util\Math.cpp (function ?momentToObjectSpace@Math@RBX@@SA?AVMatrix3@G3D@@ABV34@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/Math.cpp
