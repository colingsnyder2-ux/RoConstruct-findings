// roc 2012-06 009e9990  unit: CXTColorDialog  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e9990
//
// 009e9990  56                   push esi
// 009e9991  57                   push edi
// 009e9992  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009e9996  57                   push edi
// 009e9997  8bf1                 mov esi, ecx
// 009e9999  ff152045b200         call dword ptr [0xb24520]
// 009e999f  8b4704               mov eax, dword ptr [edi + 4]
// 009e99a2  894604               mov dword ptr [esi + 4], eax
// 009e99a5  8b4f08               mov ecx, dword ptr [edi + 8]
// 009e99a8  894e08               mov dword ptr [esi + 8], ecx
// 009e99ab  8b570c               mov edx, dword ptr [edi + 0xc]
// 009e99ae  89560c               mov dword ptr [esi + 0xc], edx
// 009e99b1  8b4710               mov eax, dword ptr [edi + 0x10]
// 009e99b4  894610               mov dword ptr [esi + 0x10], eax
// 009e99b7  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 009e99ba  894e14               mov dword ptr [esi + 0x14], ecx
// 009e99bd  8b5718               mov edx, dword ptr [edi + 0x18]
// 009e99c0  895618               mov dword ptr [esi + 0x18], edx
// 009e99c3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 009e99c6  89461c               mov dword ptr [esi + 0x1c], eax
// 009e99c9  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 009e99cc  894e20               mov dword ptr [esi + 0x20], ecx
// 009e99cf  8b5724               mov edx, dword ptr [edi + 0x24]
// 009e99d2  8d4728               lea eax, [edi + 0x28]
// 009e99d5  895624               mov dword ptr [esi + 0x24], edx
// 009e99d8  8b08                 mov ecx, dword ptr [eax]
// 009e99da  894e28               mov dword ptr [esi + 0x28], ecx
// 009e99dd  8b5004               mov edx, dword ptr [eax + 4]
// 009e99e0  89562c               mov dword ptr [esi + 0x2c], edx
// 009e99e3  8b4808               mov ecx, dword ptr [eax + 8]
// 009e99e6  894e30               mov dword ptr [esi + 0x30], ecx
// 009e99e9  8b500c               mov edx, dword ptr [eax + 0xc]
// 009e99ec  5f                   pop edi
// 009e99ed  895634               mov dword ptr [esi + 0x34], edx
// 009e99f0  8bc6                 mov eax, esi
// 009e99f2  5e                   pop esi
// 009e99f3  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Common\XTPToolTipContext.cpp (function ??4TOOLITEM@CXTPToolTipContextToolTip@@QAEAAU01@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPToolTipContext.cpp
