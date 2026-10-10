// roc 2012-06 00999940  unit: CXTPImageManagerResource::CBitmapDC  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999940
//
// 00999940  83ec0c               sub esp, 0xc
// 00999943  53                   push ebx
// 00999944  55                   push ebp
// 00999945  56                   push esi
// 00999946  8d442420             lea eax, [esp + 0x20]
// 0099994a  50                   push eax
// 0099994b  8d542414             lea edx, [esp + 0x14]
// 0099994f  52                   push edx
// 00999950  8d44241c             lea eax, [esp + 0x1c]
// 00999954  50                   push eax
// 00999955  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00999959  8d542418             lea edx, [esp + 0x18]
// 0099995d  52                   push edx
// 0099995e  33f6                 xor esi, esi
// 00999960  50                   push eax
// 00999961  89742420             mov dword ptr [esp + 0x20], esi
// 00999965  89742424             mov dword ptr [esp + 0x24], esi
// 00999969  e892fcffff           call 0x999600
// 0099996e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00999972  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00999976  85c0                 test eax, eax
// 00999978  7432                 je 0x9999ac
// 0099997a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0099997e  57                   push edi
// 0099997f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00999983  57                   push edi
// 00999984  8bce                 mov ecx, esi
// 00999986  e8f392feff           call 0x982c7e
// 0099998b  57                   push edi
// 0099998c  55                   push ebp
// 0099998d  8bce                 mov ecx, esi
// 0099998f  e8d292feff           call 0x982c66
// 00999994  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00999998  57                   push edi
// 00999999  8bce                 mov ecx, esi
// 0099999b  e8de92feff           call 0x982c7e
// 009999a0  57                   push edi
// 009999a1  53                   push ebx
// 009999a2  8bce                 mov ecx, esi
// 009999a4  e8bd92feff           call 0x982c66
// 009999a9  5f                   pop edi
// 009999aa  eb0a                 jmp 0x9999b6
// 009999ac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009999b0  56                   push esi
// 009999b1  e8c892feff           call 0x982c7e
// 009999b6  8b35c829b200         mov esi, dword ptr [0xb229c8]
// 009999bc  85db                 test ebx, ebx
// 009999be  7406                 je 0x9999c6
// 009999c0  53                   push ebx
// 009999c1  ffd6                 call esi
// 009999c3  83c404               add esp, 4
// 009999c6  85ed                 test ebp, ebp
// 009999c8  7406                 je 0x9999d0
// 009999ca  55                   push ebp
// 009999cb  ffd6                 call esi
// 009999cd  83c404               add esp, 4
// 009999d0  5e                   pop esi
// 009999d1  5d                   pop ebp
// 009999d2  5b                   pop ebx
// 009999d3  83c40c               add esp, 0xc
// 009999d6  c20800               ret 8
// library xtp-15.2.1-shared-mfc/Source\Common\XTPImageManager.cpp (function ?WriteDIBBitmap@CXTPImageManagerIcon@@AAEXAAVCArchive@@PAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPImageManager.cpp
