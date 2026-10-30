// from server: 100% by auto
// roc 2008-06 006ca650  unit: CXTPReportControl  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ca650
//
// 006ca650  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ca654  83ec1c               sub esp, 0x1c
// 006ca657  57                   push edi
// 006ca658  8bf9                 mov edi, ecx
// 006ca65a  85c0                 test eax, eax
// 006ca65c  7419                 je 0x6ca677
// 006ca65e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006ca662  50                   push eax
// 006ca663  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006ca667  50                   push eax
// 006ca668  51                   push ecx
// 006ca669  8bcf                 mov ecx, edi
// 006ca66b  e8201b0f00           call 0x7bc190
// 006ca670  5f                   pop edi
// 006ca671  83c41c               add esp, 0x1c
// 006ca674  c20c00               ret 0xc
// 006ca677  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ca67b  56                   push esi
// 006ca67c  8bb708010000         mov esi, dword ptr [edi + 0x108]
// 006ca682  83f807               cmp eax, 7
// 006ca685  0f872a010000         ja 0x6ca7b5
// 006ca68b  ff2485c8a76c00       jmp dword ptr [eax*4 + 0x6ca7c8]
// 006ca692  33f6                 xor esi, esi
// 006ca694  56                   push esi
// 006ca695  8bcf                 mov ecx, edi
// 006ca697  e854faffff           call 0x6ca0f0
// 006ca69c  5e                   pop esi
// 006ca69d  5f                   pop edi
// 006ca69e  83c41c               add esp, 0x1c
// 006ca6a1  c20c00               ret 0xc
// 006ca6a4  6a01                 push 1
// 006ca6a6  e88d1b0f00           call 0x7bc238
// 006ca6ab  8bf0                 mov esi, eax
// 006ca6ad  56                   push esi
// 006ca6ae  8bcf                 mov ecx, edi
// 006ca6b0  e83bfaffff           call 0x6ca0f0
// 006ca6b5  5e                   pop esi
// 006ca6b6  5f                   pop edi
// 006ca6b7  83c41c               add esp, 0x1c
// 006ca6ba  c20c00               ret 0xc
// 006ca6bd  8d46ff               lea eax, [esi - 1]
// 006ca6c0  33d2                 xor edx, edx
// 006ca6c2  85c0                 test eax, eax
// 006ca6c4  0f9ec2               setle dl
// 006ca6c7  8bcf                 mov ecx, edi
// 006ca6c9  4a                   dec edx
// 006ca6ca  23d0                 and edx, eax
// 006ca6cc  8bf2                 mov esi, edx
// 006ca6ce  56                   push esi
// 006ca6cf  e81cfaffff           call 0x6ca0f0
// 006ca6d4  5e                   pop esi
// 006ca6d5  5f                   pop edi
// 006ca6d6  83c41c               add esp, 0x1c
// 006ca6d9  c20c00               ret 0xc
// 006ca6dc  6a01                 push 1
// 006ca6de  46                   inc esi
// 006ca6df  e8541b0f00           call 0x7bc238
// 006ca6e4  3bf0                 cmp esi, eax
// 006ca6e6  0f8cc9000000         jl 0x6ca7b5
// 006ca6ec  6a01                 push 1
// 006ca6ee  8bcf                 mov ecx, edi
// 006ca6f0  e8431b0f00           call 0x7bc238
// 006ca6f5  8bf0                 mov esi, eax
// 006ca6f7  56                   push esi
// 006ca6f8  8bcf                 mov ecx, edi
// 006ca6fa  e8f1f9ffff           call 0x6ca0f0
// 006ca6ff  5e                   pop esi
// 006ca700  5f                   pop edi
// 006ca701  83c41c               add esp, 0x1c
// 006ca704  c20c00               ret 0xc
// 006ca707  6a00                 push 0
// 006ca709  56                   push esi
// 006ca70a  e8c1fbffff           call 0x6ca2d0
// 006ca70f  8bce                 mov ecx, esi
// 006ca711  2bc8                 sub ecx, eax
// 006ca713  85c9                 test ecx, ecx
// 006ca715  0f8e77ffffff         jle 0x6ca692
// 006ca71b  6a00                 push 0
// 006ca71d  56                   push esi
// 006ca71e  8bcf                 mov ecx, edi
// 006ca720  e8abfbffff           call 0x6ca2d0
// 006ca725  2bf0                 sub esi, eax
// 006ca727  56                   push esi
// 006ca728  8bcf                 mov ecx, edi
// 006ca72a  e8c1f9ffff           call 0x6ca0f0
// 006ca72f  5e                   pop esi
// 006ca730  5f                   pop edi
// 006ca731  83c41c               add esp, 0x1c
// 006ca734  c20c00               ret 0xc
// 006ca737  53                   push ebx
// 006ca738  6a01                 push 1
// 006ca73a  56                   push esi
// 006ca73b  e890fbffff           call 0x6ca2d0
// 006ca740  6a01                 push 1
// 006ca742  8bcf                 mov ecx, edi
// 006ca744  8d1c30               lea ebx, [eax + esi]
// 006ca747  e8ec1a0f00           call 0x7bc238
// 006ca74c  3bd8                 cmp ebx, eax
// 006ca74e  5b                   pop ebx
// 006ca74f  6a01                 push 1
// 006ca751  8bcf                 mov ecx, edi
// 006ca753  0f8d4dffffff         jge 0x6ca6a6
// 006ca759  56                   push esi
// 006ca75a  e871fbffff           call 0x6ca2d0
// 006ca75f  03f0                 add esi, eax
// 006ca761  56                   push esi
// 006ca762  8bcf                 mov ecx, edi
// 006ca764  e887f9ffff           call 0x6ca0f0
// 006ca769  5e                   pop esi
// 006ca76a  5f                   pop edi
// 006ca76b  83c41c               add esp, 0x1c
// 006ca76e  c20c00               ret 0xc
// 006ca771  33c0                 xor eax, eax
// 006ca773  6a17                 push 0x17
// 006ca775  8d54240c             lea edx, [esp + 0xc]
// 006ca779  52                   push edx
// 006ca77a  89442410             mov dword ptr [esp + 0x10], eax
// 006ca77e  89442414             mov dword ptr [esp + 0x14], eax
// 006ca782  6a01                 push 1
// 006ca784  8944241c             mov dword ptr [esp + 0x1c], eax
// 006ca788  89442420             mov dword ptr [esp + 0x20], eax
// 006ca78c  89442424             mov dword ptr [esp + 0x24], eax
// 006ca790  89442428             mov dword ptr [esp + 0x28], eax
// 006ca794  8944242c             mov dword ptr [esp + 0x2c], eax
// 006ca798  c74424141c000000     mov dword ptr [esp + 0x14], 0x1c
// 006ca7a0  c744241810000000     mov dword ptr [esp + 0x18], 0x10
// 006ca7a8  e8851a0f00           call 0x7bc232
// 006ca7ad  85c0                 test eax, eax
// 006ca7af  740c                 je 0x6ca7bd
// 006ca7b1  8b742420             mov esi, dword ptr [esp + 0x20]
// 006ca7b5  56                   push esi
// 006ca7b6  8bcf                 mov ecx, edi
// 006ca7b8  e833f9ffff           call 0x6ca0f0
// 006ca7bd  5e                   pop esi
// 006ca7be  5f                   pop edi
// 006ca7bf  83c41c               add esp, 0x1c
// 006ca7c2  c20c00               ret 0xc
// 006ca7c5  8d4900               lea ecx, [ecx]
// 006ca7c8  bda66c00dc           mov ebp, 0xdc006ca6
// 006ca7cd  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 006ca7ce  6c                   insb byte ptr es:[edi], dx
// 006ca7cf  0007                 add byte ptr [edi], al
// 006ca7d1  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 006ca7d2  6c                   insb byte ptr es:[edi], dx
// 006ca7d3  0037                 add byte ptr [edi], dh
// 006ca7d5  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 006ca7d6  6c                   insb byte ptr es:[edi], dx
// 006ca7d7  0071a7               add byte ptr [ecx - 0x59], dh
// 006ca7da  6c                   insb byte ptr es:[edi], dx
// 006ca7db  0071a7               add byte ptr [ecx - 0x59], dh
// 006ca7de  6c                   insb byte ptr es:[edi], dx
// 006ca7df  0092a66c00a4         add byte ptr [edx - 0x5bff935a], dl
// 006ca7e5  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 006ca7e6  6c                   insb byte ptr es:[edi], dx
// library xtp-11.2.2-lib-strlen/Source\ReportControl\XTPReportControl.cpp (function ?OnVScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportControl.cpp
