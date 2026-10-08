// roc 2010-06 00885ae0  unit: PAVCXTPTabManagerAtom::?$CArray  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00885ae0
//
// 00885ae0  83ec24               sub esp, 0x24
// 00885ae3  55                   push ebp
// 00885ae4  8be9                 mov ebp, ecx
// 00885ae6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00885aea  56                   push esi
// 00885aeb  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 00885af1  8b06                 mov eax, dword ptr [esi]
// 00885af3  c744240800000000     mov dword ptr [esp + 8], 0
// 00885afb  85c0                 test eax, eax
// 00885afd  0f846c010000         je 0x885c6f
// 00885b03  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00885b07  3b5604               cmp edx, dword ptr [esi + 4]
// 00885b0a  0f8d5f010000         jge 0x885c6f
// 00885b10  53                   push ebx
// 00885b11  8b5cd004             mov ebx, dword ptr [eax + edx*8 + 4]
// 00885b15  57                   push edi
// 00885b16  8b3cd0               mov edi, dword ptr [eax + edx*8]
// 00885b19  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 00885b1f  83782000             cmp dword ptr [eax + 0x20], 0
// 00885b23  0f8494000000         je 0x885bbd
// 00885b29  3bfb                 cmp edi, ebx
// 00885b2b  0f8f3c010000         jg 0x885c6d
// 00885b31  85ff                 test edi, edi
// 00885b33  0f8c34010000         jl 0x885c6d
// 00885b39  3b795c               cmp edi, dword ptr [ecx + 0x5c]
// 00885b3c  0f8d2b010000         jge 0x885c6d
// 00885b42  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00885b45  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00885b48  85f6                 test esi, esi
// 00885b4a  0f841d010000         je 0x885c6d
// 00885b50  395664               cmp dword ptr [esi + 0x64], edx
// 00885b53  0f8514010000         jne 0x885c6d
// 00885b59  8b4660               mov eax, dword ptr [esi + 0x60]
// 00885b5c  397004               cmp dword ptr [eax + 4], esi
// 00885b5f  745c                 je 0x885bbd
// 00885b61  8bce                 mov ecx, esi
// 00885b63  e888c6ffff           call 0x8821f0
// 00885b68  85c0                 test eax, eax
// 00885b6a  743b                 je 0x885ba7
// 00885b6c  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00885b72  8b11                 mov edx, dword ptr [ecx]
// 00885b74  8b5220               mov edx, dword ptr [edx + 0x20]
// 00885b77  56                   push esi
// 00885b78  8d442418             lea eax, [esp + 0x18]
// 00885b7c  50                   push eax
// 00885b7d  ffd2                 call edx
// 00885b7f  50                   push eax
// 00885b80  8b442444             mov eax, dword ptr [esp + 0x44]
// 00885b84  50                   push eax
// 00885b85  8d4c242c             lea ecx, [esp + 0x2c]
// 00885b89  51                   push ecx
// 00885b8a  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 00885b90  85c0                 test eax, eax
// 00885b92  7413                 je 0x885ba7
// 00885b94  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00885b9a  8b11                 mov edx, dword ptr [ecx]
// 00885b9c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00885ba0  8b5234               mov edx, dword ptr [edx + 0x34]
// 00885ba3  56                   push esi
// 00885ba4  50                   push eax
// 00885ba5  ffd2                 call edx
// 00885ba7  47                   inc edi
// 00885ba8  3bfb                 cmp edi, ebx
// 00885baa  0f8fbd000000         jg 0x885c6d
// 00885bb0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00885bb4  8b542444             mov edx, dword ptr [esp + 0x44]
// 00885bb8  e974ffffff           jmp 0x885b31
// 00885bbd  3bdf                 cmp ebx, edi
// 00885bbf  0f8ca8000000         jl 0x885c6d
// 00885bc5  85db                 test ebx, ebx
// 00885bc7  0f8ca0000000         jl 0x885c6d
// 00885bcd  3b595c               cmp ebx, dword ptr [ecx + 0x5c]
// 00885bd0  0f8d97000000         jge 0x885c6d
// 00885bd6  8b4158               mov eax, dword ptr [ecx + 0x58]
// 00885bd9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00885bdc  85f6                 test esi, esi
// 00885bde  0f8489000000         je 0x885c6d
// 00885be4  395664               cmp dword ptr [esi + 0x64], edx
// 00885be7  7566                 jne 0x885c4f
// 00885be9  8bce                 mov ecx, esi
// 00885beb  e800c6ffff           call 0x8821f0
// 00885bf0  85c0                 test eax, eax
// 00885bf2  7449                 je 0x885c3d
// 00885bf4  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00885bfa  8b11                 mov edx, dword ptr [ecx]
// 00885bfc  8b5220               mov edx, dword ptr [edx + 0x20]
// 00885bff  56                   push esi
// 00885c00  8d442428             lea eax, [esp + 0x28]
// 00885c04  50                   push eax
// 00885c05  ffd2                 call edx
// 00885c07  50                   push eax
// 00885c08  8b442444             mov eax, dword ptr [esp + 0x44]
// 00885c0c  50                   push eax
// 00885c0d  8d4c241c             lea ecx, [esp + 0x1c]
// 00885c11  51                   push ecx
// 00885c12  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 00885c18  85c0                 test eax, eax
// 00885c1a  7421                 je 0x885c3d
// 00885c1c  8b5660               mov edx, dword ptr [esi + 0x60]
// 00885c1f  397204               cmp dword ptr [edx + 4], esi
// 00885c22  7506                 jne 0x885c2a
// 00885c24  89742410             mov dword ptr [esp + 0x10], esi
// 00885c28  eb13                 jmp 0x885c3d
// 00885c2a  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00885c30  8b01                 mov eax, dword ptr [ecx]
// 00885c32  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00885c36  8b4034               mov eax, dword ptr [eax + 0x34]
// 00885c39  56                   push esi
// 00885c3a  52                   push edx
// 00885c3b  ffd0                 call eax
// 00885c3d  4b                   dec ebx
// 00885c3e  3bdf                 cmp ebx, edi
// 00885c40  7c0d                 jl 0x885c4f
// 00885c42  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00885c46  8b542444             mov edx, dword ptr [esp + 0x44]
// 00885c4a  e976ffffff           jmp 0x885bc5
// 00885c4f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00885c53  85c0                 test eax, eax
// 00885c55  7416                 je 0x885c6d
// 00885c57  8bade0000000         mov ebp, dword ptr [ebp + 0xe0]
// 00885c5d  8b5500               mov edx, dword ptr [ebp]
// 00885c60  8b5234               mov edx, dword ptr [edx + 0x34]
// 00885c63  50                   push eax
// 00885c64  8b442440             mov eax, dword ptr [esp + 0x40]
// 00885c68  50                   push eax
// 00885c69  8bcd                 mov ecx, ebp
// 00885c6b  ffd2                 call edx
// 00885c6d  5f                   pop edi
// 00885c6e  5b                   pop ebx
// 00885c6f  5e                   pop esi
// 00885c70  5d                   pop ebp
// 00885c71  83c424               add esp, 0x24
// 00885c74  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawRowItems@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
