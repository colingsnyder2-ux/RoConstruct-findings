// roc 2007-08 00552eb0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00552eb0
//
// 00552eb0  51                   push ecx
// 00552eb1  56                   push esi
// 00552eb2  8bf1                 mov esi, ecx
// 00552eb4  8b4620               mov eax, dword ptr [esi + 0x20]
// 00552eb7  833800               cmp dword ptr [eax], 0
// 00552eba  7507                 jne 0x552ec3
// 00552ebc  8b16                 mov edx, dword ptr [esi]
// 00552ebe  8b4254               mov eax, dword ptr [edx + 0x54]
// 00552ec1  ffd0                 call eax
// 00552ec3  8b4620               mov eax, dword ptr [esi + 0x20]
// 00552ec6  8b08                 mov ecx, dword ptr [eax]
// 00552ec8  8b5630               mov edx, dword ptr [esi + 0x30]
// 00552ecb  8b12                 mov edx, dword ptr [edx]
// 00552ecd  03d1                 add edx, ecx
// 00552ecf  3bca                 cmp ecx, edx
// 00552ed1  8bc1                 mov eax, ecx
// 00552ed3  7306                 jae 0x552edb
// 00552ed5  0fb600               movzx eax, byte ptr [eax]
// 00552ed8  5e                   pop esi
// 00552ed9  59                   pop ecx
// 00552eda  c3                   ret 
// 00552edb  8b5610               mov edx, dword ptr [esi + 0x10]
// 00552ede  2b02                 sub eax, dword ptr [edx]
// 00552ee0  57                   push edi
// 00552ee1  3986ac000000         cmp dword ptr [esi + 0xac], eax
// 00552ee7  8dbeac000000         lea edi, [esi + 0xac]
// 00552eed  89442408             mov dword ptr [esp + 8], eax
// 00552ef1  8bc7                 mov eax, edi
// 00552ef3  7c04                 jl 0x552ef9
// 00552ef5  8d442408             lea eax, [esp + 8]
// 00552ef9  53                   push ebx
// 00552efa  8b18                 mov ebx, dword ptr [eax]
// 00552efc  85db                 test ebx, ebx
// 00552efe  7419                 je 0x552f19
// 00552f00  8b07                 mov eax, dword ptr [edi]
// 00552f02  53                   push ebx
// 00552f03  2bcb                 sub ecx, ebx
// 00552f05  51                   push ecx
// 00552f06  2bc3                 sub eax, ebx
// 00552f08  0386a4000000         add eax, dword ptr [esi + 0xa4]
// 00552f0e  53                   push ebx
// 00552f0f  50                   push eax
// 00552f10  ff1548e77700         call dword ptr [0x77e748]
// 00552f16  83c410               add esp, 0x10
// 00552f19  8b0f                 mov ecx, dword ptr [edi]
// 00552f1b  8b96a4000000         mov edx, dword ptr [esi + 0xa4]
// 00552f21  8d0411               lea eax, [ecx + edx]
// 00552f24  8b5610               mov edx, dword ptr [esi + 0x10]
// 00552f27  8bc8                 mov ecx, eax
// 00552f29  2bcb                 sub ecx, ebx
// 00552f2b  890a                 mov dword ptr [edx], ecx
// 00552f2d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00552f30  8901                 mov dword ptr [ecx], eax
// 00552f32  8bd0                 mov edx, eax
// 00552f34  2bd0                 sub edx, eax
// 00552f36  8b4630               mov eax, dword ptr [esi + 0x30]
// 00552f39  8910                 mov dword ptr [eax], edx
// 00552f3b  8b17                 mov edx, dword ptr [edi]
// 00552f3d  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00552f43  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 00552f49  8b9ea0000000         mov ebx, dword ptr [esi + 0xa0]
// 00552f4f  2bc2                 sub eax, edx
// 00552f51  03ca                 add ecx, edx
// 00552f53  50                   push eax
// 00552f54  51                   push ecx
// 00552f55  53                   push ebx
// 00552f56  8d4e40               lea ecx, [esi + 0x40]
// 00552f59  e822faffff           call 0x552980
// 00552f5e  83f8ff               cmp eax, -1
// 00552f61  5b                   pop ebx
// 00552f62  7506                 jne 0x552f6a
// 00552f64  c6463c01             mov byte ptr [esi + 0x3c], 1
// 00552f68  33c0                 xor eax, eax
// 00552f6a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00552f6d  8b11                 mov edx, dword ptr [ecx]
// 00552f6f  8b0f                 mov ecx, dword ptr [edi]
// 00552f71  038ea4000000         add ecx, dword ptr [esi + 0xa4]
// 00552f77  5f                   pop edi
// 00552f78  03c8                 add ecx, eax
// 00552f7a  2bca                 sub ecx, edx
// 00552f7c  85c0                 test eax, eax
// 00552f7e  8b5630               mov edx, dword ptr [esi + 0x30]
// 00552f81  890a                 mov dword ptr [edx], ecx
// 00552f83  740b                 je 0x552f90
// 00552f85  8b4620               mov eax, dword ptr [esi + 0x20]
// 00552f88  8b08                 mov ecx, dword ptr [eax]
// 00552f8a  0fb601               movzx eax, byte ptr [ecx]
// 00552f8d  5e                   pop esi
// 00552f8e  59                   pop ecx
// 00552f8f  c3                   ret 
// 00552f90  83c8ff               or eax, 0xffffffff
// 00552f93  5e                   pop esi
// 00552f94  59                   pop ecx
// 00552f95  c3                   ret 
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@V?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp