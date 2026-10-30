// roc 2012-06 00a79cb0  unit: CXTCaptionButtonThemeOfficeXP  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79cb0
//
// 00a79cb0  56                   push esi
// 00a79cb1  57                   push edi
// 00a79cb2  8bf1                 mov esi, ecx
// 00a79cb4  e8c7fcffff           call 0xa79980
// 00a79cb9  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 00a79cbf  f7df                 neg edi
// 00a79cc1  1bff                 sbb edi, edi
// 00a79cc3  83e70f               and edi, 0xf
// 00a79cc6  83c70f               add edi, 0xf
// 00a79cc9  e8923bf4ff           call 0x9bd860
// 00a79cce  57                   push edi
// 00a79ccf  8bc8                 mov ecx, eax
// 00a79cd1  e80a33f4ff           call 0x9bcfe0
// 00a79cd6  894624               mov dword ptr [esi + 0x24], eax
// 00a79cd9  e8823bf4ff           call 0x9bd860
// 00a79cde  6a21                 push 0x21
// 00a79ce0  8bc8                 mov ecx, eax
// 00a79ce2  e8f932f4ff           call 0x9bcfe0
// 00a79ce7  898690000000         mov dword ptr [esi + 0x90], eax
// 00a79ced  e86e3bf4ff           call 0x9bd860
// 00a79cf2  6a1f                 push 0x1f
// 00a79cf4  8bc8                 mov ecx, eax
// 00a79cf6  e8e532f4ff           call 0x9bcfe0
// 00a79cfb  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00a79d01  e85a3bf4ff           call 0x9bd860
// 00a79d06  6a10                 push 0x10
// 00a79d08  8bc8                 mov ecx, eax
// 00a79d0a  e8d132f4ff           call 0x9bcfe0
// 00a79d0f  894654               mov dword ptr [esi + 0x54], eax
// 00a79d12  e8493bf4ff           call 0x9bd860
// 00a79d17  6a20                 push 0x20
// 00a79d19  8bc8                 mov ecx, eax
// 00a79d1b  e8c032f4ff           call 0x9bcfe0
// 00a79d20  894648               mov dword ptr [esi + 0x48], eax
// 00a79d23  e8383bf4ff           call 0x9bd860
// 00a79d28  6a2e                 push 0x2e
// 00a79d2a  8bc8                 mov ecx, eax
// 00a79d2c  e8af32f4ff           call 0x9bcfe0
// 00a79d31  894630               mov dword ptr [esi + 0x30], eax
// 00a79d34  e8273bf4ff           call 0x9bd860
// 00a79d39  6a2d                 push 0x2d
// 00a79d3b  8bc8                 mov ecx, eax
// 00a79d3d  e89e32f4ff           call 0x9bcfe0
// 00a79d42  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 00a79d48  e8133bf4ff           call 0x9bd860
// 00a79d4d  6a2f                 push 0x2f
// 00a79d4f  8bc8                 mov ecx, eax
// 00a79d51  e88a32f4ff           call 0x9bcfe0
// 00a79d56  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 00a79d5c  e8ff3af4ff           call 0x9bd860
// 00a79d61  6a24                 push 0x24
// 00a79d63  8bc8                 mov ecx, eax
// 00a79d65  e87632f4ff           call 0x9bcfe0
// 00a79d6a  5f                   pop edi
// 00a79d6b  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00a79d71  5e                   pop esi
// 00a79d72  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
