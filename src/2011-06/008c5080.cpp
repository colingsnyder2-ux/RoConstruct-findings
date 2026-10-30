// from server: 100% by auto
// roc 2011-06 008c5080  unit: CXTPDockingPaneSplitterContainer  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c5080
//
// 008c5080  83ec2c               sub esp, 0x2c
// 008c5083  53                   push ebx
// 008c5084  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 008c5088  55                   push ebp
// 008c5089  57                   push edi
// 008c508a  53                   push ebx
// 008c508b  8be9                 mov ebp, ecx
// 008c508d  e81eceffff           call 0x8c1eb0
// 008c5092  8bcd                 mov ecx, ebp
// 008c5094  33ff                 xor edi, edi
// 008c5096  e8a57bf9ff           call 0x85cc40
// 008c509b  8944243c             mov dword ptr [esp + 0x3c], eax
// 008c509f  85c0                 test eax, eax
// 008c50a1  0f8451010000         je 0x8c51f8
// 008c50a7  56                   push esi
// 008c50a8  8d442440             lea eax, [esp + 0x40]
// 008c50ac  50                   push eax
// 008c50ad  8bcd                 mov ecx, ebp
// 008c50af  e87cb60300           call 0x900730
// 008c50b4  8bf0                 mov esi, eax
// 008c50b6  8b16                 mov edx, dword ptr [esi]
// 008c50b8  8b4214               mov eax, dword ptr [edx + 0x14]
// 008c50bb  8bce                 mov ecx, esi
// 008c50bd  ffd0                 call eax
// 008c50bf  85c0                 test eax, eax
// 008c50c1  0f85ea000000         jne 0x8c51b1
// 008c50c7  8b16                 mov edx, dword ptr [esi]
// 008c50c9  8b5210               mov edx, dword ptr [edx + 0x10]
// 008c50cc  8d442414             lea eax, [esp + 0x14]
// 008c50d0  47                   inc edi
// 008c50d1  50                   push eax
// 008c50d2  8bce                 mov ecx, esi
// 008c50d4  897c2414             mov dword ptr [esp + 0x14], edi
// 008c50d8  ffd2                 call edx
// 008c50da  83ff01               cmp edi, 1
// 008c50dd  7516                 jne 0x8c50f5
// 008c50df  b90a000000           mov ecx, 0xa
// 008c50e4  8d742414             lea esi, [esp + 0x14]
// 008c50e8  8bfb                 mov edi, ebx
// 008c50ea  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008c50ec  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008c50f0  e9bc000000           jmp 0x8c51b1
// 008c50f5  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 008c50f8  8d4318               lea eax, [ebx + 0x18]
// 008c50fb  85c9                 test ecx, ecx
// 008c50fd  7543                 jne 0x8c5142
// 008c50ff  8d431c               lea eax, [ebx + 0x1c]
// 008c5102  8d4c2430             lea ecx, [esp + 0x30]
// 008c5106  8b09                 mov ecx, dword ptr [ecx]
// 008c5108  0108                 add dword ptr [eax], ecx
// 008c510a  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 008c510d  8d4320               lea eax, [ebx + 0x20]
// 008c5110  85c9                 test ecx, ecx
// 008c5112  7534                 jne 0x8c5148
// 008c5114  8d4324               lea eax, [ebx + 0x24]
// 008c5117  8d4c2438             lea ecx, [esp + 0x38]
// 008c511b  8b11                 mov edx, dword ptr [ecx]
// 008c511d  0110                 add dword ptr [eax], edx
// 008c511f  8b4570               mov eax, dword ptr [ebp + 0x70]
// 008c5122  8d5318               lea edx, [ebx + 0x18]
// 008c5125  85c0                 test eax, eax
// 008c5127  7425                 je 0x8c514e
// 008c5129  8d531c               lea edx, [ebx + 0x1c]
// 008c512c  8d4c2430             lea ecx, [esp + 0x30]
// 008c5130  8b12                 mov edx, dword ptr [edx]
// 008c5132  3b11                 cmp edx, dword ptr [ecx]
// 008c5134  7e1e                 jle 0x8c5154
// 008c5136  8d4b18               lea ecx, [ebx + 0x18]
// 008c5139  85c0                 test eax, eax
// 008c513b  7423                 je 0x8c5160
// 008c513d  8d4b1c               lea ecx, [ebx + 0x1c]
// 008c5140  eb1e                 jmp 0x8c5160
// 008c5142  8d4c242c             lea ecx, [esp + 0x2c]
// 008c5146  ebbe                 jmp 0x8c5106
// 008c5148  8d4c2434             lea ecx, [esp + 0x34]
// 008c514c  ebcd                 jmp 0x8c511b
// 008c514e  8d4c242c             lea ecx, [esp + 0x2c]
// 008c5152  ebdc                 jmp 0x8c5130
// 008c5154  8d4c242c             lea ecx, [esp + 0x2c]
// 008c5158  85c0                 test eax, eax
// 008c515a  7404                 je 0x8c5160
// 008c515c  8d4c2430             lea ecx, [esp + 0x30]
// 008c5160  8b09                 mov ecx, dword ptr [ecx]
// 008c5162  85c0                 test eax, eax
// 008c5164  8d4318               lea eax, [ebx + 0x18]
// 008c5167  7403                 je 0x8c516c
// 008c5169  8d431c               lea eax, [ebx + 0x1c]
// 008c516c  8908                 mov dword ptr [eax], ecx
// 008c516e  8b4570               mov eax, dword ptr [ebp + 0x70]
// 008c5171  8d5320               lea edx, [ebx + 0x20]
// 008c5174  85c0                 test eax, eax
// 008c5176  7419                 je 0x8c5191
// 008c5178  8d5324               lea edx, [ebx + 0x24]
// 008c517b  8d4c2438             lea ecx, [esp + 0x38]
// 008c517f  8b12                 mov edx, dword ptr [edx]
// 008c5181  3b11                 cmp edx, dword ptr [ecx]
// 008c5183  7d12                 jge 0x8c5197
// 008c5185  8d4b20               lea ecx, [ebx + 0x20]
// 008c5188  85c0                 test eax, eax
// 008c518a  7417                 je 0x8c51a3
// 008c518c  8d4b24               lea ecx, [ebx + 0x24]
// 008c518f  eb12                 jmp 0x8c51a3
// 008c5191  8d4c2434             lea ecx, [esp + 0x34]
// 008c5195  ebe8                 jmp 0x8c517f
// 008c5197  8d4c2434             lea ecx, [esp + 0x34]
// 008c519b  85c0                 test eax, eax
// 008c519d  7404                 je 0x8c51a3
// 008c519f  8d4c2438             lea ecx, [esp + 0x38]
// 008c51a3  8b09                 mov ecx, dword ptr [ecx]
// 008c51a5  85c0                 test eax, eax
// 008c51a7  8d4320               lea eax, [ebx + 0x20]
// 008c51aa  7403                 je 0x8c51af
// 008c51ac  8d4324               lea eax, [ebx + 0x24]
// 008c51af  8908                 mov dword ptr [eax], ecx
// 008c51b1  837c244000           cmp dword ptr [esp + 0x40], 0
// 008c51b6  0f85ecfeffff         jne 0x8c50a8
// 008c51bc  85ff                 test edi, edi
// 008c51be  7e37                 jle 0x8c51f7
// 008c51c0  837d7000             cmp dword ptr [ebp + 0x70], 0
// 008c51c4  8d7318               lea esi, [ebx + 0x18]
// 008c51c7  7503                 jne 0x8c51cc
// 008c51c9  8d731c               lea esi, [ebx + 0x1c]
// 008c51cc  8bcd                 mov ecx, ebp
// 008c51ce  4f                   dec edi
// 008c51cf  e89ccbffff           call 0x8c1d70
// 008c51d4  8b4028               mov eax, dword ptr [eax + 0x28]
// 008c51d7  0fafc7               imul eax, edi
// 008c51da  0106                 add dword ptr [esi], eax
// 008c51dc  837d7000             cmp dword ptr [ebp + 0x70], 0
// 008c51e0  8d7320               lea esi, [ebx + 0x20]
// 008c51e3  7503                 jne 0x8c51e8
// 008c51e5  8d7324               lea esi, [ebx + 0x24]
// 008c51e8  8bcd                 mov ecx, ebp
// 008c51ea  e881cbffff           call 0x8c1d70
// 008c51ef  8b4828               mov ecx, dword ptr [eax + 0x28]
// 008c51f2  0fafcf               imul ecx, edi
// 008c51f5  010e                 add dword ptr [esi], ecx
// 008c51f7  5e                   pop esi
// 008c51f8  5f                   pop edi
// 008c51f9  5d                   pop ebp
// 008c51fa  5b                   pop ebx
// 008c51fb  83c42c               add esp, 0x2c
// 008c51fe  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneSplitterContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
