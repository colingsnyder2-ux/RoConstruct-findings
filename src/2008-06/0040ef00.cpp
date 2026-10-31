// from server: 100% by auto
// roc 2008-06 0040ef00  unit: VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ef00
//
// 0040ef00  55                   push ebp
// 0040ef01  8bec                 mov ebp, esp
// 0040ef03  6aff                 push -1
// 0040ef05  6860d47b00           push 0x7bd460
// 0040ef0a  64a100000000         mov eax, dword ptr fs:[0]
// 0040ef10  50                   push eax
// 0040ef11  64892500000000       mov dword ptr fs:[0], esp
// 0040ef18  83ec0c               sub esp, 0xc
// 0040ef1b  837d1403             cmp dword ptr [ebp + 0x14], 3
// 0040ef1f  53                   push ebx
// 0040ef20  56                   push esi
// 0040ef21  57                   push edi
// 0040ef22  8bf1                 mov esi, ecx
// 0040ef24  8965f0               mov dword ptr [ebp - 0x10], esp
// 0040ef27  8975ec               mov dword ptr [ebp - 0x14], esi
// 0040ef2a  0f85cb000000         jne 0x40effb
// 0040ef30  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040ef33  8bc3                 mov eax, ebx
// 0040ef35  2b4508               sub eax, dword ptr [ebp + 8]
// 0040ef38  33c9                 xor ecx, ecx
// 0040ef3a  c1f803               sar eax, 3
// 0040ef3d  ba08000000           mov edx, 8
// 0040ef42  f7e2                 mul edx
// 0040ef44  0f90c1               seto cl
// 0040ef47  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0040ef4e  f7d9                 neg ecx
// 0040ef50  0bc8                 or ecx, eax
// 0040ef52  51                   push ecx
// 0040ef53  e8fe192900           call 0x6a0956
// 0040ef58  83c404               add esp, 4
// 0040ef5b  894608               mov dword ptr [esi + 8], eax
// 0040ef5e  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040ef65  eb1b                 jmp 0x40ef82
// 0040ef67  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0040ef6a  e8e1192900           call 0x6a0950
// 0040ef6f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0040ef76  b87cef4000           mov eax, 0x40ef7c
// 0040ef7b  c3                   ret 
// 0040ef7c  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0040ef7f  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0040ef82  8b4608               mov eax, dword ptr [esi + 8]
// 0040ef85  894610               mov dword ptr [esi + 0x10], eax
// 0040ef88  85c0                 test eax, eax
// 0040ef8a  7518                 jne 0x40efa4
// 0040ef8c  b80e000780           mov eax, 0x8007000e
// 0040ef91  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040ef94  64890d00000000       mov dword ptr fs:[0], ecx
// 0040ef9b  5f                   pop edi
// 0040ef9c  5e                   pop esi
// 0040ef9d  5b                   pop ebx
// 0040ef9e  8be5                 mov esp, ebp
// 0040efa0  5d                   pop ebp
// 0040efa1  c21000               ret 0x10
// 0040efa4  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040efa7  3bfb                 cmp edi, ebx
// 0040efa9  7436                 je 0x40efe1
// 0040efab  eb03                 jmp 0x40efb0
// 0040efad  8d4900               lea ecx, [ecx]
// 0040efb0  8b4610               mov eax, dword ptr [esi + 0x10]
// 0040efb3  85c0                 test eax, eax
// 0040efb5  743a                 je 0x40eff1
// 0040efb7  85ff                 test edi, edi
// 0040efb9  7436                 je 0x40eff1
// 0040efbb  8b0f                 mov ecx, dword ptr [edi]
// 0040efbd  8908                 mov dword ptr [eax], ecx
// 0040efbf  8b5704               mov edx, dword ptr [edi + 4]
// 0040efc2  895004               mov dword ptr [eax + 4], edx
// 0040efc5  8bc1                 mov eax, ecx
// 0040efc7  85c0                 test eax, eax
// 0040efc9  7408                 je 0x40efd3
// 0040efcb  8b08                 mov ecx, dword ptr [eax]
// 0040efcd  8b5104               mov edx, dword ptr [ecx + 4]
// 0040efd0  50                   push eax
// 0040efd1  ffd2                 call edx
// 0040efd3  83461008             add dword ptr [esi + 0x10], 8
// 0040efd7  83c708               add edi, 8
// 0040efda  3bfb                 cmp edi, ebx
// 0040efdc  75d2                 jne 0x40efb0
// 0040efde  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040efe1  8b4608               mov eax, dword ptr [esi + 8]
// 0040efe4  2bdf                 sub ebx, edi
// 0040efe6  c1fb03               sar ebx, 3
// 0040efe9  8d0cd8               lea ecx, [eax + ebx*8]
// 0040efec  894e0c               mov dword ptr [esi + 0xc], ecx
// 0040efef  eb16                 jmp 0x40f007
// 0040eff1  6805400080           push 0x80004005
// 0040eff6  e80520ffff           call 0x401000
// 0040effb  8b5508               mov edx, dword ptr [ebp + 8]
// 0040effe  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0040f001  895608               mov dword ptr [esi + 8], edx
// 0040f004  89460c               mov dword ptr [esi + 0xc], eax
// 0040f007  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 0040f00a  397e04               cmp dword ptr [esi + 4], edi
// 0040f00d  741e                 je 0x40f02d
// 0040f00f  85ff                 test edi, edi
// 0040f011  7408                 je 0x40f01b
// 0040f013  8b0f                 mov ecx, dword ptr [edi]
// 0040f015  8b5104               mov edx, dword ptr [ecx + 4]
// 0040f018  57                   push edi
// 0040f019  ffd2                 call edx
// 0040f01b  8b4604               mov eax, dword ptr [esi + 4]
// 0040f01e  85c0                 test eax, eax
// 0040f020  7408                 je 0x40f02a
// 0040f022  8b08                 mov ecx, dword ptr [eax]
// 0040f024  8b5108               mov edx, dword ptr [ecx + 8]
// 0040f027  50                   push eax
// 0040f028  ffd2                 call edx
// 0040f02a  897e04               mov dword ptr [esi + 4], edi
// 0040f02d  8b4608               mov eax, dword ptr [esi + 8]
// 0040f030  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0040f033  894610               mov dword ptr [esi + 0x10], eax
// 0040f036  894e14               mov dword ptr [esi + 0x14], ecx
// 0040f039  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040f03c  5f                   pop edi
// 0040f03d  5e                   pop esi
// 0040f03e  33c0                 xor eax, eax
// 0040f040  64890d00000000       mov dword ptr fs:[0], ecx
// 0040f047  5b                   pop ebx
// 0040f048  8be5                 mov esp, ebp
// 0040f04a  5d                   pop ebp
// 0040f04b  c21000               ret 0x10

// from server: 100% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared roc_espeon_comenuminitnative_65941067da5b003c.cpp
