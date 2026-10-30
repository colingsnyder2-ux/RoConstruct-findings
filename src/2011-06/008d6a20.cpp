// roc 2011-06 008d6a20  unit: PAVCXTPTabManagerAtom::?$CArray  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d6a20
//
// 008d6a20  83ec24               sub esp, 0x24
// 008d6a23  55                   push ebp
// 008d6a24  8be9                 mov ebp, ecx
// 008d6a26  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008d6a2a  56                   push esi
// 008d6a2b  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 008d6a31  8b06                 mov eax, dword ptr [esi]
// 008d6a33  c744240800000000     mov dword ptr [esp + 8], 0
// 008d6a3b  85c0                 test eax, eax
// 008d6a3d  0f846c010000         je 0x8d6baf
// 008d6a43  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d6a47  3b5604               cmp edx, dword ptr [esi + 4]
// 008d6a4a  0f8d5f010000         jge 0x8d6baf
// 008d6a50  53                   push ebx
// 008d6a51  8b5cd004             mov ebx, dword ptr [eax + edx*8 + 4]
// 008d6a55  57                   push edi
// 008d6a56  8b3cd0               mov edi, dword ptr [eax + edx*8]
// 008d6a59  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 008d6a5f  83782000             cmp dword ptr [eax + 0x20], 0
// 008d6a63  0f8494000000         je 0x8d6afd
// 008d6a69  3bfb                 cmp edi, ebx
// 008d6a6b  0f8f3c010000         jg 0x8d6bad
// 008d6a71  85ff                 test edi, edi
// 008d6a73  0f8c34010000         jl 0x8d6bad
// 008d6a79  3b795c               cmp edi, dword ptr [ecx + 0x5c]
// 008d6a7c  0f8d2b010000         jge 0x8d6bad
// 008d6a82  8b4158               mov eax, dword ptr [ecx + 0x58]
// 008d6a85  8b34b8               mov esi, dword ptr [eax + edi*4]
// 008d6a88  85f6                 test esi, esi
// 008d6a8a  0f841d010000         je 0x8d6bad
// 008d6a90  395664               cmp dword ptr [esi + 0x64], edx
// 008d6a93  0f8514010000         jne 0x8d6bad
// 008d6a99  8b4660               mov eax, dword ptr [esi + 0x60]
// 008d6a9c  397004               cmp dword ptr [eax + 4], esi
// 008d6a9f  745c                 je 0x8d6afd
// 008d6aa1  8bce                 mov ecx, esi
// 008d6aa3  e878aeb7ff           call 0x451920
// 008d6aa8  85c0                 test eax, eax
// 008d6aaa  743b                 je 0x8d6ae7
// 008d6aac  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d6ab2  8b11                 mov edx, dword ptr [ecx]
// 008d6ab4  8b5220               mov edx, dword ptr [edx + 0x20]
// 008d6ab7  56                   push esi
// 008d6ab8  8d442418             lea eax, [esp + 0x18]
// 008d6abc  50                   push eax
// 008d6abd  ffd2                 call edx
// 008d6abf  50                   push eax
// 008d6ac0  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d6ac4  50                   push eax
// 008d6ac5  8d4c242c             lea ecx, [esp + 0x2c]
// 008d6ac9  51                   push ecx
// 008d6aca  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008d6ad0  85c0                 test eax, eax
// 008d6ad2  7413                 je 0x8d6ae7
// 008d6ad4  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d6ada  8b11                 mov edx, dword ptr [ecx]
// 008d6adc  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d6ae0  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d6ae3  56                   push esi
// 008d6ae4  50                   push eax
// 008d6ae5  ffd2                 call edx
// 008d6ae7  47                   inc edi
// 008d6ae8  3bfb                 cmp edi, ebx
// 008d6aea  0f8fbd000000         jg 0x8d6bad
// 008d6af0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d6af4  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d6af8  e974ffffff           jmp 0x8d6a71
// 008d6afd  3bdf                 cmp ebx, edi
// 008d6aff  0f8ca8000000         jl 0x8d6bad
// 008d6b05  85db                 test ebx, ebx
// 008d6b07  0f8ca0000000         jl 0x8d6bad
// 008d6b0d  3b595c               cmp ebx, dword ptr [ecx + 0x5c]
// 008d6b10  0f8d97000000         jge 0x8d6bad
// 008d6b16  8b4158               mov eax, dword ptr [ecx + 0x58]
// 008d6b19  8b3498               mov esi, dword ptr [eax + ebx*4]
// 008d6b1c  85f6                 test esi, esi
// 008d6b1e  0f8489000000         je 0x8d6bad
// 008d6b24  395664               cmp dword ptr [esi + 0x64], edx
// 008d6b27  7566                 jne 0x8d6b8f
// 008d6b29  8bce                 mov ecx, esi
// 008d6b2b  e8f0adb7ff           call 0x451920
// 008d6b30  85c0                 test eax, eax
// 008d6b32  7449                 je 0x8d6b7d
// 008d6b34  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d6b3a  8b11                 mov edx, dword ptr [ecx]
// 008d6b3c  8b5220               mov edx, dword ptr [edx + 0x20]
// 008d6b3f  56                   push esi
// 008d6b40  8d442428             lea eax, [esp + 0x28]
// 008d6b44  50                   push eax
// 008d6b45  ffd2                 call edx
// 008d6b47  50                   push eax
// 008d6b48  8b442444             mov eax, dword ptr [esp + 0x44]
// 008d6b4c  50                   push eax
// 008d6b4d  8d4c241c             lea ecx, [esp + 0x1c]
// 008d6b51  51                   push ecx
// 008d6b52  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008d6b58  85c0                 test eax, eax
// 008d6b5a  7421                 je 0x8d6b7d
// 008d6b5c  8b5660               mov edx, dword ptr [esi + 0x60]
// 008d6b5f  397204               cmp dword ptr [edx + 4], esi
// 008d6b62  7506                 jne 0x8d6b6a
// 008d6b64  89742410             mov dword ptr [esp + 0x10], esi
// 008d6b68  eb13                 jmp 0x8d6b7d
// 008d6b6a  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 008d6b70  8b01                 mov eax, dword ptr [ecx]
// 008d6b72  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008d6b76  8b4034               mov eax, dword ptr [eax + 0x34]
// 008d6b79  56                   push esi
// 008d6b7a  52                   push edx
// 008d6b7b  ffd0                 call eax
// 008d6b7d  4b                   dec ebx
// 008d6b7e  3bdf                 cmp ebx, edi
// 008d6b80  7c0d                 jl 0x8d6b8f
// 008d6b82  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008d6b86  8b542444             mov edx, dword ptr [esp + 0x44]
// 008d6b8a  e976ffffff           jmp 0x8d6b05
// 008d6b8f  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d6b93  85c0                 test eax, eax
// 008d6b95  7416                 je 0x8d6bad
// 008d6b97  8bade0000000         mov ebp, dword ptr [ebp + 0xe0]
// 008d6b9d  8b5500               mov edx, dword ptr [ebp]
// 008d6ba0  8b5234               mov edx, dword ptr [edx + 0x34]
// 008d6ba3  50                   push eax
// 008d6ba4  8b442440             mov eax, dword ptr [esp + 0x40]
// 008d6ba8  50                   push eax
// 008d6ba9  8bcd                 mov ecx, ebp
// 008d6bab  ffd2                 call edx
// 008d6bad  5f                   pop edi
// 008d6bae  5b                   pop ebx
// 008d6baf  5e                   pop esi
// 008d6bb0  5d                   pop ebp
// 008d6bb1  83c424               add esp, 0x24
// 008d6bb4  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawRowItems@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
