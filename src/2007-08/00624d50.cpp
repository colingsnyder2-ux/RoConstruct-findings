// roc 2007-08 00624d50  unit: RBX::ArrowButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00624d50
//
// 00624d50  d9ee                 fldz 
// 00624d52  8bc1                 mov eax, ecx
// 00624d54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00624d58  8908                 mov dword ptr [eax], ecx
// 00624d5a  c6400401             mov byte ptr [eax + 4], 1
// 00624d5e  d95008               fst dword ptr [eax + 8]
// 00624d61  d9500c               fst dword ptr [eax + 0xc]
// 00624d64  d95810               fstp dword ptr [eax + 0x10]
// 00624d67  c20400               ret 4
// library rbxgs/v8kernel\Cofm.cpp (function ??0Cofm@RBX@@QAE@PAVBody@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Cofm.cpp
