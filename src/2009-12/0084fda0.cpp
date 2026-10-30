// roc 2009-12 0084fda0  unit: CXTPPropertyGrid  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084fda0
//
// 0084fda0  83ec08               sub esp, 8
// 0084fda3  53                   push ebx
// 0084fda4  57                   push edi
// 0084fda5  894c240c             mov dword ptr [esp + 0xc], ecx
// 0084fda9  e8d2dcffff           call 0x84da80
// 0084fdae  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084fdb1  6a00                 push 0
// 0084fdb3  6a00                 push 0
// 0084fdb5  688e010000           push 0x18e
// 0084fdba  50                   push eax
// 0084fdbb  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0084fdc1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0084fdc5  33ff                 xor edi, edi
// 0084fdc7  397b28               cmp dword ptr [ebx + 0x28], edi
// 0084fdca  89442408             mov dword ptr [esp + 8], eax
// 0084fdce  7e7e                 jle 0x84fe4e
// 0084fdd0  55                   push ebp
// 0084fdd1  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0084fdd5  56                   push esi
// 0084fdd6  57                   push edi
// 0084fdd7  8bcb                 mov ecx, ebx
// 0084fdd9  e8425e0100           call 0x865c20
// 0084fdde  8bf0                 mov esi, eax
// 0084fde0  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0084fde6  85c0                 test eax, eax
// 0084fde8  744b                 je 0x84fe35
// 0084fdea  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0084fdf0  83792800             cmp dword ptr [ecx + 0x28], 0
// 0084fdf4  7415                 je 0x84fe0b
// 0084fdf6  8b9ea0000000         mov ebx, dword ptr [esi + 0xa0]
// 0084fdfc  50                   push eax
// 0084fdfd  8d4d20               lea ecx, [ebp + 0x20]
// 0084fe00  e82b41beff           call 0x433f30
// 0084fe05  8918                 mov dword ptr [eax], ebx
// 0084fe07  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084fe0b  8bce                 mov ecx, esi
// 0084fe0d  e8fe4a0100           call 0x864910
// 0084fe12  85c0                 test eax, eax
// 0084fe14  7409                 je 0x84fe1f
// 0084fe16  8b9688000000         mov edx, dword ptr [esi + 0x88]
// 0084fe1c  89553c               mov dword ptr [ebp + 0x3c], edx
// 0084fe1f  8bce                 mov ecx, esi
// 0084fe21  e8fa4b0100           call 0x864a20
// 0084fe26  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0084fe2a  7509                 jne 0x84fe35
// 0084fe2c  8b8688000000         mov eax, dword ptr [esi + 0x88]
// 0084fe32  894540               mov dword ptr [ebp + 0x40], eax
// 0084fe35  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0084fe3b  55                   push ebp
// 0084fe3c  51                   push ecx
// 0084fe3d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0084fe41  e85affffff           call 0x84fda0
// 0084fe46  47                   inc edi
// 0084fe47  3b7b28               cmp edi, dword ptr [ebx + 0x28]
// 0084fe4a  7c8a                 jl 0x84fdd6
// 0084fe4c  5e                   pop esi
// 0084fe4d  5d                   pop ebp
// 0084fe4e  5f                   pop edi
// 0084fe4f  5b                   pop ebx
// 0084fe50  83c408               add esp, 8
// 0084fe53  c20800               ret 8
// copied from an identical function in another client (function ?SaveExpandingState@CXTPPropertyGrid@@AAEXPAVCXTPPropertyGridItems@@AAVCXTPPropertyGridUpdateContext@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp