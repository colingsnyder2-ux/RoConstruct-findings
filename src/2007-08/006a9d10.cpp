// roc 2007-08 006a9d10  unit: CXTPRibbonBar  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a9d10
//
// 006a9d10  83ec08               sub esp, 8
// 006a9d13  56                   push esi
// 006a9d14  57                   push edi
// 006a9d15  8d442408             lea eax, [esp + 8]
// 006a9d19  50                   push eax
// 006a9d1a  8bf1                 mov esi, ecx
// 006a9d1c  ff1554ec7700         call dword ptr [0x77ec54]
// 006a9d22  8b5620               mov edx, dword ptr [esi + 0x20]
// 006a9d25  8d4c2408             lea ecx, [esp + 8]
// 006a9d29  51                   push ecx
// 006a9d2a  52                   push edx
// 006a9d2b  ff1550ec7700         call dword ptr [0x77ec50]
// 006a9d31  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a9d35  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a9d39  50                   push eax
// 006a9d3a  51                   push ecx
// 006a9d3b  8bce                 mov ecx, esi
// 006a9d3d  e83ee0ffff           call 0x6a7d80
// 006a9d42  8bf8                 mov edi, eax
// 006a9d44  8d57f6               lea edx, [edi - 0xa]
// 006a9d47  83fa07               cmp edx, 7
// 006a9d4a  772f                 ja 0x6a9d7b
// 006a9d4c  8bce                 mov ecx, esi
// 006a9d4e  e81dc8f9ff           call 0x646570
// 006a9d53  0fb74c241c           movzx ecx, word ptr [esp + 0x1c]
// 006a9d58  8b4020               mov eax, dword ptr [eax + 0x20]
// 006a9d5b  0fb7d7               movzx edx, di
// 006a9d5e  c1e110               shl ecx, 0x10
// 006a9d61  0bca                 or ecx, edx
// 006a9d63  51                   push ecx
// 006a9d64  50                   push eax
// 006a9d65  6a20                 push 0x20
// 006a9d67  50                   push eax
// 006a9d68  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006a9d6e  5f                   pop edi
// 006a9d6f  b801000000           mov eax, 1
// 006a9d74  5e                   pop esi
// 006a9d75  83c408               add esp, 8
// 006a9d78  c20c00               ret 0xc
// 006a9d7b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a9d7f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a9d83  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a9d87  50                   push eax
// 006a9d88  51                   push ecx
// 006a9d89  52                   push edx
// 006a9d8a  8bce                 mov ecx, esi
// 006a9d8c  e86f5afaff           call 0x64f800
// 006a9d91  5f                   pop edi
// 006a9d92  5e                   pop esi
// 006a9d93  83c408               add esp, 8
// 006a9d96  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonBar.cpp (function ?OnSetCursor@CXTPRibbonBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonBar.cpp
