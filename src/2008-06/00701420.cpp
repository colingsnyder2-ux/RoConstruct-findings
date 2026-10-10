// roc 2008-06 00701420  unit: CXTPTabClientWnd::CWorkspace  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701420
//
// 00701420  56                   push esi
// 00701421  8bf1                 mov esi, ecx
// 00701423  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00701429  8b01                 mov eax, dword ptr [ecx]
// 0070142b  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00701431  57                   push edi
// 00701432  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00701436  57                   push edi
// 00701437  ffd2                 call edx
// 00701439  83f8ff               cmp eax, -1
// 0070143c  7419                 je 0x701457
// 0070143e  8d88000000ff         lea ecx, [eax - 0x1000000]
// 00701444  83f907               cmp ecx, 7
// 00701447  7716                 ja 0x70145f
// 00701449  50                   push eax
// 0070144a  e821c10700           call 0x77d570
// 0070144f  83c404               add esp, 4
// 00701452  5f                   pop edi
// 00701453  5e                   pop esi
// 00701454  c20400               ret 4
// 00701457  57                   push edi
// 00701458  8bce                 mov ecx, esi
// 0070145a  e8a19b0700           call 0x77b000
// 0070145f  5f                   pop edi
// 00701460  5e                   pop esi
// 00701461  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPTabClientWnd.cpp (function ?GetItemColor@CWorkspace@CXTPTabClientWnd@@MBEKPBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPTabClientWnd.cpp
