// roc 2009-12 00882010  unit: CXTPControlGalleryOffice2007Theme  size: 698 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00882010
//
// 00882010  83ec5c               sub esp, 0x5c
// 00882013  53                   push ebx
// 00882014  55                   push ebp
// 00882015  56                   push esi
// 00882016  8b742470             mov esi, dword ptr [esp + 0x70]
// 0088201a  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00882020  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00882026  8b86e4010000         mov eax, dword ptr [esi + 0x1e4]
// 0088202c  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 00882032  89542448             mov dword ptr [esp + 0x48], edx
// 00882036  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00882039  03d3                 add edx, ebx
// 0088203b  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0088203f  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 00882042  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00882045  89442410             mov dword ptr [esp + 0x10], eax
// 00882049  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0088204f  57                   push edi
// 00882050  8d78f1               lea edi, [eax - 0xf]
// 00882053  03da                 add ebx, edx
// 00882055  682026a000           push 0xa02620
// 0088205a  897c2430             mov dword ptr [esp + 0x30], edi
// 0088205e  89442438             mov dword ptr [esp + 0x38], eax
// 00882062  8954243c             mov dword ptr [esp + 0x3c], edx
// 00882066  897c2440             mov dword ptr [esp + 0x40], edi
// 0088206a  89542444             mov dword ptr [esp + 0x44], edx
// 0088206e  89442448             mov dword ptr [esp + 0x48], eax
// 00882072  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00882076  897c2450             mov dword ptr [esp + 0x50], edi
// 0088207a  895c2454             mov dword ptr [esp + 0x54], ebx
// 0088207e  89442458             mov dword ptr [esp + 0x58], eax
// 00882082  896c245c             mov dword ptr [esp + 0x5c], ebp
// 00882086  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088208a  e871ccffff           call 0x87ed00
// 0088208f  8bd8                 mov ebx, eax
// 00882091  85db                 test ebx, ebx
// 00882093  0f8427020000         je 0x8822c0
// 00882099  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0088209f  83cdff               or ebp, 0xffffffff
// 008820a2  3bc5                 cmp eax, ebp
// 008820a4  750f                 jne 0x8820b5
// 008820a6  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008820ac  85c9                 test ecx, ecx
// 008820ae  7405                 je 0x8820b5
// 008820b0  e8fb44f7ff           call 0x7f65b0
// 008820b5  837c241400           cmp dword ptr [esp + 0x14], 0
// 008820ba  89442474             mov dword ptr [esp + 0x74], eax
// 008820be  7410                 je 0x8820d0
// 008820c0  8b86dc010000         mov eax, dword ptr [esi + 0x1dc]
// 008820c6  89442410             mov dword ptr [esp + 0x10], eax
// 008820ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 008820ce  eb10                 jmp 0x8820e0
// 008820d0  8b8edc010000         mov ecx, dword ptr [esi + 0x1dc]
// 008820d6  896c2410             mov dword ptr [esp + 0x10], ebp
// 008820da  894c2414             mov dword ptr [esp + 0x14], ecx
// 008820de  8be9                 mov ebp, ecx
// 008820e0  837c247400           cmp dword ptr [esp + 0x74], 0
// 008820e5  bf03000000           mov edi, 3
// 008820ea  7437                 je 0x882123
// 008820ec  6a3c                 push 0x3c
// 008820ee  8bce                 mov ecx, esi
// 008820f0  e83b6affff           call 0x878b30
// 008820f5  85c0                 test eax, eax
// 008820f7  742a                 je 0x882123
// 008820f9  8b442410             mov eax, dword ptr [esp + 0x10]
// 008820fd  83f83c               cmp eax, 0x3c
// 00882100  7504                 jne 0x882106
// 00882102  8bc7                 mov eax, edi
// 00882104  eb22                 jmp 0x882128
// 00882106  83fd3c               cmp ebp, 0x3c
// 00882109  7505                 jne 0x882110
// 0088210b  8d45c6               lea eax, [ebp - 0x3a]
// 0088210e  eb18                 jmp 0x882128
// 00882110  85ed                 test ebp, ebp
// 00882112  7f08                 jg 0x88211c
// 00882114  85c0                 test eax, eax
// 00882116  7f04                 jg 0x88211c
// 00882118  33c0                 xor eax, eax
// 0088211a  eb0c                 jmp 0x882128
// 0088211c  b801000000           mov eax, 1
// 00882121  eb05                 jmp 0x882128
// 00882123  b804000000           mov eax, 4
// 00882128  6a05                 push 5
// 0088212a  50                   push eax
// 0088212b  8d542464             lea edx, [esp + 0x64]
// 0088212f  52                   push edx
// 00882130  8bcb                 mov ecx, ebx
// 00882132  897c2428             mov dword ptr [esp + 0x28], edi
// 00882136  897c242c             mov dword ptr [esp + 0x2c], edi
// 0088213a  897c2430             mov dword ptr [esp + 0x30], edi
// 0088213e  897c2434             mov dword ptr [esp + 0x34], edi
// 00882142  e879e70500           call 0x8e08c0
// 00882147  8b10                 mov edx, dword ptr [eax]
// 00882149  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0088214d  68ff00ff00           push 0xff00ff
// 00882152  8d4c2420             lea ecx, [esp + 0x20]
// 00882156  51                   push ecx
// 00882157  83ec10               sub esp, 0x10
// 0088215a  8bcc                 mov ecx, esp
// 0088215c  8911                 mov dword ptr [ecx], edx
// 0088215e  8b5004               mov edx, dword ptr [eax + 4]
// 00882161  895104               mov dword ptr [ecx + 4], edx
// 00882164  8b5008               mov edx, dword ptr [eax + 8]
// 00882167  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088216a  895108               mov dword ptr [ecx + 8], edx
// 0088216d  89410c               mov dword ptr [ecx + 0xc], eax
// 00882170  8d4c2444             lea ecx, [esp + 0x44]
// 00882174  51                   push ecx
// 00882175  55                   push ebp
// 00882176  8bcb                 mov ecx, ebx
// 00882178  e883ec0500           call 0x8e0e00
// 0088217d  837c247400           cmp dword ptr [esp + 0x74], 0
// 00882182  743b                 je 0x8821bf
// 00882184  6a3d                 push 0x3d
// 00882186  8bce                 mov ecx, esi
// 00882188  e8a369ffff           call 0x878b30
// 0088218d  85c0                 test eax, eax
// 0088218f  742e                 je 0x8821bf
// 00882191  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00882195  83f93d               cmp ecx, 0x3d
// 00882198  7504                 jne 0x88219e
// 0088219a  8bdf                 mov ebx, edi
// 0088219c  eb26                 jmp 0x8821c4
// 0088219e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008821a2  83f83d               cmp eax, 0x3d
// 008821a5  7505                 jne 0x8821ac
// 008821a7  8d58c5               lea ebx, [eax - 0x3b]
// 008821aa  eb18                 jmp 0x8821c4
// 008821ac  85c0                 test eax, eax
// 008821ae  7f08                 jg 0x8821b8
// 008821b0  85c9                 test ecx, ecx
// 008821b2  7f04                 jg 0x8821b8
// 008821b4  33db                 xor ebx, ebx
// 008821b6  eb0c                 jmp 0x8821c4
// 008821b8  bb01000000           mov ebx, 1
// 008821bd  eb05                 jmp 0x8821c4
// 008821bf  bb04000000           mov ebx, 4
// 008821c4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008821c8  680c26a000           push 0xa0260c
// 008821cd  e82ecbffff           call 0x87ed00
// 008821d2  6a05                 push 5
// 008821d4  8bf0                 mov esi, eax
// 008821d6  53                   push ebx
// 008821d7  8d542464             lea edx, [esp + 0x64]
// 008821db  52                   push edx
// 008821dc  8bce                 mov ecx, esi
// 008821de  897c2428             mov dword ptr [esp + 0x28], edi
// 008821e2  897c242c             mov dword ptr [esp + 0x2c], edi
// 008821e6  897c2430             mov dword ptr [esp + 0x30], edi
// 008821ea  897c2434             mov dword ptr [esp + 0x34], edi
// 008821ee  e8cde60500           call 0x8e08c0
// 008821f3  8b10                 mov edx, dword ptr [eax]
// 008821f5  68ff00ff00           push 0xff00ff
// 008821fa  8d4c2420             lea ecx, [esp + 0x20]
// 008821fe  51                   push ecx
// 008821ff  83ec10               sub esp, 0x10
// 00882202  8bcc                 mov ecx, esp
// 00882204  8911                 mov dword ptr [ecx], edx
// 00882206  8b5004               mov edx, dword ptr [eax + 4]
// 00882209  895104               mov dword ptr [ecx + 4], edx
// 0088220c  8b5008               mov edx, dword ptr [eax + 8]
// 0088220f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00882212  895108               mov dword ptr [ecx + 8], edx
// 00882215  89410c               mov dword ptr [ecx + 0xc], eax
// 00882218  8d4c2454             lea ecx, [esp + 0x54]
// 0088221c  51                   push ecx
// 0088221d  55                   push ebp
// 0088221e  8bce                 mov ecx, esi
// 00882220  e8dbeb0500           call 0x8e0e00
// 00882225  837c247400           cmp dword ptr [esp + 0x74], 0
// 0088222a  7507                 jne 0x882233
// 0088222c  bb04000000           mov ebx, 4
// 00882231  eb2c                 jmp 0x88225f
// 00882233  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00882237  83f941               cmp ecx, 0x41
// 0088223a  7504                 jne 0x882240
// 0088223c  8bdf                 mov ebx, edi
// 0088223e  eb1f                 jmp 0x88225f
// 00882240  8b442414             mov eax, dword ptr [esp + 0x14]
// 00882244  83f841               cmp eax, 0x41
// 00882247  7505                 jne 0x88224e
// 00882249  8d58c1               lea ebx, [eax - 0x3f]
// 0088224c  eb11                 jmp 0x88225f
// 0088224e  85c0                 test eax, eax
// 00882250  7f08                 jg 0x88225a
// 00882252  85c9                 test ecx, ecx
// 00882254  7f04                 jg 0x88225a
// 00882256  33db                 xor ebx, ebx
// 00882258  eb05                 jmp 0x88225f
// 0088225a  bb01000000           mov ebx, 1
// 0088225f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00882263  68f825a000           push 0xa025f8
// 00882268  e893caffff           call 0x87ed00
// 0088226d  6a05                 push 5
// 0088226f  8bf0                 mov esi, eax
// 00882271  53                   push ebx
// 00882272  8d542464             lea edx, [esp + 0x64]
// 00882276  52                   push edx
// 00882277  8bce                 mov ecx, esi
// 00882279  897c2428             mov dword ptr [esp + 0x28], edi
// 0088227d  897c242c             mov dword ptr [esp + 0x2c], edi
// 00882281  897c2430             mov dword ptr [esp + 0x30], edi
// 00882285  897c2434             mov dword ptr [esp + 0x34], edi
// 00882289  e832e60500           call 0x8e08c0
// 0088228e  8b10                 mov edx, dword ptr [eax]
// 00882290  68ff00ff00           push 0xff00ff
// 00882295  8d4c2420             lea ecx, [esp + 0x20]
// 00882299  51                   push ecx
// 0088229a  83ec10               sub esp, 0x10
// 0088229d  8bcc                 mov ecx, esp
// 0088229f  8911                 mov dword ptr [ecx], edx
// 008822a1  8b5004               mov edx, dword ptr [eax + 4]
// 008822a4  895104               mov dword ptr [ecx + 4], edx
// 008822a7  8b5008               mov edx, dword ptr [eax + 8]
// 008822aa  8b400c               mov eax, dword ptr [eax + 0xc]
// 008822ad  895108               mov dword ptr [ecx + 8], edx
// 008822b0  89410c               mov dword ptr [ecx + 0xc], eax
// 008822b3  8d4c2464             lea ecx, [esp + 0x64]
// 008822b7  51                   push ecx
// 008822b8  55                   push ebp
// 008822b9  8bce                 mov ecx, esi
// 008822bb  e840eb0500           call 0x8e0e00
// 008822c0  5f                   pop edi
// 008822c1  5e                   pop esi
// 008822c2  5d                   pop ebp
// 008822c3  5b                   pop ebx
// 008822c4  83c45c               add esp, 0x5c
// 008822c7  c20800               ret 8
// copied from an identical function in another client (function ?DrawPopupScrollBar@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPControlGallery@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp