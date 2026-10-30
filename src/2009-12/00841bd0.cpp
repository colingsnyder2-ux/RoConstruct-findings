// roc 2009-12 00841bd0  unit: CXTPPopupBar  size: 369 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841bd0
//
// 00841bd0  83ec08               sub esp, 8
// 00841bd3  55                   push ebp
// 00841bd4  56                   push esi
// 00841bd5  8bf1                 mov esi, ecx
// 00841bd7  e8f428fcff           call 0x8044d0
// 00841bdc  33ed                 xor ebp, ebp
// 00841bde  8944240c             mov dword ptr [esp + 0xc], eax
// 00841be2  3bc5                 cmp eax, ebp
// 00841be4  0f8451010000         je 0x841d3b
// 00841bea  8b4074               mov eax, dword ptr [eax + 0x74]
// 00841bed  57                   push edi
// 00841bee  8bce                 mov ecx, esi
// 00841bf0  396820               cmp dword ptr [eax + 0x20], ebp
// 00841bf3  7444                 je 0x841c39
// 00841bf5  33ff                 xor edi, edi
// 00841bf7  e85436fcff           call 0x805250
// 00841bfc  85c0                 test eax, eax
// 00841bfe  7e28                 jle 0x841c28
// 00841c00  57                   push edi
// 00841c01  8bce                 mov ecx, esi
// 00841c03  e85836fcff           call 0x805260
// 00841c08  3bc5                 cmp eax, ebp
// 00841c0a  7410                 je 0x841c1c
// 00841c0c  39b000010000         cmp dword ptr [eax + 0x100], esi
// 00841c12  7508                 jne 0x841c1c
// 00841c14  55                   push ebp
// 00841c15  8bc8                 mov ecx, eax
// 00841c17  e8f443fbff           call 0x7f6010
// 00841c1c  8bce                 mov ecx, esi
// 00841c1e  47                   inc edi
// 00841c1f  e82c36fcff           call 0x805250
// 00841c24  3bf8                 cmp edi, eax
// 00841c26  7cd8                 jl 0x841c00
// 00841c28  5f                   pop edi
// 00841c29  c786a801000001000000 mov dword ptr [esi + 0x1a8], 1
// 00841c33  5e                   pop esi
// 00841c34  5d                   pop ebp
// 00841c35  83c408               add esp, 8
// 00841c38  c3                   ret 
// 00841c39  53                   push ebx
// 00841c3a  89aea4010000         mov dword ptr [esi + 0x1a4], ebp
// 00841c40  896c2410             mov dword ptr [esp + 0x10], ebp
// 00841c44  e80736fcff           call 0x805250
// 00841c49  85c0                 test eax, eax
// 00841c4b  7e6e                 jle 0x841cbb
// 00841c4d  8d4900               lea ecx, [ecx]
// 00841c50  55                   push ebp
// 00841c51  8bce                 mov ecx, esi
// 00841c53  e80836fcff           call 0x805260
// 00841c58  8bf8                 mov edi, eax
// 00841c5a  85ff                 test edi, edi
// 00841c5c  7451                 je 0x841caf
// 00841c5e  39b700010000         cmp dword ptr [edi + 0x100], esi
// 00841c64  7549                 jne 0x841caf
// 00841c66  8b17                 mov edx, dword ptr [edi]
// 00841c68  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00841c6e  6a28                 push 0x28
// 00841c70  8bcf                 mov ecx, edi
// 00841c72  ffd0                 call eax
// 00841c74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00841c78  8b11                 mov edx, dword ptr [ecx]
// 00841c7a  8bd8                 mov ebx, eax
// 00841c7c  8b4260               mov eax, dword ptr [edx + 0x60]
// 00841c7f  57                   push edi
// 00841c80  ffd0                 call eax
// 00841c82  8bcf                 mov ecx, edi
// 00841c84  85c0                 test eax, eax
// 00841c86  7408                 je 0x841c90
// 00841c88  53                   push ebx
// 00841c89  e88243fbff           call 0x7f6010
// 00841c8e  eb1f                 jmp 0x841caf
// 00841c90  6a00                 push 0
// 00841c92  e87943fbff           call 0x7f6010
// 00841c97  81bf84000000be230000 cmp dword ptr [edi + 0x84], 0x23be
// 00841ca1  740c                 je 0x841caf
// 00841ca3  85db                 test ebx, ebx
// 00841ca5  7408                 je 0x841caf
// 00841ca7  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00841caf  8bce                 mov ecx, esi
// 00841cb1  45                   inc ebp
// 00841cb2  e89935fcff           call 0x805250
// 00841cb7  3be8                 cmp ebp, eax
// 00841cb9  7c95                 jl 0x841c50
// 00841cbb  8bce                 mov ecx, esi
// 00841cbd  33db                 xor ebx, ebx
// 00841cbf  e88c35fcff           call 0x805250
// 00841cc4  85c0                 test eax, eax
// 00841cc6  7e71                 jle 0x841d39
// 00841cc8  53                   push ebx
// 00841cc9  8bce                 mov ecx, esi
// 00841ccb  e89035fcff           call 0x805260
// 00841cd0  8bf8                 mov edi, eax
// 00841cd2  85ff                 test edi, edi
// 00841cd4  7457                 je 0x841d2d
// 00841cd6  39b700010000         cmp dword ptr [edi + 0x100], esi
// 00841cdc  754f                 jne 0x841d2d
// 00841cde  8b87d0000000         mov eax, dword ptr [edi + 0xd0]
// 00841ce4  8b17                 mov edx, dword ptr [edi]
// 00841ce6  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00841cec  83e0df               and eax, 0xffffffdf
// 00841cef  50                   push eax
// 00841cf0  8bcf                 mov ecx, edi
// 00841cf2  ffd2                 call edx
// 00841cf4  83bf0401000000       cmp dword ptr [edi + 0x104], 0
// 00841cfb  7430                 je 0x841d2d
// 00841cfd  83bea801000000       cmp dword ptr [esi + 0x1a8], 0
// 00841d04  7527                 jne 0x841d2d
// 00841d06  837c241000           cmp dword ptr [esp + 0x10], 0
// 00841d0b  7420                 je 0x841d2d
// 00841d0d  8b8fd0000000         mov ecx, dword ptr [edi + 0xd0]
// 00841d13  8b07                 mov eax, dword ptr [edi]
// 00841d15  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00841d1b  83c920               or ecx, 0x20
// 00841d1e  51                   push ecx
// 00841d1f  8bcf                 mov ecx, edi
// 00841d21  ffd2                 call edx
// 00841d23  c786a401000001000000 mov dword ptr [esi + 0x1a4], 1
// 00841d2d  8bce                 mov ecx, esi
// 00841d2f  43                   inc ebx
// 00841d30  e81b35fcff           call 0x805250
// 00841d35  3bd8                 cmp ebx, eax
// 00841d37  7c8f                 jl 0x841cc8
// 00841d39  5b                   pop ebx
// 00841d3a  5f                   pop edi
// 00841d3b  5e                   pop esi
// 00841d3c  5d                   pop ebp
// 00841d3d  83c408               add esp, 8
// 00841d40  c3                   ret 
// copied from an identical function in another client (function ?UpdateExpandingState@CXTPPopupBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp