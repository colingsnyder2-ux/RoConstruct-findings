// from server: 100% by auto
// roc 2008-06 0071a980  unit: CXTPDockBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071a980
//
// 0071a980  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0071a984  8bc1                 mov eax, ecx
// 0071a986  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071a98a  56                   push esi
// 0071a98b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0071a98f  8908                 mov dword ptr [eax], ecx
// 0071a991  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071a995  894804               mov dword ptr [eax + 4], ecx
// 0071a998  894814               mov dword ptr [eax + 0x14], ecx
// 0071a99b  57                   push edi
// 0071a99c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0071a9a0  895008               mov dword ptr [eax + 8], edx
// 0071a9a3  895018               mov dword ptr [eax + 0x18], edx
// 0071a9a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0071a9aa  89700c               mov dword ptr [eax + 0xc], esi
// 0071a9ad  89701c               mov dword ptr [eax + 0x1c], esi
// 0071a9b0  897810               mov dword ptr [eax + 0x10], edi
// 0071a9b3  897820               mov dword ptr [eax + 0x20], edi
// 0071a9b6  33c9                 xor ecx, ecx
// 0071a9b8  5f                   pop edi
// 0071a9b9  895024               mov dword ptr [eax + 0x24], edx
// 0071a9bc  894828               mov dword ptr [eax + 0x28], ecx
// 0071a9bf  89482c               mov dword ptr [eax + 0x2c], ecx
// 0071a9c2  5e                   pop esi
// 0071a9c3  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPDockBar.cpp (function ??0DOCK_INFO@CXTPDockBar@@QAE@PAVCXTPToolBar@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockBar.cpp
