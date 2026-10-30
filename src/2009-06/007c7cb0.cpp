// roc 2009-06 007c7cb0  unit: CXTPReportInplaceList  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7cb0
//
// 007c7cb0  56                   push esi
// 007c7cb1  57                   push edi
// 007c7cb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007c7cb6  8d47df               lea eax, [edi - 0x21]
// 007c7cb9  8bf1                 mov esi, ecx
// 007c7cbb  83f807               cmp eax, 7
// 007c7cbe  7717                 ja 0x7c7cd7
// 007c7cc0  0fb6804c7d7c00       movzx eax, byte ptr [eax + 0x7c7d4c]
// 007c7cc7  ff2485447d7c00       jmp dword ptr [eax*4 + 0x7c7d44]
// 007c7cce  8d4e78               lea ecx, [esi + 0x78]
// 007c7cd1  ff15f4ff8900         call dword ptr [0x89fff4]
// 007c7cd7  83ff1b               cmp edi, 0x1b
// 007c7cda  750c                 jne 0x7c7ce8
// 007c7cdc  8bce                 mov ecx, esi
// 007c7cde  e89dffffff           call 0x7c7c80
// 007c7ce3  5f                   pop edi
// 007c7ce4  5e                   pop esi
// 007c7ce5  c20c00               ret 0xc
// 007c7ce8  83ff0d               cmp edi, 0xd
// 007c7ceb  744a                 je 0x7c7d37
// 007c7ced  83ff73               cmp edi, 0x73
// 007c7cf0  7445                 je 0x7c7d37
// 007c7cf2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c7cf5  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 007c7cfb  53                   push ebx
// 007c7cfc  6a00                 push 0
// 007c7cfe  6a00                 push 0
// 007c7d00  6888010000           push 0x188
// 007c7d05  51                   push ecx
// 007c7d06  ffd7                 call edi
// 007c7d08  8bce                 mov ecx, esi
// 007c7d0a  8bd8                 mov ebx, eax
// 007c7d0c  e8f712f5ff           call 0x719008
// 007c7d11  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c7d14  6a00                 push 0
// 007c7d16  6a00                 push 0
// 007c7d18  6888010000           push 0x188
// 007c7d1d  52                   push edx
// 007c7d1e  ffd7                 call edi
// 007c7d20  3bd8                 cmp ebx, eax
// 007c7d22  5b                   pop ebx
// 007c7d23  7419                 je 0x7c7d3e
// 007c7d25  8b16                 mov edx, dword ptr [esi]
// 007c7d27  50                   push eax
// 007c7d28  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 007c7d2e  8bce                 mov ecx, esi
// 007c7d30  ffd0                 call eax
// 007c7d32  5f                   pop edi
// 007c7d33  5e                   pop esi
// 007c7d34  c20c00               ret 0xc
// 007c7d37  8bce                 mov ecx, esi
// 007c7d39  e8f2f9ffff           call 0x7c7730
// 007c7d3e  5f                   pop edi
// 007c7d3f  5e                   pop esi
// 007c7d40  c20c00               ret 0xc
// 007c7d43  90                   nop 
// 007c7d44  ce                   into 
// 007c7d45  7c7c                 jl 0x7c7dc3
// 007c7d47  00d7                 add bh, dl
// 007c7d49  7c7c                 jl 0x7c7dc7
// 007c7d4b  0000                 add byte ptr [eax], al
// 007c7d4d  0000                 add byte ptr [eax], al
// 007c7d4f  0001                 add byte ptr [ecx], al
// 007c7d51  0001                 add byte ptr [ecx], al
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportInplaceList@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportInplaceControls.cpp