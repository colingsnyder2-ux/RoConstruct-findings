// roc 2008-06 0077e670  unit: PAVCXTPTabManagerAtom::?$CArray  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077e670
//
// 0077e670  56                   push esi
// 0077e671  57                   push edi
// 0077e672  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077e676  8bf1                 mov esi, ecx
// 0077e678  85ff                 test edi, edi
// 0077e67a  7435                 je 0x77e6b1
// 0077e67c  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0077e682  85c9                 test ecx, ecx
// 0077e684  7408                 je 0x77e68e
// 0077e686  8b01                 mov eax, dword ptr [ecx]
// 0077e688  8b10                 mov edx, dword ptr [eax]
// 0077e68a  6a01                 push 1
// 0077e68c  ffd2                 call edx
// 0077e68e  89bee0000000         mov dword ptr [esi + 0xe0], edi
// 0077e694  8b07                 mov eax, dword ptr [edi]
// 0077e696  8b5004               mov edx, dword ptr [eax + 4]
// 0077e699  8bcf                 mov ecx, edi
// 0077e69b  89771c               mov dword ptr [edi + 0x1c], esi
// 0077e69e  ffd2                 call edx
// 0077e6a0  8b07                 mov eax, dword ptr [edi]
// 0077e6a2  8b5040               mov edx, dword ptr [eax + 0x40]
// 0077e6a5  8bcf                 mov ecx, edi
// 0077e6a7  ffd2                 call edx
// 0077e6a9  50                   push eax
// 0077e6aa  8bce                 mov ecx, esi
// 0077e6ac  e84ffeffff           call 0x77e500
// 0077e6b1  8b06                 mov eax, dword ptr [esi]
// 0077e6b3  8b5070               mov edx, dword ptr [eax + 0x70]
// 0077e6b6  8bce                 mov ecx, esi
// 0077e6b8  ffd2                 call edx
// 0077e6ba  8bc7                 mov eax, edi
// 0077e6bc  5f                   pop edi
// 0077e6bd  5e                   pop esi
// 0077e6be  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManager.cpp (function ?SetAppearanceSet@CXTPTabPaintManager@@QAEPAVCAppearanceSet@1@PAV21@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp
