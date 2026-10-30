// from server: 100% by auto
// roc 2012-06 009e6980  unit: CXTThemeManagerStyle  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6980
//
// 009e6980  56                   push esi
// 009e6981  8b742408             mov esi, dword ptr [esp + 8]
// 009e6985  85f6                 test esi, esi
// 009e6987  7506                 jne 0x9e698f
// 009e6989  33c0                 xor eax, eax
// 009e698b  5e                   pop esi
// 009e698c  c20400               ret 4
// 009e698f  57                   push edi
// 009e6990  8d44240c             lea eax, [esp + 0xc]
// 009e6994  8d7904               lea edi, [ecx + 4]
// 009e6997  50                   push eax
// 009e6998  56                   push esi
// 009e6999  8bcf                 mov ecx, edi
// 009e699b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009e69a3  e8ca310b00           call 0xa99b72
// 009e69a8  85c0                 test eax, eax
// 009e69aa  7519                 jne 0x9e69c5
// 009e69ac  53                   push ebx
// 009e69ad  8bce                 mov ecx, esi
// 009e69af  e838c1f9ff           call 0x982aec
// 009e69b4  56                   push esi
// 009e69b5  8bcf                 mov ecx, edi
// 009e69b7  89442414             mov dword ptr [esp + 0x14], eax
// 009e69bb  8bd8                 mov ebx, eax
// 009e69bd  e87c2f0b00           call 0xa9993e
// 009e69c2  8918                 mov dword ptr [eax], ebx
// 009e69c4  5b                   pop ebx
// 009e69c5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009e69c9  5f                   pop edi
// 009e69ca  5e                   pop esi
// 009e69cb  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?GetDefaultThemeFactory@CXTThemeManager@@QAEPAVCXTThemeManagerStyleFactory@@PAUCRuntimeClass@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
