// roc 2007-08 0054da50  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054da50
//
// 0054da50  51                   push ecx
// 0054da51  56                   push esi
// 0054da52  8bf1                 mov esi, ecx
// 0054da54  8b4620               mov eax, dword ptr [esi + 0x20]
// 0054da57  833800               cmp dword ptr [eax], 0
// 0054da5a  7507                 jne 0x54da63
// 0054da5c  8b16                 mov edx, dword ptr [esi]
// 0054da5e  8b4254               mov eax, dword ptr [edx + 0x54]
// 0054da61  ffd0                 call eax
// 0054da63  8b4620               mov eax, dword ptr [esi + 0x20]
// 0054da66  8b08                 mov ecx, dword ptr [eax]
// 0054da68  8b5630               mov edx, dword ptr [esi + 0x30]
// 0054da6b  8b12                 mov edx, dword ptr [edx]
// 0054da6d  03d1                 add edx, ecx
// 0054da6f  3bca                 cmp ecx, edx
// 0054da71  8bc1                 mov eax, ecx
// 0054da73  7306                 jae 0x54da7b
// 0054da75  0fb600               movzx eax, byte ptr [eax]
// 0054da78  5e                   pop esi
// 0054da79  59                   pop ecx
// 0054da7a  c3                   ret 
// 0054da7b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0054da7e  2b02                 sub eax, dword ptr [edx]
// 0054da80  53                   push ebx
// 0054da81  394650               cmp dword ptr [esi + 0x50], eax
// 0054da84  8d5e50               lea ebx, [esi + 0x50]
// 0054da87  89442408             mov dword ptr [esp + 8], eax
// 0054da8b  57                   push edi
// 0054da8c  8bc3                 mov eax, ebx
// 0054da8e  7c04                 jl 0x54da94
// 0054da90  8d44240c             lea eax, [esp + 0xc]
// 0054da94  8b38                 mov edi, dword ptr [eax]
// 0054da96  85ff                 test edi, edi
// 0054da98  7416                 je 0x54dab0
// 0054da9a  8b03                 mov eax, dword ptr [ebx]
// 0054da9c  57                   push edi
// 0054da9d  2bcf                 sub ecx, edi
// 0054da9f  51                   push ecx
// 0054daa0  2bc7                 sub eax, edi
// 0054daa2  034648               add eax, dword ptr [esi + 0x48]
// 0054daa5  57                   push edi
// 0054daa6  50                   push eax
// 0054daa7  ff1548e77700         call dword ptr [0x77e748]
// 0054daad  83c410               add esp, 0x10
// 0054dab0  8b0b                 mov ecx, dword ptr [ebx]
// 0054dab2  8b5648               mov edx, dword ptr [esi + 0x48]
// 0054dab5  8d0411               lea eax, [ecx + edx]
// 0054dab8  8b5610               mov edx, dword ptr [esi + 0x10]
// 0054dabb  8bc8                 mov ecx, eax
// 0054dabd  2bcf                 sub ecx, edi
// 0054dabf  890a                 mov dword ptr [edx], ecx
// 0054dac1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0054dac4  8901                 mov dword ptr [ecx], eax
// 0054dac6  8bd0                 mov edx, eax
// 0054dac8  2bd0                 sub edx, eax
// 0054daca  8b4630               mov eax, dword ptr [esi + 0x30]
// 0054dacd  8910                 mov dword ptr [eax], edx
// 0054dacf  8b03                 mov eax, dword ptr [ebx]
// 0054dad1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0054dad4  034648               add eax, dword ptr [esi + 0x48]
// 0054dad7  8b09                 mov ecx, dword ptr [ecx]
// 0054dad9  8b5630               mov edx, dword ptr [esi + 0x30]
// 0054dadc  5f                   pop edi
// 0054dadd  2bc1                 sub eax, ecx
// 0054dadf  5b                   pop ebx
// 0054dae0  8902                 mov dword ptr [edx], eax
// 0054dae2  83c8ff               or eax, 0xffffffff
// 0054dae5  5e                   pop esi
// 0054dae6  59                   pop ecx
// 0054dae7  c3                   ret 
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@U?$basic_null_source@D@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp