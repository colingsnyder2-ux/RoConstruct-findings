// roc 2007-08 00552890  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552890
//
// 00552890  51                   push ecx
// 00552891  56                   push esi
// 00552892  8bf1                 mov esi, ecx
// 00552894  8b4620               mov eax, dword ptr [esi + 0x20]
// 00552897  833800               cmp dword ptr [eax], 0
// 0055289a  7507                 jne 0x5528a3
// 0055289c  8b16                 mov edx, dword ptr [esi]
// 0055289e  8b4254               mov eax, dword ptr [edx + 0x54]
// 005528a1  ffd0                 call eax
// 005528a3  8b4620               mov eax, dword ptr [esi + 0x20]
// 005528a6  8b08                 mov ecx, dword ptr [eax]
// 005528a8  8b5630               mov edx, dword ptr [esi + 0x30]
// 005528ab  8b12                 mov edx, dword ptr [edx]
// 005528ad  03d1                 add edx, ecx
// 005528af  3bca                 cmp ecx, edx
// 005528b1  8bc1                 mov eax, ecx
// 005528b3  7306                 jae 0x5528bb
// 005528b5  0fb600               movzx eax, byte ptr [eax]
// 005528b8  5e                   pop esi
// 005528b9  59                   pop ecx
// 005528ba  c3                   ret 
// 005528bb  8b5610               mov edx, dword ptr [esi + 0x10]
// 005528be  2b02                 sub eax, dword ptr [edx]
// 005528c0  57                   push edi
// 005528c1  398698000000         cmp dword ptr [esi + 0x98], eax
// 005528c7  8dbe98000000         lea edi, [esi + 0x98]
// 005528cd  89442408             mov dword ptr [esp + 8], eax
// 005528d1  8bc7                 mov eax, edi
// 005528d3  7c04                 jl 0x5528d9
// 005528d5  8d442408             lea eax, [esp + 8]
// 005528d9  53                   push ebx
// 005528da  8b18                 mov ebx, dword ptr [eax]
// 005528dc  85db                 test ebx, ebx
// 005528de  7419                 je 0x5528f9
// 005528e0  8b07                 mov eax, dword ptr [edi]
// 005528e2  53                   push ebx
// 005528e3  2bcb                 sub ecx, ebx
// 005528e5  51                   push ecx
// 005528e6  2bc3                 sub eax, ebx
// 005528e8  038690000000         add eax, dword ptr [esi + 0x90]
// 005528ee  53                   push ebx
// 005528ef  50                   push eax
// 005528f0  ff1548e77700         call dword ptr [0x77e748]
// 005528f6  83c410               add esp, 0x10
// 005528f9  8b0f                 mov ecx, dword ptr [edi]
// 005528fb  8b9690000000         mov edx, dword ptr [esi + 0x90]
// 00552901  8d0411               lea eax, [ecx + edx]
// 00552904  8b5610               mov edx, dword ptr [esi + 0x10]
// 00552907  8bc8                 mov ecx, eax
// 00552909  2bcb                 sub ecx, ebx
// 0055290b  890a                 mov dword ptr [edx], ecx
// 0055290d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00552910  8901                 mov dword ptr [ecx], eax
// 00552912  8bd0                 mov edx, eax
// 00552914  2bd0                 sub edx, eax
// 00552916  8b4630               mov eax, dword ptr [esi + 0x30]
// 00552919  8910                 mov dword ptr [eax], edx
// 0055291b  8b17                 mov edx, dword ptr [edi]
// 0055291d  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00552923  8b8e90000000         mov ecx, dword ptr [esi + 0x90]
// 00552929  8b9e8c000000         mov ebx, dword ptr [esi + 0x8c]
// 0055292f  2bc2                 sub eax, edx
// 00552931  03ca                 add ecx, edx
// 00552933  50                   push eax
// 00552934  51                   push ecx
// 00552935  53                   push ebx
// 00552936  8d4e40               lea ecx, [esi + 0x40]
// 00552939  e832dfffff           call 0x550870
// 0055293e  83f8ff               cmp eax, -1
// 00552941  5b                   pop ebx
// 00552942  7506                 jne 0x55294a
// 00552944  c6463c01             mov byte ptr [esi + 0x3c], 1
// 00552948  33c0                 xor eax, eax
// 0055294a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0055294d  8b11                 mov edx, dword ptr [ecx]
// 0055294f  8b0f                 mov ecx, dword ptr [edi]
// 00552951  038e90000000         add ecx, dword ptr [esi + 0x90]
// 00552957  5f                   pop edi
// 00552958  03c8                 add ecx, eax
// 0055295a  2bca                 sub ecx, edx
// 0055295c  85c0                 test eax, eax
// 0055295e  8b5630               mov edx, dword ptr [esi + 0x30]
// 00552961  890a                 mov dword ptr [edx], ecx
// 00552963  740b                 je 0x552970
// 00552965  8b4620               mov eax, dword ptr [esi + 0x20]
// 00552968  8b08                 mov ecx, dword ptr [eax]
// 0055296a  0fb601               movzx eax, byte ptr [ecx]
// 0055296d  5e                   pop esi
// 0055296e  59                   pop ecx
// 0055296f  c3                   ret 
// 00552970  83c8ff               or eax, 0xffffffff
// 00552973  5e                   pop esi
// 00552974  59                   pop ecx
// 00552975  c3                   ret 
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@V?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAEHXZ)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_916365a4f87a380b.cpp