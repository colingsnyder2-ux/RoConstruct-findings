// roc 2008-06 0057cf50  unit: RBX::VInstance::?$SignalDesc  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057cf50
//
// 0057cf50  6aff                 push -1
// 0057cf52  6868617c00           push 0x7c6168
// 0057cf57  64a100000000         mov eax, dword ptr fs:[0]
// 0057cf5d  50                   push eax
// 0057cf5e  64892500000000       mov dword ptr fs:[0], esp
// 0057cf65  83ec08               sub esp, 8
// 0057cf68  53                   push ebx
// 0057cf69  55                   push ebp
// 0057cf6a  56                   push esi
// 0057cf6b  57                   push edi
// 0057cf6c  8bf9                 mov edi, ecx
// 0057cf6e  8d442428             lea eax, [esp + 0x28]
// 0057cf72  50                   push eax
// 0057cf73  8d4c2414             lea ecx, [esp + 0x14]
// 0057cf77  8d7704               lea esi, [edi + 4]
// 0057cf7a  51                   push ecx
// 0057cf7b  8bce                 mov ecx, esi
// 0057cf7d  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0057cf85  e826f9ffff           call 0x57c8b0
// 0057cf8a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057cf8e  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0057cf91  8b06                 mov eax, dword ptr [esi]
// 0057cf93  85db                 test ebx, ebx
// 0057cf95  7404                 je 0x57cf9b
// 0057cf97  3bd8                 cmp ebx, eax
// 0057cf99  7406                 je 0x57cfa1
// 0057cf9b  ff1590288000         call dword ptr [0x802890]
// 0057cfa1  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0057cfa5  752f                 jne 0x57cfd6
// 0057cfa7  8b7f20               mov edi, dword ptr [edi + 0x20]
// 0057cfaa  8d542428             lea edx, [esp + 0x28]
// 0057cfae  52                   push edx
// 0057cfaf  8bce                 mov ecx, esi
// 0057cfb1  e88afeffff           call 0x57ce40
// 0057cfb6  8938                 mov dword ptr [eax], edi
// 0057cfb8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057cfbc  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0057cfc4  85c0                 test eax, eax
// 0057cfc6  7468                 je 0x57d030
// 0057cfc8  8bf0                 mov esi, eax
// 0057cfca  83c004               add eax, 4
// 0057cfcd  83c9ff               or ecx, 0xffffffff
// 0057cfd0  f00fc108             lock xadd dword ptr [eax], ecx
// 0057cfd4  eb3a                 jmp 0x57d010
// 0057cfd6  85db                 test ebx, ebx
// 0057cfd8  756d                 jne 0x57d047
// 0057cfda  ff1590288000         call dword ptr [0x802890]
// 0057cfe0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057cfe4  3b4318               cmp eax, dword ptr [ebx + 0x18]
// 0057cfe7  7506                 jne 0x57cfef
// 0057cfe9  ff1590288000         call dword ptr [0x802890]
// 0057cfef  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0057cff3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057cff7  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0057cffa  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0057d002  85f6                 test esi, esi
// 0057d004  742a                 je 0x57d030
// 0057d006  8d5604               lea edx, [esi + 4]
// 0057d009  83c8ff               or eax, 0xffffffff
// 0057d00c  f00fc102             lock xadd dword ptr [edx], eax
// 0057d010  751e                 jne 0x57d030
// 0057d012  8b16                 mov edx, dword ptr [esi]
// 0057d014  8b4204               mov eax, dword ptr [edx + 4]
// 0057d017  8bce                 mov ecx, esi
// 0057d019  ffd0                 call eax
// 0057d01b  83caff               or edx, 0xffffffff
// 0057d01e  8d4e08               lea ecx, [esi + 8]
// 0057d021  f00fc111             lock xadd dword ptr [ecx], edx
// 0057d025  7509                 jne 0x57d030
// 0057d027  8b06                 mov eax, dword ptr [esi]
// 0057d029  8b5008               mov edx, dword ptr [eax + 8]
// 0057d02c  8bce                 mov ecx, esi
// 0057d02e  ffd2                 call edx
// 0057d030  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057d034  8bc7                 mov eax, edi
// 0057d036  5f                   pop edi
// 0057d037  5e                   pop esi
// 0057d038  5d                   pop ebp
// 0057d039  5b                   pop ebx
// 0057d03a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d041  83c414               add esp, 0x14
// 0057d044  c20800               ret 8
// 0057d047  8b1b                 mov ebx, dword ptr [ebx]
// 0057d049  eb95                 jmp 0x57cfe0
// library openrbx-client/App\v8xml\XmlElement.cpp (function ?getHandleIndex@XmlWriter@@QAEHVInstanceHandle@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
