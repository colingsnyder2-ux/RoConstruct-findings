// roc 2009-06 006dedb0  unit: RBX::SpatialFilter  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006dedb0
//
// 006dedb0  d9ee                 fldz 
// 006dedb2  8bc1                 mov eax, ecx
// 006dedb4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006dedb8  8908                 mov dword ptr [eax], ecx
// 006dedba  c6400401             mov byte ptr [eax + 4], 1
// 006dedbe  d95008               fst dword ptr [eax + 8]
// 006dedc1  d9500c               fst dword ptr [eax + 0xc]
// 006dedc4  d95810               fstp dword ptr [eax + 0x10]
// 006dedc7  c20400               ret 4
// library rbxgs/v8kernel\Cofm.cpp (function ??0Cofm@RBX@@QAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
