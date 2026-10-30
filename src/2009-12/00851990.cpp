// roc 2009-12 00851990  unit: CXTPPropExchange  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851990
//
// 00851990  51                   push ecx
// 00851991  53                   push ebx
// 00851992  57                   push edi
// 00851993  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00851997  8bd9                 mov ebx, ecx
// 00851999  85ff                 test edi, edi
// 0085199b  0f84a9000000         je 0x851a4a
// 008519a1  8b4724               mov eax, dword ptr [edi + 0x24]
// 008519a4  56                   push esi
// 008519a5  50                   push eax
// 008519a6  e8c1500d00           call 0x926a6c
// 008519ab  50                   push eax
// 008519ac  e88d22faff           call 0x7f3c3e
// 008519b1  8bf0                 mov esi, eax
// 008519b3  83c408               add esp, 8
// 008519b6  85f6                 test esi, esi
// 008519b8  0f848b000000         je 0x851a49
// 008519be  837b2800             cmp dword ptr [ebx + 0x28], 0
// 008519c2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008519ca  7539                 jne 0x851a05
// 008519cc  8bcf                 mov ecx, edi
// 008519ce  e8894b0d00           call 0x92655c
// 008519d3  8b06                 mov eax, dword ptr [esi]
// 008519d5  8b5014               mov edx, dword ptr [eax + 0x14]
// 008519d8  8bce                 mov ecx, esi
// 008519da  ffd2                 call edx
// 008519dc  8bce                 mov ecx, esi
// 008519de  8944240c             mov dword ptr [esp + 0xc], eax
// 008519e2  e89f4b0d00           call 0x926586
// 008519e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 008519eb  89442418             mov dword ptr [esp + 0x18], eax
// 008519ef  8d44240c             lea eax, [esp + 0xc]
// 008519f3  50                   push eax
// 008519f4  8d4c241c             lea ecx, [esp + 0x1c]
// 008519f8  51                   push ecx
// 008519f9  52                   push edx
// 008519fa  53                   push ebx
// 008519fb  e8e0f1ffff           call 0x850be0
// 00851a00  83c410               add esp, 0x10
// 00851a03  eb0b                 jmp 0x851a10
// 00851a05  8bce                 mov ecx, esi
// 00851a07  e87a4b0d00           call 0x926586
// 00851a0c  89442418             mov dword ptr [esp + 0x18], eax
// 00851a10  8bcf                 mov ecx, edi
// 00851a12  e8974d0d00           call 0x9267ae
// 00851a17  8b06                 mov eax, dword ptr [esi]
// 00851a19  8b5054               mov edx, dword ptr [eax + 0x54]
// 00851a1c  8bce                 mov ecx, esi
// 00851a1e  ffd2                 call edx
// 00851a20  8b442418             mov eax, dword ptr [esp + 0x18]
// 00851a24  50                   push eax
// 00851a25  ff1540b79800         call dword ptr [0x98b740]
// 00851a2b  8b16                 mov edx, dword ptr [esi]
// 00851a2d  8b4204               mov eax, dword ptr [edx + 4]
// 00851a30  83c404               add esp, 4
// 00851a33  6a01                 push 1
// 00851a35  8bce                 mov ecx, esi
// 00851a37  ffd0                 call eax
// 00851a39  8bcf                 mov ecx, edi
// 00851a3b  e8344b0d00           call 0x926574
// 00851a40  57                   push edi
// 00851a41  e8141efaff           call 0x7f385a
// 00851a46  83c404               add esp, 4
// 00851a49  5e                   pop esi
// 00851a4a  5f                   pop edi
// 00851a4b  5b                   pop ebx
// 00851a4c  59                   pop ecx
// 00851a4d  c20800               ret 8
// copied from an identical function in another client (function ?ReleaseArchive@CXTPPropExchange@@UAEXPBDPAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp