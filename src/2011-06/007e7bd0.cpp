// roc 2011-06 007e7bd0  unit: RBX::AdvRotateTool  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e7bd0
//
// 007e7bd0  8b442404             mov eax, dword ptr [esp + 4]
// 007e7bd4  56                   push esi
// 007e7bd5  8bf1                 mov esi, ecx
// 007e7bd7  8b08                 mov ecx, dword ptr [eax]
// 007e7bd9  890e                 mov dword ptr [esi], ecx
// 007e7bdb  8b5004               mov edx, dword ptr [eax + 4]
// 007e7bde  895604               mov dword ptr [esi + 4], edx
// 007e7be1  8b4808               mov ecx, dword ptr [eax + 8]
// 007e7be4  894e08               mov dword ptr [esi + 8], ecx
// 007e7be7  8b500c               mov edx, dword ptr [eax + 0xc]
// 007e7bea  83c010               add eax, 0x10
// 007e7bed  50                   push eax
// 007e7bee  8d4e10               lea ecx, [esi + 0x10]
// 007e7bf1  89560c               mov dword ptr [esi + 0xc], edx
// 007e7bf4  e847cec4ff           call 0x434a40
// 007e7bf9  8bc6                 mov eax, esi
// 007e7bfb  5e                   pop esi
// 007e7bfc  c20400               ret 4
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditCtrl.cpp (function ??4XTP_EDIT_ROWSBLOCK@@QAEAAU0@ABU0@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditCtrl.cpp
