// roc 2009-06 00818620  unit: CXTColorSelectorCtrlThemeFactory  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818620
//
// 00818620  56                   push esi
// 00818621  8bf1                 mov esi, ecx
// 00818623  e83868f6ff           call 0x77ee60
// 00818628  83c8ff               or eax, 0xffffffff
// 0081862b  894614               mov dword ptr [esi + 0x14], eax
// 0081862e  894618               mov dword ptr [esi + 0x18], eax
// 00818631  89461c               mov dword ptr [esi + 0x1c], eax
// 00818634  894620               mov dword ptr [esi + 0x20], eax
// 00818637  894624               mov dword ptr [esi + 0x24], eax
// 0081863a  894628               mov dword ptr [esi + 0x28], eax
// 0081863d  c7060cf59000         mov dword ptr [esi], 0x90f50c
// 00818643  8bc6                 mov eax, esi
// 00818645  5e                   pop esi
// 00818646  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ??0CXTColorSelectorCtrlTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
