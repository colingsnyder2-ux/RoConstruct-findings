// roc 2009-12 00887010  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887010
//
// 00887010  83ec10               sub esp, 0x10
// 00887013  53                   push ebx
// 00887014  56                   push esi
// 00887015  8b742420             mov esi, dword ptr [esp + 0x20]
// 00887019  8b9e00010000         mov ebx, dword ptr [esi + 0x100]
// 0088701f  57                   push edi
// 00887020  8bf9                 mov edi, ecx
// 00887022  e8e9fbffff           call 0x886c10
// 00887027  85c0                 test eax, eax
// 00887029  0f849a000000         je 0x8870c9
// 0088702f  85db                 test ebx, ebx
// 00887031  0f8492000000         je 0x8870c9
// 00887037  83befc00000002       cmp dword ptr [esi + 0xfc], 2
// 0088703e  7573                 jne 0x8870b3
// 00887040  83bb0001000005       cmp dword ptr [ebx + 0x100], 5
// 00887047  746a                 je 0x8870b3
// 00887049  53                   push ebx
// 0088704a  8bcf                 mov ecx, edi
// 0088704c  e8df6ff7ff           call 0x7fe030
// 00887051  85c0                 test eax, eax
// 00887053  745e                 je 0x8870b3
// 00887055  83bbf800000000       cmp dword ptr [ebx + 0xf8], 0
// 0088705c  7555                 jne 0x8870b3
// 0088705e  8b06                 mov eax, dword ptr [esi]
// 00887060  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00887063  8bce                 mov ecx, esi
// 00887065  ffd2                 call edx
// 00887067  85c0                 test eax, eax
// 00887069  751d                 jne 0x887088
// 0088706b  8b06                 mov eax, dword ptr [esi]
// 0088706d  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00887073  8bce                 mov ecx, esi
// 00887075  ffd2                 call edx
// 00887077  85c0                 test eax, eax
// 00887079  750d                 jne 0x887088
// 0088707b  8b06                 mov eax, dword ptr [esi]
// 0088707d  8b5078               mov edx, dword ptr [eax + 0x78]
// 00887080  8bce                 mov ecx, esi
// 00887082  ffd2                 call edx
// 00887084  85c0                 test eax, eax
// 00887086  744e                 je 0x8870d6
// 00887088  8d44240c             lea eax, [esp + 0xc]
// 0088708c  50                   push eax
// 0088708d  8bce                 mov ecx, esi
// 0088708f  e81cebf6ff           call 0x7f5bb0
// 00887094  6a0d                 push 0xd
// 00887096  8bcf                 mov ecx, edi
// 00887098  8bf0                 mov esi, eax
// 0088709a  e8a165f7ff           call 0x7fd640
// 0088709f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008870a3  50                   push eax
// 008870a4  56                   push esi
// 008870a5  e854d5f6ff           call 0x7f45fe
// 008870aa  5f                   pop edi
// 008870ab  5e                   pop esi
// 008870ac  5b                   pop ebx
// 008870ad  83c410               add esp, 0x10
// 008870b0  c20800               ret 8
// 008870b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008870b7  56                   push esi
// 008870b8  51                   push ecx
// 008870b9  8bcf                 mov ecx, edi
// 008870bb  e8b069f7ff           call 0x7fda70
// 008870c0  5f                   pop edi
// 008870c1  5e                   pop esi
// 008870c2  5b                   pop ebx
// 008870c3  83c410               add esp, 0x10
// 008870c6  c20800               ret 8
// 008870c9  8b542420             mov edx, dword ptr [esp + 0x20]
// 008870cd  56                   push esi
// 008870ce  52                   push edx
// 008870cf  8bcf                 mov ecx, edi
// 008870d1  e89a69f7ff           call 0x7fda70
// 008870d6  5f                   pop edi
// 008870d7  5e                   pop esi
// 008870d8  5b                   pop ebx
// 008870d9  83c410               add esp, 0x10
// 008870dc  c20800               ret 8
// copied from an identical function in another client (function ?DrawControlEntry@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp