// roc 2009-12 00722700  unit: UString_sink::?$stream_buffer  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722700
//
// 00722700  51                   push ecx
// 00722701  56                   push esi
// 00722702  8bf1                 mov esi, ecx
// 00722704  8b4620               mov eax, dword ptr [esi + 0x20]
// 00722707  833800               cmp dword ptr [eax], 0
// 0072270a  7507                 jne 0x722713
// 0072270c  8b16                 mov edx, dword ptr [esi]
// 0072270e  8b4254               mov eax, dword ptr [edx + 0x54]
// 00722711  ffd0                 call eax
// 00722713  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00722716  8b01                 mov eax, dword ptr [ecx]
// 00722718  8b5630               mov edx, dword ptr [esi + 0x30]
// 0072271b  8b0a                 mov ecx, dword ptr [edx]
// 0072271d  03c8                 add ecx, eax
// 0072271f  3bc1                 cmp eax, ecx
// 00722721  730b                 jae 0x72272e
// 00722723  8b5620               mov edx, dword ptr [esi + 0x20]
// 00722726  8b02                 mov eax, dword ptr [edx]
// 00722728  0fb600               movzx eax, byte ptr [eax]
// 0072272b  5e                   pop esi
// 0072272c  59                   pop ecx
// 0072272d  c3                   ret 
// 0072272e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00722731  8b01                 mov eax, dword ptr [ecx]
// 00722733  8b5610               mov edx, dword ptr [esi + 0x10]
// 00722736  8bc8                 mov ecx, eax
// 00722738  2b0a                 sub ecx, dword ptr [edx]
// 0072273a  53                   push ebx
// 0072273b  394e54               cmp dword ptr [esi + 0x54], ecx
// 0072273e  8d5e54               lea ebx, [esi + 0x54]
// 00722741  894c2408             mov dword ptr [esp + 8], ecx
// 00722745  57                   push edi
// 00722746  8bcb                 mov ecx, ebx
// 00722748  7c04                 jl 0x72274e
// 0072274a  8d4c240c             lea ecx, [esp + 0xc]
// 0072274e  8b39                 mov edi, dword ptr [ecx]
// 00722750  85ff                 test edi, edi
// 00722752  7416                 je 0x72276a
// 00722754  2bc7                 sub eax, edi
// 00722756  57                   push edi
// 00722757  50                   push eax
// 00722758  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0072275b  2bc7                 sub eax, edi
// 0072275d  0303                 add eax, dword ptr [ebx]
// 0072275f  57                   push edi
// 00722760  50                   push eax
// 00722761  ff15c0b79800         call dword ptr [0x98b7c0]
// 00722767  83c410               add esp, 0x10
// 0072276a  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0072276d  8b13                 mov edx, dword ptr [ebx]
// 0072276f  8d0411               lea eax, [ecx + edx]
// 00722772  8b5610               mov edx, dword ptr [esi + 0x10]
// 00722775  8bc8                 mov ecx, eax
// 00722777  2bcf                 sub ecx, edi
// 00722779  890a                 mov dword ptr [edx], ecx
// 0072277b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0072277e  8901                 mov dword ptr [ecx], eax
// 00722780  8bd0                 mov edx, eax
// 00722782  2bd0                 sub edx, eax
// 00722784  8b4630               mov eax, dword ptr [esi + 0x30]
// 00722787  8910                 mov dword ptr [eax], edx
// 00722789  8b1b                 mov ebx, dword ptr [ebx]
// 0072278b  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0072278e  8b564c               mov edx, dword ptr [esi + 0x4c]
// 00722791  8b4648               mov eax, dword ptr [esi + 0x48]
// 00722794  2bcb                 sub ecx, ebx
// 00722796  51                   push ecx
// 00722797  03d3                 add edx, ebx
// 00722799  52                   push edx
// 0072279a  50                   push eax
// 0072279b  83c640               add esi, 0x40
// 0072279e  56                   push esi
// 0072279f  e88cfeffff           call 0x722630
// 007227a4  5f                   pop edi
// 007227a5  5b                   pop ebx
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@V?$reference_wrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uoutput_seekable@iostreams@2@@detail@iostreams@boost@@MAEHXZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp