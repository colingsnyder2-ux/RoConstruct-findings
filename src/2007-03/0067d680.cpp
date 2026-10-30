// from server: 100% by tester
// roc 2008-06 00709ac0  unit: CXTSplitterWnd  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00709ac0
//
// 00709ac0  56                   push esi
// 00709ac1  57                   push edi
// 00709ac2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00709ac6  57                   push edi
// 00709ac7  8bf1                 mov esi, ecx
// 00709ac9  ff1544318000         call dword ptr [0x803144]
// 00709acf  8b4704               mov eax, dword ptr [edi + 4]
// 00709ad2  894604               mov dword ptr [esi + 4], eax
// 00709ad5  8b4f08               mov ecx, dword ptr [edi + 8]
// 00709ad8  894e08               mov dword ptr [esi + 8], ecx
// 00709adb  8b570c               mov edx, dword ptr [edi + 0xc]
// 00709ade  89560c               mov dword ptr [esi + 0xc], edx
// 00709ae1  8b4710               mov eax, dword ptr [edi + 0x10]
// 00709ae4  894610               mov dword ptr [esi + 0x10], eax
// 00709ae7  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00709aea  894e14               mov dword ptr [esi + 0x14], ecx
// 00709aed  8b5718               mov edx, dword ptr [edi + 0x18]
// 00709af0  895618               mov dword ptr [esi + 0x18], edx
// 00709af3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00709af6  89461c               mov dword ptr [esi + 0x1c], eax
// 00709af9  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00709afc  894e20               mov dword ptr [esi + 0x20], ecx
// 00709aff  8b5724               mov edx, dword ptr [edi + 0x24]
// 00709b02  8d4728               lea eax, [edi + 0x28]
// 00709b05  895624               mov dword ptr [esi + 0x24], edx
// 00709b08  8b08                 mov ecx, dword ptr [eax]
// 00709b0a  894e28               mov dword ptr [esi + 0x28], ecx
// 00709b0d  8b5004               mov edx, dword ptr [eax + 4]
// 00709b10  89562c               mov dword ptr [esi + 0x2c], edx
// 00709b13  8b4808               mov ecx, dword ptr [eax + 8]
// 00709b16  894e30               mov dword ptr [esi + 0x30], ecx
// 00709b19  8b500c               mov edx, dword ptr [eax + 0xc]
// 00709b1c  5f                   pop edi
// 00709b1d  895634               mov dword ptr [esi + 0x34], edx
// 00709b20  8bc6                 mov eax, esi
// 00709b22  5e                   pop esi
// 00709b23  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ??4TOOLITEM@CXTPToolTipContextToolTip@@QAEAAU01@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp
