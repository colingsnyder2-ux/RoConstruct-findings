// roc 2007-08 006e56b0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e56b0
//
// 006e56b0  56                   push esi
// 006e56b1  8bf1                 mov esi, ecx
// 006e56b3  e8e8feffff           call 0x6e55a0
// 006e56b8  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 006e56c2  c7861402000000000000 mov dword ptr [esi + 0x214], 0
// 006e56cc  e89f38f8ff           call 0x668f70
// 006e56d1  8bc8                 mov ecx, eax
// 006e56d3  e89836f8ff           call 0x668d70
// 006e56d8  83c0ff               add eax, -1
// 006e56db  83f802               cmp eax, 2
// 006e56de  771a                 ja 0x6e56fa
// 006e56e0  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 006e56e7  b8716f6400           mov eax, 0x646f71
// 006e56ec  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 006e56f2  7506                 jne 0x6e56fa
// 006e56f4  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 006e56fa  5e                   pop esi
// 006e56fb  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetVisualStudio2005@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
