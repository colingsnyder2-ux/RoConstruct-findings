// roc 2008-06 0077aa00  unit: CXTPPropertyGridInplaceList  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077aa00
//
// 0077aa00  83ec10               sub esp, 0x10
// 0077aa03  56                   push esi
// 0077aa04  8bf1                 mov esi, ecx
// 0077aa06  56                   push esi
// 0077aa07  8d4c2408             lea ecx, [esp + 8]
// 0077aa0b  e820d1f7ff           call 0x6f7b30
// 0077aa10  8b442420             mov eax, dword ptr [esp + 0x20]
// 0077aa14  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0077aa18  50                   push eax
// 0077aa19  51                   push ecx
// 0077aa1a  8d54240c             lea edx, [esp + 0xc]
// 0077aa1e  52                   push edx
// 0077aa1f  ff152c2d8000         call dword ptr [0x802d2c]
// 0077aa25  85c0                 test eax, eax
// 0077aa27  8b06                 mov eax, dword ptr [esi]
// 0077aa29  8bce                 mov ecx, esi
// 0077aa2b  740f                 je 0x77aa3c
// 0077aa2d  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0077aa33  ffd2                 call edx
// 0077aa35  5e                   pop esi
// 0077aa36  83c410               add esp, 0x10
// 0077aa39  c20c00               ret 0xc
// 0077aa3c  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 0077aa42  ffd2                 call edx
// 0077aa44  5e                   pop esi
// 0077aa45  83c410               add esp, 0x10
// 0077aa48  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?OnLButtonUp@CXTPPropertyGridInplaceList@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
