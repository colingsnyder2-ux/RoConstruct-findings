// roc 2011-06 0088a860  unit: CXTPRibbonTheme  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088a860
//
// 0088a860  6aff                 push -1
// 0088a862  68a18fa000           push 0xa08fa1
// 0088a867  64a100000000         mov eax, dword ptr fs:[0]
// 0088a86d  50                   push eax
// 0088a86e  83ec68               sub esp, 0x68
// 0088a871  53                   push ebx
// 0088a872  55                   push ebp
// 0088a873  56                   push esi
// 0088a874  57                   push edi
// 0088a875  a12058c900           mov eax, dword ptr [0xc95820]
// 0088a87a  33c4                 xor eax, esp
// 0088a87c  50                   push eax
// 0088a87d  8d44247c             lea eax, [esp + 0x7c]
// 0088a881  64a300000000         mov dword ptr fs:[0], eax
// 0088a887  8be9                 mov ebp, ecx
// 0088a889  896c2418             mov dword ptr [esp + 0x18], ebp
// 0088a88d  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 0088a894  8b7740               mov esi, dword ptr [edi + 0x40]
// 0088a897  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0088a89a  8b573c               mov edx, dword ptr [edi + 0x3c]
// 0088a89d  8b5f38               mov ebx, dword ptr [edi + 0x38]
// 0088a8a0  8bc6                 mov eax, esi
// 0088a8a2  2b8560060000         sub eax, dword ptr [ebp + 0x660]
// 0088a8a8  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0088a8ac  89442448             mov dword ptr [esp + 0x48], eax
// 0088a8b0  89442420             mov dword ptr [esp + 0x20], eax
// 0088a8b4  8b4770               mov eax, dword ptr [edi + 0x70]
// 0088a8b7  895c2440             mov dword ptr [esp + 0x40], ebx
// 0088a8bb  89542444             mov dword ptr [esp + 0x44], edx
// 0088a8bf  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088a8c3  89542424             mov dword ptr [esp + 0x24], edx
// 0088a8c7  89742428             mov dword ptr [esp + 0x28], esi
// 0088a8cb  85c0                 test eax, eax
// 0088a8cd  0f8500020000         jne 0x88aad3
// 0088a8d3  8bcf                 mov ecx, edi
// 0088a8d5  e8a6c50600           call 0x8f6e80
// 0088a8da  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 0088a8e1  8bcd                 mov ecx, ebp
// 0088a8e3  7511                 jne 0x88a8f6
// 0088a8e5  685406ad00           push 0xad0654
// 0088a8ea  e8a1490000           call 0x88f290
// 0088a8ef  684006ad00           push 0xad0640
// 0088a8f4  eb0f                 jmp 0x88a905
// 0088a8f6  682806ad00           push 0xad0628
// 0088a8fb  e890490000           call 0x88f290
// 0088a900  681006ad00           push 0xad0610
// 0088a905  8bcd                 mov ecx, ebp
// 0088a907  8bd8                 mov ebx, eax
// 0088a909  e882490000           call 0x88f290
// 0088a90e  8bcf                 mov ecx, edi
// 0088a910  89442414             mov dword ptr [esp + 0x14], eax
// 0088a914  e877c50600           call 0x8f6e90
// 0088a919  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0088a920  8bf0                 mov esi, eax
// 0088a922  f7de                 neg esi
// 0088a924  1bf6                 sbb esi, esi
// 0088a926  f7de                 neg esi
// 0088a928  85db                 test ebx, ebx
// 0088a92a  744c                 je 0x88a978
// 0088a92c  6a02                 push 2
// 0088a92e  56                   push esi
// 0088a92f  8d442454             lea eax, [esp + 0x54]
// 0088a933  50                   push eax
// 0088a934  8bcb                 mov ecx, ebx
// 0088a936  e8d52d0600           call 0x8ed710
// 0088a93b  83ec10               sub esp, 0x10
// 0088a93e  8bcc                 mov ecx, esp
// 0088a940  ba05000000           mov edx, 5
// 0088a945  8911                 mov dword ptr [ecx], edx
// 0088a947  895104               mov dword ptr [ecx + 4], edx
// 0088a94a  895108               mov dword ptr [ecx + 8], edx
// 0088a94d  89510c               mov dword ptr [ecx + 0xc], edx
// 0088a950  8b10                 mov edx, dword ptr [eax]
// 0088a952  83ec10               sub esp, 0x10
// 0088a955  8bcc                 mov ecx, esp
// 0088a957  8911                 mov dword ptr [ecx], edx
// 0088a959  8b5004               mov edx, dword ptr [eax + 4]
// 0088a95c  895104               mov dword ptr [ecx + 4], edx
// 0088a95f  8b5008               mov edx, dword ptr [eax + 8]
// 0088a962  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088a965  895108               mov dword ptr [ecx + 8], edx
// 0088a968  89410c               mov dword ptr [ecx + 0xc], eax
// 0088a96b  8d4c245c             lea ecx, [esp + 0x5c]
// 0088a96f  51                   push ecx
// 0088a970  55                   push ebp
// 0088a971  8bcb                 mov ecx, ebx
// 0088a973  e868260600           call 0x8ecfe0
// 0088a978  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0088a97c  85c9                 test ecx, ecx
// 0088a97e  7452                 je 0x88a9d2
// 0088a980  6a02                 push 2
// 0088a982  56                   push esi
// 0088a983  8d542474             lea edx, [esp + 0x74]
// 0088a987  bb05000000           mov ebx, 5
// 0088a98c  52                   push edx
// 0088a98d  895c2464             mov dword ptr [esp + 0x64], ebx
// 0088a991  e87a2d0600           call 0x8ed710
// 0088a996  83ec10               sub esp, 0x10
// 0088a999  8bcc                 mov ecx, esp
// 0088a99b  8919                 mov dword ptr [ecx], ebx
// 0088a99d  8bd3                 mov edx, ebx
// 0088a99f  895104               mov dword ptr [ecx + 4], edx
// 0088a9a2  895108               mov dword ptr [ecx + 8], edx
// 0088a9a5  89510c               mov dword ptr [ecx + 0xc], edx
// 0088a9a8  8b10                 mov edx, dword ptr [eax]
// 0088a9aa  83ec10               sub esp, 0x10
// 0088a9ad  8bcc                 mov ecx, esp
// 0088a9af  8911                 mov dword ptr [ecx], edx
// 0088a9b1  8b5004               mov edx, dword ptr [eax + 4]
// 0088a9b4  895104               mov dword ptr [ecx + 4], edx
// 0088a9b7  8b5008               mov edx, dword ptr [eax + 8]
// 0088a9ba  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088a9bd  895108               mov dword ptr [ecx + 8], edx
// 0088a9c0  89410c               mov dword ptr [ecx + 0xc], eax
// 0088a9c3  8d4c243c             lea ecx, [esp + 0x3c]
// 0088a9c7  51                   push ecx
// 0088a9c8  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0088a9cc  55                   push ebp
// 0088a9cd  e80e260600           call 0x8ecfe0
// 0088a9d2  8d942490000000       lea edx, [esp + 0x90]
// 0088a9d9  52                   push edx
// 0088a9da  8bcf                 mov ecx, edi
// 0088a9dc  e87f860400           call 0x8d3060
// 0088a9e1  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 0088a9ec  e88f43fdff           call 0x85ed80
// 0088a9f1  8d842490000000       lea eax, [esp + 0x90]
// 0088a9f8  50                   push eax
// 0088a9f9  e8e213fdff           call 0x85bde0
// 0088a9fe  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0088aa02  83c404               add esp, 4
// 0088aa05  8d8e54060000         lea ecx, [esi + 0x654]
// 0088aa0b  51                   push ecx
// 0088aa0c  55                   push ebp
// 0088aa0d  8d4c2464             lea ecx, [esp + 0x64]
// 0088aa11  e80a27fdff           call 0x85d120
// 0088aa16  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088aa1a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088aa1e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088aa22  6aff                 push -1
// 0088aa24  89442434             mov dword ptr [esp + 0x34], eax
// 0088aa28  89542430             mov dword ptr [esp + 0x30], edx
// 0088aa2c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088aa30  6a00                 push 0
// 0088aa32  8d442434             lea eax, [esp + 0x34]
// 0088aa36  50                   push eax
// 0088aa37  c684249000000001     mov byte ptr [esp + 0x90], 1
// 0088aa3f  894c2440             mov dword ptr [esp + 0x40], ecx
// 0088aa43  89542444             mov dword ptr [esp + 0x44], edx
// 0088aa47  ff15601ca400         call dword ptr [0xa41c60]
// 0088aa4d  8bcf                 mov ecx, edi
// 0088aa4f  e86cc40600           call 0x8f6ec0
// 0088aa54  85c0                 test eax, eax
// 0088aa56  740d                 je 0x88aa65
// 0088aa58  83c9ff               or ecx, 0xffffffff
// 0088aa5b  2b8e60060000         sub ecx, dword ptr [esi + 0x660]
// 0088aa61  014c2434             add dword ptr [esp + 0x34], ecx
// 0088aa65  6afe                 push -2
// 0088aa67  6afe                 push -2
// 0088aa69  8d542434             lea edx, [esp + 0x34]
// 0088aa6d  52                   push edx
// 0088aa6e  ff15e41ba400         call dword ptr [0xa41be4]
// 0088aa74  8b8e74060000         mov ecx, dword ptr [esi + 0x674]
// 0088aa7a  8b4500               mov eax, dword ptr [ebp]
// 0088aa7d  8b5038               mov edx, dword ptr [eax + 0x38]
// 0088aa80  51                   push ecx
// 0088aa81  8bcd                 mov ecx, ebp
// 0088aa83  ffd2                 call edx
// 0088aa85  8b7500               mov esi, dword ptr [ebp]
// 0088aa88  6825880000           push 0x8825
// 0088aa8d  8d442430             lea eax, [esp + 0x30]
// 0088aa91  50                   push eax
// 0088aa92  8d8c2498000000       lea ecx, [esp + 0x98]
// 0088aa99  ff15a826a400         call dword ptr [0xa426a8]
// 0088aa9f  50                   push eax
// 0088aaa0  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0088aaa7  ff15c82da400         call dword ptr [0xa42dc8]
// 0088aaad  8b5670               mov edx, dword ptr [esi + 0x70]
// 0088aab0  50                   push eax
// 0088aab1  8bcd                 mov ecx, ebp
// 0088aab3  ffd2                 call edx
// 0088aab5  8d4c245c             lea ecx, [esp + 0x5c]
// 0088aab9  c684248400000000     mov byte ptr [esp + 0x84], 0
// 0088aac1  e8da26fdff           call 0x85d1a0
// 0088aac6  8d8c2490000000       lea ecx, [esp + 0x90]
// 0088aacd  ff15082ea400         call dword ptr [0xa42e08]
// 0088aad3  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0088aad7  64890d00000000       mov dword ptr fs:[0], ecx
// 0088aade  59                   pop ecx
// 0088aadf  5f                   pop edi
// 0088aae0  5e                   pop esi
// 0088aae1  5d                   pop ebp
// 0088aae2  5b                   pop ebx
// 0088aae3  83c474               add esp, 0x74
// 0088aae6  c20800               ret 8
// copied from an identical function in another client (function ?DrawGroup@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonGroup@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp