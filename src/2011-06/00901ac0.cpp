// roc 2011-06 00901ac0  unit: CXTCaptionButtonThemeOfficeXP  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901ac0
//
// 00901ac0  56                   push esi
// 00901ac1  57                   push edi
// 00901ac2  8bf1                 mov esi, ecx
// 00901ac4  e8d7fcffff           call 0x9017a0
// 00901ac9  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 00901acf  f7df                 neg edi
// 00901ad1  1bff                 sbb edi, edi
// 00901ad3  83e70f               and edi, 0xf
// 00901ad6  83c70f               add edi, 0xf
// 00901ad9  e80239f4ff           call 0x8453e0
// 00901ade  57                   push edi
// 00901adf  8bc8                 mov ecx, eax
// 00901ae1  e8ca30f4ff           call 0x844bb0
// 00901ae6  894624               mov dword ptr [esi + 0x24], eax
// 00901ae9  e8f238f4ff           call 0x8453e0
// 00901aee  6a21                 push 0x21
// 00901af0  8bc8                 mov ecx, eax
// 00901af2  e8b930f4ff           call 0x844bb0
// 00901af7  898690000000         mov dword ptr [esi + 0x90], eax
// 00901afd  e8de38f4ff           call 0x8453e0
// 00901b02  6a1f                 push 0x1f
// 00901b04  8bc8                 mov ecx, eax
// 00901b06  e8a530f4ff           call 0x844bb0
// 00901b0b  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00901b11  e8ca38f4ff           call 0x8453e0
// 00901b16  6a10                 push 0x10
// 00901b18  8bc8                 mov ecx, eax
// 00901b1a  e89130f4ff           call 0x844bb0
// 00901b1f  894654               mov dword ptr [esi + 0x54], eax
// 00901b22  e8b938f4ff           call 0x8453e0
// 00901b27  6a20                 push 0x20
// 00901b29  8bc8                 mov ecx, eax
// 00901b2b  e88030f4ff           call 0x844bb0
// 00901b30  894648               mov dword ptr [esi + 0x48], eax
// 00901b33  e8a838f4ff           call 0x8453e0
// 00901b38  6a2e                 push 0x2e
// 00901b3a  8bc8                 mov ecx, eax
// 00901b3c  e86f30f4ff           call 0x844bb0
// 00901b41  894630               mov dword ptr [esi + 0x30], eax
// 00901b44  e89738f4ff           call 0x8453e0
// 00901b49  6a2d                 push 0x2d
// 00901b4b  8bc8                 mov ecx, eax
// 00901b4d  e85e30f4ff           call 0x844bb0
// 00901b52  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00901b58  e88338f4ff           call 0x8453e0
// 00901b5d  6a2f                 push 0x2f
// 00901b5f  8bc8                 mov ecx, eax
// 00901b61  e84a30f4ff           call 0x844bb0
// 00901b66  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00901b6c  e86f38f4ff           call 0x8453e0
// 00901b71  6a24                 push 0x24
// 00901b73  8bc8                 mov ecx, eax
// 00901b75  e83630f4ff           call 0x844bb0
// 00901b7a  5f                   pop edi
// 00901b7b  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00901b81  5e                   pop esi
// 00901b82  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
