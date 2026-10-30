// roc 2009-06 007f6d90  unit: PAVCXTPTabManagerAtom::?$CArray  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f6d90
//
// 007f6d90  83ec24               sub esp, 0x24
// 007f6d93  55                   push ebp
// 007f6d94  8be9                 mov ebp, ecx
// 007f6d96  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f6d9a  56                   push esi
// 007f6d9b  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 007f6da1  8b06                 mov eax, dword ptr [esi]
// 007f6da3  c744240800000000     mov dword ptr [esp + 8], 0
// 007f6dab  85c0                 test eax, eax
// 007f6dad  0f846c010000         je 0x7f6f1f
// 007f6db3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f6db7  3b5604               cmp edx, dword ptr [esi + 4]
// 007f6dba  0f8d5f010000         jge 0x7f6f1f
// 007f6dc0  53                   push ebx
// 007f6dc1  8b5cd004             mov ebx, dword ptr [eax + edx*8 + 4]
// 007f6dc5  57                   push edi
// 007f6dc6  8b3cd0               mov edi, dword ptr [eax + edx*8]
// 007f6dc9  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 007f6dcf  83782000             cmp dword ptr [eax + 0x20], 0
// 007f6dd3  0f8494000000         je 0x7f6e6d
// 007f6dd9  3bfb                 cmp edi, ebx
// 007f6ddb  0f8f3c010000         jg 0x7f6f1d
// 007f6de1  85ff                 test edi, edi
// 007f6de3  0f8c34010000         jl 0x7f6f1d
// 007f6de9  3b795c               cmp edi, dword ptr [ecx + 0x5c]
// 007f6dec  0f8d2b010000         jge 0x7f6f1d
// 007f6df2  8b4158               mov eax, dword ptr [ecx + 0x58]
// 007f6df5  8b34b8               mov esi, dword ptr [eax + edi*4]
// 007f6df8  85f6                 test esi, esi
// 007f6dfa  0f841d010000         je 0x7f6f1d
// 007f6e00  395664               cmp dword ptr [esi + 0x64], edx
// 007f6e03  0f8514010000         jne 0x7f6f1d
// 007f6e09  8b4660               mov eax, dword ptr [esi + 0x60]
// 007f6e0c  397004               cmp dword ptr [eax + 4], esi
// 007f6e0f  745c                 je 0x7f6e6d
// 007f6e11  8bce                 mov ecx, esi
// 007f6e13  e828f3eaff           call 0x6a6140
// 007f6e18  85c0                 test eax, eax
// 007f6e1a  743b                 je 0x7f6e57
// 007f6e1c  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f6e22  8b11                 mov edx, dword ptr [ecx]
// 007f6e24  8b5220               mov edx, dword ptr [edx + 0x20]
// 007f6e27  56                   push esi
// 007f6e28  8d442418             lea eax, [esp + 0x18]
// 007f6e2c  50                   push eax
// 007f6e2d  ffd2                 call edx
// 007f6e2f  50                   push eax
// 007f6e30  8b442444             mov eax, dword ptr [esp + 0x44]
// 007f6e34  50                   push eax
// 007f6e35  8d4c242c             lea ecx, [esp + 0x2c]
// 007f6e39  51                   push ecx
// 007f6e3a  ff15f0ee8900         call dword ptr [0x89eef0]
// 007f6e40  85c0                 test eax, eax
// 007f6e42  7413                 je 0x7f6e57
// 007f6e44  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f6e4a  8b11                 mov edx, dword ptr [ecx]
// 007f6e4c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f6e50  8b5234               mov edx, dword ptr [edx + 0x34]
// 007f6e53  56                   push esi
// 007f6e54  50                   push eax
// 007f6e55  ffd2                 call edx
// 007f6e57  47                   inc edi
// 007f6e58  3bfb                 cmp edi, ebx
// 007f6e5a  0f8fbd000000         jg 0x7f6f1d
// 007f6e60  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007f6e64  8b542444             mov edx, dword ptr [esp + 0x44]
// 007f6e68  e974ffffff           jmp 0x7f6de1
// 007f6e6d  3bdf                 cmp ebx, edi
// 007f6e6f  0f8ca8000000         jl 0x7f6f1d
// 007f6e75  85db                 test ebx, ebx
// 007f6e77  0f8ca0000000         jl 0x7f6f1d
// 007f6e7d  3b595c               cmp ebx, dword ptr [ecx + 0x5c]
// 007f6e80  0f8d97000000         jge 0x7f6f1d
// 007f6e86  8b4158               mov eax, dword ptr [ecx + 0x58]
// 007f6e89  8b3498               mov esi, dword ptr [eax + ebx*4]
// 007f6e8c  85f6                 test esi, esi
// 007f6e8e  0f8489000000         je 0x7f6f1d
// 007f6e94  395664               cmp dword ptr [esi + 0x64], edx
// 007f6e97  7566                 jne 0x7f6eff
// 007f6e99  8bce                 mov ecx, esi
// 007f6e9b  e8a0f2eaff           call 0x6a6140
// 007f6ea0  85c0                 test eax, eax
// 007f6ea2  7449                 je 0x7f6eed
// 007f6ea4  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f6eaa  8b11                 mov edx, dword ptr [ecx]
// 007f6eac  8b5220               mov edx, dword ptr [edx + 0x20]
// 007f6eaf  56                   push esi
// 007f6eb0  8d442428             lea eax, [esp + 0x28]
// 007f6eb4  50                   push eax
// 007f6eb5  ffd2                 call edx
// 007f6eb7  50                   push eax
// 007f6eb8  8b442444             mov eax, dword ptr [esp + 0x44]
// 007f6ebc  50                   push eax
// 007f6ebd  8d4c241c             lea ecx, [esp + 0x1c]
// 007f6ec1  51                   push ecx
// 007f6ec2  ff15f0ee8900         call dword ptr [0x89eef0]
// 007f6ec8  85c0                 test eax, eax
// 007f6eca  7421                 je 0x7f6eed
// 007f6ecc  8b5660               mov edx, dword ptr [esi + 0x60]
// 007f6ecf  397204               cmp dword ptr [edx + 4], esi
// 007f6ed2  7506                 jne 0x7f6eda
// 007f6ed4  89742410             mov dword ptr [esp + 0x10], esi
// 007f6ed8  eb13                 jmp 0x7f6eed
// 007f6eda  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 007f6ee0  8b01                 mov eax, dword ptr [ecx]
// 007f6ee2  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f6ee6  8b4034               mov eax, dword ptr [eax + 0x34]
// 007f6ee9  56                   push esi
// 007f6eea  52                   push edx
// 007f6eeb  ffd0                 call eax
// 007f6eed  4b                   dec ebx
// 007f6eee  3bdf                 cmp ebx, edi
// 007f6ef0  7c0d                 jl 0x7f6eff
// 007f6ef2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007f6ef6  8b542444             mov edx, dword ptr [esp + 0x44]
// 007f6efa  e976ffffff           jmp 0x7f6e75
// 007f6eff  8b442410             mov eax, dword ptr [esp + 0x10]
// 007f6f03  85c0                 test eax, eax
// 007f6f05  7416                 je 0x7f6f1d
// 007f6f07  8bade0000000         mov ebp, dword ptr [ebp + 0xe0]
// 007f6f0d  8b5500               mov edx, dword ptr [ebp]
// 007f6f10  8b5234               mov edx, dword ptr [edx + 0x34]
// 007f6f13  50                   push eax
// 007f6f14  8b442440             mov eax, dword ptr [esp + 0x40]
// 007f6f18  50                   push eax
// 007f6f19  8bcd                 mov ecx, ebp
// 007f6f1b  ffd2                 call edx
// 007f6f1d  5f                   pop edi
// 007f6f1e  5b                   pop ebx
// 007f6f1f  5e                   pop esi
// 007f6f20  5d                   pop ebp
// 007f6f21  83c424               add esp, 0x24
// 007f6f24  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawRowItems@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
