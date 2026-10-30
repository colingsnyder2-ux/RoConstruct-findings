// roc 2009-12 008d9010  unit: CXTSplitterWndThemeOffice2003  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d9010
//
// 008d9010  56                   push esi
// 008d9011  8bf1                 mov esi, ecx
// 008d9013  e8e8ffffff           call 0x8d9000
// 008d9018  e8b369f5ff           call 0x82f9d0
// 008d901d  8bc8                 mov ecx, eax
// 008d901f  e8bc63f5ff           call 0x82f3e0
// 008d9024  85c0                 test eax, eax
// 008d9026  7547                 jne 0x8d906f
// 008d9028  e8a369f5ff           call 0x82f9d0
// 008d902d  8bc8                 mov ecx, eax
// 008d902f  e8fc66f5ff           call 0x82f730
// 008d9034  48                   dec eax
// 008d9035  83f804               cmp eax, 4
// 008d9038  7735                 ja 0x8d906f
// 008d903a  ff248574908d00       jmp dword ptr [eax*4 + 0x8d9074]
// 008d9041  c74614d8e7fc00       mov dword ptr [esi + 0x14], 0xfce7d8
// 008d9048  c746189ebef500       mov dword ptr [esi + 0x18], 0xf5be9e
// 008d904f  5e                   pop esi
// 008d9050  c3                   ret 
// 008d9051  c74614e2e7bf00       mov dword ptr [esi + 0x14], 0xbfe7e2
// 008d9058  c74618abc08a00       mov dword ptr [esi + 0x18], 0x8ac0ab
// 008d905f  5e                   pop esi
// 008d9060  c3                   ret 
// 008d9061  c74614dfdfea00       mov dword ptr [esi + 0x14], 0xeadfdf
// 008d9068  c74618b1b0c300       mov dword ptr [esi + 0x18], 0xc3b0b1
// 008d906f  5e                   pop esi
// 008d9070  c3                   ret 
// 008d9071  8d4900               lea ecx, [ecx]
// 008d9074  41                   inc ecx
// 008d9075  90                   nop 
// 008d9076  8d00                 lea eax, [eax]
// 008d9078  51                   push ecx
// 008d9079  90                   nop 
// 008d907a  8d00                 lea eax, [eax]
// 008d907c  61                   popal 
// 008d907d  90                   nop 
// 008d907e  8d00                 lea eax, [eax]
// 008d9080  41                   inc ecx
// 008d9081  90                   nop 
// 008d9082  8d00                 lea eax, [eax]
// 008d9084  41                   inc ecx
// 008d9085  90                   nop 
// 008d9086  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?RefreshMetrics@CXTSplitterWndThemeOffice2003@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTSplitterWndTheme.cpp