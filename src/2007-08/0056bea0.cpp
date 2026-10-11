// roc 2007-08 0056bea0  unit: ArchiveBinder  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056bea0
//
// 0056bea0  83ec10               sub esp, 0x10
// 0056bea3  53                   push ebx
// 0056bea4  56                   push esi
// 0056bea5  57                   push edi
// 0056bea6  8bf9                 mov edi, ecx
// 0056bea8  8b5708               mov edx, dword ptr [edi + 8]
// 0056beab  33c0                 xor eax, eax
// 0056bead  85d2                 test edx, edx
// 0056beaf  89442410             mov dword ptr [esp + 0x10], eax
// 0056beb3  7504                 jne 0x56beb9
// 0056beb5  33c9                 xor ecx, ecx
// 0056beb7  eb08                 jmp 0x56bec1
// 0056beb9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0056bebc  2bca                 sub ecx, edx
// 0056bebe  c1f902               sar ecx, 2
// 0056bec1  85c9                 test ecx, ecx
// 0056bec3  8b5714               mov edx, dword ptr [edi + 0x14]
// 0056bec6  89542418             mov dword ptr [esp + 0x18], edx
// 0056beca  8d542410             lea edx, [esp + 0x10]
// 0056bece  894c2414             mov dword ptr [esp + 0x14], ecx
// 0056bed2  895714               mov dword ptr [edi + 0x14], edx
// 0056bed5  766a                 jbe 0x56bf41
// 0056bed7  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0056bedd  8d4900               lea ecx, [ecx]
// 0056bee0  8b5708               mov edx, dword ptr [edi + 8]
// 0056bee3  85d2                 test edx, edx
// 0056bee5  8bf0                 mov esi, eax
// 0056bee7  740c                 je 0x56bef5
// 0056bee9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0056beec  2bca                 sub ecx, edx
// 0056beee  c1f902               sar ecx, 2
// 0056bef1  3bc1                 cmp eax, ecx
// 0056bef3  7202                 jb 0x56bef7
// 0056bef5  ffd3                 call ebx
// 0056bef7  8b4708               mov eax, dword ptr [edi + 8]
// 0056befa  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0056befd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056bf01  50                   push eax
// 0056bf02  83ec28               sub esp, 0x28
// 0056bf05  8bf4                 mov esi, esp
// 0056bf07  8d542450             lea edx, [esp + 0x50]
// 0056bf0b  89642438             mov dword ptr [esp + 0x38], esp
// 0056bf0f  890e                 mov dword ptr [esi], ecx
// 0056bf11  52                   push edx
// 0056bf12  8d4e04               lea ecx, [esi + 4]
// 0056bf15  ff159ce67700         call dword ptr [0x77e69c]
// 0056bf1b  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0056bf1f  894620               mov dword ptr [esi + 0x20], eax
// 0056bf22  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0056bf26  894e24               mov dword ptr [esi + 0x24], ecx
// 0056bf29  8bcf                 mov ecx, edi
// 0056bf2b  e8e0050000           call 0x56c510
// 0056bf30  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056bf34  83c001               add eax, 1
// 0056bf37  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0056bf3b  89442410             mov dword ptr [esp + 0x10], eax
// 0056bf3f  729f                 jb 0x56bee0
// 0056bf41  8b542418             mov edx, dword ptr [esp + 0x18]
// 0056bf45  8d4c2424             lea ecx, [esp + 0x24]
// 0056bf49  895714               mov dword ptr [edi + 0x14], edx
// 0056bf4c  ff15ace67700         call dword ptr [0x77e6ac]
// 0056bf52  5f                   pop edi
// 0056bf53  5e                   pop esi
// 0056bf54  5b                   pop ebx
// 0056bf55  83c410               add esp, 0x10
// 0056bf58  c22800               ret 0x28
// library openrbx-client/App\util\standardout.cpp (function ?raise@?$Notifier@VStandardOut@RBX@@UStandardOutMessage@2@@RBX@@IBEXUStandardOutMessage@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/standardout.cpp
