// roc 2009-12 00898370  unit: CXTPRibbonBar  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00898370
//
// 00898370  83ec10               sub esp, 0x10
// 00898373  53                   push ebx
// 00898374  8bd9                 mov ebx, ecx
// 00898376  83bb4c02000000       cmp dword ptr [ebx + 0x24c], 0
// 0089837d  0f84e3000000         je 0x898466
// 00898383  56                   push esi
// 00898384  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00898388  56                   push esi
// 00898389  e8f295faff           call 0x841980
// 0089838e  50                   push eax
// 0089838f  e8aab8f5ff           call 0x7f3c3e
// 00898394  83c408               add esp, 8
// 00898397  85c0                 test eax, eax
// 00898399  7426                 je 0x8983c1
// 0089839b  8b8080010000         mov eax, dword ptr [eax + 0x180]
// 008983a1  85c0                 test eax, eax
// 008983a3  741c                 je 0x8983c1
// 008983a5  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 008983ab  3d83250000           cmp eax, 0x2583
// 008983b0  0f84af000000         je 0x898465
// 008983b6  3d8b250000           cmp eax, 0x258b
// 008983bb  0f84a4000000         je 0x898465
// 008983c1  6a00                 push 0
// 008983c3  6aff                 push -1
// 008983c5  8bce                 mov ecx, esi
// 008983c7  e8d4e1f6ff           call 0x8065a0
// 008983cc  8b442424             mov eax, dword ptr [esp + 0x24]
// 008983d0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008983d4  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008983da  50                   push eax
// 008983db  52                   push edx
// 008983dc  e83fd2faff           call 0x845620
// 008983e1  85c0                 test eax, eax
// 008983e3  741a                 je 0x8983ff
// 008983e5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008983e9  50                   push eax
// 008983ea  8b442428             mov eax, dword ptr [esp + 0x28]
// 008983ee  50                   push eax
// 008983ef  51                   push ecx
// 008983f0  8bcb                 mov ecx, ebx
// 008983f2  e8b9efffff           call 0x8973b0
// 008983f7  5e                   pop esi
// 008983f8  5b                   pop ebx
// 008983f9  83c410               add esp, 0x10
// 008983fc  c20c00               ret 0xc
// 008983ff  56                   push esi
// 00898400  e8ab740500           call 0x8ef8b0
// 00898405  83c404               add esp, 4
// 00898408  85c0                 test eax, eax
// 0089840a  7459                 je 0x898465
// 0089840c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00898410  8b10                 mov edx, dword ptr [eax]
// 00898412  8b5208               mov edx, dword ptr [edx + 8]
// 00898415  51                   push ecx
// 00898416  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089841a  51                   push ecx
// 0089841b  8bc8                 mov ecx, eax
// 0089841d  ffd2                 call edx
// 0089841f  8bf0                 mov esi, eax
// 00898421  85f6                 test esi, esi
// 00898423  7440                 je 0x898465
// 00898425  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00898428  8b4634               mov eax, dword ptr [esi + 0x34]
// 0089842b  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0089842e  894c240c             mov dword ptr [esp + 0xc], ecx
// 00898432  57                   push edi
// 00898433  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00898436  8bcb                 mov ecx, ebx
// 00898438  8944240c             mov dword ptr [esp + 0xc], eax
// 0089843c  89542414             mov dword ptr [esp + 0x14], edx
// 00898440  e82bc8ffff           call 0x894c70
// 00898445  2bb860060000         sub edi, dword ptr [eax + 0x660]
// 0089844b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0089844f  3bf8                 cmp edi, eax
// 00898451  5f                   pop edi
// 00898452  7d11                 jge 0x898465
// 00898454  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00898457  8b542420             mov edx, dword ptr [esp + 0x20]
// 0089845b  51                   push ecx
// 0089845c  50                   push eax
// 0089845d  52                   push edx
// 0089845e  8bcb                 mov ecx, ebx
// 00898460  e84befffff           call 0x8973b0
// 00898465  5e                   pop esi
// 00898466  5b                   pop ebx
// 00898467  83c410               add esp, 0x10
// 0089846a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnPopupRButtonUp@CXTPRibbonBar@@MAEXPAVCXTPCommandBar@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp