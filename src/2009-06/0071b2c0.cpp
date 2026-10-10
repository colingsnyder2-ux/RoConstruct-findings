// from server: 100% by tester
// roc 2008-06 006a6d10  unit: CPatchedControlComboBox  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6d10
//
// 006a6d10  56                   push esi
// 006a6d11  8bf1                 mov esi, ecx
// 006a6d13  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 006a6d19  85c0                 test eax, eax
// 006a6d1b  740a                 je 0x6a6d27
// 006a6d1d  83785400             cmp dword ptr [eax + 0x54], 0
// 006a6d21  0f85d4000000         jne 0x6a6dfb
// 006a6d27  e894440000           call 0x6ab1c0
// 006a6d2c  85c0                 test eax, eax
// 006a6d2e  743d                 je 0x6a6d6d
// 006a6d30  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006a6d36  6a00                 push 0
// 006a6d38  6aff                 push -1
// 006a6d3a  e891010100           call 0x6b6ed0
// 006a6d3f  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006a6d45  8b01                 mov eax, dword ptr [ecx]
// 006a6d47  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 006a6d4d  6a00                 push 0
// 006a6d4f  6aff                 push -1
// 006a6d51  ffd2                 call edx
// 006a6d53  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a6d57  8b06                 mov eax, dword ptr [esi]
// 006a6d59  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006a6d5d  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 006a6d63  51                   push ecx
// 006a6d64  52                   push edx
// 006a6d65  8bce                 mov ecx, esi
// 006a6d67  ffd0                 call eax
// 006a6d69  5e                   pop esi
// 006a6d6a  c20c00               ret 0xc
// 006a6d6d  57                   push edi
// 006a6d6e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a6d72  85ff                 test edi, edi
// 006a6d74  7448                 je 0x6a6dbe
// 006a6d76  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006a6d7c  83f8ff               cmp eax, -1
// 006a6d7f  750f                 jne 0x6a6d90
// 006a6d81  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 006a6d87  85c9                 test ecx, ecx
// 006a6d89  7405                 je 0x6a6d90
// 006a6d8b  e8304a0000           call 0x6ab7c0
// 006a6d90  85c0                 test eax, eax
// 006a6d92  742a                 je 0x6a6dbe
// 006a6d94  8b16                 mov edx, dword ptr [esi]
// 006a6d96  8b4274               mov eax, dword ptr [edx + 0x74]
// 006a6d99  8bce                 mov ecx, esi
// 006a6d9b  ffd0                 call eax
// 006a6d9d  8b16                 mov edx, dword ptr [esi]
// 006a6d9f  8bce                 mov ecx, esi
// 006a6da1  85c0                 test eax, eax
// 006a6da3  740d                 je 0x6a6db2
// 006a6da5  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 006a6dab  ffd0                 call eax
// 006a6dad  5f                   pop edi
// 006a6dae  5e                   pop esi
// 006a6daf  c20c00               ret 0xc
// 006a6db2  8b4270               mov eax, dword ptr [edx + 0x70]
// 006a6db5  6a01                 push 1
// 006a6db7  ffd0                 call eax
// 006a6db9  5f                   pop edi
// 006a6dba  5e                   pop esi
// 006a6dbb  c20c00               ret 0xc
// 006a6dbe  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 006a6dc5  7421                 je 0x6a6de8
// 006a6dc7  8b16                 mov edx, dword ptr [esi]
// 006a6dc9  8b4274               mov eax, dword ptr [edx + 0x74]
// 006a6dcc  8bce                 mov ecx, esi
// 006a6dce  ffd0                 call eax
// 006a6dd0  85c0                 test eax, eax
// 006a6dd2  7414                 je 0x6a6de8
// 006a6dd4  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006a6dda  6a00                 push 0
// 006a6ddc  6aff                 push -1
// 006a6dde  e8ed000100           call 0x6b6ed0
// 006a6de3  5f                   pop edi
// 006a6de4  5e                   pop esi
// 006a6de5  c20c00               ret 0xc
// 006a6de8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a6dec  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a6df0  51                   push ecx
// 006a6df1  52                   push edx
// 006a6df2  57                   push edi
// 006a6df3  8bce                 mov ecx, esi
// 006a6df5  e8560d0400           call 0x6e7b50
// 006a6dfa  5f                   pop edi
// 006a6dfb  5e                   pop esi
// 006a6dfc  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnClick@CXTPControlComboBox@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
