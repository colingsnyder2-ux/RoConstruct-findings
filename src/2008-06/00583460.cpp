// roc 2008-06 00583460  unit: RBX::CameraZoomExtentsCommand  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583460
//
// 00583460  56                   push esi
// 00583461  8bf1                 mov esi, ecx
// 00583463  8d442408             lea eax, [esp + 8]
// 00583467  50                   push eax
// 00583468  8d4c240c             lea ecx, [esp + 0xc]
// 0058346c  51                   push ecx
// 0058346d  8d4e04               lea ecx, [esi + 4]
// 00583470  c7067c0b8300         mov dword ptr [esi], 0x830b7c
// 00583476  e8952cecff           call 0x446110
// 0058347b  8b542408             mov edx, dword ptr [esp + 8]
// 0058347f  895624               mov dword ptr [esi + 0x24], edx
// 00583482  8bc6                 mov eax, esi
// 00583484  5e                   pop esi
// 00583485  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
