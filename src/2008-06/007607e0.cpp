// from server: 100% by auto
// roc 2008-06 007607e0  unit: CXTPDockingPaneSplitterContainer  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007607e0
//
// 007607e0  83ec2c               sub esp, 0x2c
// 007607e3  53                   push ebx
// 007607e4  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007607e8  55                   push ebp
// 007607e9  57                   push edi
// 007607ea  53                   push ebx
// 007607eb  8be9                 mov ebp, ecx
// 007607ed  e80eceffff           call 0x75d600
// 007607f2  8bcd                 mov ecx, ebp
// 007607f4  33ff                 xor edi, edi
// 007607f6  e875ff0300           call 0x7a0770
// 007607fb  8944243c             mov dword ptr [esp + 0x3c], eax
// 007607ff  85c0                 test eax, eax
// 00760801  0f8451010000         je 0x760958
// 00760807  56                   push esi
// 00760808  8d442440             lea eax, [esp + 0x40]
// 0076080c  50                   push eax
// 0076080d  8bcd                 mov ecx, ebp
// 0076080f  e86cff0300           call 0x7a0780
// 00760814  8bf0                 mov esi, eax
// 00760816  8b16                 mov edx, dword ptr [esi]
// 00760818  8b4214               mov eax, dword ptr [edx + 0x14]
// 0076081b  8bce                 mov ecx, esi
// 0076081d  ffd0                 call eax
// 0076081f  85c0                 test eax, eax
// 00760821  0f85ea000000         jne 0x760911
// 00760827  8b16                 mov edx, dword ptr [esi]
// 00760829  8b5210               mov edx, dword ptr [edx + 0x10]
// 0076082c  8d442414             lea eax, [esp + 0x14]
// 00760830  47                   inc edi
// 00760831  50                   push eax
// 00760832  8bce                 mov ecx, esi
// 00760834  897c2414             mov dword ptr [esp + 0x14], edi
// 00760838  ffd2                 call edx
// 0076083a  83ff01               cmp edi, 1
// 0076083d  7516                 jne 0x760855
// 0076083f  b90a000000           mov ecx, 0xa
// 00760844  8d742414             lea esi, [esp + 0x14]
// 00760848  8bfb                 mov edi, ebx
// 0076084a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0076084c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00760850  e9bc000000           jmp 0x760911
// 00760855  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 00760858  8d4318               lea eax, [ebx + 0x18]
// 0076085b  85c9                 test ecx, ecx
// 0076085d  7543                 jne 0x7608a2
// 0076085f  8d431c               lea eax, [ebx + 0x1c]
// 00760862  8d4c2430             lea ecx, [esp + 0x30]
// 00760866  8b09                 mov ecx, dword ptr [ecx]
// 00760868  0108                 add dword ptr [eax], ecx
// 0076086a  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 0076086d  8d4320               lea eax, [ebx + 0x20]
// 00760870  85c9                 test ecx, ecx
// 00760872  7534                 jne 0x7608a8
// 00760874  8d4324               lea eax, [ebx + 0x24]
// 00760877  8d4c2438             lea ecx, [esp + 0x38]
// 0076087b  8b11                 mov edx, dword ptr [ecx]
// 0076087d  0110                 add dword ptr [eax], edx
// 0076087f  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00760882  8d5318               lea edx, [ebx + 0x18]
// 00760885  85c0                 test eax, eax
// 00760887  7425                 je 0x7608ae
// 00760889  8d531c               lea edx, [ebx + 0x1c]
// 0076088c  8d4c2430             lea ecx, [esp + 0x30]
// 00760890  8b12                 mov edx, dword ptr [edx]
// 00760892  3b11                 cmp edx, dword ptr [ecx]
// 00760894  7e1e                 jle 0x7608b4
// 00760896  8d4b18               lea ecx, [ebx + 0x18]
// 00760899  85c0                 test eax, eax
// 0076089b  7423                 je 0x7608c0
// 0076089d  8d4b1c               lea ecx, [ebx + 0x1c]
// 007608a0  eb1e                 jmp 0x7608c0
// 007608a2  8d4c242c             lea ecx, [esp + 0x2c]
// 007608a6  ebbe                 jmp 0x760866
// 007608a8  8d4c2434             lea ecx, [esp + 0x34]
// 007608ac  ebcd                 jmp 0x76087b
// 007608ae  8d4c242c             lea ecx, [esp + 0x2c]
// 007608b2  ebdc                 jmp 0x760890
// 007608b4  8d4c242c             lea ecx, [esp + 0x2c]
// 007608b8  85c0                 test eax, eax
// 007608ba  7404                 je 0x7608c0
// 007608bc  8d4c2430             lea ecx, [esp + 0x30]
// 007608c0  8b09                 mov ecx, dword ptr [ecx]
// 007608c2  85c0                 test eax, eax
// 007608c4  8d4318               lea eax, [ebx + 0x18]
// 007608c7  7403                 je 0x7608cc
// 007608c9  8d431c               lea eax, [ebx + 0x1c]
// 007608cc  8908                 mov dword ptr [eax], ecx
// 007608ce  8b4570               mov eax, dword ptr [ebp + 0x70]
// 007608d1  8d5320               lea edx, [ebx + 0x20]
// 007608d4  85c0                 test eax, eax
// 007608d6  7419                 je 0x7608f1
// 007608d8  8d5324               lea edx, [ebx + 0x24]
// 007608db  8d4c2438             lea ecx, [esp + 0x38]
// 007608df  8b12                 mov edx, dword ptr [edx]
// 007608e1  3b11                 cmp edx, dword ptr [ecx]
// 007608e3  7d12                 jge 0x7608f7
// 007608e5  8d4b20               lea ecx, [ebx + 0x20]
// 007608e8  85c0                 test eax, eax
// 007608ea  7417                 je 0x760903
// 007608ec  8d4b24               lea ecx, [ebx + 0x24]
// 007608ef  eb12                 jmp 0x760903
// 007608f1  8d4c2434             lea ecx, [esp + 0x34]
// 007608f5  ebe8                 jmp 0x7608df
// 007608f7  8d4c2434             lea ecx, [esp + 0x34]
// 007608fb  85c0                 test eax, eax
// 007608fd  7404                 je 0x760903
// 007608ff  8d4c2438             lea ecx, [esp + 0x38]
// 00760903  8b09                 mov ecx, dword ptr [ecx]
// 00760905  85c0                 test eax, eax
// 00760907  8d4320               lea eax, [ebx + 0x20]
// 0076090a  7403                 je 0x76090f
// 0076090c  8d4324               lea eax, [ebx + 0x24]
// 0076090f  8908                 mov dword ptr [eax], ecx
// 00760911  837c244000           cmp dword ptr [esp + 0x40], 0
// 00760916  0f85ecfeffff         jne 0x760808
// 0076091c  85ff                 test edi, edi
// 0076091e  7e37                 jle 0x760957
// 00760920  837d7000             cmp dword ptr [ebp + 0x70], 0
// 00760924  8d7318               lea esi, [ebx + 0x18]
// 00760927  7503                 jne 0x76092c
// 00760929  8d731c               lea esi, [ebx + 0x1c]
// 0076092c  8bcd                 mov ecx, ebp
// 0076092e  4f                   dec edi
// 0076092f  e87ccbffff           call 0x75d4b0
// 00760934  8b4028               mov eax, dword ptr [eax + 0x28]
// 00760937  0fafc7               imul eax, edi
// 0076093a  0106                 add dword ptr [esi], eax
// 0076093c  837d7000             cmp dword ptr [ebp + 0x70], 0
// 00760940  8d7320               lea esi, [ebx + 0x20]
// 00760943  7503                 jne 0x760948
// 00760945  8d7324               lea esi, [ebx + 0x24]
// 00760948  8bcd                 mov ecx, ebp
// 0076094a  e861cbffff           call 0x75d4b0
// 0076094f  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00760952  0fafcf               imul ecx, edi
// 00760955  010e                 add dword ptr [esi], ecx
// 00760957  5e                   pop esi
// 00760958  5f                   pop edi
// 00760959  5d                   pop ebp
// 0076095a  5b                   pop ebx
// 0076095b  83c42c               add esp, 0x2c
// 0076095e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneSplitterContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
