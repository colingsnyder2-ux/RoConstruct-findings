// roc 2009-06 0072bc00  unit: MyXTPCommandBars  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072bc00
//
// 0072bc00  6aff                 push -1
// 0072bc02  6858558700           push 0x875558
// 0072bc07  64a100000000         mov eax, dword ptr fs:[0]
// 0072bc0d  50                   push eax
// 0072bc0e  83ec14               sub esp, 0x14
// 0072bc11  53                   push ebx
// 0072bc12  55                   push ebp
// 0072bc13  56                   push esi
// 0072bc14  57                   push edi
// 0072bc15  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072bc1a  33c4                 xor eax, esp
// 0072bc1c  50                   push eax
// 0072bc1d  8d442428             lea eax, [esp + 0x28]
// 0072bc21  64a300000000         mov dword ptr fs:[0], eax
// 0072bc27  8bd9                 mov ebx, ecx
// 0072bc29  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0072bc2d  8bb580010000         mov esi, dword ptr [ebp + 0x180]
// 0072bc33  85f6                 test esi, esi
// 0072bc35  750d                 jne 0x72bc44
// 0072bc37  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0072bc3b  57                   push edi
// 0072bc3c  55                   push ebp
// 0072bc3d  e8eedbffff           call 0x729830
// 0072bc42  eb7e                 jmp 0x72bcc2
// 0072bc44  6aff                 push -1
// 0072bc46  55                   push ebp
// 0072bc47  8bce                 mov ecx, esi
// 0072bc49  e822700800           call 0x7b2c70
// 0072bc4e  8bf8                 mov edi, eax
// 0072bc50  83ffff               cmp edi, -1
// 0072bc53  750f                 jne 0x72bc64
// 0072bc55  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0072bc59  57                   push edi
// 0072bc5a  55                   push ebp
// 0072bc5b  8bcb                 mov ecx, ebx
// 0072bc5d  e8cedbffff           call 0x729830
// 0072bc62  eb5e                 jmp 0x72bcc2
// 0072bc64  8d4c2414             lea ecx, [esp + 0x14]
// 0072bc68  e8c3ddffff           call 0x729a30
// 0072bc6d  8d442414             lea eax, [esp + 0x14]
// 0072bc71  50                   push eax
// 0072bc72  57                   push edi
// 0072bc73  8bce                 mov ecx, esi
// 0072bc75  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0072bc7d  e8fe7f0800           call 0x7b3c80
// 0072bc82  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072bc86  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0072bc8a  33f6                 xor esi, esi
// 0072bc8c  85c0                 test eax, eax
// 0072bc8e  7e21                 jle 0x72bcb1
// 0072bc90  85f6                 test esi, esi
// 0072bc92  7c6f                 jl 0x72bd03
// 0072bc94  3bf0                 cmp esi, eax
// 0072bc96  7d6b                 jge 0x72bd03
// 0072bc98  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072bc9c  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 0072bc9f  57                   push edi
// 0072bca0  52                   push edx
// 0072bca1  8bcb                 mov ecx, ebx
// 0072bca3  e888dbffff           call 0x729830
// 0072bca8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072bcac  46                   inc esi
// 0072bcad  3bf0                 cmp esi, eax
// 0072bcaf  7cdf                 jl 0x72bc90
// 0072bcb1  8d4c2414             lea ecx, [esp + 0x14]
// 0072bcb5  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0072bcbd  e88eddffff           call 0x729a50
// 0072bcc2  837b6000             cmp dword ptr [ebx + 0x60], 0
// 0072bcc6  7425                 je 0x72bced
// 0072bcc8  8bbffc000000         mov edi, dword ptr [edi + 0xfc]
// 0072bcce  6a00                 push 0
// 0072bcd0  6aff                 push -1
// 0072bcd2  6a00                 push 0
// 0072bcd4  68b9880000           push 0x88b9
// 0072bcd9  6a01                 push 1
// 0072bcdb  8bcf                 mov ecx, edi
// 0072bcdd  e8be160400           call 0x76d3a0
// 0072bce2  8b10                 mov edx, dword ptr [eax]
// 0072bce4  8bc8                 mov ecx, eax
// 0072bce6  8b4264               mov eax, dword ptr [edx + 0x64]
// 0072bce9  6a01                 push 1
// 0072bceb  ffd0                 call eax
// 0072bced  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0072bcf1  64890d00000000       mov dword ptr fs:[0], ecx
// 0072bcf8  59                   pop ecx
// 0072bcf9  5f                   pop edi
// 0072bcfa  5e                   pop esi
// 0072bcfb  5d                   pop ebp
// 0072bcfc  5b                   pop ebx
// 0072bcfd  83c420               add esp, 0x20
// 0072bd00  c20800               ret 8
// 0072bd03  e8dccffeff           call 0x718ce4
// copied from an identical function in another client (function ?GetAddOrRemovePopup@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp