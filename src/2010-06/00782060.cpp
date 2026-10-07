// roc 2010-06 00782060  unit: seg_00780000  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00782060
//
// 00782060  56                   push esi
// 00782061  8b742408             mov esi, dword ptr [esp + 8]
// 00782065  8b06                 mov eax, dword ptr [esi]
// 00782067  66ff4034             inc word ptr [eax + 0x34]
// 0078206b  8b06                 mov eax, dword ptr [esi]
// 0078206d  b9c8000000           mov ecx, 0xc8
// 00782072  57                   push edi
// 00782073  66394834             cmp word ptr [eax + 0x34], cx
// 00782077  7621                 jbe 0x78209a
// 00782079  8b560c               mov edx, dword ptr [esi + 0xc]
// 0078207c  68f832a500           push 0xa532f8
// 00782081  52                   push edx
// 00782082  68a432a500           push 0xa532a4
// 00782087  50                   push eax
// 00782088  e8530dfbff           call 0x732de0
// 0078208d  8b06                 mov eax, dword ptr [esi]
// 0078208f  6a03                 push 3
// 00782091  50                   push eax
// 00782092  e819e0faff           call 0x7300b0
// 00782097  83c418               add esp, 0x18
// 0078209a  8b0e                 mov ecx, dword ptr [esi]
// 0078209c  51                   push ecx
// 0078209d  e8eec0ffff           call 0x77e190
// 007820a2  8b16                 mov edx, dword ptr [esi]
// 007820a4  8bf8                 mov edi, eax
// 007820a6  8b4208               mov eax, dword ptr [edx + 8]
// 007820a9  8938                 mov dword ptr [eax], edi
// 007820ab  c7400809000000       mov dword ptr [eax + 8], 9
// 007820b2  8b06                 mov eax, dword ptr [esi]
// 007820b4  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 007820b7  2b4808               sub ecx, dword ptr [eax + 8]
// 007820ba  83c404               add esp, 4
// 007820bd  83f910               cmp ecx, 0x10
// 007820c0  7f0b                 jg 0x7820cd
// 007820c2  6a01                 push 1
// 007820c4  50                   push eax
// 007820c5  e8c6dafaff           call 0x72fb90
// 007820ca  83c408               add esp, 8
// 007820cd  8b06                 mov eax, dword ptr [esi]
// 007820cf  83400810             add dword ptr [eax + 8], 0x10
// 007820d3  e8f8f8ffff           call 0x7819d0
// 007820d8  894720               mov dword ptr [edi + 0x20], eax
// 007820db  85c0                 test eax, eax
// 007820dd  7507                 jne 0x7820e6
// 007820df  8b542410             mov edx, dword ptr [esp + 0x10]
// 007820e3  895720               mov dword ptr [edi + 0x20], edx
// 007820e6  e875f8ffff           call 0x781960
// 007820eb  89473c               mov dword ptr [edi + 0x3c], eax
// 007820ee  e86df8ffff           call 0x781960
// 007820f3  894740               mov dword ptr [edi + 0x40], eax
// 007820f6  8b4e04               mov ecx, dword ptr [esi + 4]
// 007820f9  6a01                 push 1
// 007820fb  8d442410             lea eax, [esp + 0x10]
// 007820ff  50                   push eax
// 00782100  51                   push ecx
// 00782101  e8eac2ffff           call 0x77e3f0
// 00782106  83c40c               add esp, 0xc
// 00782109  85c0                 test eax, eax
// 0078210b  7423                 je 0x782130
// 0078210d  8b560c               mov edx, dword ptr [esi + 0xc]
// 00782110  8b06                 mov eax, dword ptr [esi]
// 00782112  68c032a500           push 0xa532c0
// 00782117  52                   push edx
// 00782118  68a432a500           push 0xa532a4
// 0078211d  50                   push eax
// 0078211e  e8bd0cfbff           call 0x732de0
// 00782123  8b0e                 mov ecx, dword ptr [esi]
// 00782125  6a03                 push 3
// 00782127  51                   push ecx
// 00782128  e883dffaff           call 0x7300b0
// 0078212d  83c418               add esp, 0x18
// 00782130  8a54240c             mov dl, byte ptr [esp + 0xc]
// 00782134  6a01                 push 1
// 00782136  8d442410             lea eax, [esp + 0x10]
// 0078213a  885748               mov byte ptr [edi + 0x48], dl
// 0078213d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00782140  50                   push eax
// 00782141  51                   push ecx
// 00782142  e8a9c2ffff           call 0x77e3f0
// 00782147  83c40c               add esp, 0xc
// 0078214a  85c0                 test eax, eax
// 0078214c  7423                 je 0x782171
// 0078214e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00782151  8b06                 mov eax, dword ptr [esi]
// 00782153  68c032a500           push 0xa532c0
// 00782158  52                   push edx
// 00782159  68a432a500           push 0xa532a4
// 0078215e  50                   push eax
// 0078215f  e87c0cfbff           call 0x732de0
// 00782164  8b0e                 mov ecx, dword ptr [esi]
// 00782166  6a03                 push 3
// 00782168  51                   push ecx
// 00782169  e842dffaff           call 0x7300b0
// 0078216e  83c418               add esp, 0x18
// 00782171  8a54240c             mov dl, byte ptr [esp + 0xc]
// 00782175  6a01                 push 1
// 00782177  8d442410             lea eax, [esp + 0x10]
// 0078217b  885749               mov byte ptr [edi + 0x49], dl
// 0078217e  8b4e04               mov ecx, dword ptr [esi + 4]
// 00782181  50                   push eax
// 00782182  51                   push ecx
// 00782183  e868c2ffff           call 0x77e3f0
// 00782188  83c40c               add esp, 0xc
// 0078218b  85c0                 test eax, eax
// 0078218d  7423                 je 0x7821b2
// 0078218f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00782192  8b06                 mov eax, dword ptr [esi]
// 00782194  68c032a500           push 0xa532c0
// 00782199  52                   push edx
// 0078219a  68a432a500           push 0xa532a4
// 0078219f  50                   push eax
// 007821a0  e83b0cfbff           call 0x732de0
// 007821a5  8b0e                 mov ecx, dword ptr [esi]
// 007821a7  6a03                 push 3
// 007821a9  51                   push ecx
// 007821aa  e801dffaff           call 0x7300b0
// 007821af  83c418               add esp, 0x18
// 007821b2  8a54240c             mov dl, byte ptr [esp + 0xc]
// 007821b6  6a01                 push 1
// 007821b8  8d442410             lea eax, [esp + 0x10]
// 007821bc  88574a               mov byte ptr [edi + 0x4a], dl
// 007821bf  8b4e04               mov ecx, dword ptr [esi + 4]
// 007821c2  50                   push eax
// 007821c3  51                   push ecx
// 007821c4  e827c2ffff           call 0x77e3f0
// 007821c9  83c40c               add esp, 0xc
// 007821cc  85c0                 test eax, eax
// 007821ce  7423                 je 0x7821f3
// 007821d0  8b560c               mov edx, dword ptr [esi + 0xc]
// 007821d3  8b06                 mov eax, dword ptr [esi]
// 007821d5  68c032a500           push 0xa532c0
// 007821da  52                   push edx
// 007821db  68a432a500           push 0xa532a4
// 007821e0  50                   push eax
// 007821e1  e8fa0bfbff           call 0x732de0
// 007821e6  8b0e                 mov ecx, dword ptr [esi]
// 007821e8  6a03                 push 3
// 007821ea  51                   push ecx
// 007821eb  e8c0defaff           call 0x7300b0
// 007821f0  83c418               add esp, 0x18
// 007821f3  8a54240c             mov dl, byte ptr [esp + 0xc]
// 007821f7  53                   push ebx
// 007821f8  8bdf                 mov ebx, edi
// 007821fa  8bc6                 mov eax, esi
// 007821fc  88574b               mov byte ptr [edi + 0x4b], dl
// 007821ff  e87cf8ffff           call 0x781a80
// 00782204  57                   push edi
// 00782205  8bc6                 mov eax, esi
// 00782207  e8f4f8ffff           call 0x781b00
// 0078220c  8bc6                 mov eax, esi
// 0078220e  e88dfbffff           call 0x781da0
// 00782213  57                   push edi
// 00782214  e81716fbff           call 0x733830
// 00782219  83c408               add esp, 8
// 0078221c  5b                   pop ebx
// 0078221d  85c0                 test eax, eax
// 0078221f  7523                 jne 0x782244
// 00782221  8b460c               mov eax, dword ptr [esi + 0xc]
// 00782224  8b0e                 mov ecx, dword ptr [esi]
// 00782226  68ec32a500           push 0xa532ec
// 0078222b  50                   push eax
// 0078222c  68a432a500           push 0xa532a4
// 00782231  51                   push ecx
// 00782232  e8a90bfbff           call 0x732de0
// 00782237  8b16                 mov edx, dword ptr [esi]
// 00782239  6a03                 push 3
// 0078223b  52                   push edx
// 0078223c  e86fdefaff           call 0x7300b0
// 00782241  83c418               add esp, 0x18
// 00782244  8b06                 mov eax, dword ptr [esi]
// 00782246  834008f0             add dword ptr [eax + 8], -0x10
// 0078224a  8b36                 mov esi, dword ptr [esi]
// 0078224c  b8ffff0000           mov eax, 0xffff
// 00782251  66014634             add word ptr [esi + 0x34], ax
// 00782255  8bc7                 mov eax, edi
// 00782257  5f                   pop edi
// 00782258  5e                   pop esi
// 00782259  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
