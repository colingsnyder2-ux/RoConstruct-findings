// from server: 100% by auto
// roc 2012-06 00a1a850  unit: CXTPDockBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1a850
//
// 00a1a850  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a1a854  8bc1                 mov eax, ecx
// 00a1a856  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a1a85a  56                   push esi
// 00a1a85b  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a1a85f  8908                 mov dword ptr [eax], ecx
// 00a1a861  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a1a865  894804               mov dword ptr [eax + 4], ecx
// 00a1a868  894814               mov dword ptr [eax + 0x14], ecx
// 00a1a86b  57                   push edi
// 00a1a86c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a1a870  895008               mov dword ptr [eax + 8], edx
// 00a1a873  895018               mov dword ptr [eax + 0x18], edx
// 00a1a876  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a1a87a  89700c               mov dword ptr [eax + 0xc], esi
// 00a1a87d  89701c               mov dword ptr [eax + 0x1c], esi
// 00a1a880  897810               mov dword ptr [eax + 0x10], edi
// 00a1a883  897820               mov dword ptr [eax + 0x20], edi
// 00a1a886  33c9                 xor ecx, ecx
// 00a1a888  5f                   pop edi
// 00a1a889  895024               mov dword ptr [eax + 0x24], edx
// 00a1a88c  894828               mov dword ptr [eax + 0x28], ecx
// 00a1a88f  89482c               mov dword ptr [eax + 0x2c], ecx
// 00a1a892  5e                   pop esi
// 00a1a893  c21800               ret 0x18
// library xtp-15.2.1/Source\CommandBars\XTPDockBar.cpp (function ??0DOCK_INFO@CXTPDockBar@@QAE@PAVCXTPToolBar@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPDockBar.cpp
