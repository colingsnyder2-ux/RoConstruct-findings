// from server: 100% by tester
// roc 2007-03 00479dd0  unit: seg_00470000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00479dd0
//
// 00479dd0  6aff                 push -1
// 00479dd2  68f8787400           push 0x7478f8
// 00479dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00479ddd  50                   push eax
// 00479dde  51                   push ecx
// 00479ddf  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00479de4  33c4                 xor eax, esp
// 00479de6  50                   push eax
// 00479de7  8d442408             lea eax, [esp + 8]
// 00479deb  64a300000000         mov dword ptr fs:[0], eax
// 00479df1  33c0                 xor eax, eax
// 00479df3  89442404             mov dword ptr [esp + 4], eax
// 00479df7  89442410             mov dword ptr [esp + 0x10], eax
// 00479dfb  8b442418             mov eax, dword ptr [esp + 0x18]
// 00479dff  50                   push eax
// 00479e00  8d542408             lea edx, [esp + 8]
// 00479e04  52                   push edx
// 00479e05  e896feffff           call 0x479ca0
// 00479e0a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00479e0e  64890d00000000       mov dword ptr fs:[0], ecx
// 00479e15  59                   pop ecx
// 00479e16  83c410               add esp, 0x10
// 00479e19  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@QAEXABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
