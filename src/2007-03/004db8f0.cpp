// roc 2007-03 004db8f0  unit: seg_004d0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004db8f0
//
// 004db8f0  56                   push esi
// 004db8f1  8b742408             mov esi, dword ptr [esp + 8]
// 004db8f5  56                   push esi
// 004db8f6  e895ffffff           call 0x4db890
// 004db8fb  8bc6                 mov eax, esi
// 004db8fd  5e                   pop esi
// 004db8fe  c20400               ret 4
// library rbxgs/script\LuaAtomicClasses.cpp (function ?unit@Vector3@G3D@@QBE?AV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaAtomicClasses.cpp
