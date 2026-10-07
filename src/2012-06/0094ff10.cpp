// roc 2012-06 0094ff10  unit: RBX::AdvRotateTool  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0094ff10
//
// 0094ff10  8b442404             mov eax, dword ptr [esp + 4]
// 0094ff14  56                   push esi
// 0094ff15  8bf1                 mov esi, ecx
// 0094ff17  8b08                 mov ecx, dword ptr [eax]
// 0094ff19  890e                 mov dword ptr [esi], ecx
// 0094ff1b  8b5004               mov edx, dword ptr [eax + 4]
// 0094ff1e  895604               mov dword ptr [esi + 4], edx
// 0094ff21  8b4808               mov ecx, dword ptr [eax + 8]
// 0094ff24  894e08               mov dword ptr [esi + 8], ecx
// 0094ff27  8b500c               mov edx, dword ptr [eax + 0xc]
// 0094ff2a  83c010               add eax, 0x10
// 0094ff2d  50                   push eax
// 0094ff2e  8d4e10               lea ecx, [esi + 0x10]
// 0094ff31  89560c               mov dword ptr [esi + 0xc], edx
// 0094ff34  e8c700dfff           call 0x740000
// 0094ff39  8bc6                 mov eax, esi
// 0094ff3b  5e                   pop esi
// 0094ff3c  c20400               ret 4
// library xtp-15.2.1/Source\SyntaxEdit\XTPSyntaxEditCtrl.cpp (function ??4XTP_EDIT_ROWSBLOCK@@QAEAAU0@ABU0@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/SyntaxEdit/XTPSyntaxEditCtrl.cpp
