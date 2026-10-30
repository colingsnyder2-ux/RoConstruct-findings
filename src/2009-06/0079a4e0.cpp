// roc 2009-06 0079a4e0  unit: CXTPRibbonTheme  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079a4e0
//
// 0079a4e0  6aff                 push -1
// 0079a4e2  68eebc8700           push 0x87bcee
// 0079a4e7  64a100000000         mov eax, dword ptr fs:[0]
// 0079a4ed  50                   push eax
// 0079a4ee  83ec24               sub esp, 0x24
// 0079a4f1  53                   push ebx
// 0079a4f2  55                   push ebp
// 0079a4f3  56                   push esi
// 0079a4f4  57                   push edi
// 0079a4f5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0079a4fa  33c4                 xor eax, esp
// 0079a4fc  50                   push eax
// 0079a4fd  8d442438             lea eax, [esp + 0x38]
// 0079a501  64a300000000         mov dword ptr fs:[0], eax
// 0079a507  8bf9                 mov edi, ecx
// 0079a509  837c245000           cmp dword ptr [esp + 0x50], 0
// 0079a50e  740f                 je 0x79a51f
// 0079a510  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0079a514  50                   push eax
// 0079a515  e896fbffff           call 0x79a0b0
// 0079a51a  e980010000           jmp 0x79a69f
// 0079a51f  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0079a523  55                   push ebp
// 0079a524  8d4c241c             lea ecx, [esp + 0x1c]
// 0079a528  e8a35ffdff           call 0x7704d0
// 0079a52d  8b742448             mov esi, dword ptr [esp + 0x48]
// 0079a531  8d8fbc000000         lea ecx, [edi + 0xbc]
// 0079a537  51                   push ecx
// 0079a538  56                   push esi
// 0079a539  8d4c2430             lea ecx, [esp + 0x30]
// 0079a53d  e81e63fdff           call 0x770860
// 0079a542  51                   push ecx
// 0079a543  8bcc                 mov ecx, esp
// 0079a545  89642450             mov dword ptr [esp + 0x50], esp
// 0079a549  6814e08f00           push 0x8fe014
// 0079a54e  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0079a556  ff1508fd8900         call dword ptr [0x89fd08]
// 0079a55c  51                   push ecx
// 0079a55d  8bcc                 mov ecx, esp
// 0079a55f  89642458             mov dword ptr [esp + 0x58], esp
// 0079a563  68ccff8b00           push 0x8bffcc
// 0079a568  c644244c01           mov byte ptr [esp + 0x4c], 1
// 0079a56d  ff1508fd8900         call dword ptr [0x89fd08]
// 0079a573  8bcf                 mov ecx, edi
// 0079a575  c644244802           mov byte ptr [esp + 0x48], 2
// 0079a57a  e831980000           call 0x7a3db0
// 0079a57f  8bc8                 mov ecx, eax
// 0079a581  c644244800           mov byte ptr [esp + 0x48], 0
// 0079a586  e875c00600           call 0x806600
// 0079a58b  51                   push ecx
// 0079a58c  8bcc                 mov ecx, esp
// 0079a58e  89642450             mov dword ptr [esp + 0x50], esp
// 0079a592  6808e08f00           push 0x8fe008
// 0079a597  89442458             mov dword ptr [esp + 0x58], eax
// 0079a59b  ff1508fd8900         call dword ptr [0x89fd08]
// 0079a5a1  51                   push ecx
// 0079a5a2  8bcc                 mov ecx, esp
// 0079a5a4  89642450             mov dword ptr [esp + 0x50], esp
// 0079a5a8  68ccff8b00           push 0x8bffcc
// 0079a5ad  c644244c03           mov byte ptr [esp + 0x4c], 3
// 0079a5b2  ff1508fd8900         call dword ptr [0x89fd08]
// 0079a5b8  8bcf                 mov ecx, edi
// 0079a5ba  c644244804           mov byte ptr [esp + 0x48], 4
// 0079a5bf  e8ec970000           call 0x7a3db0
// 0079a5c4  8bc8                 mov ecx, eax
// 0079a5c6  c644244800           mov byte ptr [esp + 0x48], 0
// 0079a5cb  e830c00600           call 0x806600
// 0079a5d0  51                   push ecx
// 0079a5d1  8bcc                 mov ecx, esp
// 0079a5d3  8964244c             mov dword ptr [esp + 0x4c], esp
// 0079a5d7  68f8df8f00           push 0x8fdff8
// 0079a5dc  89442454             mov dword ptr [esp + 0x54], eax
// 0079a5e0  ff1508fd8900         call dword ptr [0x89fd08]
// 0079a5e6  51                   push ecx
// 0079a5e7  8bcc                 mov ecx, esp
// 0079a5e9  8964241c             mov dword ptr [esp + 0x1c], esp
// 0079a5ed  68ccff8b00           push 0x8bffcc
// 0079a5f2  c644244c05           mov byte ptr [esp + 0x4c], 5
// 0079a5f7  ff1508fd8900         call dword ptr [0x89fd08]
// 0079a5fd  8bcf                 mov ecx, edi
// 0079a5ff  c644244806           mov byte ptr [esp + 0x48], 6
// 0079a604  e8a7970000           call 0x7a3db0
// 0079a609  8bc8                 mov ecx, eax
// 0079a60b  c644244800           mov byte ptr [esp + 0x48], 0
// 0079a610  e8ebbf0600           call 0x806600
// 0079a615  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0079a619  6a00                 push 0
// 0079a61b  52                   push edx
// 0079a61c  8bd8                 mov ebx, eax
// 0079a61e  8b442458             mov eax, dword ptr [esp + 0x58]
// 0079a622  50                   push eax
// 0079a623  8d4c2424             lea ecx, [esp + 0x24]
// 0079a627  51                   push ecx
// 0079a628  56                   push esi
// 0079a629  e8427ffdff           call 0x772570
// 0079a62e  8bc8                 mov ecx, eax
// 0079a630  e86b7ffdff           call 0x7725a0
// 0079a635  53                   push ebx
// 0079a636  53                   push ebx
// 0079a637  8d542420             lea edx, [esp + 0x20]
// 0079a63b  52                   push edx
// 0079a63c  8bce                 mov ecx, esi
// 0079a63e  e887f1f7ff           call 0x7197ca
// 0079a643  6a01                 push 1
// 0079a645  8bce                 mov ecx, esi
// 0079a647  e8ba180b00           call 0x84bf06
// 0079a64c  8b1e                 mov ebx, dword ptr [esi]
// 0079a64e  33c0                 xor eax, eax
// 0079a650  39456c               cmp dword ptr [ebp + 0x6c], eax
// 0079a653  8bcf                 mov ecx, edi
// 0079a655  0f95c0               setne al
// 0079a658  83c011               add eax, 0x11
// 0079a65b  50                   push eax
// 0079a65c  e81f81f8ff           call 0x722780
// 0079a661  8b5338               mov edx, dword ptr [ebx + 0x38]
// 0079a664  50                   push eax
// 0079a665  8bce                 mov ecx, esi
// 0079a667  ffd2                 call edx
// 0079a669  8b3e                 mov edi, dword ptr [esi]
// 0079a66b  6a25                 push 0x25
// 0079a66d  8d44241c             lea eax, [esp + 0x1c]
// 0079a671  83c554               add ebp, 0x54
// 0079a674  50                   push eax
// 0079a675  8bcd                 mov ecx, ebp
// 0079a677  ff1554fb8900         call dword ptr [0x89fb54]
// 0079a67d  50                   push eax
// 0079a67e  8bcd                 mov ecx, ebp
// 0079a680  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0079a686  8b5770               mov edx, dword ptr [edi + 0x70]
// 0079a689  50                   push eax
// 0079a68a  8bce                 mov ecx, esi
// 0079a68c  ffd2                 call edx
// 0079a68e  8d4c2428             lea ecx, [esp + 0x28]
// 0079a692  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 0079a69a  e84162fdff           call 0x7708e0
// 0079a69f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0079a6a3  64890d00000000       mov dword ptr fs:[0], ecx
// 0079a6aa  59                   pop ecx
// 0079a6ab  5f                   pop edi
// 0079a6ac  5e                   pop esi
// 0079a6ad  5d                   pop ebp
// 0079a6ae  5b                   pop ebx
// 0079a6af  83c430               add esp, 0x30
// 0079a6b2  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp