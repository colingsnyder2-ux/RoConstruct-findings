// roc 2012-06 008596a0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008596a0
//
// 008596a0  83ec0c               sub esp, 0xc
// 008596a3  53                   push ebx
// 008596a4  56                   push esi
// 008596a5  8bd9                 mov ebx, ecx
// 008596a7  57                   push edi
// 008596a8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008596ac  397b04               cmp dword ptr [ebx + 4], edi
// 008596af  8d7304               lea esi, [ebx + 4]
// 008596b2  7439                 je 0x8596ed
// 008596b4  6a00                 push 0
// 008596b6  57                   push edi
// 008596b7  8d4c2424             lea ecx, [esp + 0x24]
// 008596bb  ff158025b200         call dword ptr [0xb22580]
// 008596c1  8d542414             lea edx, [esp + 0x14]
// 008596c5  8bcf                 mov ecx, edi
// 008596c7  3bf2                 cmp esi, edx
// 008596c9  7404                 je 0x8596cf
// 008596cb  8b0e                 mov ecx, dword ptr [esi]
// 008596cd  893e                 mov dword ptr [esi], edi
// 008596cf  8d542410             lea edx, [esp + 0x10]
// 008596d3  3bda                 cmp ebx, edx
// 008596d5  7406                 je 0x8596dd
// 008596d7  8b13                 mov edx, dword ptr [ebx]
// 008596d9  8903                 mov dword ptr [ebx], eax
// 008596db  8bc2                 mov eax, edx
// 008596dd  85c0                 test eax, eax
// 008596df  740c                 je 0x8596ed
// 008596e1  51                   push ecx
// 008596e2  50                   push eax
// 008596e3  8d4c2417             lea ecx, [esp + 0x17]
// 008596e7  ff15f825b200         call dword ptr [0xb225f8]
// 008596ed  5f                   pop edi
// 008596ee  5e                   pop esi
// 008596ef  5b                   pop ebx
// 008596f0  83c40c               add esp, 0xc
// 008596f3  c20400               ret 4
// copied from an identical function in another client (function ?resize@?$basic_buffer@DV?$allocator@D@std@@@detail@iostreams@boost@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp