// roc 2008-06 0065fef0  unit: seg_00650000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065fef0
//
// 0065fef0  d9ee                 fldz 
// 0065fef2  8bc1                 mov eax, ecx
// 0065fef4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0065fef8  8908                 mov dword ptr [eax], ecx
// 0065fefa  c6400401             mov byte ptr [eax + 4], 1
// 0065fefe  d95008               fst dword ptr [eax + 8]
// 0065ff01  d9500c               fst dword ptr [eax + 0xc]
// 0065ff04  d95810               fstp dword ptr [eax + 0x10]
// 0065ff07  c20400               ret 4
// library rbxgs/v8kernel\Cofm.cpp (function ??0Cofm@RBX@@QAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
