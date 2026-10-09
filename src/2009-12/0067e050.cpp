// roc 2009-12 0067e050  unit: RBX::CameraZoomExtentsCommand  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0067e050
//
// 0067e050  56                   push esi
// 0067e051  8bf1                 mov esi, ecx
// 0067e053  8d442408             lea eax, [esp + 8]
// 0067e057  50                   push eax
// 0067e058  8d4c240c             lea ecx, [esp + 0xc]
// 0067e05c  51                   push ecx
// 0067e05d  8d4e04               lea ecx, [esi + 4]
// 0067e060  c70654ff9c00         mov dword ptr [esi], 0x9cff54
// 0067e066  e885afeaff           call 0x528ff0
// 0067e06b  8b542408             mov edx, dword ptr [esp + 8]
// 0067e06f  895624               mov dword ptr [esi + 0x24], edx
// 0067e072  8bc6                 mov eax, esi
// 0067e074  5e                   pop esi
// 0067e075  c20400               ret 4
// library rbxgs/v8tree\Verb.cpp (function ??0VerbContainer@RBX@@QAE@PAV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Verb.cpp
