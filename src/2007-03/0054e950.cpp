// roc 2007-03 0054e950  unit: seg_00540000  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054e950
//
// 0054e950  51                   push ecx
// 0054e951  56                   push esi
// 0054e952  8bf1                 mov esi, ecx
// 0054e954  8b4620               mov eax, dword ptr [esi + 0x20]
// 0054e957  833800               cmp dword ptr [eax], 0
// 0054e95a  7507                 jne 0x54e963
// 0054e95c  8b16                 mov edx, dword ptr [esi]
// 0054e95e  8b4254               mov eax, dword ptr [edx + 0x54]
// 0054e961  ffd0                 call eax
// 0054e963  8b4620               mov eax, dword ptr [esi + 0x20]
// 0054e966  8b08                 mov ecx, dword ptr [eax]
// 0054e968  8b5630               mov edx, dword ptr [esi + 0x30]
// 0054e96b  8b12                 mov edx, dword ptr [edx]
// 0054e96d  03d1                 add edx, ecx
// 0054e96f  3bca                 cmp ecx, edx
// 0054e971  8bc1                 mov eax, ecx
// 0054e973  7306                 jae 0x54e97b
// 0054e975  0fb600               movzx eax, byte ptr [eax]
// 0054e978  5e                   pop esi
// 0054e979  59                   pop ecx
// 0054e97a  c3                   ret 
// 0054e97b  8b5610               mov edx, dword ptr [esi + 0x10]
// 0054e97e  2b02                 sub eax, dword ptr [edx]
// 0054e980  57                   push edi
// 0054e981  394654               cmp dword ptr [esi + 0x54], eax
// 0054e984  8d7e54               lea edi, [esi + 0x54]
// 0054e987  89442408             mov dword ptr [esp + 8], eax
// 0054e98b  8bc7                 mov eax, edi
// 0054e98d  7c04                 jl 0x54e993
// 0054e98f  8d442408             lea eax, [esp + 8]
// 0054e993  53                   push ebx
// 0054e994  8b18                 mov ebx, dword ptr [eax]
// 0054e996  85db                 test ebx, ebx
// 0054e998  7416                 je 0x54e9b0
// 0054e99a  8b07                 mov eax, dword ptr [edi]
// 0054e99c  53                   push ebx
// 0054e99d  2bcb                 sub ecx, ebx
// 0054e99f  51                   push ecx
// 0054e9a0  2bc3                 sub eax, ebx
// 0054e9a2  03464c               add eax, dword ptr [esi + 0x4c]
// 0054e9a5  53                   push ebx
// 0054e9a6  50                   push eax
// 0054e9a7  ff1578e97700         call dword ptr [0x77e978]
// 0054e9ad  83c410               add esp, 0x10
// 0054e9b0  8b0f                 mov ecx, dword ptr [edi]
// 0054e9b2  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0054e9b5  8d0411               lea eax, [ecx + edx]
// 0054e9b8  8b5610               mov edx, dword ptr [esi + 0x10]
// 0054e9bb  8bc8                 mov ecx, eax
// 0054e9bd  2bcb                 sub ecx, ebx
// 0054e9bf  890a                 mov dword ptr [edx], ecx
// 0054e9c1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0054e9c4  8901                 mov dword ptr [ecx], eax
// 0054e9c6  8bd0                 mov edx, eax
// 0054e9c8  2bd0                 sub edx, eax
// 0054e9ca  8b4630               mov eax, dword ptr [esi + 0x30]
// 0054e9cd  8910                 mov dword ptr [eax], edx
// 0054e9cf  8b0f                 mov ecx, dword ptr [edi]
// 0054e9d1  8b4650               mov eax, dword ptr [esi + 0x50]
// 0054e9d4  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0054e9d7  2bc1                 sub eax, ecx
// 0054e9d9  03d1                 add edx, ecx
// 0054e9db  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0054e9de  8b19                 mov ebx, dword ptr [ecx]
// 0054e9e0  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0054e9e3  8b4c0b28             mov ecx, dword ptr [ebx + ecx + 0x28]
// 0054e9e7  50                   push eax
// 0054e9e8  52                   push edx
// 0054e9e9  ff155ce77700         call dword ptr [0x77e75c]
// 0054e9ef  85c0                 test eax, eax
// 0054e9f1  5b                   pop ebx
// 0054e9f2  7407                 je 0x54e9fb
// 0054e9f4  83f8ff               cmp eax, -1
// 0054e9f7  8bc8                 mov ecx, eax
// 0054e9f9  7506                 jne 0x54ea01
// 0054e9fb  c6463c01             mov byte ptr [esi + 0x3c], 1
// 0054e9ff  33c9                 xor ecx, ecx
// 0054ea01  8b07                 mov eax, dword ptr [edi]
// 0054ea03  03464c               add eax, dword ptr [esi + 0x4c]
// 0054ea06  8b5620               mov edx, dword ptr [esi + 0x20]
// 0054ea09  8b12                 mov edx, dword ptr [edx]
// 0054ea0b  03c1                 add eax, ecx
// 0054ea0d  2bc2                 sub eax, edx
// 0054ea0f  85c9                 test ecx, ecx
// 0054ea11  8b5630               mov edx, dword ptr [esi + 0x30]
// 0054ea14  8902                 mov dword ptr [edx], eax
// 0054ea16  5f                   pop edi
// 0054ea17  740b                 je 0x54ea24
// 0054ea19  8b4620               mov eax, dword ptr [esi + 0x20]
// 0054ea1c  8b08                 mov ecx, dword ptr [eax]
// 0054ea1e  0fb601               movzx eax, byte ptr [ecx]
// 0054ea21  5e                   pop esi
// 0054ea22  59                   pop ecx
// 0054ea23  c3                   ret 
// 0054ea24  83c8ff               or eax, 0xffffffff
// 0054ea27  5e                   pop esi
// 0054ea28  59                   pop ecx
// 0054ea29  c3                   ret 
// copied from an identical function in another client (function ?underflow@?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp