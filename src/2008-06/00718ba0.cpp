// roc 2008-06 00718ba0  unit: CSelectionCaption  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718ba0
//
// 00718ba0  8b442404             mov eax, dword ptr [esp + 4]
// 00718ba4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00718ba8  57                   push edi
// 00718ba9  8bf9                 mov edi, ecx
// 00718bab  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00718baf  894770               mov dword ptr [edi + 0x70], eax
// 00718bb2  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 00718bb8  50                   push eax
// 00718bb9  c6878000000001       mov byte ptr [edi + 0x80], 1
// 00718bc0  894f74               mov dword ptr [edi + 0x74], ecx
// 00718bc3  895778               mov dword ptr [edi + 0x78], edx
// 00718bc6  ff15502d8000         call dword ptr [0x802d50]
// 00718bcc  85c0                 test eax, eax
// 00718bce  7441                 je 0x718c11
// 00718bd0  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 00718bd6  8b4774               mov eax, dword ptr [edi + 0x74]
// 00718bd9  8b9274010000         mov edx, dword ptr [edx + 0x174]
// 00718bdf  56                   push esi
// 00718be0  8db7dc000000         lea esi, [edi + 0xdc]
// 00718be6  50                   push eax
// 00718be7  8bce                 mov ecx, esi
// 00718be9  ffd2                 call edx
// 00718beb  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 00718bee  8b06                 mov eax, dword ptr [esi]
// 00718bf0  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00718bf6  51                   push ecx
// 00718bf7  8bce                 mov ecx, esi
// 00718bf9  ffd2                 call edx
// 00718bfb  8b3e                 mov edi, dword ptr [esi]
// 00718bfd  6a15                 push 0x15
// 00718bff  ff15582b8000         call dword ptr [0x802b58]
// 00718c05  50                   push eax
// 00718c06  8b8780010000         mov eax, dword ptr [edi + 0x180]
// 00718c0c  8bce                 mov ecx, esi
// 00718c0e  ffd0                 call eax
// 00718c10  5e                   pop esi
// 00718c11  5f                   pop edi
// 00718c12  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?SetCaptionColors@CXTCaption@@UAEXKKK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
