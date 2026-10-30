// from server: 100% by auto
// roc 2008-06 007a1b20  unit: CXTCaptionButtonThemeOfficeXP  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1b20
//
// 007a1b20  56                   push esi
// 007a1b21  57                   push edi
// 007a1b22  8bf1                 mov esi, ecx
// 007a1b24  e8c7fcffff           call 0x7a17f0
// 007a1b29  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 007a1b2f  f7df                 neg edi
// 007a1b31  1bff                 sbb edi, edi
// 007a1b33  83e70f               and edi, 0xf
// 007a1b36  83c70f               add edi, 0xf
// 007a1b39  e802e2f3ff           call 0x6dfd40
// 007a1b3e  57                   push edi
// 007a1b3f  8bc8                 mov ecx, eax
// 007a1b41  e8dad9f3ff           call 0x6df520
// 007a1b46  894624               mov dword ptr [esi + 0x24], eax
// 007a1b49  e8f2e1f3ff           call 0x6dfd40
// 007a1b4e  6a21                 push 0x21
// 007a1b50  8bc8                 mov ecx, eax
// 007a1b52  e8c9d9f3ff           call 0x6df520
// 007a1b57  898690000000         mov dword ptr [esi + 0x90], eax
// 007a1b5d  e8dee1f3ff           call 0x6dfd40
// 007a1b62  6a1f                 push 0x1f
// 007a1b64  8bc8                 mov ecx, eax
// 007a1b66  e8b5d9f3ff           call 0x6df520
// 007a1b6b  89869c000000         mov dword ptr [esi + 0x9c], eax
// 007a1b71  e8cae1f3ff           call 0x6dfd40
// 007a1b76  6a10                 push 0x10
// 007a1b78  8bc8                 mov ecx, eax
// 007a1b7a  e8a1d9f3ff           call 0x6df520
// 007a1b7f  894654               mov dword ptr [esi + 0x54], eax
// 007a1b82  e8b9e1f3ff           call 0x6dfd40
// 007a1b87  6a20                 push 0x20
// 007a1b89  8bc8                 mov ecx, eax
// 007a1b8b  e890d9f3ff           call 0x6df520
// 007a1b90  894648               mov dword ptr [esi + 0x48], eax
// 007a1b93  e8a8e1f3ff           call 0x6dfd40
// 007a1b98  6a2e                 push 0x2e
// 007a1b9a  8bc8                 mov ecx, eax
// 007a1b9c  e87fd9f3ff           call 0x6df520
// 007a1ba1  894630               mov dword ptr [esi + 0x30], eax
// 007a1ba4  e897e1f3ff           call 0x6dfd40
// 007a1ba9  6a2d                 push 0x2d
// 007a1bab  8bc8                 mov ecx, eax
// 007a1bad  e86ed9f3ff           call 0x6df520
// 007a1bb2  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 007a1bb8  e883e1f3ff           call 0x6dfd40
// 007a1bbd  6a2f                 push 0x2f
// 007a1bbf  8bc8                 mov ecx, eax
// 007a1bc1  e85ad9f3ff           call 0x6df520
// 007a1bc6  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 007a1bcc  e86fe1f3ff           call 0x6dfd40
// 007a1bd1  6a24                 push 0x24
// 007a1bd3  8bc8                 mov ecx, eax
// 007a1bd5  e846d9f3ff           call 0x6df520
// 007a1bda  5f                   pop edi
// 007a1bdb  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 007a1be1  5e                   pop esi
// 007a1be2  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
