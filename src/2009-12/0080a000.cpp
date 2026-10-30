// roc 2009-12 0080a000  unit: CXTPImageManagerResource::CBitmapDC  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a000
//
// 0080a000  51                   push ecx
// 0080a001  53                   push ebx
// 0080a002  55                   push ebp
// 0080a003  56                   push esi
// 0080a004  57                   push edi
// 0080a005  8bf9                 mov edi, ecx
// 0080a007  897c2410             mov dword ptr [esp + 0x10], edi
// 0080a00b  e890320400           call 0x84d2a0
// 0080a010  8b442418             mov eax, dword ptr [esp + 0x18]
// 0080a014  50                   push eax
// 0080a015  e8d6090400           call 0x84a9f0
// 0080a01a  83c404               add esp, 4
// 0080a01d  85c0                 test eax, eax
// 0080a01f  7461                 je 0x80a082
// 0080a021  e8fa160300           call 0x83b720
// 0080a026  8bc8                 mov ecx, eax
// 0080a028  e843170300           call 0x83b770
// 0080a02d  84c0                 test al, al
// 0080a02f  7451                 je 0x80a082
// 0080a031  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080a035  8b7804               mov edi, dword ptr [eax + 4]
// 0080a038  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0080a03b  8b18                 mov ebx, dword ptr [eax]
// 0080a03d  8b4008               mov eax, dword ptr [eax + 8]
// 0080a040  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080a044  8b6a04               mov ebp, dword ptr [edx + 4]
// 0080a047  8b720c               mov esi, dword ptr [edx + 0xc]
// 0080a04a  2bcf                 sub ecx, edi
// 0080a04c  51                   push ecx
// 0080a04d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080a051  2bc3                 sub eax, ebx
// 0080a053  50                   push eax
// 0080a054  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080a058  57                   push edi
// 0080a059  53                   push ebx
// 0080a05a  51                   push ecx
// 0080a05b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080a05f  2bf5                 sub esi, ebp
// 0080a061  896c2430             mov dword ptr [esp + 0x30], ebp
// 0080a065  8b2a                 mov ebp, dword ptr [edx]
// 0080a067  8b5208               mov edx, dword ptr [edx + 8]
// 0080a06a  56                   push esi
// 0080a06b  2bd5                 sub edx, ebp
// 0080a06d  52                   push edx
// 0080a06e  8b542438             mov edx, dword ptr [esp + 0x38]
// 0080a072  52                   push edx
// 0080a073  55                   push ebp
// 0080a074  50                   push eax
// 0080a075  e846ebffff           call 0x808bc0
// 0080a07a  5f                   pop edi
// 0080a07b  5e                   pop esi
// 0080a07c  5d                   pop ebp
// 0080a07d  5b                   pop ebx
// 0080a07e  59                   pop ecx
// 0080a07f  c21000               ret 0x10
// 0080a082  e819320400           call 0x84d2a0
// 0080a087  8b742424             mov esi, dword ptr [esp + 0x24]
// 0080a08b  33db                 xor ebx, ebx
// 0080a08d  395804               cmp dword ptr [eax + 4], ebx
// 0080a090  0f8483000000         je 0x80a119
// 0080a096  8bcf                 mov ecx, edi
// 0080a098  e873e8ffff           call 0x808910
// 0080a09d  85c0                 test eax, eax
// 0080a09f  7509                 jne 0x80a0aa
// 0080a0a1  395e04               cmp dword ptr [esi + 4], ebx
// 0080a0a4  7573                 jne 0x80a119
// 0080a0a6  391e                 cmp dword ptr [esi], ebx
// 0080a0a8  756f                 jne 0x80a119
// 0080a0aa  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0080a0ae  8b470c               mov eax, dword ptr [edi + 0xc]
// 0080a0b1  2b4704               sub eax, dword ptr [edi + 4]
// 0080a0b4  8b6e08               mov ebp, dword ptr [esi + 8]
// 0080a0b7  2b2e                 sub ebp, dword ptr [esi]
// 0080a0b9  895c2424             mov dword ptr [esp + 0x24], ebx
// 0080a0bd  8944241c             mov dword ptr [esp + 0x1c], eax
// 0080a0c1  8b4708               mov eax, dword ptr [edi + 8]
// 0080a0c4  2b07                 sub eax, dword ptr [edi]
// 0080a0c6  885c2424             mov byte ptr [esp + 0x24], bl
// 0080a0ca  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0080a0cd  2b5e04               sub ebx, dword ptr [esi + 4]
// 0080a0d0  c644242701           mov byte ptr [esp + 0x27], 1
// 0080a0d5  c6442426ff           mov byte ptr [esp + 0x26], 0xff
// 0080a0da  89442410             mov dword ptr [esp + 0x10], eax
// 0080a0de  e8bd310400           call 0x84d2a0
// 0080a0e3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080a0e7  8b5604               mov edx, dword ptr [esi + 4]
// 0080a0ea  51                   push ecx
// 0080a0eb  8b0e                 mov ecx, dword ptr [esi]
// 0080a0ed  53                   push ebx
// 0080a0ee  55                   push ebp
// 0080a0ef  52                   push edx
// 0080a0f0  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080a0f4  51                   push ecx
// 0080a0f5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080a0f9  52                   push edx
// 0080a0fa  8b542428             mov edx, dword ptr [esp + 0x28]
// 0080a0fe  51                   push ecx
// 0080a0ff  8b4f04               mov ecx, dword ptr [edi + 4]
// 0080a102  52                   push edx
// 0080a103  8b17                 mov edx, dword ptr [edi]
// 0080a105  51                   push ecx
// 0080a106  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080a10a  52                   push edx
// 0080a10b  8b5004               mov edx, dword ptr [eax + 4]
// 0080a10e  51                   push ecx
// 0080a10f  ffd2                 call edx
// 0080a111  5f                   pop edi
// 0080a112  5e                   pop esi
// 0080a113  5d                   pop ebp
// 0080a114  5b                   pop ebx
// 0080a115  59                   pop ecx
// 0080a116  c21000               ret 0x10
// 0080a119  8b7e04               mov edi, dword ptr [esi + 4]
// 0080a11c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0080a11f  8b1e                 mov ebx, dword ptr [esi]
// 0080a121  8b7608               mov esi, dword ptr [esi + 8]
// 0080a124  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080a128  8b6904               mov ebp, dword ptr [ecx + 4]
// 0080a12b  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0080a12e  2bc7                 sub eax, edi
// 0080a130  50                   push eax
// 0080a131  8b442424             mov eax, dword ptr [esp + 0x24]
// 0080a135  2bf3                 sub esi, ebx
// 0080a137  56                   push esi
// 0080a138  57                   push edi
// 0080a139  53                   push ebx
// 0080a13a  2bd5                 sub edx, ebp
// 0080a13c  50                   push eax
// 0080a13d  896c2430             mov dword ptr [esp + 0x30], ebp
// 0080a141  8b29                 mov ebp, dword ptr [ecx]
// 0080a143  8b4908               mov ecx, dword ptr [ecx + 8]
// 0080a146  52                   push edx
// 0080a147  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080a14b  2bcd                 sub ecx, ebp
// 0080a14d  51                   push ecx
// 0080a14e  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0080a152  51                   push ecx
// 0080a153  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0080a157  55                   push ebp
// 0080a158  52                   push edx
// 0080a159  e862eaffff           call 0x808bc0
// 0080a15e  5f                   pop edi
// 0080a15f  5e                   pop esi
// 0080a160  5d                   pop ebp
// 0080a161  5b                   pop ebx
// 0080a162  59                   pop ecx
// 0080a163  c21000               ret 0x10
// copied from an identical function in another client (function ?AlphaBlend@CXTPImageManager@@QBEHPAUHDC__@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp