// from server: 100% by auto
// roc 2012-06 00a3f020  unit: CXTPDockingPaneSplitterContainer  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f020
//
// 00a3f020  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a3f024  83ec08               sub esp, 8
// 00a3f027  48                   dec eax
// 00a3f028  837c241800           cmp dword ptr [esp + 0x18], 0
// 00a3f02d  56                   push esi
// 00a3f02e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a3f032  89442418             mov dword ptr [esp + 0x18], eax
// 00a3f036  0f84e5000000         je 0xa3f121
// 00a3f03c  50                   push eax
// 00a3f03d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f041  83c0fc               add eax, -4
// 00a3f044  50                   push eax
// 00a3f045  8d4c240c             lea ecx, [esp + 0xc]
// 00a3f049  51                   push ecx
// 00a3f04a  8bce                 mov ecx, esi
// 00a3f04c  e8b13ff4ff           call 0x983002
// 00a3f051  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a3f055  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3f059  52                   push edx
// 00a3f05a  48                   dec eax
// 00a3f05b  50                   push eax
// 00a3f05c  8bce                 mov ecx, esi
// 00a3f05e  e8993ff4ff           call 0x982ffc
// 00a3f063  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3f067  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3f06b  83c1fd               add ecx, -3
// 00a3f06e  51                   push ecx
// 00a3f06f  4a                   dec edx
// 00a3f070  52                   push edx
// 00a3f071  8d44240c             lea eax, [esp + 0xc]
// 00a3f075  50                   push eax
// 00a3f076  8bce                 mov ecx, esi
// 00a3f078  e8853ff4ff           call 0x983002
// 00a3f07d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3f081  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3f085  83c104               add ecx, 4
// 00a3f088  51                   push ecx
// 00a3f089  4a                   dec edx
// 00a3f08a  52                   push edx
// 00a3f08b  8bce                 mov ecx, esi
// 00a3f08d  e86a3ff4ff           call 0x982ffc
// 00a3f092  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f096  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f09a  83c002               add eax, 2
// 00a3f09d  50                   push eax
// 00a3f09e  49                   dec ecx
// 00a3f09f  51                   push ecx
// 00a3f0a0  8d54240c             lea edx, [esp + 0xc]
// 00a3f0a4  52                   push edx
// 00a3f0a5  8bce                 mov ecx, esi
// 00a3f0a7  e8563ff4ff           call 0x983002
// 00a3f0ac  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f0b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f0b4  83c002               add eax, 2
// 00a3f0b7  83c103               add ecx, 3
// 00a3f0ba  50                   push eax
// 00a3f0bb  51                   push ecx
// 00a3f0bc  8bce                 mov ecx, esi
// 00a3f0be  e8393ff4ff           call 0x982ffc
// 00a3f0c3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a3f0c7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3f0cb  83c2fe               add edx, -2
// 00a3f0ce  52                   push edx
// 00a3f0cf  83c003               add eax, 3
// 00a3f0d2  50                   push eax
// 00a3f0d3  8bce                 mov ecx, esi
// 00a3f0d5  e8223ff4ff           call 0x982ffc
// 00a3f0da  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3f0de  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3f0e2  83c1fe               add ecx, -2
// 00a3f0e5  51                   push ecx
// 00a3f0e6  4a                   dec edx
// 00a3f0e7  52                   push edx
// 00a3f0e8  8bce                 mov ecx, esi
// 00a3f0ea  e80d3ff4ff           call 0x982ffc
// 00a3f0ef  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f0f3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f0f7  40                   inc eax
// 00a3f0f8  50                   push eax
// 00a3f0f9  49                   dec ecx
// 00a3f0fa  51                   push ecx
// 00a3f0fb  8d54240c             lea edx, [esp + 0xc]
// 00a3f0ff  52                   push edx
// 00a3f100  8bce                 mov ecx, esi
// 00a3f102  e8fb3ef4ff           call 0x983002
// 00a3f107  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f10b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f10f  40                   inc eax
// 00a3f110  50                   push eax
// 00a3f111  83c103               add ecx, 3
// 00a3f114  51                   push ecx
// 00a3f115  8bce                 mov ecx, esi
// 00a3f117  e8e03ef4ff           call 0x982ffc
// 00a3f11c  5e                   pop esi
// 00a3f11d  83c408               add esp, 8
// 00a3f120  c3                   ret 
// 00a3f121  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3f125  83c002               add eax, 2
// 00a3f128  89442418             mov dword ptr [esp + 0x18], eax
// 00a3f12c  48                   dec eax
// 00a3f12d  50                   push eax
// 00a3f12e  83c2fd               add edx, -3
// 00a3f131  52                   push edx
// 00a3f132  8d44240c             lea eax, [esp + 0xc]
// 00a3f136  50                   push eax
// 00a3f137  8bce                 mov ecx, esi
// 00a3f139  e8c43ef4ff           call 0x983002
// 00a3f13e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3f142  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3f146  49                   dec ecx
// 00a3f147  51                   push ecx
// 00a3f148  83c204               add edx, 4
// 00a3f14b  52                   push edx
// 00a3f14c  8bce                 mov ecx, esi
// 00a3f14e  e8a93ef4ff           call 0x982ffc
// 00a3f153  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f157  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f15b  48                   dec eax
// 00a3f15c  50                   push eax
// 00a3f15d  51                   push ecx
// 00a3f15e  8d54240c             lea edx, [esp + 0xc]
// 00a3f162  52                   push edx
// 00a3f163  8bce                 mov ecx, esi
// 00a3f165  e8983ef4ff           call 0x983002
// 00a3f16a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f16e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f172  83c003               add eax, 3
// 00a3f175  50                   push eax
// 00a3f176  51                   push ecx
// 00a3f177  8bce                 mov ecx, esi
// 00a3f179  e87e3ef4ff           call 0x982ffc
// 00a3f17e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a3f182  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3f186  4a                   dec edx
// 00a3f187  52                   push edx
// 00a3f188  83c0fe               add eax, -2
// 00a3f18b  50                   push eax
// 00a3f18c  8d4c240c             lea ecx, [esp + 0xc]
// 00a3f190  51                   push ecx
// 00a3f191  8bce                 mov ecx, esi
// 00a3f193  e86a3ef4ff           call 0x983002
// 00a3f198  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a3f19c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3f1a0  83c2fa               add edx, -6
// 00a3f1a3  52                   push edx
// 00a3f1a4  83c0fe               add eax, -2
// 00a3f1a7  50                   push eax
// 00a3f1a8  8bce                 mov ecx, esi
// 00a3f1aa  e84d3ef4ff           call 0x982ffc
// 00a3f1af  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3f1b3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a3f1b7  83c1fa               add ecx, -6
// 00a3f1ba  51                   push ecx
// 00a3f1bb  83c202               add edx, 2
// 00a3f1be  52                   push edx
// 00a3f1bf  8bce                 mov ecx, esi
// 00a3f1c1  e8363ef4ff           call 0x982ffc
// 00a3f1c6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3f1ca  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a3f1ce  48                   dec eax
// 00a3f1cf  83c102               add ecx, 2
// 00a3f1d2  50                   push eax
// 00a3f1d3  51                   push ecx
// 00a3f1d4  8bce                 mov ecx, esi
// 00a3f1d6  e8213ef4ff           call 0x982ffc
// 00a3f1db  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a3f1df  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3f1e3  4a                   dec edx
// 00a3f1e4  52                   push edx
// 00a3f1e5  40                   inc eax
// 00a3f1e6  50                   push eax
// 00a3f1e7  8d4c240c             lea ecx, [esp + 0xc]
// 00a3f1eb  51                   push ecx
// 00a3f1ec  8bce                 mov ecx, esi
// 00a3f1ee  e80f3ef4ff           call 0x983002
// 00a3f1f3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a3f1f7  83c2fa               add edx, -6
// 00a3f1fa  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a3f1fe  52                   push edx
// 00a3f1ff  40                   inc eax
// 00a3f200  50                   push eax
// 00a3f201  8bce                 mov ecx, esi
// 00a3f203  e8f43df4ff           call 0x982ffc
// 00a3f208  5e                   pop esi
// 00a3f209  83c408               add esp, 8
// 00a3f20c  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawPinnButton@CXTPDockingPaneCaptionButton@@SAXPAVCDC@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
