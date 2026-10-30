// from server: 100% by auto
// roc 2007-08 006e36d0  unit: CXTPDockingPaneSplitterContainer  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e36d0
//
// 006e36d0  83ec2c               sub esp, 0x2c
// 006e36d3  53                   push ebx
// 006e36d4  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006e36d8  55                   push ebp
// 006e36d9  57                   push edi
// 006e36da  53                   push ebx
// 006e36db  8be9                 mov ebp, ecx
// 006e36dd  e8aecfffff           call 0x6e0690
// 006e36e2  8bcd                 mov ecx, ebp
// 006e36e4  33ff                 xor edi, edi
// 006e36e6  e875aef7ff           call 0x65e560
// 006e36eb  85c0                 test eax, eax
// 006e36ed  8944243c             mov dword ptr [esp + 0x3c], eax
// 006e36f1  0f8455010000         je 0x6e384c
// 006e36f7  56                   push esi
// 006e36f8  8d442440             lea eax, [esp + 0x40]
// 006e36fc  50                   push eax
// 006e36fd  8bcd                 mov ecx, ebp
// 006e36ff  e85cc30300           call 0x71fa60
// 006e3704  8bf0                 mov esi, eax
// 006e3706  8b16                 mov edx, dword ptr [esi]
// 006e3708  8b4214               mov eax, dword ptr [edx + 0x14]
// 006e370b  8bce                 mov ecx, esi
// 006e370d  ffd0                 call eax
// 006e370f  85c0                 test eax, eax
// 006e3711  0f85ec000000         jne 0x6e3803
// 006e3717  8b16                 mov edx, dword ptr [esi]
// 006e3719  8b5210               mov edx, dword ptr [edx + 0x10]
// 006e371c  8d442414             lea eax, [esp + 0x14]
// 006e3720  83c701               add edi, 1
// 006e3723  50                   push eax
// 006e3724  8bce                 mov ecx, esi
// 006e3726  897c2414             mov dword ptr [esp + 0x14], edi
// 006e372a  ffd2                 call edx
// 006e372c  83ff01               cmp edi, 1
// 006e372f  7516                 jne 0x6e3747
// 006e3731  b90a000000           mov ecx, 0xa
// 006e3736  8d742414             lea esi, [esp + 0x14]
// 006e373a  8bfb                 mov edi, ebx
// 006e373c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006e373e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006e3742  e9bc000000           jmp 0x6e3803
// 006e3747  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 006e374a  85c9                 test ecx, ecx
// 006e374c  8d4318               lea eax, [ebx + 0x18]
// 006e374f  7543                 jne 0x6e3794
// 006e3751  8d431c               lea eax, [ebx + 0x1c]
// 006e3754  8d4c2430             lea ecx, [esp + 0x30]
// 006e3758  8b09                 mov ecx, dword ptr [ecx]
// 006e375a  0108                 add dword ptr [eax], ecx
// 006e375c  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 006e375f  85c9                 test ecx, ecx
// 006e3761  8d4320               lea eax, [ebx + 0x20]
// 006e3764  7534                 jne 0x6e379a
// 006e3766  8d4324               lea eax, [ebx + 0x24]
// 006e3769  8d4c2438             lea ecx, [esp + 0x38]
// 006e376d  8b11                 mov edx, dword ptr [ecx]
// 006e376f  0110                 add dword ptr [eax], edx
// 006e3771  8b4570               mov eax, dword ptr [ebp + 0x70]
// 006e3774  85c0                 test eax, eax
// 006e3776  8d5318               lea edx, [ebx + 0x18]
// 006e3779  7425                 je 0x6e37a0
// 006e377b  8d531c               lea edx, [ebx + 0x1c]
// 006e377e  8d4c2430             lea ecx, [esp + 0x30]
// 006e3782  8b12                 mov edx, dword ptr [edx]
// 006e3784  3b11                 cmp edx, dword ptr [ecx]
// 006e3786  7e1e                 jle 0x6e37a6
// 006e3788  85c0                 test eax, eax
// 006e378a  8d4b18               lea ecx, [ebx + 0x18]
// 006e378d  7423                 je 0x6e37b2
// 006e378f  8d4b1c               lea ecx, [ebx + 0x1c]
// 006e3792  eb1e                 jmp 0x6e37b2
// 006e3794  8d4c242c             lea ecx, [esp + 0x2c]
// 006e3798  ebbe                 jmp 0x6e3758
// 006e379a  8d4c2434             lea ecx, [esp + 0x34]
// 006e379e  ebcd                 jmp 0x6e376d
// 006e37a0  8d4c242c             lea ecx, [esp + 0x2c]
// 006e37a4  ebdc                 jmp 0x6e3782
// 006e37a6  85c0                 test eax, eax
// 006e37a8  8d4c242c             lea ecx, [esp + 0x2c]
// 006e37ac  7404                 je 0x6e37b2
// 006e37ae  8d4c2430             lea ecx, [esp + 0x30]
// 006e37b2  8b09                 mov ecx, dword ptr [ecx]
// 006e37b4  85c0                 test eax, eax
// 006e37b6  8d4318               lea eax, [ebx + 0x18]
// 006e37b9  7403                 je 0x6e37be
// 006e37bb  8d431c               lea eax, [ebx + 0x1c]
// 006e37be  8908                 mov dword ptr [eax], ecx
// 006e37c0  8b4570               mov eax, dword ptr [ebp + 0x70]
// 006e37c3  85c0                 test eax, eax
// 006e37c5  8d5320               lea edx, [ebx + 0x20]
// 006e37c8  7419                 je 0x6e37e3
// 006e37ca  8d5324               lea edx, [ebx + 0x24]
// 006e37cd  8d4c2438             lea ecx, [esp + 0x38]
// 006e37d1  8b12                 mov edx, dword ptr [edx]
// 006e37d3  3b11                 cmp edx, dword ptr [ecx]
// 006e37d5  7d12                 jge 0x6e37e9
// 006e37d7  85c0                 test eax, eax
// 006e37d9  8d4b20               lea ecx, [ebx + 0x20]
// 006e37dc  7417                 je 0x6e37f5
// 006e37de  8d4b24               lea ecx, [ebx + 0x24]
// 006e37e1  eb12                 jmp 0x6e37f5
// 006e37e3  8d4c2434             lea ecx, [esp + 0x34]
// 006e37e7  ebe8                 jmp 0x6e37d1
// 006e37e9  85c0                 test eax, eax
// 006e37eb  8d4c2434             lea ecx, [esp + 0x34]
// 006e37ef  7404                 je 0x6e37f5
// 006e37f1  8d4c2438             lea ecx, [esp + 0x38]
// 006e37f5  8b09                 mov ecx, dword ptr [ecx]
// 006e37f7  85c0                 test eax, eax
// 006e37f9  8d4320               lea eax, [ebx + 0x20]
// 006e37fc  7403                 je 0x6e3801
// 006e37fe  8d4324               lea eax, [ebx + 0x24]
// 006e3801  8908                 mov dword ptr [eax], ecx
// 006e3803  837c244000           cmp dword ptr [esp + 0x40], 0
// 006e3808  0f85eafeffff         jne 0x6e36f8
// 006e380e  85ff                 test edi, edi
// 006e3810  7e39                 jle 0x6e384b
// 006e3812  837d7000             cmp dword ptr [ebp + 0x70], 0
// 006e3816  8d7318               lea esi, [ebx + 0x18]
// 006e3819  7503                 jne 0x6e381e
// 006e381b  8d731c               lea esi, [ebx + 0x1c]
// 006e381e  8bcd                 mov ecx, ebp
// 006e3820  83c7ff               add edi, -1
// 006e3823  e828cdffff           call 0x6e0550
// 006e3828  8b4028               mov eax, dword ptr [eax + 0x28]
// 006e382b  0fafc7               imul eax, edi
// 006e382e  0106                 add dword ptr [esi], eax
// 006e3830  837d7000             cmp dword ptr [ebp + 0x70], 0
// 006e3834  8d7320               lea esi, [ebx + 0x20]
// 006e3837  7503                 jne 0x6e383c
// 006e3839  8d7324               lea esi, [ebx + 0x24]
// 006e383c  8bcd                 mov ecx, ebp
// 006e383e  e80dcdffff           call 0x6e0550
// 006e3843  8b4828               mov ecx, dword ptr [eax + 0x28]
// 006e3846  0fafcf               imul ecx, edi
// 006e3849  010e                 add dword ptr [esi], ecx
// 006e384b  5e                   pop esi
// 006e384c  5f                   pop edi
// 006e384d  5d                   pop ebp
// 006e384e  5b                   pop ebx
// 006e384f  83c42c               add esp, 0x2c
// 006e3852  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneSplitterContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
