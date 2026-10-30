// roc 2007-03 006ce550  unit: seg_006c0000  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce550
//
// 006ce550  56                   push esi
// 006ce551  8bf1                 mov esi, ecx
// 006ce553  e8e8feffff           call 0x6ce440
// 006ce558  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 006ce562  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 006ce56c  e82f6af8ff           call 0x654fa0
// 006ce571  8bc8                 mov ecx, eax
// 006ce573  e8f867f8ff           call 0x654d70
// 006ce578  83c0ff               add eax, -1
// 006ce57b  83f802               cmp eax, 2
// 006ce57e  771a                 ja 0x6ce59a
// 006ce580  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 006ce587  b8716f6400           mov eax, 0x646f71
// 006ce58c  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 006ce592  7506                 jne 0x6ce59a
// 006ce594  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 006ce59a  5e                   pop esi
// 006ce59b  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
