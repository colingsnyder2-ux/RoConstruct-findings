// roc 2007-03 007213c0  unit: seg_00720000  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007213c0
//
// 007213c0  56                   push esi
// 007213c1  8bf1                 mov esi, ecx
// 007213c3  e8b89ff5ff           call 0x67b380
// 007213c8  83c8ff               or eax, 0xffffffff
// 007213cb  894614               mov dword ptr [esi + 0x14], eax
// 007213ce  894618               mov dword ptr [esi + 0x18], eax
// 007213d1  89461c               mov dword ptr [esi + 0x1c], eax
// 007213d4  894620               mov dword ptr [esi + 0x20], eax
// 007213d7  894624               mov dword ptr [esi + 0x24], eax
// 007213da  894628               mov dword ptr [esi + 0x28], eax
// 007213dd  c7060c3e7e00         mov dword ptr [esi], 0x7e3e0c
// 007213e3  8bc6                 mov eax, esi
// 007213e5  5e                   pop esi
// 007213e6  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ??0CXTColorSelectorCtrlTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
