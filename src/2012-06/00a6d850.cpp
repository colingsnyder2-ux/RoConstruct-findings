// roc 2012-06 00a6d850  unit: CXTPTabPaintManager::CColorSetVisualStudio  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6d850
//
// 00a6d850  56                   push esi
// 00a6d851  8bf1                 mov esi, ecx
// 00a6d853  e8d8f5ffff           call 0xa6ce30
// 00a6d858  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00a6d85e  e8dd3df8ff           call 0x9f1640
// 00a6d863  83f807               cmp eax, 7
// 00a6d866  7427                 je 0xa6d88f
// 00a6d868  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00a6d86e  e8cd3df8ff           call 0x9f1640
// 00a6d873  83f804               cmp eax, 4
// 00a6d876  7417                 je 0xa6d88f
// 00a6d878  e8e3fff4ff           call 0x9bd860
// 00a6d87d  6a30                 push 0x30
// 00a6d87f  8bc8                 mov ecx, eax
// 00a6d881  e85af7f4ff           call 0x9bcfe0
// 00a6d886  50                   push eax
// 00a6d887  8d4e04               lea ecx, [esi + 4]
// 00a6d88a  e821fff4ff           call 0x9bd7b0
// 00a6d88f  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00a6d895  e8a63df8ff           call 0x9f1640
// 00a6d89a  83f805               cmp eax, 5
// 00a6d89d  7528                 jne 0xa6d8c7
// 00a6d89f  e8bcfff4ff           call 0x9bd860
// 00a6d8a4  6a31                 push 0x31
// 00a6d8a6  8bc8                 mov ecx, eax
// 00a6d8a8  e833f7f4ff           call 0x9bcfe0
// 00a6d8ad  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00a6d8b3  e8a8fff4ff           call 0x9bd860
// 00a6d8b8  6a31                 push 0x31
// 00a6d8ba  8bc8                 mov ecx, eax
// 00a6d8bc  e81ff7f4ff           call 0x9bcfe0
// 00a6d8c1  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a6d8c7  e8c498f6ff           call 0x9d7190
// 00a6d8cc  6a00                 push 0
// 00a6d8ce  e88d70f6ff           call 0x9d4960
// 00a6d8d3  83c404               add esp, 4
// 00a6d8d6  85c0                 test eax, eax
// 00a6d8d8  7419                 je 0xa6d8f3
// 00a6d8da  e881fff4ff           call 0x9bd860
// 00a6d8df  6a0f                 push 0xf
// 00a6d8e1  8bc8                 mov ecx, eax
// 00a6d8e3  e8f8f6f4ff           call 0x9bcfe0
// 00a6d8e8  50                   push eax
// 00a6d8e9  8d4e24               lea ecx, [esi + 0x24]
// 00a6d8ec  e8bffef4ff           call 0x9bd7b0
// 00a6d8f1  5e                   pop esi
// 00a6d8f2  c3                   ret 
// 00a6d8f3  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00a6d8f6  83f8ff               cmp eax, -1
// 00a6d8f9  7503                 jne 0xa6d8fe
// 00a6d8fb  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a6d8fe  50                   push eax
// 00a6d8ff  8d4e24               lea ecx, [esi + 0x24]
// 00a6d902  e8a9fef4ff           call 0x9bd7b0
// 00a6d907  5e                   pop esi
// 00a6d908  c3                   ret 
// library xtp-13.2.1/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetVisualStudio2003@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/TabManager/XTPTabPaintManagerColors.cpp
