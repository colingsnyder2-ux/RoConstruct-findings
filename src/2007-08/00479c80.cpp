// roc 2007-08 00479c80  unit: seg_00470000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479c80
//
// 00479c80  6aff                 push -1
// 00479c82  6848547400           push 0x745448
// 00479c87  64a100000000         mov eax, dword ptr fs:[0]
// 00479c8d  50                   push eax
// 00479c8e  51                   push ecx
// 00479c8f  a188518b00           mov eax, dword ptr [0x8b5188]
// 00479c94  33c4                 xor eax, esp
// 00479c96  50                   push eax
// 00479c97  8d442408             lea eax, [esp + 8]
// 00479c9b  64a300000000         mov dword ptr fs:[0], eax
// 00479ca1  33c0                 xor eax, eax
// 00479ca3  89442404             mov dword ptr [esp + 4], eax
// 00479ca7  89442410             mov dword ptr [esp + 0x10], eax
// 00479cab  8b442418             mov eax, dword ptr [esp + 0x18]
// 00479caf  50                   push eax
// 00479cb0  8d542408             lea edx, [esp + 8]
// 00479cb4  52                   push edx
// 00479cb5  e896feffff           call 0x479b50
// 00479cba  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00479cbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00479cc5  59                   pop ecx
// 00479cc6  83c410               add esp, 0x10
// 00479cc9  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@QAEXABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
