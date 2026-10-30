// roc 2009-12 008d18d0  unit: PAVCXTPTabManagerAtom::?$CArray  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d18d0
//
// 008d18d0  56                   push esi
// 008d18d1  57                   push edi
// 008d18d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008d18d6  8bf1                 mov esi, ecx
// 008d18d8  85ff                 test edi, edi
// 008d18da  7435                 je 0x8d1911
// 008d18dc  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 008d18e2  85c9                 test ecx, ecx
// 008d18e4  7408                 je 0x8d18ee
// 008d18e6  8b01                 mov eax, dword ptr [ecx]
// 008d18e8  8b10                 mov edx, dword ptr [eax]
// 008d18ea  6a01                 push 1
// 008d18ec  ffd2                 call edx
// 008d18ee  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 008d18f4  8b07                 mov eax, dword ptr [edi]
// 008d18f6  8b5004               mov edx, dword ptr [eax + 4]
// 008d18f9  8bcf                 mov ecx, edi
// 008d18fb  89771c               mov dword ptr [edi + 0x1c], esi
// 008d18fe  ffd2                 call edx
// 008d1900  8b07                 mov eax, dword ptr [edi]
// 008d1902  8b5040               mov edx, dword ptr [eax + 0x40]
// 008d1905  8bcf                 mov ecx, edi
// 008d1907  ffd2                 call edx
// 008d1909  50                   push eax
// 008d190a  8bce                 mov ecx, esi
// 008d190c  e84ffeffff           call 0x8d1760
// 008d1911  8b06                 mov eax, dword ptr [esi]
// 008d1913  8b5070               mov edx, dword ptr [eax + 0x70]
// 008d1916  8bce                 mov ecx, esi
// 008d1918  ffd2                 call edx
// 008d191a  8bc7                 mov eax, edi
// 008d191c  5f                   pop edi
// 008d191d  5e                   pop esi
// 008d191e  c20400               ret 4
// copied from an identical function in another client (function ?SetAppearanceSet@CXTPTabPaintManager@@QAEPAVCAppearanceSet@1@PAV21@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp