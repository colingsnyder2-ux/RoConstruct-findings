// roc 2010-06 008a83f0  unit: CXTCaptionButtonThemeOfficeXP  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a83f0
//
// 008a83f0  56                   push esi
// 008a83f1  57                   push edi
// 008a83f2  8bf1                 mov esi, ecx
// 008a83f4  e8d7fcffff           call 0x8a80d0
// 008a83f9  8bbe80000000         mov edi, dword ptr [esi + 0x80]
// 008a83ff  f7df                 neg edi
// 008a8401  1bff                 sbb edi, edi
// 008a8403  83e70f               and edi, 0xf
// 008a8406  83c70f               add edi, 0xf
// 008a8409  e812b7f3ff           call 0x7e3b20
// 008a840e  57                   push edi
// 008a840f  8bc8                 mov ecx, eax
// 008a8411  e89aaef3ff           call 0x7e32b0
// 008a8416  894624               mov dword ptr [esi + 0x24], eax
// 008a8419  e802b7f3ff           call 0x7e3b20
// 008a841e  6a21                 push 0x21
// 008a8420  8bc8                 mov ecx, eax
// 008a8422  e889aef3ff           call 0x7e32b0
// 008a8427  898690000000         mov dword ptr [esi + 0x90], eax
// 008a842d  e8eeb6f3ff           call 0x7e3b20
// 008a8432  6a1f                 push 0x1f
// 008a8434  8bc8                 mov ecx, eax
// 008a8436  e875aef3ff           call 0x7e32b0
// 008a843b  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008a8441  e8dab6f3ff           call 0x7e3b20
// 008a8446  6a10                 push 0x10
// 008a8448  8bc8                 mov ecx, eax
// 008a844a  e861aef3ff           call 0x7e32b0
// 008a844f  894654               mov dword ptr [esi + 0x54], eax
// 008a8452  e8c9b6f3ff           call 0x7e3b20
// 008a8457  6a20                 push 0x20
// 008a8459  8bc8                 mov ecx, eax
// 008a845b  e850aef3ff           call 0x7e32b0
// 008a8460  894648               mov dword ptr [esi + 0x48], eax
// 008a8463  e8b8b6f3ff           call 0x7e3b20
// 008a8468  6a2e                 push 0x2e
// 008a846a  8bc8                 mov ecx, eax
// 008a846c  e83faef3ff           call 0x7e32b0
// 008a8471  894630               mov dword ptr [esi + 0x30], eax
// 008a8474  e8a7b6f3ff           call 0x7e3b20
// 008a8479  6a2d                 push 0x2d
// 008a847b  8bc8                 mov ecx, eax
// 008a847d  e82eaef3ff           call 0x7e32b0
// 008a8482  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 008a8488  e893b6f3ff           call 0x7e3b20
// 008a848d  6a2f                 push 0x2f
// 008a848f  8bc8                 mov ecx, eax
// 008a8491  e81aaef3ff           call 0x7e32b0
// 008a8496  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008a849c  e87fb6f3ff           call 0x7e3b20
// 008a84a1  6a24                 push 0x24
// 008a84a3  8bc8                 mov ecx, eax
// 008a84a5  e806aef3ff           call 0x7e32b0
// 008a84aa  5f                   pop edi
// 008a84ab  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008a84b1  5e                   pop esi
// 008a84b2  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?RefreshMetrics@CXTButtonThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
