// roc 2009-12 00887170  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00887170
//
// 00887170  56                   push esi
// 00887171  8bf1                 mov esi, ecx
// 00887173  e898faffff           call 0x886c10
// 00887178  85c0                 test eax, eax
// 0088717a  7553                 jne 0x8871cf
// 0088717c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00887180  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00887184  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00887188  50                   push eax
// 00887189  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088718d  51                   push ecx
// 0088718e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00887192  52                   push edx
// 00887193  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00887197  50                   push eax
// 00887198  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0088719c  51                   push ecx
// 0088719d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008871a1  52                   push edx
// 008871a2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008871a6  50                   push eax
// 008871a7  83ec10               sub esp, 0x10
// 008871aa  8bc4                 mov eax, esp
// 008871ac  8908                 mov dword ptr [eax], ecx
// 008871ae  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008871b2  895004               mov dword ptr [eax + 4], edx
// 008871b5  8b542444             mov edx, dword ptr [esp + 0x44]
// 008871b9  894808               mov dword ptr [eax + 8], ecx
// 008871bc  89500c               mov dword ptr [eax + 0xc], edx
// 008871bf  8b442434             mov eax, dword ptr [esp + 0x34]
// 008871c3  50                   push eax
// 008871c4  8bce                 mov ecx, esi
// 008871c6  e8c579ffff           call 0x87eb90
// 008871cb  5e                   pop esi
// 008871cc  c23000               ret 0x30
// 008871cf  837c243002           cmp dword ptr [esp + 0x30], 2
// 008871d4  8b442428             mov eax, dword ptr [esp + 0x28]
// 008871d8  7548                 jne 0x887222
// 008871da  85c0                 test eax, eax
// 008871dc  7544                 jne 0x887222
// 008871de  3944241c             cmp dword ptr [esp + 0x1c], eax
// 008871e2  750a                 jne 0x8871ee
// 008871e4  39442420             cmp dword ptr [esp + 0x20], eax
// 008871e8  0f84b5000000         je 0x8872a3
// 008871ee  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008871f2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008871f6  6a1d                 push 0x1d
// 008871f8  6a0d                 push 0xd
// 008871fa  83ec10               sub esp, 0x10
// 008871fd  8bc4                 mov eax, esp
// 008871ff  8908                 mov dword ptr [eax], ecx
// 00887201  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00887205  895004               mov dword ptr [eax + 4], edx
// 00887208  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088720c  894808               mov dword ptr [eax + 8], ecx
// 0088720f  89500c               mov dword ptr [eax + 0xc], edx
// 00887212  8b442420             mov eax, dword ptr [esp + 0x20]
// 00887216  50                   push eax
// 00887217  8bce                 mov ecx, esi
// 00887219  e84275f7ff           call 0x7fe760
// 0088721e  5e                   pop esi
// 0088721f  c23000               ret 0x30
// 00887222  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00887226  83f802               cmp eax, 2
// 00887229  7506                 jne 0x887231
// 0088722b  85c9                 test ecx, ecx
// 0088722d  7406                 je 0x887235
// 0088722f  33c0                 xor eax, eax
// 00887231  85c9                 test ecx, ecx
// 00887233  7509                 jne 0x88723e
// 00887235  f7d8                 neg eax
// 00887237  1bc0                 sbb eax, eax
// 00887239  83c004               add eax, 4
// 0088723c  eb44                 jmp 0x887282
// 0088723e  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00887243  7538                 jne 0x88727d
// 00887245  85c0                 test eax, eax
// 00887247  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088724b  7410                 je 0x88725d
// 0088724d  85c0                 test eax, eax
// 0088724f  750c                 jne 0x88725d
// 00887251  3944241c             cmp dword ptr [esp + 0x1c], eax
// 00887255  0f95c0               setne al
// 00887258  83c005               add eax, 5
// 0088725b  eb25                 jmp 0x887282
// 0088725d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00887261  85c9                 test ecx, ecx
// 00887263  7404                 je 0x887269
// 00887265  85c0                 test eax, eax
// 00887267  7514                 jne 0x88727d
// 00887269  83f802               cmp eax, 2
// 0088726c  740f                 je 0x88727d
// 0088726e  83f803               cmp eax, 3
// 00887271  740a                 je 0x88727d
// 00887273  33c0                 xor eax, eax
// 00887275  85c9                 test ecx, ecx
// 00887277  0f95c0               setne al
// 0088727a  40                   inc eax
// 0088727b  eb05                 jmp 0x887282
// 0088727d  b803000000           mov eax, 3
// 00887282  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00887286  85c9                 test ecx, ecx
// 00887288  7403                 je 0x88728d
// 0088728a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0088728d  6a00                 push 0
// 0088728f  8d542410             lea edx, [esp + 0x10]
// 00887293  52                   push edx
// 00887294  50                   push eax
// 00887295  6a01                 push 1
// 00887297  51                   push ecx
// 00887298  8d8e6c040000         lea ecx, [esi + 0x46c]
// 0088729e  e89d45feff           call 0x86b840
// 008872a3  5e                   pop esi
// 008872a4  c23000               ret 0x30
// copied from an identical function in another client (function ?DrawRectangle@CXTPNativeXPTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp