// from server: 100% by auto
// roc 2008-06 0074e9e0  unit: CXTPReportInplaceList  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074e9e0
//
// 0074e9e0  56                   push esi
// 0074e9e1  57                   push edi
// 0074e9e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0074e9e6  8d47df               lea eax, [edi - 0x21]
// 0074e9e9  8bf1                 mov esi, ecx
// 0074e9eb  83f807               cmp eax, 7
// 0074e9ee  7717                 ja 0x74ea07
// 0074e9f0  0fb6807cea7400       movzx eax, byte ptr [eax + 0x74ea7c]
// 0074e9f7  ff248574ea7400       jmp dword ptr [eax*4 + 0x74ea74]
// 0074e9fe  8d4e78               lea ecx, [esi + 0x78]
// 0074ea01  ff15843e8000         call dword ptr [0x803e84]
// 0074ea07  83ff1b               cmp edi, 0x1b
// 0074ea0a  750c                 jne 0x74ea18
// 0074ea0c  8bce                 mov ecx, esi
// 0074ea0e  e89dffffff           call 0x74e9b0
// 0074ea13  5f                   pop edi
// 0074ea14  5e                   pop esi
// 0074ea15  c20c00               ret 0xc
// 0074ea18  83ff0d               cmp edi, 0xd
// 0074ea1b  744a                 je 0x74ea67
// 0074ea1d  83ff73               cmp edi, 0x73
// 0074ea20  7445                 je 0x74ea67
// 0074ea22  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0074ea25  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 0074ea2b  53                   push ebx
// 0074ea2c  6a00                 push 0
// 0074ea2e  6a00                 push 0
// 0074ea30  6888010000           push 0x188
// 0074ea35  51                   push ecx
// 0074ea36  ffd7                 call edi
// 0074ea38  8bce                 mov ecx, esi
// 0074ea3a  8bd8                 mov ebx, eax
// 0074ea3c  e82722f5ff           call 0x6a0c68
// 0074ea41  8b5620               mov edx, dword ptr [esi + 0x20]
// 0074ea44  6a00                 push 0
// 0074ea46  6a00                 push 0
// 0074ea48  6888010000           push 0x188
// 0074ea4d  52                   push edx
// 0074ea4e  ffd7                 call edi
// 0074ea50  3bd8                 cmp ebx, eax
// 0074ea52  5b                   pop ebx
// 0074ea53  7419                 je 0x74ea6e
// 0074ea55  8b16                 mov edx, dword ptr [esi]
// 0074ea57  50                   push eax
// 0074ea58  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 0074ea5e  8bce                 mov ecx, esi
// 0074ea60  ffd0                 call eax
// 0074ea62  5f                   pop edi
// 0074ea63  5e                   pop esi
// 0074ea64  c20c00               ret 0xc
// 0074ea67  8bce                 mov ecx, esi
// 0074ea69  e8f2f9ffff           call 0x74e460
// 0074ea6e  5f                   pop edi
// 0074ea6f  5e                   pop esi
// 0074ea70  c20c00               ret 0xc
// 0074ea73  90                   nop 
// library xtp-11.2.2-lib-strlen/Source\ReportControl\XTPReportInplaceControls.cpp (function ?OnKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportInplaceControls.cpp
