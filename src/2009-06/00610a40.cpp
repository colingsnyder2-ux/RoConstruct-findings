// roc 2009-06 00610a40  unit: RBX::CameraZoomExtentsCommand  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00610a40
//
// 00610a40  56                   push esi
// 00610a41  8bf1                 mov esi, ecx
// 00610a43  8d442408             lea eax, [esp + 8]
// 00610a47  50                   push eax
// 00610a48  8d4c240c             lea ecx, [esp + 0xc]
// 00610a4c  51                   push ecx
// 00610a4d  8d4e04               lea ecx, [esi + 4]
// 00610a50  c706ac878d00         mov dword ptr [esi], 0x8d87ac
// 00610a56  e88578feff           call 0x5f82e0
// 00610a5b  8b542408             mov edx, dword ptr [esp + 8]
// 00610a5f  895624               mov dword ptr [esi + 0x24], edx
// 00610a62  8bc6                 mov eax, esi
// 00610a64  5e                   pop esi
// 00610a65  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
