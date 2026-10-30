// roc 2009-12 008a2ac0  unit: CXTPReportInplaceList  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2ac0
//
// 008a2ac0  56                   push esi
// 008a2ac1  57                   push edi
// 008a2ac2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a2ac6  8d47df               lea eax, [edi - 0x21]
// 008a2ac9  8bf1                 mov esi, ecx
// 008a2acb  83f807               cmp eax, 7
// 008a2ace  7717                 ja 0x8a2ae7
// 008a2ad0  0fb6805c2b8a00       movzx eax, byte ptr [eax + 0x8a2b5c]
// 008a2ad7  ff2485542b8a00       jmp dword ptr [eax*4 + 0x8a2b54]
// 008a2ade  8d4e78               lea ecx, [esi + 0x78]
// 008a2ae1  ff1590d69800         call dword ptr [0x98d690]
// 008a2ae7  83ff1b               cmp edi, 0x1b
// 008a2aea  750c                 jne 0x8a2af8
// 008a2aec  8bce                 mov ecx, esi
// 008a2aee  e89dffffff           call 0x8a2a90
// 008a2af3  5f                   pop edi
// 008a2af4  5e                   pop esi
// 008a2af5  c20c00               ret 0xc
// 008a2af8  83ff0d               cmp edi, 0xd
// 008a2afb  744a                 je 0x8a2b47
// 008a2afd  83ff73               cmp edi, 0x73
// 008a2b00  7445                 je 0x8a2b47
// 008a2b02  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a2b05  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008a2b0b  53                   push ebx
// 008a2b0c  6a00                 push 0
// 008a2b0e  6a00                 push 0
// 008a2b10  6888010000           push 0x188
// 008a2b15  51                   push ecx
// 008a2b16  ffd7                 call edi
// 008a2b18  8bce                 mov ecx, esi
// 008a2b1a  8bd8                 mov ebx, eax
// 008a2b1c  e80f13f5ff           call 0x7f3e30
// 008a2b21  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a2b24  6a00                 push 0
// 008a2b26  6a00                 push 0
// 008a2b28  6888010000           push 0x188
// 008a2b2d  52                   push edx
// 008a2b2e  ffd7                 call edi
// 008a2b30  3bd8                 cmp ebx, eax
// 008a2b32  5b                   pop ebx
// 008a2b33  7419                 je 0x8a2b4e
// 008a2b35  8b16                 mov edx, dword ptr [esi]
// 008a2b37  50                   push eax
// 008a2b38  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 008a2b3e  8bce                 mov ecx, esi
// 008a2b40  ffd0                 call eax
// 008a2b42  5f                   pop edi
// 008a2b43  5e                   pop esi
// 008a2b44  c20c00               ret 0xc
// 008a2b47  8bce                 mov ecx, esi
// 008a2b49  e8f2f9ffff           call 0x8a2540
// 008a2b4e  5f                   pop edi
// 008a2b4f  5e                   pop esi
// 008a2b50  c20c00               ret 0xc
// 008a2b53  90                   nop 
// 008a2b54  de2a                 fisubr word ptr [edx]
// 008a2b56  8a00                 mov al, byte ptr [eax]
// 008a2b58  e72a                 out 0x2a, eax
// 008a2b5a  8a00                 mov al, byte ptr [eax]
// 008a2b5c  0000                 add byte ptr [eax], al
// 008a2b5e  0000                 add byte ptr [eax], al
// 008a2b60  0100                 add dword ptr [eax], eax
// 008a2b62  0100                 add dword ptr [eax], eax
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp