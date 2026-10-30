// roc 2009-12 007221b0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007221b0
//
// 007221b0  83ec0c               sub esp, 0xc
// 007221b3  53                   push ebx
// 007221b4  56                   push esi
// 007221b5  8bd9                 mov ebx, ecx
// 007221b7  57                   push edi
// 007221b8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007221bc  397b04               cmp dword ptr [ebx + 4], edi
// 007221bf  8d7304               lea esi, [ebx + 4]
// 007221c2  7439                 je 0x7221fd
// 007221c4  6a00                 push 0
// 007221c6  57                   push edi
// 007221c7  8d4c2424             lea ecx, [esp + 0x24]
// 007221cb  ff1504b69800         call dword ptr [0x98b604]
// 007221d1  8d542414             lea edx, [esp + 0x14]
// 007221d5  8bcf                 mov ecx, edi
// 007221d7  3bf2                 cmp esi, edx
// 007221d9  7404                 je 0x7221df
// 007221db  8b0e                 mov ecx, dword ptr [esi]
// 007221dd  893e                 mov dword ptr [esi], edi
// 007221df  8d542410             lea edx, [esp + 0x10]
// 007221e3  3bda                 cmp ebx, edx
// 007221e5  7406                 je 0x7221ed
// 007221e7  8b13                 mov edx, dword ptr [ebx]
// 007221e9  8903                 mov dword ptr [ebx], eax
// 007221eb  8bc2                 mov eax, edx
// 007221ed  85c0                 test eax, eax
// 007221ef  740c                 je 0x7221fd
// 007221f1  51                   push ecx
// 007221f2  50                   push eax
// 007221f3  8d4c2417             lea ecx, [esp + 0x17]
// 007221f7  ff15fcb59800         call dword ptr [0x98b5fc]
// 007221fd  5f                   pop edi
// 007221fe  5e                   pop esi
// 007221ff  5b                   pop ebx
// 00722200  83c40c               add esp, 0xc
// 00722203  c20400               ret 4
// copied from an identical function in another client (function ?resize@?$basic_buffer@DV?$allocator@D@std@@@detail@iostreams@boost@@QAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp