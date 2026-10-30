// roc 2009-12 00803520  unit: CXTPPaintManager  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00803520
//
// 00803520  8b442418             mov eax, dword ptr [esp + 0x18]
// 00803524  8b5050               mov edx, dword ptr [eax + 0x50]
// 00803527  53                   push ebx
// 00803528  55                   push ebp
// 00803529  56                   push esi
// 0080352a  57                   push edi
// 0080352b  3982bc000000         cmp dword ptr [edx + 0xbc], eax
// 00803531  7413                 je 0x803546
// 00803533  83787c00             cmp dword ptr [eax + 0x7c], 0
// 00803537  750d                 jne 0x803546
// 00803539  f7402800020000       test dword ptr [eax + 0x28], 0x200
// 00803540  0f8489000000         je 0x8035cf
// 00803546  8b91e8000000         mov edx, dword ptr [ecx + 0xe8]
// 0080354c  29542420             sub dword ptr [esp + 0x20], edx
// 00803550  8b5828               mov ebx, dword ptr [eax + 0x28]
// 00803553  8b91ec000000         mov edx, dword ptr [ecx + 0xec]
// 00803559  29542424             sub dword ptr [esp + 0x24], edx
// 0080355d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00803561  03b1e0000000         add esi, dword ptr [ecx + 0xe0]
// 00803567  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0080356b  03b9e4000000         add edi, dword ptr [ecx + 0xe4]
// 00803571  8b11                 mov edx, dword ptr [ecx]
// 00803573  8b6850               mov ebp, dword ptr [eax + 0x50]
// 00803576  33d2                 xor edx, edx
// 00803578  6a01                 push 1
// 0080357a  81e300020000         and ebx, 0x200
// 00803580  81fb00020000         cmp ebx, 0x200
// 00803586  0f94c2               sete dl
// 00803589  6a01                 push 1
// 0080358b  6a00                 push 0
// 0080358d  89742424             mov dword ptr [esp + 0x24], esi
// 00803591  897c2428             mov dword ptr [esp + 0x28], edi
// 00803595  52                   push edx
// 00803596  8b507c               mov edx, dword ptr [eax + 0x7c]
// 00803599  6a01                 push 1
// 0080359b  52                   push edx
// 0080359c  33d2                 xor edx, edx
// 0080359e  3985bc000000         cmp dword ptr [ebp + 0xbc], eax
// 008035a4  0f94c2               sete dl
// 008035a7  52                   push edx
// 008035a8  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008035ac  83ec10               sub esp, 0x10
// 008035af  8bc4                 mov eax, esp
// 008035b1  8930                 mov dword ptr [eax], esi
// 008035b3  897804               mov dword ptr [eax + 4], edi
// 008035b6  895008               mov dword ptr [eax + 8], edx
// 008035b9  8b542450             mov edx, dword ptr [esp + 0x50]
// 008035bd  89500c               mov dword ptr [eax + 0xc], edx
// 008035c0  8b442440             mov eax, dword ptr [esp + 0x40]
// 008035c4  8b11                 mov edx, dword ptr [ecx]
// 008035c6  50                   push eax
// 008035c7  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 008035cd  ffd0                 call eax
// 008035cf  5f                   pop edi
// 008035d0  5e                   pop esi
// 008035d1  5d                   pop ebp
// 008035d2  5b                   pop ebx
// 008035d3  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawStatusBarButtonFace@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPaintManager.cpp