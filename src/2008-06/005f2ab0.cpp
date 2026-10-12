// roc 2008-06 005f2ab0  unit: UString_sink::?$stream_buffer  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f2ab0
//
// 005f2ab0  51                   push ecx
// 005f2ab1  56                   push esi
// 005f2ab2  8bf1                 mov esi, ecx
// 005f2ab4  8b4620               mov eax, dword ptr [esi + 0x20]
// 005f2ab7  833800               cmp dword ptr [eax], 0
// 005f2aba  7507                 jne 0x5f2ac3
// 005f2abc  8b16                 mov edx, dword ptr [esi]
// 005f2abe  8b4254               mov eax, dword ptr [edx + 0x54]
// 005f2ac1  ffd0                 call eax
// 005f2ac3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005f2ac6  8b01                 mov eax, dword ptr [ecx]
// 005f2ac8  8b5630               mov edx, dword ptr [esi + 0x30]
// 005f2acb  8b0a                 mov ecx, dword ptr [edx]
// 005f2acd  03c8                 add ecx, eax
// 005f2acf  3bc1                 cmp eax, ecx
// 005f2ad1  730b                 jae 0x5f2ade
// 005f2ad3  8b5620               mov edx, dword ptr [esi + 0x20]
// 005f2ad6  8b02                 mov eax, dword ptr [edx]
// 005f2ad8  0fb600               movzx eax, byte ptr [eax]
// 005f2adb  5e                   pop esi
// 005f2adc  59                   pop ecx
// 005f2add  c3                   ret 
// 005f2ade  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005f2ae1  8b01                 mov eax, dword ptr [ecx]
// 005f2ae3  8b5610               mov edx, dword ptr [esi + 0x10]
// 005f2ae6  8bc8                 mov ecx, eax
// 005f2ae8  2b0a                 sub ecx, dword ptr [edx]
// 005f2aea  53                   push ebx
// 005f2aeb  394e54               cmp dword ptr [esi + 0x54], ecx
// 005f2aee  8d5e54               lea ebx, [esi + 0x54]
// 005f2af1  894c2408             mov dword ptr [esp + 8], ecx
// 005f2af5  57                   push edi
// 005f2af6  8bcb                 mov ecx, ebx
// 005f2af8  7c04                 jl 0x5f2afe
// 005f2afa  8d4c240c             lea ecx, [esp + 0xc]
// 005f2afe  8b39                 mov edi, dword ptr [ecx]
// 005f2b00  85ff                 test edi, edi
// 005f2b02  7416                 je 0x5f2b1a
// 005f2b04  2bc7                 sub eax, edi
// 005f2b06  57                   push edi
// 005f2b07  50                   push eax
// 005f2b08  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005f2b0b  2bc7                 sub eax, edi
// 005f2b0d  0303                 add eax, dword ptr [ebx]
// 005f2b0f  57                   push edi
// 005f2b10  50                   push eax
// 005f2b11  ff1550288000         call dword ptr [0x802850]
// 005f2b17  83c410               add esp, 0x10
// 005f2b1a  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 005f2b1d  8b13                 mov edx, dword ptr [ebx]
// 005f2b1f  8d0411               lea eax, [ecx + edx]
// 005f2b22  8b5610               mov edx, dword ptr [esi + 0x10]
// 005f2b25  8bc8                 mov ecx, eax
// 005f2b27  2bcf                 sub ecx, edi
// 005f2b29  890a                 mov dword ptr [edx], ecx
// 005f2b2b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005f2b2e  8901                 mov dword ptr [ecx], eax
// 005f2b30  8bd0                 mov edx, eax
// 005f2b32  2bd0                 sub edx, eax
// 005f2b34  8b4630               mov eax, dword ptr [esi + 0x30]
// 005f2b37  8910                 mov dword ptr [eax], edx
// 005f2b39  8b1b                 mov ebx, dword ptr [ebx]
// 005f2b3b  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 005f2b3e  8b564c               mov edx, dword ptr [esi + 0x4c]
// 005f2b41  8b4648               mov eax, dword ptr [esi + 0x48]
// 005f2b44  2bcb                 sub ecx, ebx
// 005f2b46  51                   push ecx
// 005f2b47  03d3                 add edx, ebx
// 005f2b49  52                   push edx
// 005f2b4a  50                   push eax
// 005f2b4b  83c640               add esi, 0x40
// 005f2b4e  56                   push esi
// 005f2b4f  e88cfeffff           call 0x5f29e0
// 005f2b54  5f                   pop edi
// 005f2b55  5b                   pop ebx
// library templates-2008-06-dll/roc_ndebug_iostreams.cpp (function ?underflow@?$indirect_streambuf@V?$mode_adapter@Uoutput@iostreams@boost@@V?$basic_streambuf@DU?$char_traits@D@std@@@std@@@detail@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@6@Uoutput@34@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp
