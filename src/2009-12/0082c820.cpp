// roc 2009-12 0082c820  unit: CXTPReportRecordItemText  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082c820
//
// 0082c820  56                   push esi
// 0082c821  8bf1                 mov esi, ecx
// 0082c823  8d4e7c               lea ecx, [esi + 0x7c]
// 0082c826  ff15c0de9800         call dword ptr [0x98dec0]
// 0082c82c  8bce                 mov ecx, esi
// 0082c82e  e8bdd8feff           call 0x81a0f0
// 0082c833  f644240801           test byte ptr [esp + 8], 1
// 0082c838  742c                 je 0x82c866
// 0082c83a  833d68aeb90000       cmp dword ptr [0xb9ae68], 0
// 0082c841  740f                 je 0x82c852
// 0082c843  56                   push esi
// 0082c844  e857e8beff           call 0x41b0a0
// 0082c849  83c404               add esp, 4
// 0082c84c  8bc6                 mov eax, esi
// 0082c84e  5e                   pop esi
// 0082c84f  c20400               ret 4
// 0082c852  6860aeb900           push 0xb9ae60
// 0082c857  ff1508b29800         call dword ptr [0x98b208]
// 0082c85d  56                   push esi
// 0082c85e  e8f76ffcff           call 0x7f385a
// 0082c863  83c404               add esp, 4
// 0082c866  8bc6                 mov eax, esi
// 0082c868  5e                   pop esi
// 0082c869  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPReportRecordItemText@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp