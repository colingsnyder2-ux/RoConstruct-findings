// roc 2010-06 005e6da0  unit: RBX::CameraZoomExtentsCommand  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005e6da0
//
// 005e6da0  56                   push esi
// 005e6da1  8bf1                 mov esi, ecx
// 005e6da3  8d442408             lea eax, [esp + 8]
// 005e6da7  50                   push eax
// 005e6da8  8d4c240c             lea ecx, [esp + 0xc]
// 005e6dac  51                   push ecx
// 005e6dad  8d4e04               lea ecx, [esi + 4]
// 005e6db0  c70604e6a200         mov dword ptr [esi], 0xa2e604
// 005e6db6  e8359b0700           call 0x6608f0
// 005e6dbb  8b542408             mov edx, dword ptr [esp + 8]
// 005e6dbf  895624               mov dword ptr [esi + 0x24], edx
// 005e6dc2  8bc6                 mov eax, esi
// 005e6dc4  5e                   pop esi
// 005e6dc5  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
