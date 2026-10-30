// roc 2009-12 00825f90  unit: CXTPReportControl  size: 577 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00825f90
//
// 00825f90  6aff                 push -1
// 00825f92  6800b59500           push 0x95b500
// 00825f97  64a100000000         mov eax, dword ptr fs:[0]
// 00825f9d  50                   push eax
// 00825f9e  83ec34               sub esp, 0x34
// 00825fa1  53                   push ebx
// 00825fa2  55                   push ebp
// 00825fa3  56                   push esi
// 00825fa4  57                   push edi
// 00825fa5  a10052b600           mov eax, dword ptr [0xb65200]
// 00825faa  33c4                 xor eax, esp
// 00825fac  50                   push eax
// 00825fad  8d442448             lea eax, [esp + 0x48]
// 00825fb1  64a300000000         mov dword ptr fs:[0], eax
// 00825fb7  8bf1                 mov esi, ecx
// 00825fb9  e872defcff           call 0x7f3e30
// 00825fbe  8bce                 mov ecx, esi
// 00825fc0  e83ddcfcff           call 0x7f3c02
// 00825fc5  33db                 xor ebx, ebx
// 00825fc7  53                   push ebx
// 00825fc8  8bce                 mov ecx, esi
// 00825fca  e861ebffff           call 0x824b30
// 00825fcf  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 00825fd5  3bcb                 cmp ecx, ebx
// 00825fd7  7411                 je 0x825fea
// 00825fd9  8b542460             mov edx, dword ptr [esp + 0x60]
// 00825fdd  8b01                 mov eax, dword ptr [ecx]
// 00825fdf  8b4064               mov eax, dword ptr [eax + 0x64]
// 00825fe2  52                   push edx
// 00825fe3  8b542460             mov edx, dword ptr [esp + 0x60]
// 00825fe7  52                   push edx
// 00825fe8  ffd0                 call eax
// 00825fea  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00825fee  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00825ff2  51                   push ecx
// 00825ff3  52                   push edx
// 00825ff4  8bce                 mov ecx, esi
// 00825ff6  e8e575ffff           call 0x81d5e0
// 00825ffb  8bf8                 mov edi, eax
// 00825ffd  3bfb                 cmp edi, ebx
// 00825fff  0f84b6010000         je 0x8261bb
// 00826005  8d4c241c             lea ecx, [esp + 0x1c]
// 00826009  e85246ffff           call 0x81a660
// 0082600e  c744241c4c4d9f00     mov dword ptr [esp + 0x1c], 0x9f4d4c
// 00826016  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0082601a  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0082601e  8b17                 mov edx, dword ptr [edi]
// 00826020  8d6c2428             lea ebp, [esp + 0x28]
// 00826024  55                   push ebp
// 00826025  8d6c2434             lea ebp, [esp + 0x34]
// 00826029  55                   push ebp
// 0082602a  51                   push ecx
// 0082602b  8944244c             mov dword ptr [esp + 0x4c], eax
// 0082602f  894c2450             mov dword ptr [esp + 0x50], ecx
// 00826033  50                   push eax
// 00826034  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 0082603a  8bcf                 mov ecx, edi
// 0082603c  895c2460             mov dword ptr [esp + 0x60], ebx
// 00826040  89742430             mov dword ptr [esp + 0x30], esi
// 00826044  897c2434             mov dword ptr [esp + 0x34], edi
// 00826048  895c2438             mov dword ptr [esp + 0x38], ebx
// 0082604c  ffd0                 call eax
// 0082604e  8b17                 mov edx, dword ptr [edi]
// 00826050  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00826056  8944242c             mov dword ptr [esp + 0x2c], eax
// 0082605a  8d44241c             lea eax, [esp + 0x1c]
// 0082605e  50                   push eax
// 0082605f  8bcf                 mov ecx, edi
// 00826061  ffd2                 call edx
// 00826063  85c0                 test eax, eax
// 00826065  0f853f010000         jne 0x8261aa
// 0082606b  8b4770               mov eax, dword ptr [edi + 0x70]
// 0082606e  83f801               cmp eax, 1
// 00826071  750c                 jne 0x82607f
// 00826073  399e08020000         cmp dword ptr [esi + 0x208], ebx
// 00826079  0f842b010000         je 0x8261aa
// 0082607f  83f802               cmp eax, 2
// 00826082  750c                 jne 0x826090
// 00826084  399e0c020000         cmp dword ptr [esi + 0x20c], ebx
// 0082608a  0f841a010000         je 0x8261aa
// 00826090  8b2d30cc9800         mov ebp, dword ptr [0x98cc30]
// 00826096  6a11                 push 0x11
// 00826098  ffd5                 call ebp
// 0082609a  6685c0               test ax, ax
// 0082609d  6a10                 push 0x10
// 0082609f  0f9c44241a           setl byte ptr [esp + 0x1a]
// 008260a4  ffd5                 call ebp
// 008260a6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008260aa  6685c0               test ax, ax
// 008260ad  8bce                 mov ecx, esi
// 008260af  0f9c442417           setl byte ptr [esp + 0x17]
// 008260b4  bb01000000           mov ebx, 1
// 008260b9  89742418             mov dword ptr [esp + 0x18], esi
// 008260bd  e83e64ffff           call 0x81c500
// 008260c2  83bed801000000       cmp dword ptr [esi + 0x1d8], 0
// 008260c9  885c2450             mov byte ptr [esp + 0x50], bl
// 008260cd  743a                 je 0x826109
// 008260cf  85ed                 test ebp, ebp
// 008260d1  7436                 je 0x826109
// 008260d3  8b07                 mov eax, dword ptr [edi]
// 008260d5  8b5060               mov edx, dword ptr [eax + 0x60]
// 008260d8  8bcf                 mov ecx, edi
// 008260da  ffd2                 call edx
// 008260dc  85c0                 test eax, eax
// 008260de  7429                 je 0x826109
// 008260e0  8b07                 mov eax, dword ptr [edi]
// 008260e2  8b5060               mov edx, dword ptr [eax + 0x60]
// 008260e5  55                   push ebp
// 008260e6  8bcf                 mov ecx, edi
// 008260e8  ffd2                 call edx
// 008260ea  8bc8                 mov ecx, eax
// 008260ec  e84f4c0000           call 0x82ad40
// 008260f1  8b10                 mov edx, dword ptr [eax]
// 008260f3  8bc8                 mov ecx, eax
// 008260f5  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 008260fb  ffd0                 call eax
// 008260fd  85c0                 test eax, eax
// 008260ff  7408                 je 0x826109
// 00826101  55                   push ebp
// 00826102  8bce                 mov ecx, esi
// 00826104  e81799ffff           call 0x81fa20
// 00826109  8b17                 mov edx, dword ptr [edi]
// 0082610b  8b4274               mov eax, dword ptr [edx + 0x74]
// 0082610e  8bcf                 mov ecx, edi
// 00826110  ffd0                 call eax
// 00826112  85c0                 test eax, eax
// 00826114  7416                 je 0x82612c
// 00826116  807c241600           cmp byte ptr [esp + 0x16], 0
// 0082611b  750f                 jne 0x82612c
// 0082611d  807c241700           cmp byte ptr [esp + 0x17], 0
// 00826122  7508                 jne 0x82612c
// 00826124  89bea4020000         mov dword ptr [esi + 0x2a4], edi
// 0082612a  eb16                 jmp 0x826142
// 0082612c  0fb64c2416           movzx ecx, byte ptr [esp + 0x16]
// 00826131  0fb6542417           movzx edx, byte ptr [esp + 0x17]
// 00826136  51                   push ecx
// 00826137  52                   push edx
// 00826138  57                   push edi
// 00826139  8bce                 mov ecx, esi
// 0082613b  e8c0f9ffff           call 0x825b00
// 00826140  8bd8                 mov ebx, eax
// 00826142  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 00826148  8b6940               mov ebp, dword ptr [ecx + 0x40]
// 0082614b  85db                 test ebx, ebx
// 0082614d  7431                 je 0x826180
// 0082614f  807c241600           cmp byte ptr [esp + 0x16], 0
// 00826154  742a                 je 0x826180
// 00826156  83be0002000000       cmp dword ptr [esi + 0x200], 0
// 0082615d  7421                 je 0x826180
// 0082615f  57                   push edi
// 00826160  e88b890000           call 0x82eaf0
// 00826165  85ed                 test ebp, ebp
// 00826167  7517                 jne 0x826180
// 00826169  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0082616f  396840               cmp dword ptr [eax + 0x40], ebp
// 00826172  740c                 je 0x826180
// 00826174  8b16                 mov edx, dword ptr [esi]
// 00826176  8b82dc010000         mov eax, dword ptr [edx + 0x1dc]
// 0082617c  8bce                 mov ecx, esi
// 0082617e  ffd0                 call eax
// 00826180  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00826184  8b542460             mov edx, dword ptr [esp + 0x60]
// 00826188  898e38020000         mov dword ptr [esi + 0x238], ecx
// 0082618e  8bce                 mov ecx, esi
// 00826190  89963c020000         mov dword ptr [esi + 0x23c], edx
// 00826196  c7864002000001000000 mov dword ptr [esi + 0x240], 1
// 008261a0  c644245000           mov byte ptr [esp + 0x50], 0
// 008261a5  e846ccffff           call 0x822df0
// 008261aa  8d4c241c             lea ecx, [esp + 0x1c]
// 008261ae  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 008261b6  e8e53effff           call 0x81a0a0
// 008261bb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008261bf  64890d00000000       mov dword ptr fs:[0], ecx
// 008261c6  59                   pop ecx
// 008261c7  5f                   pop edi
// 008261c8  5e                   pop esi
// 008261c9  5d                   pop ebp
// 008261ca  5b                   pop ebx
// 008261cb  83c440               add esp, 0x40
// 008261ce  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPReportControl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp