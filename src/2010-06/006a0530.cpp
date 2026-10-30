// roc 2010-06 006a0530  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0530
//
// 006a0530  83ec0c               sub esp, 0xc
// 006a0533  53                   push ebx
// 006a0534  56                   push esi
// 006a0535  8bd9                 mov ebx, ecx
// 006a0537  57                   push edi
// 006a0538  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006a053c  397b04               cmp dword ptr [ebx + 4], edi
// 006a053f  8d7304               lea esi, [ebx + 4]
// 006a0542  7439                 je 0x6a057d
// 006a0544  6a00                 push 0
// 006a0546  57                   push edi
// 006a0547  8d4c2424             lea ecx, [esp + 0x24]
// 006a054b  ff1504a59e00         call dword ptr [0x9ea504]
// 006a0551  8d542414             lea edx, [esp + 0x14]
// 006a0555  8bcf                 mov ecx, edi
// 006a0557  3bf2                 cmp esi, edx
// 006a0559  7404                 je 0x6a055f
// 006a055b  8b0e                 mov ecx, dword ptr [esi]
// 006a055d  893e                 mov dword ptr [esi], edi
// 006a055f  8d542410             lea edx, [esp + 0x10]
// 006a0563  3bda                 cmp ebx, edx
// 006a0565  7406                 je 0x6a056d
// 006a0567  8b13                 mov edx, dword ptr [ebx]
// 006a0569  8903                 mov dword ptr [ebx], eax
// 006a056b  8bc2                 mov eax, edx
// 006a056d  85c0                 test eax, eax
// 006a056f  740c                 je 0x6a057d
// 006a0571  51                   push ecx
// 006a0572  50                   push eax
// 006a0573  8d4c2417             lea ecx, [esp + 0x17]
// 006a0577  ff150ca59e00         call dword ptr [0x9ea50c]
// 006a057d  5f                   pop edi
// 006a057e  5e                   pop esi
// 006a057f  5b                   pop ebx
// 006a0580  83c40c               add esp, 0xc
// 006a0583  c20400               ret 4
// copied from an identical function in another client (function ?resize@?$basic_buffer@DV?$allocator@D@std@@@detail@iostreams@boost@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_205f2b05043a4e2a.cpp