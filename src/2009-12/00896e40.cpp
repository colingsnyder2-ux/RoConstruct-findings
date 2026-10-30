// roc 2009-12 00896e40  unit: CXTPRibbonBar  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896e40
//
// 00896e40  83ec08               sub esp, 8
// 00896e43  56                   push esi
// 00896e44  57                   push edi
// 00896e45  8d442408             lea eax, [esp + 8]
// 00896e49  50                   push eax
// 00896e4a  8bf1                 mov esi, ecx
// 00896e4c  ff1538cc9800         call dword ptr [0x98cc38]
// 00896e52  8b5620               mov edx, dword ptr [esi + 0x20]
// 00896e55  8d4c2408             lea ecx, [esp + 8]
// 00896e59  51                   push ecx
// 00896e5a  52                   push edx
// 00896e5b  ff1534cc9800         call dword ptr [0x98cc34]
// 00896e61  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00896e65  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00896e69  50                   push eax
// 00896e6a  51                   push ecx
// 00896e6b  8bce                 mov ecx, esi
// 00896e6d  e8bee2ffff           call 0x895130
// 00896e72  8bf8                 mov edi, eax
// 00896e74  8d57f6               lea edx, [edi - 0xa]
// 00896e77  83fa07               cmp edx, 7
// 00896e7a  772f                 ja 0x896eab
// 00896e7c  8bce                 mov ecx, esi
// 00896e7e  e80d02f7ff           call 0x807090
// 00896e83  0fb74c241c           movzx ecx, word ptr [esp + 0x1c]
// 00896e88  8b4020               mov eax, dword ptr [eax + 0x20]
// 00896e8b  0fb7d7               movzx edx, di
// 00896e8e  c1e110               shl ecx, 0x10
// 00896e91  0bca                 or ecx, edx
// 00896e93  51                   push ecx
// 00896e94  50                   push eax
// 00896e95  6a20                 push 0x20
// 00896e97  50                   push eax
// 00896e98  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00896e9e  5f                   pop edi
// 00896e9f  b801000000           mov eax, 1
// 00896ea4  5e                   pop esi
// 00896ea5  83c408               add esp, 8
// 00896ea8  c20c00               ret 0xc
// 00896eab  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00896eaf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00896eb3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00896eb7  50                   push eax
// 00896eb8  51                   push ecx
// 00896eb9  52                   push edx
// 00896eba  8bce                 mov ecx, esi
// 00896ebc  e85faff7ff           call 0x811e20
// 00896ec1  5f                   pop edi
// 00896ec2  5e                   pop esi
// 00896ec3  83c408               add esp, 8
// 00896ec6  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSetCursor@CXTPRibbonBar@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp