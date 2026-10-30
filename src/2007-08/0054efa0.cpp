// roc 2007-08 0054efa0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054efa0
//
// 0054efa0  53                   push ebx
// 0054efa1  56                   push esi
// 0054efa2  8bf1                 mov esi, ecx
// 0054efa4  8b4654               mov eax, dword ptr [esi + 0x54]
// 0054efa7  c1e803               shr eax, 3
// 0054efaa  a801                 test al, 1
// 0054efac  7411                 je 0x54efbf
// 0054efae  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0054efb1  833900               cmp dword ptr [ecx], 0
// 0054efb4  7509                 jne 0x54efbf
// 0054efb6  8b16                 mov edx, dword ptr [esi]
// 0054efb8  8b4258               mov eax, dword ptr [edx + 0x58]
// 0054efbb  8bce                 mov ecx, esi
// 0054efbd  ffd0                 call eax
// 0054efbf  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054efc3  83fbff               cmp ebx, -1
// 0054efc6  7471                 je 0x54f039
// 0054efc8  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0054efcb  c1e903               shr ecx, 3
// 0054efce  f6c101               test cl, 1
// 0054efd1  745f                 je 0x54f032
// 0054efd3  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054efd6  8b02                 mov eax, dword ptr [edx]
// 0054efd8  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0054efdb  8b11                 mov edx, dword ptr [ecx]
// 0054efdd  03d0                 add edx, eax
// 0054efdf  3bc2                 cmp eax, edx
// 0054efe1  753c                 jne 0x54f01f
// 0054efe3  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054efe6  8b5614               mov edx, dword ptr [esi + 0x14]
// 0054efe9  8b00                 mov eax, dword ptr [eax]
// 0054efeb  2b02                 sub eax, dword ptr [edx]
// 0054efed  85c0                 test eax, eax
// 0054efef  7e16                 jle 0x54f007
// 0054eff1  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0054eff4  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0054eff7  890a                 mov dword ptr [edx], ecx
// 0054eff9  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054effc  03c1                 add eax, ecx
// 0054effe  890a                 mov dword ptr [edx], ecx
// 0054f000  2bc1                 sub eax, ecx
// 0054f002  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0054f005  8901                 mov dword ptr [ecx], eax
// 0054f007  8b5624               mov edx, dword ptr [esi + 0x24]
// 0054f00a  8b02                 mov eax, dword ptr [edx]
// 0054f00c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0054f00f  8b11                 mov edx, dword ptr [ecx]
// 0054f011  03d0                 add edx, eax
// 0054f013  3bc2                 cmp eax, edx
// 0054f015  7508                 jne 0x54f01f
// 0054f017  5e                   pop esi
// 0054f018  83c8ff               or eax, 0xffffffff
// 0054f01b  5b                   pop ebx
// 0054f01c  c20400               ret 4
// 0054f01f  8b4624               mov eax, dword ptr [esi + 0x24]
// 0054f022  8b08                 mov ecx, dword ptr [eax]
// 0054f024  8819                 mov byte ptr [ecx], bl
// 0054f026  8b4634               mov eax, dword ptr [esi + 0x34]
// 0054f029  8300ff               add dword ptr [eax], -1
// 0054f02c  8b7624               mov esi, dword ptr [esi + 0x24]
// 0054f02f  830601               add dword ptr [esi], 1
// 0054f032  5e                   pop esi
// 0054f033  8bc3                 mov eax, ebx
// 0054f035  5b                   pop ebx
// 0054f036  c20400               ret 4
// 0054f039  5e                   pop esi
// 0054f03a  33c0                 xor eax, eax
// 0054f03c  5b                   pop ebx
// 0054f03d  c20400               ret 4
// copied from an identical function in another client (function ?overflow@?$indirect_streambuf@U?$basic_null_sink@D@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@MAEHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_e8ec57138b7c1e28.cpp