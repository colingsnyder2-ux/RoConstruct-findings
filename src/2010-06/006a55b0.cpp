// roc 2010-06 006a55b0  unit: boost::iostreams::Uinput::?$filtering_stream  size: 547 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a55b0
//
// 006a55b0  6aff                 push -1
// 006a55b2  68612b9a00           push 0x9a2b61
// 006a55b7  64a100000000         mov eax, dword ptr fs:[0]
// 006a55bd  50                   push eax
// 006a55be  64892500000000       mov dword ptr fs:[0], esp
// 006a55c5  83ec64               sub esp, 0x64
// 006a55c8  53                   push ebx
// 006a55c9  55                   push ebp
// 006a55ca  56                   push esi
// 006a55cb  57                   push edi
// 006a55cc  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 006a55d3  83ec58               sub esp, 0x58
// 006a55d6  8be9                 mov ebp, ecx
// 006a55d8  8bcc                 mov ecx, esp
// 006a55da  8964246c             mov dword ptr [esp + 0x6c], esp
// 006a55de  57                   push edi
// 006a55df  896c2474             mov dword ptr [esp + 0x74], ebp
// 006a55e3  e848aaffff           call 0x6a0030
// 006a55e8  8d442474             lea eax, [esp + 0x74]
// 006a55ec  50                   push eax
// 006a55ed  e8ceaaffff           call 0x6a00c0
// 006a55f2  83c45c               add esp, 0x5c
// 006a55f5  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 006a55fc  50                   push eax
// 006a55fd  51                   push ecx
// 006a55fe  33db                 xor ebx, ebx
// 006a5600  8bcd                 mov ecx, ebp
// 006a5602  899c2484000000       mov dword ptr [esp + 0x84], ebx
// 006a5609  e8a2d6ffff           call 0x6a2cb0
// 006a560e  8d4c2450             lea ecx, [esp + 0x50]
// 006a5612  c644247c03           mov byte ptr [esp + 0x7c], 3
// 006a5617  ff1500a49e00         call dword ptr [0x9ea400]
// 006a561d  8d4c2434             lea ecx, [esp + 0x34]
// 006a5621  c644247c02           mov byte ptr [esp + 0x7c], 2
// 006a5626  ff1500a49e00         call dword ptr [0x9ea400]
// 006a562c  8d7508               lea esi, [ebp + 8]
// 006a562f  8bce                 mov ecx, esi
// 006a5631  ff1504a49e00         call dword ptr [0x9ea404]
// 006a5637  8d4d24               lea ecx, [ebp + 0x24]
// 006a563a  c644247c04           mov byte ptr [esp + 0x7c], 4
// 006a563f  ff1504a49e00         call dword ptr [0x9ea404]
// 006a5645  895d40               mov dword ptr [ebp + 0x40], ebx
// 006a5648  895d44               mov dword ptr [ebp + 0x44], ebx
// 006a564b  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006a564e  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 006a5651  3bc3                 cmp eax, ebx
// 006a5653  0f95c3               setne bl
// 006a5656  85c9                 test ecx, ecx
// 006a5658  0f95c2               setne dl
// 006a565b  c644247c05           mov byte ptr [esp + 0x7c], 5
// 006a5660  88942484000000       mov byte ptr [esp + 0x84], dl
// 006a5667  84db                 test bl, bl
// 006a5669  7407                 je 0x6a5672
// 006a566b  40                   inc eax
// 006a566c  89442410             mov dword ptr [esp + 0x10], eax
// 006a5670  eb08                 jmp 0x6a567a
// 006a5672  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a567a  84d2                 test dl, dl
// 006a567c  740a                 je 0x6a5688
// 006a567e  41                   inc ecx
// 006a567f  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 006a5686  eb0b                 jmp 0x6a5693
// 006a5688  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 006a5693  8b07                 mov eax, dword ptr [edi]
// 006a5695  33d2                 xor edx, edx
// 006a5697  3b05143fa500         cmp eax, dword ptr [0xa53f14]
// 006a569d  0f95c2               setne dl
// 006a56a0  33c9                 xor ecx, ecx
// 006a56a2  4a                   dec edx
// 006a56a3  83e204               and edx, 4
// 006a56a6  3b05183fa500         cmp eax, dword ptr [0xa53f18]
// 006a56ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a56b0  0f95c1               setne cl
// 006a56b3  49                   dec ecx
// 006a56b4  83e102               and ecx, 2
// 006a56b7  03d1                 add edx, ecx
// 006a56b9  89542414             mov dword ptr [esp + 0x14], edx
// 006a56bd  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 006a56c4  8d4c020a             lea ecx, [edx + eax + 0xa]
// 006a56c8  51                   push ecx
// 006a56c9  8bce                 mov ecx, esi
// 006a56cb  ff15dca69e00         call dword ptr [0x9ea6dc]
// 006a56d1  6a1f                 push 0x1f
// 006a56d3  8bce                 mov ecx, esi
// 006a56d5  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a56db  6a8b                 push -0x75
// 006a56dd  8bce                 mov ecx, esi
// 006a56df  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a56e5  6a08                 push 8
// 006a56e7  8bce                 mov ecx, esi
// 006a56e9  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a56ef  8a942484000000       mov dl, byte ptr [esp + 0x84]
// 006a56f6  f6da                 neg dl
// 006a56f8  1ad2                 sbb dl, dl
// 006a56fa  80e210               and dl, 0x10
// 006a56fd  8ac3                 mov al, bl
// 006a56ff  f6d8                 neg al
// 006a5701  1ac0                 sbb al, al
// 006a5703  2408                 and al, 8
// 006a5705  02d0                 add dl, al
// 006a5707  0fb6ca               movzx ecx, dl
// 006a570a  51                   push ecx
// 006a570b  8bce                 mov ecx, esi
// 006a570d  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a5713  0fb65750             movzx edx, byte ptr [edi + 0x50]
// 006a5717  52                   push edx
// 006a5718  8bce                 mov ecx, esi
// 006a571a  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a5720  8b4750               mov eax, dword ptr [edi + 0x50]
// 006a5723  8b5754               mov edx, dword ptr [edi + 0x54]
// 006a5726  b108                 mov cl, 8
// 006a5728  e8733d1000           call 0x7a94a0
// 006a572d  0fb6c0               movzx eax, al
// 006a5730  50                   push eax
// 006a5731  8bce                 mov ecx, esi
// 006a5733  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a5739  8b4750               mov eax, dword ptr [edi + 0x50]
// 006a573c  8b5754               mov edx, dword ptr [edi + 0x54]
// 006a573f  b110                 mov cl, 0x10
// 006a5741  e85a3d1000           call 0x7a94a0
// 006a5746  0fb6c8               movzx ecx, al
// 006a5749  51                   push ecx
// 006a574a  8bce                 mov ecx, esi
// 006a574c  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a5752  8b4750               mov eax, dword ptr [edi + 0x50]
// 006a5755  8b5754               mov edx, dword ptr [edi + 0x54]
// 006a5758  b118                 mov cl, 0x18
// 006a575a  e8413d1000           call 0x7a94a0
// 006a575f  0fb6d0               movzx edx, al
// 006a5762  52                   push edx
// 006a5763  8bce                 mov ecx, esi
// 006a5765  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a576b  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a576f  50                   push eax
// 006a5770  8bce                 mov ecx, esi
// 006a5772  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a5778  6aff                 push -1
// 006a577a  8bce                 mov ecx, esi
// 006a577c  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a5782  84db                 test bl, bl
// 006a5784  7416                 je 0x6a579c
// 006a5786  8d4f18               lea ecx, [edi + 0x18]
// 006a5789  51                   push ecx
// 006a578a  8bce                 mov ecx, esi
// 006a578c  ff1518a49e00         call dword ptr [0x9ea418]
// 006a5792  6a00                 push 0
// 006a5794  8bce                 mov ecx, esi
// 006a5796  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a579c  80bc248400000000     cmp byte ptr [esp + 0x84], 0
// 006a57a4  7416                 je 0x6a57bc
// 006a57a6  83c734               add edi, 0x34
// 006a57a9  57                   push edi
// 006a57aa  8bce                 mov ecx, esi
// 006a57ac  ff1518a49e00         call dword ptr [0x9ea418]
// 006a57b2  6a00                 push 0
// 006a57b4  8bce                 mov ecx, esi
// 006a57b6  ff15eca69e00         call dword ptr [0x9ea6ec]
// 006a57bc  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 006a57c0  5f                   pop edi
// 006a57c1  5e                   pop esi
// 006a57c2  8bc5                 mov eax, ebp
// 006a57c4  5d                   pop ebp
// 006a57c5  64890d00000000       mov dword ptr fs:[0], ecx
// 006a57cc  5b                   pop ebx
// 006a57cd  83c470               add esp, 0x70
// 006a57d0  c20800               ret 8
// copied from an identical function in another client (function ??0?$basic_gzip_compressor@V?$allocator@D@std@@@iostreams@boost@@QAE@ABUgzip_params@12@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_fc27c84cd7b01590.cpp