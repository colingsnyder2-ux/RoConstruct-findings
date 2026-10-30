// from server: 100% by auto
// roc 2008-06 0079c9f0  unit: CXTPTabPaintManager::CColorSetVisualStudio  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079c9f0
//
// 0079c9f0  56                   push esi
// 0079c9f1  8bf1                 mov esi, ecx
// 0079c9f3  e8d8f5ffff           call 0x79bfd0
// 0079c9f8  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079c9fe  e8bd46f7ff           call 0x7110c0
// 0079ca03  83f807               cmp eax, 7
// 0079ca06  7427                 je 0x79ca2f
// 0079ca08  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079ca0e  e8ad46f7ff           call 0x7110c0
// 0079ca13  83f804               cmp eax, 4
// 0079ca16  7417                 je 0x79ca2f
// 0079ca18  e82333f4ff           call 0x6dfd40
// 0079ca1d  6a30                 push 0x30
// 0079ca1f  8bc8                 mov ecx, eax
// 0079ca21  e8fa2af4ff           call 0x6df520
// 0079ca26  50                   push eax
// 0079ca27  8d4e04               lea ecx, [esi + 4]
// 0079ca2a  e86132f4ff           call 0x6dfc90
// 0079ca2f  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079ca35  e88646f7ff           call 0x7110c0
// 0079ca3a  83f805               cmp eax, 5
// 0079ca3d  7528                 jne 0x79ca67
// 0079ca3f  e8fc32f4ff           call 0x6dfd40
// 0079ca44  6a31                 push 0x31
// 0079ca46  8bc8                 mov ecx, eax
// 0079ca48  e8d32af4ff           call 0x6df520
// 0079ca4d  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 0079ca53  e8e832f4ff           call 0x6dfd40
// 0079ca58  6a31                 push 0x31
// 0079ca5a  8bc8                 mov ecx, eax
// 0079ca5c  e8bf2af4ff           call 0x6df520
// 0079ca61  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 0079ca67  e864d1f5ff           call 0x6f9bd0
// 0079ca6c  6a00                 push 0
// 0079ca6e  e87da8f5ff           call 0x6f72f0
// 0079ca73  83c404               add esp, 4
// 0079ca76  85c0                 test eax, eax
// 0079ca78  7419                 je 0x79ca93
// 0079ca7a  e8c132f4ff           call 0x6dfd40
// 0079ca7f  6a0f                 push 0xf
// 0079ca81  8bc8                 mov ecx, eax
// 0079ca83  e8982af4ff           call 0x6df520
// 0079ca88  50                   push eax
// 0079ca89  8d4e24               lea ecx, [esi + 0x24]
// 0079ca8c  e8ff31f4ff           call 0x6dfc90
// 0079ca91  5e                   pop esi
// 0079ca92  c3                   ret 
// 0079ca93  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0079ca96  83f8ff               cmp eax, -1
// 0079ca99  7503                 jne 0x79ca9e
// 0079ca9b  8b4618               mov eax, dword ptr [esi + 0x18]
// 0079ca9e  50                   push eax
// 0079ca9f  8d4e24               lea ecx, [esi + 0x24]
// 0079caa2  e8e931f4ff           call 0x6dfc90
// 0079caa7  5e                   pop esi
// 0079caa8  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?RefreshMetrics@CColorSetVisualStudio@CXTPTabPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
