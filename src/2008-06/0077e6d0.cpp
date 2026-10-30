// from server: 100% by auto
// roc 2008-06 0077e6d0  unit: PAVCXTPTabManagerAtom::?$CArray  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077e6d0
//
// 0077e6d0  83ec24               sub esp, 0x24
// 0077e6d3  55                   push ebp
// 0077e6d4  8be9                 mov ebp, ecx
// 0077e6d6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0077e6da  56                   push esi
// 0077e6db  8bb188000000         mov esi, dword ptr [ecx + 0x88]
// 0077e6e1  8b06                 mov eax, dword ptr [esi]
// 0077e6e3  c744240800000000     mov dword ptr [esp + 8], 0
// 0077e6eb  85c0                 test eax, eax
// 0077e6ed  0f846c010000         je 0x77e85f
// 0077e6f3  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0077e6f7  3b5604               cmp edx, dword ptr [esi + 4]
// 0077e6fa  0f8d5f010000         jge 0x77e85f
// 0077e700  53                   push ebx
// 0077e701  8b5cd004             mov ebx, dword ptr [eax + edx*8 + 4]
// 0077e705  57                   push edi
// 0077e706  8b3cd0               mov edi, dword ptr [eax + edx*8]
// 0077e709  8b85e0000000         mov eax, dword ptr [ebp + 0xe0]
// 0077e70f  83782000             cmp dword ptr [eax + 0x20], 0
// 0077e713  0f8494000000         je 0x77e7ad
// 0077e719  3bfb                 cmp edi, ebx
// 0077e71b  0f8f3c010000         jg 0x77e85d
// 0077e721  85ff                 test edi, edi
// 0077e723  0f8c34010000         jl 0x77e85d
// 0077e729  3b795c               cmp edi, dword ptr [ecx + 0x5c]
// 0077e72c  0f8d2b010000         jge 0x77e85d
// 0077e732  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0077e735  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0077e738  85f6                 test esi, esi
// 0077e73a  0f841d010000         je 0x77e85d
// 0077e740  395664               cmp dword ptr [esi + 0x64], edx
// 0077e743  0f8514010000         jne 0x77e85d
// 0077e749  8b4660               mov eax, dword ptr [esi + 0x60]
// 0077e74c  397004               cmp dword ptr [eax + 4], esi
// 0077e74f  745c                 je 0x77e7ad
// 0077e751  8bce                 mov ecx, esi
// 0077e753  e888f7f8ff           call 0x70dee0
// 0077e758  85c0                 test eax, eax
// 0077e75a  743b                 je 0x77e797
// 0077e75c  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 0077e762  8b11                 mov edx, dword ptr [ecx]
// 0077e764  8b5220               mov edx, dword ptr [edx + 0x20]
// 0077e767  56                   push esi
// 0077e768  8d442418             lea eax, [esp + 0x18]
// 0077e76c  50                   push eax
// 0077e76d  ffd2                 call edx
// 0077e76f  50                   push eax
// 0077e770  8b442444             mov eax, dword ptr [esp + 0x44]
// 0077e774  50                   push eax
// 0077e775  8d4c242c             lea ecx, [esp + 0x2c]
// 0077e779  51                   push ecx
// 0077e77a  ff155c2b8000         call dword ptr [0x802b5c]
// 0077e780  85c0                 test eax, eax
// 0077e782  7413                 je 0x77e797
// 0077e784  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 0077e78a  8b11                 mov edx, dword ptr [ecx]
// 0077e78c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0077e790  8b5234               mov edx, dword ptr [edx + 0x34]
// 0077e793  56                   push esi
// 0077e794  50                   push eax
// 0077e795  ffd2                 call edx
// 0077e797  47                   inc edi
// 0077e798  3bfb                 cmp edi, ebx
// 0077e79a  0f8fbd000000         jg 0x77e85d
// 0077e7a0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0077e7a4  8b542444             mov edx, dword ptr [esp + 0x44]
// 0077e7a8  e974ffffff           jmp 0x77e721
// 0077e7ad  3bdf                 cmp ebx, edi
// 0077e7af  0f8ca8000000         jl 0x77e85d
// 0077e7b5  85db                 test ebx, ebx
// 0077e7b7  0f8ca0000000         jl 0x77e85d
// 0077e7bd  3b595c               cmp ebx, dword ptr [ecx + 0x5c]
// 0077e7c0  0f8d97000000         jge 0x77e85d
// 0077e7c6  8b4158               mov eax, dword ptr [ecx + 0x58]
// 0077e7c9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 0077e7cc  85f6                 test esi, esi
// 0077e7ce  0f8489000000         je 0x77e85d
// 0077e7d4  395664               cmp dword ptr [esi + 0x64], edx
// 0077e7d7  7566                 jne 0x77e83f
// 0077e7d9  8bce                 mov ecx, esi
// 0077e7db  e800f7f8ff           call 0x70dee0
// 0077e7e0  85c0                 test eax, eax
// 0077e7e2  7449                 je 0x77e82d
// 0077e7e4  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 0077e7ea  8b11                 mov edx, dword ptr [ecx]
// 0077e7ec  8b5220               mov edx, dword ptr [edx + 0x20]
// 0077e7ef  56                   push esi
// 0077e7f0  8d442428             lea eax, [esp + 0x28]
// 0077e7f4  50                   push eax
// 0077e7f5  ffd2                 call edx
// 0077e7f7  50                   push eax
// 0077e7f8  8b442444             mov eax, dword ptr [esp + 0x44]
// 0077e7fc  50                   push eax
// 0077e7fd  8d4c241c             lea ecx, [esp + 0x1c]
// 0077e801  51                   push ecx
// 0077e802  ff155c2b8000         call dword ptr [0x802b5c]
// 0077e808  85c0                 test eax, eax
// 0077e80a  7421                 je 0x77e82d
// 0077e80c  8b5660               mov edx, dword ptr [esi + 0x60]
// 0077e80f  397204               cmp dword ptr [edx + 4], esi
// 0077e812  7506                 jne 0x77e81a
// 0077e814  89742410             mov dword ptr [esp + 0x10], esi
// 0077e818  eb13                 jmp 0x77e82d
// 0077e81a  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 0077e820  8b01                 mov eax, dword ptr [ecx]
// 0077e822  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0077e826  8b4034               mov eax, dword ptr [eax + 0x34]
// 0077e829  56                   push esi
// 0077e82a  52                   push edx
// 0077e82b  ffd0                 call eax
// 0077e82d  4b                   dec ebx
// 0077e82e  3bdf                 cmp ebx, edi
// 0077e830  7c0d                 jl 0x77e83f
// 0077e832  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0077e836  8b542444             mov edx, dword ptr [esp + 0x44]
// 0077e83a  e976ffffff           jmp 0x77e7b5
// 0077e83f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077e843  85c0                 test eax, eax
// 0077e845  7416                 je 0x77e85d
// 0077e847  8bade0000000         mov ebp, dword ptr [ebp + 0xe0]
// 0077e84d  8b5500               mov edx, dword ptr [ebp]
// 0077e850  8b5234               mov edx, dword ptr [edx + 0x34]
// 0077e853  50                   push eax
// 0077e854  8b442440             mov eax, dword ptr [esp + 0x40]
// 0077e858  50                   push eax
// 0077e859  8bcd                 mov ecx, ebp
// 0077e85b  ffd2                 call edx
// 0077e85d  5f                   pop edi
// 0077e85e  5b                   pop ebx
// 0077e85f  5e                   pop esi
// 0077e860  5d                   pop ebp
// 0077e861  83c424               add esp, 0x24
// 0077e864  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?DrawRowItems@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@ABVCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
