// roc 2009-12 0082ca80  unit: CXTPReportRecordItemVariant  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ca80
//
// 0082ca80  56                   push esi
// 0082ca81  8bf1                 mov esi, ecx
// 0082ca83  8d467c               lea eax, [esi + 0x7c]
// 0082ca86  50                   push eax
// 0082ca87  ff1534ba9800         call dword ptr [0x98ba34]
// 0082ca8d  8bce                 mov ecx, esi
// 0082ca8f  e85cd6feff           call 0x81a0f0
// 0082ca94  f644240801           test byte ptr [esp + 8], 1
// 0082ca99  742c                 je 0x82cac7
// 0082ca9b  833d68aeb90000       cmp dword ptr [0xb9ae68], 0
// 0082caa2  740f                 je 0x82cab3
// 0082caa4  56                   push esi
// 0082caa5  e8f6e5beff           call 0x41b0a0
// 0082caaa  83c404               add esp, 4
// 0082caad  8bc6                 mov eax, esi
// 0082caaf  5e                   pop esi
// 0082cab0  c20400               ret 4
// 0082cab3  6860aeb900           push 0xb9ae60
// 0082cab8  ff1508b29800         call dword ptr [0x98b208]
// 0082cabe  56                   push esi
// 0082cabf  e8966dfcff           call 0x7f385a
// 0082cac4  83c404               add esp, 4
// 0082cac7  8bc6                 mov eax, esi
// 0082cac9  5e                   pop esi
// 0082caca  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItemText.cpp (function ??_GCXTPReportRecordItemVariant@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItemText.cpp
