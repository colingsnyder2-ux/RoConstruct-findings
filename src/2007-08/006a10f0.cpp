// from server: 100% by auto
// roc 2007-08 006a10f0  unit: CXTPDockBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a10f0
//
// 006a10f0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a10f4  8bc1                 mov eax, ecx
// 006a10f6  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a10fa  56                   push esi
// 006a10fb  8b742414             mov esi, dword ptr [esp + 0x14]
// 006a10ff  8908                 mov dword ptr [eax], ecx
// 006a1101  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a1105  894804               mov dword ptr [eax + 4], ecx
// 006a1108  894814               mov dword ptr [eax + 0x14], ecx
// 006a110b  57                   push edi
// 006a110c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a1110  895008               mov dword ptr [eax + 8], edx
// 006a1113  895018               mov dword ptr [eax + 0x18], edx
// 006a1116  8b542420             mov edx, dword ptr [esp + 0x20]
// 006a111a  89700c               mov dword ptr [eax + 0xc], esi
// 006a111d  89701c               mov dword ptr [eax + 0x1c], esi
// 006a1120  897810               mov dword ptr [eax + 0x10], edi
// 006a1123  897820               mov dword ptr [eax + 0x20], edi
// 006a1126  33c9                 xor ecx, ecx
// 006a1128  5f                   pop edi
// 006a1129  895024               mov dword ptr [eax + 0x24], edx
// 006a112c  894828               mov dword ptr [eax + 0x28], ecx
// 006a112f  89482c               mov dword ptr [eax + 0x2c], ecx
// 006a1132  5e                   pop esi
// 006a1133  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDockBar.cpp (function ??0DOCK_INFO@CXTPDockBar@@QAE@PAVCXTPToolBar@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDockBar.cpp
