// roc 2009-12 00872cf0  unit: CXTPRibbonTheme  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00872cf0
//
// 00872cf0  6aff                 push -1
// 00872cf2  6852ff9500           push 0x95ff52
// 00872cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00872cfd  50                   push eax
// 00872cfe  83ec34               sub esp, 0x34
// 00872d01  53                   push ebx
// 00872d02  55                   push ebp
// 00872d03  56                   push esi
// 00872d04  57                   push edi
// 00872d05  a10052b600           mov eax, dword ptr [0xb65200]
// 00872d0a  33c4                 xor eax, esp
// 00872d0c  50                   push eax
// 00872d0d  8d442448             lea eax, [esp + 0x48]
// 00872d11  64a300000000         mov dword ptr fs:[0], eax
// 00872d17  8bf1                 mov esi, ecx
// 00872d19  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00872d1d  85c0                 test eax, eax
// 00872d1f  7408                 je 0x872d29
// 00872d21  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00872d27  eb02                 jmp 0x872d2b
// 00872d29  33c0                 xor eax, eax
// 00872d2b  85c0                 test eax, eax
// 00872d2d  7473                 je 0x872da2
// 00872d2f  50                   push eax
// 00872d30  8d442418             lea eax, [esp + 0x18]
// 00872d34  50                   push eax
// 00872d35  e866e3ffff           call 0x8710a0
// 00872d3a  83c408               add esp, 8
// 00872d3d  8bc8                 mov ecx, eax
// 00872d3f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00872d47  ff1580de9800         call dword ptr [0x98de80]
// 00872d4d  50                   push eax
// 00872d4e  8d4c2460             lea ecx, [esp + 0x60]
// 00872d52  689c12a000           push 0xa0129c
// 00872d57  51                   push ecx
// 00872d58  e8d3e2ffff           call 0x871030
// 00872d5d  83c40c               add esp, 0xc
// 00872d60  8bc8                 mov ecx, eax
// 00872d62  c644245001           mov byte ptr [esp + 0x50], 1
// 00872d67  ff1580de9800         call dword ptr [0x98de80]
// 00872d6d  50                   push eax
// 00872d6e  8bce                 mov ecx, esi
// 00872d70  e88bbf0000           call 0x87ed00
// 00872d75  8d4c245c             lea ecx, [esp + 0x5c]
// 00872d79  8bf0                 mov esi, eax
// 00872d7b  ff15c0de9800         call dword ptr [0x98dec0]
// 00872d81  8d4c2414             lea ecx, [esp + 0x14]
// 00872d85  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00872d8d  ff15c0de9800         call dword ptr [0x98dec0]
// 00872d93  85f6                 test esi, esi
// 00872d95  7479                 je 0x872e10
// 00872d97  6a01                 push 1
// 00872d99  6a00                 push 0
// 00872d9b  8d542430             lea edx, [esp + 0x30]
// 00872d9f  52                   push edx
// 00872da0  eb19                 jmp 0x872dbb
// 00872da2  688c12a000           push 0xa0128c
// 00872da7  e854bf0000           call 0x87ed00
// 00872dac  8bf0                 mov esi, eax
// 00872dae  85f6                 test esi, esi
// 00872db0  745e                 je 0x872e10
// 00872db2  6a01                 push 1
// 00872db4  6a00                 push 0
// 00872db6  8d442440             lea eax, [esp + 0x40]
// 00872dba  50                   push eax
// 00872dbb  bd08000000           mov ebp, 8
// 00872dc0  8bce                 mov ecx, esi
// 00872dc2  8bdd                 mov ebx, ebp
// 00872dc4  8bfd                 mov edi, ebp
// 00872dc6  896c2430             mov dword ptr [esp + 0x30], ebp
// 00872dca  e8f1da0600           call 0x8e08c0
// 00872dcf  83ec10               sub esp, 0x10
// 00872dd2  8bcc                 mov ecx, esp
// 00872dd4  8939                 mov dword ptr [ecx], edi
// 00872dd6  895904               mov dword ptr [ecx + 4], ebx
// 00872dd9  896908               mov dword ptr [ecx + 8], ebp
// 00872ddc  83ec10               sub esp, 0x10
// 00872ddf  8bd5                 mov edx, ebp
// 00872de1  89510c               mov dword ptr [ecx + 0xc], edx
// 00872de4  8b10                 mov edx, dword ptr [eax]
// 00872de6  8bcc                 mov ecx, esp
// 00872de8  8911                 mov dword ptr [ecx], edx
// 00872dea  8b5004               mov edx, dword ptr [eax + 4]
// 00872ded  895104               mov dword ptr [ecx + 4], edx
// 00872df0  8b5008               mov edx, dword ptr [eax + 8]
// 00872df3  8b400c               mov eax, dword ptr [eax + 0xc]
// 00872df6  895108               mov dword ptr [ecx + 8], edx
// 00872df9  8b542478             mov edx, dword ptr [esp + 0x78]
// 00872dfd  89410c               mov dword ptr [ecx + 0xc], eax
// 00872e00  8d8c2480000000       lea ecx, [esp + 0x80]
// 00872e07  51                   push ecx
// 00872e08  52                   push edx
// 00872e09  8bce                 mov ecx, esi
// 00872e0b  e880d30600           call 0x8e0190
// 00872e10  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00872e14  64890d00000000       mov dword ptr fs:[0], ecx
// 00872e1b  59                   pop ecx
// 00872e1c  5f                   pop edi
// 00872e1d  5e                   pop esi
// 00872e1e  5d                   pop ebp
// 00872e1f  5b                   pop ebx
// 00872e20  83c440               add esp, 0x40
// 00872e23  c21800               ret 0x18
// copied from an identical function in another client (function ?FillGroupRect@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonTab@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp