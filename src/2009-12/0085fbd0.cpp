// roc 2009-12 0085fbd0  unit: CXTColorDialog  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085fbd0
//
// 0085fbd0  56                   push esi
// 0085fbd1  57                   push edi
// 0085fbd2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0085fbd6  57                   push edi
// 0085fbd7  8bf1                 mov esi, ecx
// 0085fbd9  ff1538d59800         call dword ptr [0x98d538]
// 0085fbdf  8b4704               mov eax, dword ptr [edi + 4]
// 0085fbe2  894604               mov dword ptr [esi + 4], eax
// 0085fbe5  8b4f08               mov ecx, dword ptr [edi + 8]
// 0085fbe8  894e08               mov dword ptr [esi + 8], ecx
// 0085fbeb  8b570c               mov edx, dword ptr [edi + 0xc]
// 0085fbee  89560c               mov dword ptr [esi + 0xc], edx
// 0085fbf1  8b4710               mov eax, dword ptr [edi + 0x10]
// 0085fbf4  894610               mov dword ptr [esi + 0x10], eax
// 0085fbf7  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0085fbfa  894e14               mov dword ptr [esi + 0x14], ecx
// 0085fbfd  8b5718               mov edx, dword ptr [edi + 0x18]
// 0085fc00  895618               mov dword ptr [esi + 0x18], edx
// 0085fc03  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0085fc06  89461c               mov dword ptr [esi + 0x1c], eax
// 0085fc09  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0085fc0c  894e20               mov dword ptr [esi + 0x20], ecx
// 0085fc0f  8b5724               mov edx, dword ptr [edi + 0x24]
// 0085fc12  8d4728               lea eax, [edi + 0x28]
// 0085fc15  895624               mov dword ptr [esi + 0x24], edx
// 0085fc18  8b08                 mov ecx, dword ptr [eax]
// 0085fc1a  894e28               mov dword ptr [esi + 0x28], ecx
// 0085fc1d  8b5004               mov edx, dword ptr [eax + 4]
// 0085fc20  89562c               mov dword ptr [esi + 0x2c], edx
// 0085fc23  8b4808               mov ecx, dword ptr [eax + 8]
// 0085fc26  894e30               mov dword ptr [esi + 0x30], ecx
// 0085fc29  8b500c               mov edx, dword ptr [eax + 0xc]
// 0085fc2c  5f                   pop edi
// 0085fc2d  895634               mov dword ptr [esi + 0x34], edx
// 0085fc30  8bc6                 mov eax, esi
// 0085fc32  5e                   pop esi
// 0085fc33  c20400               ret 4
// copied from an identical function in another client (function ??4TOOLITEM@CXTPToolTipContextToolTip@@QAEAAU01@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPToolTipContext.cpp