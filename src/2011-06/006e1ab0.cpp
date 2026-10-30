// roc 2011-06 006e1ab0  unit: UString_sink::?$stream_buffer  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1ab0
//
// 006e1ab0  51                   push ecx
// 006e1ab1  56                   push esi
// 006e1ab2  8bf1                 mov esi, ecx
// 006e1ab4  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e1ab7  833800               cmp dword ptr [eax], 0
// 006e1aba  7507                 jne 0x6e1ac3
// 006e1abc  8b16                 mov edx, dword ptr [esi]
// 006e1abe  8b4254               mov eax, dword ptr [edx + 0x54]
// 006e1ac1  ffd0                 call eax
// 006e1ac3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006e1ac6  8b01                 mov eax, dword ptr [ecx]
// 006e1ac8  8b5630               mov edx, dword ptr [esi + 0x30]
// 006e1acb  8b0a                 mov ecx, dword ptr [edx]
// 006e1acd  03c8                 add ecx, eax
// 006e1acf  3bc1                 cmp eax, ecx
// 006e1ad1  730b                 jae 0x6e1ade
// 006e1ad3  8b5620               mov edx, dword ptr [esi + 0x20]
// 006e1ad6  8b02                 mov eax, dword ptr [edx]
// 006e1ad8  0fb600               movzx eax, byte ptr [eax]
// 006e1adb  5e                   pop esi
// 006e1adc  59                   pop ecx
// 006e1add  c3                   ret 
// 006e1ade  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006e1ae1  8b01                 mov eax, dword ptr [ecx]
// 006e1ae3  8b5610               mov edx, dword ptr [esi + 0x10]
// 006e1ae6  8bc8                 mov ecx, eax
// 006e1ae8  2b0a                 sub ecx, dword ptr [edx]
// 006e1aea  53                   push ebx
// 006e1aeb  394e54               cmp dword ptr [esi + 0x54], ecx
// 006e1aee  8d5e54               lea ebx, [esi + 0x54]
// 006e1af1  894c2408             mov dword ptr [esp + 8], ecx
// 006e1af5  57                   push edi
// 006e1af6  8bcb                 mov ecx, ebx
// 006e1af8  7c04                 jl 0x6e1afe
// 006e1afa  8d4c240c             lea ecx, [esp + 0xc]
// 006e1afe  8b39                 mov edi, dword ptr [ecx]
// 006e1b00  85ff                 test edi, edi
// 006e1b02  7416                 je 0x6e1b1a
// 006e1b04  2bc7                 sub eax, edi
// 006e1b06  57                   push edi
// 006e1b07  50                   push eax
// 006e1b08  8b464c               mov eax, dword ptr [esi + 0x4c]
// 006e1b0b  2bc7                 sub eax, edi
// 006e1b0d  0303                 add eax, dword ptr [ebx]
// 006e1b0f  57                   push edi
// 006e1b10  50                   push eax
// 006e1b11  ff15fc09a400         call dword ptr [0xa409fc]
// 006e1b17  83c410               add esp, 0x10
// 006e1b1a  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 006e1b1d  8b13                 mov edx, dword ptr [ebx]
// 006e1b1f  8d0411               lea eax, [ecx + edx]
// 006e1b22  8b5610               mov edx, dword ptr [esi + 0x10]
// 006e1b25  8bc8                 mov ecx, eax
// 006e1b27  2bcf                 sub ecx, edi
// 006e1b29  890a                 mov dword ptr [edx], ecx
// 006e1b2b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006e1b2e  8901                 mov dword ptr [ecx], eax
// 006e1b30  8bd0                 mov edx, eax
// 006e1b32  2bd0                 sub edx, eax
// 006e1b34  8b4630               mov eax, dword ptr [esi + 0x30]
// 006e1b37  8910                 mov dword ptr [eax], edx
// 006e1b39  8b1b                 mov ebx, dword ptr [ebx]
// 006e1b3b  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 006e1b3e  8b564c               mov edx, dword ptr [esi + 0x4c]
// 006e1b41  8b4648               mov eax, dword ptr [esi + 0x48]
// 006e1b44  2bcb                 sub ecx, ebx
// 006e1b46  51                   push ecx
// 006e1b47  03d3                 add edx, ebx
// 006e1b49  52                   push edx
// 006e1b4a  50                   push eax
// 006e1b4b  83c640               add esi, 0x40
// 006e1b4e  56                   push esi
// 006e1b4f  e8dcfeffff           call 0x6e1a30
// 006e1b54  5f                   pop edi
// 006e1b55  5b                   pop ebx
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@V?$reference_wrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uoutput_seekable@iostreams@2@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp