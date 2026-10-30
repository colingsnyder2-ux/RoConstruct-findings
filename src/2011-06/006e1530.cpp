// roc 2011-06 006e1530  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1530
//
// 006e1530  83ec0c               sub esp, 0xc
// 006e1533  53                   push ebx
// 006e1534  56                   push esi
// 006e1535  8bd9                 mov ebx, ecx
// 006e1537  57                   push edi
// 006e1538  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e153c  397b04               cmp dword ptr [ebx + 4], edi
// 006e153f  8d7304               lea esi, [ebx + 4]
// 006e1542  7439                 je 0x6e157d
// 006e1544  6a00                 push 0
// 006e1546  57                   push edi
// 006e1547  8d4c2424             lea ecx, [esp + 0x24]
// 006e154b  ff152005a400         call dword ptr [0xa40520]
// 006e1551  8d542414             lea edx, [esp + 0x14]
// 006e1555  8bcf                 mov ecx, edi
// 006e1557  3bf2                 cmp esi, edx
// 006e1559  7404                 je 0x6e155f
// 006e155b  8b0e                 mov ecx, dword ptr [esi]
// 006e155d  893e                 mov dword ptr [esi], edi
// 006e155f  8d542410             lea edx, [esp + 0x10]
// 006e1563  3bda                 cmp ebx, edx
// 006e1565  7406                 je 0x6e156d
// 006e1567  8b13                 mov edx, dword ptr [ebx]
// 006e1569  8903                 mov dword ptr [ebx], eax
// 006e156b  8bc2                 mov eax, edx
// 006e156d  85c0                 test eax, eax
// 006e156f  740c                 je 0x6e157d
// 006e1571  51                   push ecx
// 006e1572  50                   push eax
// 006e1573  8d4c2417             lea ecx, [esp + 0x17]
// 006e1577  ff152805a400         call dword ptr [0xa40528]
// 006e157d  5f                   pop edi
// 006e157e  5e                   pop esi
// 006e157f  5b                   pop ebx
// 006e1580  83c40c               add esp, 0xc
// 006e1583  c20400               ret 4
// copied from an identical function in another client (function ?resize@?$basic_buffer@DV?$allocator@D@std@@@detail@iostreams@boost@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp