// roc 2007-03 005f75a0  unit: seg_005f0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f75a0
//
// 005f75a0  d9ee                 fldz 
// 005f75a2  8bc1                 mov eax, ecx
// 005f75a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f75a8  8908                 mov dword ptr [eax], ecx
// 005f75aa  c6400401             mov byte ptr [eax + 4], 1
// 005f75ae  d95008               fst dword ptr [eax + 8]
// 005f75b1  d9500c               fst dword ptr [eax + 0xc]
// 005f75b4  d95810               fstp dword ptr [eax + 0x10]
// 005f75b7  c20400               ret 4
// library rbxgs/v8kernel\Cofm.cpp (function ??0Cofm@RBX@@QAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
