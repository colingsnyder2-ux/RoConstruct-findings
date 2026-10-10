// roc 2008-06 006bbae0  unit: CXTPImageManagerResource::CBitmapDC  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bbae0
//
// 006bbae0  83ec0c               sub esp, 0xc
// 006bbae3  53                   push ebx
// 006bbae4  55                   push ebp
// 006bbae5  56                   push esi
// 006bbae6  8d442420             lea eax, [esp + 0x20]
// 006bbaea  50                   push eax
// 006bbaeb  8d542414             lea edx, [esp + 0x14]
// 006bbaef  52                   push edx
// 006bbaf0  8d44241c             lea eax, [esp + 0x1c]
// 006bbaf4  50                   push eax
// 006bbaf5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006bbaf9  8d542418             lea edx, [esp + 0x18]
// 006bbafd  52                   push edx
// 006bbafe  33f6                 xor esi, esi
// 006bbb00  50                   push eax
// 006bbb01  89742420             mov dword ptr [esp + 0x20], esi
// 006bbb05  89742424             mov dword ptr [esp + 0x24], esi
// 006bbb09  e892fcffff           call 0x6bb7a0
// 006bbb0e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006bbb12  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006bbb16  85c0                 test eax, eax
// 006bbb18  7432                 je 0x6bbb4c
// 006bbb1a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006bbb1e  57                   push edi
// 006bbb1f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006bbb23  57                   push edi
// 006bbb24  8bce                 mov ecx, esi
// 006bbb26  e81d56feff           call 0x6a1148
// 006bbb2b  57                   push edi
// 006bbb2c  55                   push ebp
// 006bbb2d  8bce                 mov ecx, esi
// 006bbb2f  e8fc55feff           call 0x6a1130
// 006bbb34  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006bbb38  57                   push edi
// 006bbb39  8bce                 mov ecx, esi
// 006bbb3b  e80856feff           call 0x6a1148
// 006bbb40  57                   push edi
// 006bbb41  53                   push ebx
// 006bbb42  8bce                 mov ecx, esi
// 006bbb44  e8e755feff           call 0x6a1130
// 006bbb49  5f                   pop edi
// 006bbb4a  eb0a                 jmp 0x6bbb56
// 006bbb4c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006bbb50  56                   push esi
// 006bbb51  e8f255feff           call 0x6a1148
// 006bbb56  8b35c0288000         mov esi, dword ptr [0x8028c0]
// 006bbb5c  85db                 test ebx, ebx
// 006bbb5e  7406                 je 0x6bbb66
// 006bbb60  53                   push ebx
// 006bbb61  ffd6                 call esi
// 006bbb63  83c404               add esp, 4
// 006bbb66  85ed                 test ebp, ebp
// 006bbb68  7406                 je 0x6bbb70
// 006bbb6a  55                   push ebp
// 006bbb6b  ffd6                 call esi
// 006bbb6d  83c404               add esp, 4
// 006bbb70  5e                   pop esi
// 006bbb71  5d                   pop ebp
// 006bbb72  5b                   pop ebx
// 006bbb73  83c40c               add esp, 0xc
// 006bbb76  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\Common\XTPImageManager.cpp (function ?WriteDIBBitmap@CXTPImageManagerIcon@@AAEXAAVCArchive@@PAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPImageManager.cpp
