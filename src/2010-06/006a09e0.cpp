// roc 2010-06 006a09e0  unit: UString_sink::?$stream_buffer  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a09e0
//
// 006a09e0  51                   push ecx
// 006a09e1  56                   push esi
// 006a09e2  8bf1                 mov esi, ecx
// 006a09e4  8b4620               mov eax, dword ptr [esi + 0x20]
// 006a09e7  833800               cmp dword ptr [eax], 0
// 006a09ea  7507                 jne 0x6a09f3
// 006a09ec  8b16                 mov edx, dword ptr [esi]
// 006a09ee  8b4254               mov eax, dword ptr [edx + 0x54]
// 006a09f1  ffd0                 call eax
// 006a09f3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a09f6  8b01                 mov eax, dword ptr [ecx]
// 006a09f8  8b5630               mov edx, dword ptr [esi + 0x30]
// 006a09fb  8b0a                 mov ecx, dword ptr [edx]
// 006a09fd  03c8                 add ecx, eax
// 006a09ff  3bc1                 cmp eax, ecx
// 006a0a01  730b                 jae 0x6a0a0e
// 006a0a03  8b5620               mov edx, dword ptr [esi + 0x20]
// 006a0a06  8b02                 mov eax, dword ptr [edx]
// 006a0a08  0fb600               movzx eax, byte ptr [eax]
// 006a0a0b  5e                   pop esi
// 006a0a0c  59                   pop ecx
// 006a0a0d  c3                   ret 
// 006a0a0e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a0a11  8b01                 mov eax, dword ptr [ecx]
// 006a0a13  8b5610               mov edx, dword ptr [esi + 0x10]
// 006a0a16  8bc8                 mov ecx, eax
// 006a0a18  2b0a                 sub ecx, dword ptr [edx]
// 006a0a1a  53                   push ebx
// 006a0a1b  394e54               cmp dword ptr [esi + 0x54], ecx
// 006a0a1e  8d5e54               lea ebx, [esi + 0x54]
// 006a0a21  894c2408             mov dword ptr [esp + 8], ecx
// 006a0a25  57                   push edi
// 006a0a26  8bcb                 mov ecx, ebx
// 006a0a28  7c04                 jl 0x6a0a2e
// 006a0a2a  8d4c240c             lea ecx, [esp + 0xc]
// 006a0a2e  8b39                 mov edi, dword ptr [ecx]
// 006a0a30  85ff                 test edi, edi
// 006a0a32  7416                 je 0x6a0a4a
// 006a0a34  2bc7                 sub eax, edi
// 006a0a36  57                   push edi
// 006a0a37  50                   push eax
// 006a0a38  8b464c               mov eax, dword ptr [esi + 0x4c]
// 006a0a3b  2bc7                 sub eax, edi
// 006a0a3d  0303                 add eax, dword ptr [ebx]
// 006a0a3f  57                   push edi
// 006a0a40  50                   push eax
// 006a0a41  ff1580a89e00         call dword ptr [0x9ea880]
// 006a0a47  83c410               add esp, 0x10
// 006a0a4a  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006a0a4d  8b13                 mov edx, dword ptr [ebx]
// 006a0a4f  8d0411               lea eax, [ecx + edx]
// 006a0a52  8b5610               mov edx, dword ptr [esi + 0x10]
// 006a0a55  8bc8                 mov ecx, eax
// 006a0a57  2bcf                 sub ecx, edi
// 006a0a59  890a                 mov dword ptr [edx], ecx
// 006a0a5b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006a0a5e  8901                 mov dword ptr [ecx], eax
// 006a0a60  8bd0                 mov edx, eax
// 006a0a62  2bd0                 sub edx, eax
// 006a0a64  8b4630               mov eax, dword ptr [esi + 0x30]
// 006a0a67  8910                 mov dword ptr [eax], edx
// 006a0a69  8b1b                 mov ebx, dword ptr [ebx]
// 006a0a6b  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 006a0a6e  8b564c               mov edx, dword ptr [esi + 0x4c]
// 006a0a71  8b4648               mov eax, dword ptr [esi + 0x48]
// 006a0a74  2bcb                 sub ecx, ebx
// 006a0a76  51                   push ecx
// 006a0a77  03d3                 add edx, ebx
// 006a0a79  52                   push edx
// 006a0a7a  50                   push eax
// 006a0a7b  83c640               add esi, 0x40
// 006a0a7e  56                   push esi
// 006a0a7f  e8fc060000           call 0x6a1180
// 006a0a84  5f                   pop edi
// 006a0a85  5b                   pop ebx
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@V?$reference_wrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uoutput_seekable@iostreams@2@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp