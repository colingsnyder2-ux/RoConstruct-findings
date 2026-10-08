// roc 2012-06 00863a80  unit: VWiniInetRequest_source::?$stream_buffer  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00863a80
//
// 00863a80  6aff                 push -1
// 00863a82  68c0d2aa00           push 0xaad2c0
// 00863a87  64a100000000         mov eax, dword ptr fs:[0]
// 00863a8d  50                   push eax
// 00863a8e  64892500000000       mov dword ptr fs:[0], esp
// 00863a95  51                   push ecx
// 00863a96  56                   push esi
// 00863a97  57                   push edi
// 00863a98  8bf9                 mov edi, ecx
// 00863a9a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00863a9e  83ec08               sub esp, 8
// 00863aa1  8bc4                 mov eax, esp
// 00863aa3  8908                 mov dword ptr [eax], ecx
// 00863aa5  8b542430             mov edx, dword ptr [esp + 0x30]
// 00863aa9  895004               mov dword ptr [eax + 4], edx
// 00863aac  8b442430             mov eax, dword ptr [esp + 0x30]
// 00863ab0  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00863ab8  89642410             mov dword ptr [esp + 0x10], esp
// 00863abc  85c0                 test eax, eax
// 00863abe  740c                 je 0x863acc
// 00863ac0  83c004               add eax, 4
// 00863ac3  b901000000           mov ecx, 1
// 00863ac8  f00fc108             lock xadd dword ptr [eax], ecx
// 00863acc  8b542424             mov edx, dword ptr [esp + 0x24]
// 00863ad0  83ec08               sub esp, 8
// 00863ad3  8bc4                 mov eax, esp
// 00863ad5  8910                 mov dword ptr [eax], edx
// 00863ad7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00863adb  894804               mov dword ptr [eax + 4], ecx
// 00863ade  8b442430             mov eax, dword ptr [esp + 0x30]
// 00863ae2  89642418             mov dword ptr [esp + 0x18], esp
// 00863ae6  85c0                 test eax, eax
// 00863ae8  740c                 je 0x863af6
// 00863aea  83c004               add eax, 4
// 00863aed  ba01000000           mov edx, 1
// 00863af2  f00fc110             lock xadd dword ptr [eax], edx
// 00863af6  8bcf                 mov ecx, edi
// 00863af8  e8532abeff           call 0x446550
// 00863afd  8b742420             mov esi, dword ptr [esp + 0x20]
// 00863b01  c644241400           mov byte ptr [esp + 0x14], 0
// 00863b06  85f6                 test esi, esi
// 00863b08  742a                 je 0x863b34
// 00863b0a  8d4604               lea eax, [esi + 4]
// 00863b0d  83c9ff               or ecx, 0xffffffff
// 00863b10  f00fc108             lock xadd dword ptr [eax], ecx
// 00863b14  751e                 jne 0x863b34
// 00863b16  8b16                 mov edx, dword ptr [esi]
// 00863b18  8b4204               mov eax, dword ptr [edx + 4]
// 00863b1b  8bce                 mov ecx, esi
// 00863b1d  ffd0                 call eax
// 00863b1f  8d4e08               lea ecx, [esi + 8]
// 00863b22  83caff               or edx, 0xffffffff
// 00863b25  f00fc111             lock xadd dword ptr [ecx], edx
// 00863b29  7509                 jne 0x863b34
// 00863b2b  8b06                 mov eax, dword ptr [esi]
// 00863b2d  8b5008               mov edx, dword ptr [eax + 8]
// 00863b30  8bce                 mov ecx, esi
// 00863b32  ffd2                 call edx
// 00863b34  8b742428             mov esi, dword ptr [esp + 0x28]
// 00863b38  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00863b40  85f6                 test esi, esi
// 00863b42  742a                 je 0x863b6e
// 00863b44  8d4604               lea eax, [esi + 4]
// 00863b47  83c9ff               or ecx, 0xffffffff
// 00863b4a  f00fc108             lock xadd dword ptr [eax], ecx
// 00863b4e  751e                 jne 0x863b6e
// 00863b50  8b16                 mov edx, dword ptr [esi]
// 00863b52  8b4204               mov eax, dword ptr [edx + 4]
// 00863b55  8bce                 mov ecx, esi
// 00863b57  ffd0                 call eax
// 00863b59  8d4e08               lea ecx, [esi + 8]
// 00863b5c  83caff               or edx, 0xffffffff
// 00863b5f  f00fc111             lock xadd dword ptr [ecx], edx
// 00863b63  7509                 jne 0x863b6e
// 00863b65  8b06                 mov eax, dword ptr [esi]
// 00863b67  8b5008               mov edx, dword ptr [eax + 8]
// 00863b6a  8bce                 mov ecx, esi
// 00863b6c  ffd2                 call edx
// 00863b6e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00863b72  8bc7                 mov eax, edi
// 00863b74  5f                   pop edi
// 00863b75  64890d00000000       mov dword ptr fs:[0], ecx
// 00863b7c  5e                   pop esi
// 00863b7d  83c410               add esp, 0x10
// 00863b80  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
