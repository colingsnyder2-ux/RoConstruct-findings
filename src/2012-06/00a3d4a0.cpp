// roc 2012-06 00a3d4a0  unit: CXTPDockingPaneSplitterContainer  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d4a0
//
// 00a3d4a0  83ec2c               sub esp, 0x2c
// 00a3d4a3  53                   push ebx
// 00a3d4a4  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00a3d4a8  55                   push ebp
// 00a3d4a9  57                   push edi
// 00a3d4aa  53                   push ebx
// 00a3d4ab  8be9                 mov ebp, ecx
// 00a3d4ad  e81eceffff           call 0xa3a2d0
// 00a3d4b2  8bcd                 mov ecx, ebp
// 00a3d4b4  33ff                 xor edi, edi
// 00a3d4b6  e8b5cafaff           call 0x9e9f70
// 00a3d4bb  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a3d4bf  85c0                 test eax, eax
// 00a3d4c1  0f8451010000         je 0xa3d618
// 00a3d4c7  56                   push esi
// 00a3d4c8  8d442440             lea eax, [esp + 0x40]
// 00a3d4cc  50                   push eax
// 00a3d4cd  8bcd                 mov ecx, ebp
// 00a3d4cf  e87cb40300           call 0xa78950
// 00a3d4d4  8bf0                 mov esi, eax
// 00a3d4d6  8b16                 mov edx, dword ptr [esi]
// 00a3d4d8  8b4214               mov eax, dword ptr [edx + 0x14]
// 00a3d4db  8bce                 mov ecx, esi
// 00a3d4dd  ffd0                 call eax
// 00a3d4df  85c0                 test eax, eax
// 00a3d4e1  0f85ea000000         jne 0xa3d5d1
// 00a3d4e7  8b16                 mov edx, dword ptr [esi]
// 00a3d4e9  8b5210               mov edx, dword ptr [edx + 0x10]
// 00a3d4ec  8d442414             lea eax, [esp + 0x14]
// 00a3d4f0  47                   inc edi
// 00a3d4f1  50                   push eax
// 00a3d4f2  8bce                 mov ecx, esi
// 00a3d4f4  897c2414             mov dword ptr [esp + 0x14], edi
// 00a3d4f8  ffd2                 call edx
// 00a3d4fa  83ff01               cmp edi, 1
// 00a3d4fd  7516                 jne 0xa3d515
// 00a3d4ff  b90a000000           mov ecx, 0xa
// 00a3d504  8d742414             lea esi, [esp + 0x14]
// 00a3d508  8bfb                 mov edi, ebx
// 00a3d50a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00a3d50c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a3d510  e9bc000000           jmp 0xa3d5d1
// 00a3d515  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 00a3d518  8d4318               lea eax, [ebx + 0x18]
// 00a3d51b  85c9                 test ecx, ecx
// 00a3d51d  7543                 jne 0xa3d562
// 00a3d51f  8d431c               lea eax, [ebx + 0x1c]
// 00a3d522  8d4c2430             lea ecx, [esp + 0x30]
// 00a3d526  8b09                 mov ecx, dword ptr [ecx]
// 00a3d528  0108                 add dword ptr [eax], ecx
// 00a3d52a  8b4d70               mov ecx, dword ptr [ebp + 0x70]
// 00a3d52d  8d4320               lea eax, [ebx + 0x20]
// 00a3d530  85c9                 test ecx, ecx
// 00a3d532  7534                 jne 0xa3d568
// 00a3d534  8d4324               lea eax, [ebx + 0x24]
// 00a3d537  8d4c2438             lea ecx, [esp + 0x38]
// 00a3d53b  8b11                 mov edx, dword ptr [ecx]
// 00a3d53d  0110                 add dword ptr [eax], edx
// 00a3d53f  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00a3d542  8d5318               lea edx, [ebx + 0x18]
// 00a3d545  85c0                 test eax, eax
// 00a3d547  7425                 je 0xa3d56e
// 00a3d549  8d531c               lea edx, [ebx + 0x1c]
// 00a3d54c  8d4c2430             lea ecx, [esp + 0x30]
// 00a3d550  8b12                 mov edx, dword ptr [edx]
// 00a3d552  3b11                 cmp edx, dword ptr [ecx]
// 00a3d554  7e1e                 jle 0xa3d574
// 00a3d556  8d4b18               lea ecx, [ebx + 0x18]
// 00a3d559  85c0                 test eax, eax
// 00a3d55b  7423                 je 0xa3d580
// 00a3d55d  8d4b1c               lea ecx, [ebx + 0x1c]
// 00a3d560  eb1e                 jmp 0xa3d580
// 00a3d562  8d4c242c             lea ecx, [esp + 0x2c]
// 00a3d566  ebbe                 jmp 0xa3d526
// 00a3d568  8d4c2434             lea ecx, [esp + 0x34]
// 00a3d56c  ebcd                 jmp 0xa3d53b
// 00a3d56e  8d4c242c             lea ecx, [esp + 0x2c]
// 00a3d572  ebdc                 jmp 0xa3d550
// 00a3d574  8d4c242c             lea ecx, [esp + 0x2c]
// 00a3d578  85c0                 test eax, eax
// 00a3d57a  7404                 je 0xa3d580
// 00a3d57c  8d4c2430             lea ecx, [esp + 0x30]
// 00a3d580  8b09                 mov ecx, dword ptr [ecx]
// 00a3d582  85c0                 test eax, eax
// 00a3d584  8d4318               lea eax, [ebx + 0x18]
// 00a3d587  7403                 je 0xa3d58c
// 00a3d589  8d431c               lea eax, [ebx + 0x1c]
// 00a3d58c  8908                 mov dword ptr [eax], ecx
// 00a3d58e  8b4570               mov eax, dword ptr [ebp + 0x70]
// 00a3d591  8d5320               lea edx, [ebx + 0x20]
// 00a3d594  85c0                 test eax, eax
// 00a3d596  7419                 je 0xa3d5b1
// 00a3d598  8d5324               lea edx, [ebx + 0x24]
// 00a3d59b  8d4c2438             lea ecx, [esp + 0x38]
// 00a3d59f  8b12                 mov edx, dword ptr [edx]
// 00a3d5a1  3b11                 cmp edx, dword ptr [ecx]
// 00a3d5a3  7d12                 jge 0xa3d5b7
// 00a3d5a5  8d4b20               lea ecx, [ebx + 0x20]
// 00a3d5a8  85c0                 test eax, eax
// 00a3d5aa  7417                 je 0xa3d5c3
// 00a3d5ac  8d4b24               lea ecx, [ebx + 0x24]
// 00a3d5af  eb12                 jmp 0xa3d5c3
// 00a3d5b1  8d4c2434             lea ecx, [esp + 0x34]
// 00a3d5b5  ebe8                 jmp 0xa3d59f
// 00a3d5b7  8d4c2434             lea ecx, [esp + 0x34]
// 00a3d5bb  85c0                 test eax, eax
// 00a3d5bd  7404                 je 0xa3d5c3
// 00a3d5bf  8d4c2438             lea ecx, [esp + 0x38]
// 00a3d5c3  8b09                 mov ecx, dword ptr [ecx]
// 00a3d5c5  85c0                 test eax, eax
// 00a3d5c7  8d4320               lea eax, [ebx + 0x20]
// 00a3d5ca  7403                 je 0xa3d5cf
// 00a3d5cc  8d4324               lea eax, [ebx + 0x24]
// 00a3d5cf  8908                 mov dword ptr [eax], ecx
// 00a3d5d1  837c244000           cmp dword ptr [esp + 0x40], 0
// 00a3d5d6  0f85ecfeffff         jne 0xa3d4c8
// 00a3d5dc  85ff                 test edi, edi
// 00a3d5de  7e37                 jle 0xa3d617
// 00a3d5e0  837d7000             cmp dword ptr [ebp + 0x70], 0
// 00a3d5e4  8d7318               lea esi, [ebx + 0x18]
// 00a3d5e7  7503                 jne 0xa3d5ec
// 00a3d5e9  8d731c               lea esi, [ebx + 0x1c]
// 00a3d5ec  8bcd                 mov ecx, ebp
// 00a3d5ee  4f                   dec edi
// 00a3d5ef  e88ccbffff           call 0xa3a180
// 00a3d5f4  8b4028               mov eax, dword ptr [eax + 0x28]
// 00a3d5f7  0fafc7               imul eax, edi
// 00a3d5fa  0106                 add dword ptr [esi], eax
// 00a3d5fc  837d7000             cmp dword ptr [ebp + 0x70], 0
// 00a3d600  8d7320               lea esi, [ebx + 0x20]
// 00a3d603  7503                 jne 0xa3d608
// 00a3d605  8d7324               lea esi, [ebx + 0x24]
// 00a3d608  8bcd                 mov ecx, ebp
// 00a3d60a  e871cbffff           call 0xa3a180
// 00a3d60f  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00a3d612  0fafcf               imul ecx, edi
// 00a3d615  010e                 add dword ptr [esi], ecx
// 00a3d617  5e                   pop esi
// 00a3d618  5f                   pop edi
// 00a3d619  5d                   pop ebp
// 00a3d61a  5b                   pop ebx
// 00a3d61b  83c42c               add esp, 0x2c
// 00a3d61e  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?GetMinMaxInfo@CXTPDockingPaneSplitterContainer@@UBEXPAUtagMINMAXINFO@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
