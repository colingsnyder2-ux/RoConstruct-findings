// roc 2012-06 0085b890  unit: VWinHttpRequest_source::?$stream_buffer  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085b890
//
// 0085b890  6aff                 push -1
// 0085b892  6834e3ac00           push 0xace334
// 0085b897  64a100000000         mov eax, dword ptr fs:[0]
// 0085b89d  50                   push eax
// 0085b89e  64892500000000       mov dword ptr fs:[0], esp
// 0085b8a5  51                   push ecx
// 0085b8a6  56                   push esi
// 0085b8a7  57                   push edi
// 0085b8a8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0085b8ac  8b07                 mov eax, dword ptr [edi]
// 0085b8ae  8bf1                 mov esi, ecx
// 0085b8b0  8906                 mov dword ptr [esi], eax
// 0085b8b2  8b4704               mov eax, dword ptr [edi + 4]
// 0085b8b5  89742408             mov dword ptr [esp + 8], esi
// 0085b8b9  894604               mov dword ptr [esi + 4], eax
// 0085b8bc  85c0                 test eax, eax
// 0085b8be  740c                 je 0x85b8cc
// 0085b8c0  83c004               add eax, 4
// 0085b8c3  b901000000           mov ecx, 1
// 0085b8c8  f00fc108             lock xadd dword ptr [eax], ecx
// 0085b8cc  8d5708               lea edx, [edi + 8]
// 0085b8cf  52                   push edx
// 0085b8d0  8d4e08               lea ecx, [esi + 8]
// 0085b8d3  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085b8db  ff154426b200         call dword ptr [0xb22644]
// 0085b8e1  8d4724               lea eax, [edi + 0x24]
// 0085b8e4  50                   push eax
// 0085b8e5  8d4e24               lea ecx, [esi + 0x24]
// 0085b8e8  c644241801           mov byte ptr [esp + 0x18], 1
// 0085b8ed  ff154426b200         call dword ptr [0xb22644]
// 0085b8f3  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 0085b8f6  894e40               mov dword ptr [esi + 0x40], ecx
// 0085b8f9  8b5748               mov edx, dword ptr [edi + 0x48]
// 0085b8fc  895648               mov dword ptr [esi + 0x48], edx
// 0085b8ff  8b474c               mov eax, dword ptr [edi + 0x4c]
// 0085b902  89464c               mov dword ptr [esi + 0x4c], eax
// 0085b905  8b4f50               mov ecx, dword ptr [edi + 0x50]
// 0085b908  894e50               mov dword ptr [esi + 0x50], ecx
// 0085b90b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085b90f  5f                   pop edi
// 0085b910  8bc6                 mov eax, esi
// 0085b912  5e                   pop esi
// 0085b913  64890d00000000       mov dword ptr fs:[0], ecx
// 0085b91a  83c410               add esp, 0x10
// 0085b91d  c20400               ret 4
// copied from an identical function in another client (function ??0?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp