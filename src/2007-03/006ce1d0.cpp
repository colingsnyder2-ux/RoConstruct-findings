// roc 2007-03 006ce1d0  unit: seg_006c0000  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce1d0
//
// 006ce1d0  53                   push ebx
// 006ce1d1  55                   push ebp
// 006ce1d2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006ce1d6  56                   push esi
// 006ce1d7  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ce1db  83ee01               sub esi, 1
// 006ce1de  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006ce1e3  57                   push edi
// 006ce1e4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006ce1e8  747e                 je 0x6ce268
// 006ce1ea  56                   push esi
// 006ce1eb  8d45fc               lea eax, [ebp - 4]
// 006ce1ee  50                   push eax
// 006ce1ef  8d4c2420             lea ecx, [esp + 0x20]
// 006ce1f3  51                   push ecx
// 006ce1f4  8bcf                 mov ecx, edi
// 006ce1f6  e8fd0bf5ff           call 0x61edf8
// 006ce1fb  56                   push esi
// 006ce1fc  8d5dff               lea ebx, [ebp - 1]
// 006ce1ff  53                   push ebx
// 006ce200  8bcf                 mov ecx, edi
// 006ce202  e8eb0bf5ff           call 0x61edf2
// 006ce207  8d56fd               lea edx, [esi - 3]
// 006ce20a  52                   push edx
// 006ce20b  53                   push ebx
// 006ce20c  8d442420             lea eax, [esp + 0x20]
// 006ce210  50                   push eax
// 006ce211  8bcf                 mov ecx, edi
// 006ce213  e8e00bf5ff           call 0x61edf8
// 006ce218  8d4e04               lea ecx, [esi + 4]
// 006ce21b  51                   push ecx
// 006ce21c  53                   push ebx
// 006ce21d  8bcf                 mov ecx, edi
// 006ce21f  e8ce0bf5ff           call 0x61edf2
// 006ce224  8d4602               lea eax, [esi + 2]
// 006ce227  50                   push eax
// 006ce228  53                   push ebx
// 006ce229  8d542420             lea edx, [esp + 0x20]
// 006ce22d  52                   push edx
// 006ce22e  8bcf                 mov ecx, edi
// 006ce230  e8c30bf5ff           call 0x61edf8
// 006ce235  8d4602               lea eax, [esi + 2]
// 006ce238  50                   push eax
// 006ce239  83c503               add ebp, 3
// 006ce23c  55                   push ebp
// 006ce23d  8bcf                 mov ecx, edi
// 006ce23f  e8ae0bf5ff           call 0x61edf2
// 006ce244  8d46fe               lea eax, [esi - 2]
// 006ce247  50                   push eax
// 006ce248  55                   push ebp
// 006ce249  8bcf                 mov ecx, edi
// 006ce24b  e8a20bf5ff           call 0x61edf2
// 006ce250  8d46fe               lea eax, [esi - 2]
// 006ce253  50                   push eax
// 006ce254  53                   push ebx
// 006ce255  8bcf                 mov ecx, edi
// 006ce257  e8960bf5ff           call 0x61edf2
// 006ce25c  83c601               add esi, 1
// 006ce25f  56                   push esi
// 006ce260  53                   push ebx
// 006ce261  8d442420             lea eax, [esp + 0x20]
// 006ce265  50                   push eax
// 006ce266  eb7f                 jmp 0x6ce2e7
// 006ce268  83c602               add esi, 2
// 006ce26b  8d5eff               lea ebx, [esi - 1]
// 006ce26e  53                   push ebx
// 006ce26f  8d4dfd               lea ecx, [ebp - 3]
// 006ce272  51                   push ecx
// 006ce273  8d542420             lea edx, [esp + 0x20]
// 006ce277  52                   push edx
// 006ce278  8bcf                 mov ecx, edi
// 006ce27a  e8790bf5ff           call 0x61edf8
// 006ce27f  53                   push ebx
// 006ce280  8d4504               lea eax, [ebp + 4]
// 006ce283  50                   push eax
// 006ce284  8bcf                 mov ecx, edi
// 006ce286  e8670bf5ff           call 0x61edf2
// 006ce28b  53                   push ebx
// 006ce28c  55                   push ebp
// 006ce28d  8d4c2420             lea ecx, [esp + 0x20]
// 006ce291  51                   push ecx
// 006ce292  8bcf                 mov ecx, edi
// 006ce294  e85f0bf5ff           call 0x61edf8
// 006ce299  8d5603               lea edx, [esi + 3]
// 006ce29c  52                   push edx
// 006ce29d  55                   push ebp
// 006ce29e  8bcf                 mov ecx, edi
// 006ce2a0  e84d0bf5ff           call 0x61edf2
// 006ce2a5  53                   push ebx
// 006ce2a6  8d45fe               lea eax, [ebp - 2]
// 006ce2a9  50                   push eax
// 006ce2aa  8d442420             lea eax, [esp + 0x20]
// 006ce2ae  50                   push eax
// 006ce2af  8bcf                 mov ecx, edi
// 006ce2b1  e8420bf5ff           call 0x61edf8
// 006ce2b6  83c6fa               add esi, -6
// 006ce2b9  56                   push esi
// 006ce2ba  8d45fe               lea eax, [ebp - 2]
// 006ce2bd  50                   push eax
// 006ce2be  8bcf                 mov ecx, edi
// 006ce2c0  e82d0bf5ff           call 0x61edf2
// 006ce2c5  8d4502               lea eax, [ebp + 2]
// 006ce2c8  56                   push esi
// 006ce2c9  50                   push eax
// 006ce2ca  8bcf                 mov ecx, edi
// 006ce2cc  e8210bf5ff           call 0x61edf2
// 006ce2d1  53                   push ebx
// 006ce2d2  8d4502               lea eax, [ebp + 2]
// 006ce2d5  50                   push eax
// 006ce2d6  8bcf                 mov ecx, edi
// 006ce2d8  e8150bf5ff           call 0x61edf2
// 006ce2dd  53                   push ebx
// 006ce2de  83c501               add ebp, 1
// 006ce2e1  55                   push ebp
// 006ce2e2  8d4c2420             lea ecx, [esp + 0x20]
// 006ce2e6  51                   push ecx
// 006ce2e7  8bcf                 mov ecx, edi
// 006ce2e9  e80a0bf5ff           call 0x61edf8
// 006ce2ee  56                   push esi
// 006ce2ef  55                   push ebp
// 006ce2f0  8bcf                 mov ecx, edi
// 006ce2f2  e8fb0af5ff           call 0x61edf2
// 006ce2f7  5f                   pop edi
// 006ce2f8  5e                   pop esi
// 006ce2f9  5d                   pop ebp
// 006ce2fa  5b                   pop ebx
// 006ce2fb  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawPinnButton@CXTPDockingPaneCaptionButton@@SAXPAVCDC@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
