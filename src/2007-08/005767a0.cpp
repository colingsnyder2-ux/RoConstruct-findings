// from server: 100% by auto
// roc 2007-08 005767a0  unit: RBX::PartInstance  size: 425 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005767a0
//
// 005767a0  55                   push ebp
// 005767a1  8bec                 mov ebp, esp
// 005767a3  6aff                 push -1
// 005767a5  6878537500           push 0x755378
// 005767aa  64a100000000         mov eax, dword ptr fs:[0]
// 005767b0  50                   push eax
// 005767b1  64892500000000       mov dword ptr fs:[0], esp
// 005767b8  83ec1c               sub esp, 0x1c
// 005767bb  8b4514               mov eax, dword ptr [ebp + 0x14]
// 005767be  53                   push ebx
// 005767bf  56                   push esi
// 005767c0  8bf1                 mov esi, ecx
// 005767c2  8b08                 mov ecx, dword ptr [eax]
// 005767c4  8b4004               mov eax, dword ptr [eax + 4]
// 005767c7  85c0                 test eax, eax
// 005767c9  57                   push edi
// 005767ca  8965f0               mov dword ptr [ebp - 0x10], esp
// 005767cd  8975e8               mov dword ptr [ebp - 0x18], esi
// 005767d0  894dd8               mov dword ptr [ebp - 0x28], ecx
// 005767d3  8945dc               mov dword ptr [ebp - 0x24], eax
// 005767d6  740c                 je 0x5767e4
// 005767d8  8d5008               lea edx, [eax + 8]
// 005767db  b901000000           mov ecx, 1
// 005767e0  f00fc10a             lock xadd dword ptr [edx], ecx
// 005767e4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005767e7  85c9                 test ecx, ecx
// 005767e9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005767f0  7504                 jne 0x5767f6
// 005767f2  33ff                 xor edi, edi
// 005767f4  eb08                 jmp 0x5767fe
// 005767f6  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005767f9  2bf9                 sub edi, ecx
// 005767fb  c1ff03               sar edi, 3
// 005767fe  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00576801  85d2                 test edx, edx
// 00576803  897d14               mov dword ptr [ebp + 0x14], edi
// 00576806  0f842e020000         je 0x576a3a
// 0057680c  85c9                 test ecx, ecx
// 0057680e  7504                 jne 0x576814
// 00576810  33c0                 xor eax, eax
// 00576812  eb08                 jmp 0x57681c
// 00576814  8b4608               mov eax, dword ptr [esi + 8]
// 00576817  2bc1                 sub eax, ecx
// 00576819  c1f803               sar eax, 3
// 0057681c  bbffffff1f           mov ebx, 0x1fffffff
// 00576821  2bd8                 sub ebx, eax
// 00576823  3bda                 cmp ebx, edx
// 00576825  7305                 jae 0x57682c
// 00576827  e804650500           call 0x5ccd30
// 0057682c  85c9                 test ecx, ecx
// 0057682e  7504                 jne 0x576834
// 00576830  33c0                 xor eax, eax
// 00576832  eb08                 jmp 0x57683c
// 00576834  8b4608               mov eax, dword ptr [esi + 8]
// 00576837  2bc1                 sub eax, ecx
// 00576839  c1f803               sar eax, 3
// 0057683c  03c2                 add eax, edx
// 0057683e  3bf8                 cmp edi, eax
// 00576840  0f8325010000         jae 0x57696b
// 00576846  8bc7                 mov eax, edi
// 00576848  d1e8                 shr eax, 1
// 0057684a  bfffffff1f           mov edi, 0x1fffffff
// 0057684f  2bf8                 sub edi, eax
// 00576851  3b7d14               cmp edi, dword ptr [ebp + 0x14]
// 00576854  7309                 jae 0x57685f
// 00576856  c7451400000000       mov dword ptr [ebp + 0x14], 0
// 0057685d  eb03                 jmp 0x576862
// 0057685f  014514               add dword ptr [ebp + 0x14], eax
// 00576862  85c9                 test ecx, ecx
// 00576864  7504                 jne 0x57686a
// 00576866  33c0                 xor eax, eax
// 00576868  eb08                 jmp 0x576872
// 0057686a  8b4608               mov eax, dword ptr [esi + 8]
// 0057686d  2bc1                 sub eax, ecx
// 0057686f  c1f803               sar eax, 3
// 00576872  03c2                 add eax, edx
// 00576874  394514               cmp dword ptr [ebp + 0x14], eax
// 00576877  7315                 jae 0x57688e
// 00576879  85c9                 test ecx, ecx
// 0057687b  7504                 jne 0x576881
// 0057687d  33c0                 xor eax, eax
// 0057687f  eb08                 jmp 0x576889
// 00576881  8b4608               mov eax, dword ptr [esi + 8]
// 00576884  2bc1                 sub eax, ecx
// 00576886  c1f803               sar eax, 3
// 00576889  03c2                 add eax, edx
// 0057688b  894514               mov dword ptr [ebp + 0x14], eax
// 0057688e  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00576891  6a00                 push 0
// 00576893  52                   push edx
// 00576894  e82712ffff           call 0x567ac0
// 00576899  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0057689c  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0057689f  c645e400             mov byte ptr [ebp - 0x1c], 0
// 005768a3  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005768a6  51                   push ecx
// 005768a7  52                   push edx
// 005768a8  8bf8                 mov edi, eax
// 005768aa  8b4604               mov eax, dword ptr [esi + 4]
// 005768ad  56                   push esi
// 005768ae  57                   push edi
// 005768af  53                   push ebx
// 005768b0  50                   push eax
// 005768b1  897de0               mov dword ptr [ebp - 0x20], edi
// 005768b4  897dec               mov dword ptr [ebp - 0x14], edi
// 005768b7  c645fc01             mov byte ptr [ebp - 4], 1
// 005768bb  e860ebffff           call 0x575420
// 005768c0  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005768c3  83c420               add esp, 0x20
// 005768c6  8d4dd8               lea ecx, [ebp - 0x28]
// 005768c9  51                   push ecx
// 005768ca  52                   push edx
// 005768cb  50                   push eax
// 005768cc  8bce                 mov ecx, esi
// 005768ce  8945ec               mov dword ptr [ebp - 0x14], eax
// 005768d1  e86afbffff           call 0x576440
// 005768d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 005768d9  c6450c00             mov byte ptr [ebp + 0xc], 0
// 005768dd  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005768e0  52                   push edx
// 005768e1  8b5510               mov edx, dword ptr [ebp + 0x10]
// 005768e4  52                   push edx
// 005768e5  56                   push esi
// 005768e6  50                   push eax
// 005768e7  51                   push ecx
// 005768e8  53                   push ebx
// 005768e9  8945ec               mov dword ptr [ebp - 0x14], eax
// 005768ec  e82febffff           call 0x575420
// 005768f1  8b4e04               mov ecx, dword ptr [esi + 4]
// 005768f4  83c418               add esp, 0x18
// 005768f7  85c9                 test ecx, ecx
// 005768f9  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00576900  7504                 jne 0x576906
// 00576902  33c0                 xor eax, eax
// 00576904  eb08                 jmp 0x57690e
// 00576906  8b4608               mov eax, dword ptr [esi + 8]
// 00576909  2bc1                 sub eax, ecx
// 0057690b  c1f803               sar eax, 3
// 0057690e  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00576911  03d8                 add ebx, eax
// 00576913  85c9                 test ecx, ecx
// 00576915  741b                 je 0x576932
// 00576917  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0057691a  8b4608               mov eax, dword ptr [esi + 8]
// 0057691d  52                   push edx
// 0057691e  56                   push esi
// 0057691f  50                   push eax
// 00576920  51                   push ecx
// 00576921  e83a14ffff           call 0x567d60
// 00576926  8b4604               mov eax, dword ptr [esi + 4]
// 00576929  50                   push eax
// 0057692a  e833930b00           call 0x62fc62
// 0057692f  83c414               add esp, 0x14
// 00576932  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00576935  8d0cc7               lea ecx, [edi + eax*8]
// 00576938  8d14df               lea edx, [edi + ebx*8]
// 0057693b  894e0c               mov dword ptr [esi + 0xc], ecx
// 0057693e  895608               mov dword ptr [esi + 8], edx
// 00576941  897e04               mov dword ptr [esi + 4], edi
// 00576944  e9ee000000           jmp 0x576a37
// library templates-boost-1_34_1/vector_wp.cpp (function ?_Insert_n@?$vector@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXV?$_Vector_iterator@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@2@IABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
