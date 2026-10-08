// from server: 100% by auto
// roc 2010-06 00733380  unit: lua_exception  size: 1192 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733380
//
// 00733380  83ec18               sub esp, 0x18
// 00733383  56                   push esi
// 00733384  8b742420             mov esi, dword ptr [esp + 0x20]
// 00733388  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0073338b  89442410             mov dword ptr [esp + 0x10], eax
// 0073338f  48                   dec eax
// 00733390  8944240c             mov dword ptr [esp + 0xc], eax
// 00733394  8bc6                 mov eax, esi
// 00733396  e805ffffff           call 0x7332a0
// 0073339b  85c0                 test eax, eax
// 0073339d  7505                 jne 0x7333a4
// 0073339f  5e                   pop esi
// 007333a0  83c418               add esp, 0x18
// 007333a3  c3                   ret 
// 007333a4  837c242400           cmp dword ptr [esp + 0x24], 0
// 007333a9  53                   push ebx
// 007333aa  55                   push ebp
// 007333ab  57                   push edi
// 007333ac  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007333b4  0f8ef9030000         jle 0x7337b3
// 007333ba  8b460c               mov eax, dword ptr [esi + 0xc]
// 007333bd  89442420             mov dword ptr [esp + 0x20], eax
// 007333c1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007333c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 007333c9  8b0491               mov eax, dword ptr [ecx + edx*4]
// 007333cc  8be8                 mov ebp, eax
// 007333ce  8bd8                 mov ebx, eax
// 007333d0  c1ed06               shr ebp, 6
// 007333d3  83e33f               and ebx, 0x3f
// 007333d6  33f6                 xor esi, esi
// 007333d8  81e5ff000000         and ebp, 0xff
// 007333de  83fb26               cmp ebx, 0x26
// 007333e1  895c2424             mov dword ptr [esp + 0x24], ebx
// 007333e5  89742414             mov dword ptr [esp + 0x14], esi
// 007333e9  0f8dd3000000         jge 0x7334c2
// 007333ef  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007333f3  0fb6494b             movzx ecx, byte ptr [ecx + 0x4b]
// 007333f7  3be9                 cmp ebp, ecx
// 007333f9  0f8dc3000000         jge 0x7334c2
// 007333ff  8a93e434a500         mov dl, byte ptr [ebx + 0xa534e4]
// 00733405  0fb6fa               movzx edi, dl
// 00733408  8bcf                 mov ecx, edi
// 0073340a  83e103               and ecx, 3
// 0073340d  2bce                 sub ecx, esi
// 0073340f  0f84cf000000         je 0x7334e4
// 00733415  83e901               sub ecx, 1
// 00733418  0f84ae000000         je 0x7334cc
// 0073341e  83e901               sub ecx, 1
// 00733421  7563                 jne 0x733486
// 00733423  c1e80e               shr eax, 0xe
// 00733426  2dffff0100           sub eax, 0x1ffff
// 0073342b  80e230               and dl, 0x30
// 0073342e  8bf0                 mov esi, eax
// 00733430  80fa20               cmp dl, 0x20
// 00733433  7551                 jne 0x733486
// 00733435  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00733439  8d443e01             lea eax, [esi + edi + 1]
// 0073343d  85c0                 test eax, eax
// 0073343f  0f8c7d000000         jl 0x7334c2
// 00733445  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00733449  7d77                 jge 0x7334c2
// 0073344b  85c0                 test eax, eax
// 0073344d  0f8ed7000000         jle 0x73352a
// 00733453  33d2                 xor edx, edx
// 00733455  85c0                 test eax, eax
// 00733457  7e28                 jle 0x733481
// 00733459  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0073345d  8d7c81fc             lea edi, [ecx + eax*4 - 4]
// 00733461  8b0f                 mov ecx, dword ptr [edi]
// 00733463  8bd9                 mov ebx, ecx
// 00733465  83e33f               and ebx, 0x3f
// 00733468  80fb22               cmp bl, 0x22
// 0073346b  7510                 jne 0x73347d
// 0073346d  f7c100c07f00         test ecx, 0x7fc000
// 00733473  7508                 jne 0x73347d
// 00733475  42                   inc edx
// 00733476  83ef04               sub edi, 4
// 00733479  3bd0                 cmp edx, eax
// 0073347b  7ce4                 jl 0x733461
// 0073347d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00733481  f6c201               test dl, 1
// 00733484  753c                 jne 0x7334c2
// 00733486  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0073348a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0073348e  8a83e434a500         mov al, byte ptr [ebx + 0xa534e4]
// 00733494  a840                 test al, 0x40
// 00733496  740a                 je 0x7334a2
// 00733498  3b6c2434             cmp ebp, dword ptr [esp + 0x34]
// 0073349c  7504                 jne 0x7334a2
// 0073349e  897c2418             mov dword ptr [esp + 0x18], edi
// 007334a2  84c0                 test al, al
// 007334a4  0f8989000000         jns 0x733533
// 007334aa  8d4702               lea eax, [edi + 2]
// 007334ad  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 007334b1  7d0f                 jge 0x7334c2
// 007334b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007334b7  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 007334bb  83e03f               and eax, 0x3f
// 007334be  3c16                 cmp al, 0x16
// 007334c0  7475                 je 0x733537
// 007334c2  5f                   pop edi
// 007334c3  5d                   pop ebp
// 007334c4  5b                   pop ebx
// 007334c5  33c0                 xor eax, eax
// 007334c7  5e                   pop esi
// 007334c8  83c418               add esp, 0x18
// 007334cb  c3                   ret 
// 007334cc  c1e80e               shr eax, 0xe
// 007334cf  80e230               and dl, 0x30
// 007334d2  8bf0                 mov esi, eax
// 007334d4  80fa30               cmp dl, 0x30
// 007334d7  75ad                 jne 0x733486
// 007334d9  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007334dd  3b7228               cmp esi, dword ptr [edx + 0x28]
// 007334e0  7de0                 jge 0x7334c2
// 007334e2  eba6                 jmp 0x73348a
// 007334e4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007334e8  8bf0                 mov esi, eax
// 007334ea  c1e80e               shr eax, 0xe
// 007334ed  25ff010000           and eax, 0x1ff
// 007334f2  89442414             mov dword ptr [esp + 0x14], eax
// 007334f6  8bc7                 mov eax, edi
// 007334f8  c1e804               shr eax, 4
// 007334fb  c1ee17               shr esi, 0x17
// 007334fe  83e003               and eax, 3
// 00733501  8bce                 mov ecx, esi
// 00733503  e828feffff           call 0x733330
// 00733508  85c0                 test eax, eax
// 0073350a  74b6                 je 0x7334c2
// 0073350c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00733510  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00733514  8bc7                 mov eax, edi
// 00733516  c1e802               shr eax, 2
// 00733519  83e003               and eax, 3
// 0073351c  e80ffeffff           call 0x733330
// 00733521  85c0                 test eax, eax
// 00733523  749d                 je 0x7334c2
// 00733525  e95cffffff           jmp 0x733486
// 0073352a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0073352e  e95bffffff           jmp 0x73348e
// 00733533  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00733537  83c3fe               add ebx, -2
// 0073353a  83fb23               cmp ebx, 0x23
// 0073353d  0f8759020000         ja 0x73379c
// 00733543  0fb68304387300       movzx eax, byte ptr [ebx + 0x733804]
// 0073354a  ff2485c8377300       jmp dword ptr [eax*4 + 0x7337c8]
// 00733551  837c241401           cmp dword ptr [esp + 0x14], 1
// 00733556  0f8540020000         jne 0x73379c
// 0073355c  8d5702               lea edx, [edi + 2]
// 0073355f  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00733563  0f8d59ffffff         jge 0x7334c2
// 00733569  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 0073356d  8bc8                 mov ecx, eax
// 0073356f  83e13f               and ecx, 0x3f
// 00733572  80f922               cmp cl, 0x22
// 00733575  0f8521020000         jne 0x73379c
// 0073357b  a900c07f00           test eax, 0x7fc000
// 00733580  0f843cffffff         je 0x7334c2
// 00733586  e911020000           jmp 0x73379c
// 0073358b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0073358f  3be8                 cmp ebp, eax
// 00733591  0f8f05020000         jg 0x73379c
// 00733597  3bc6                 cmp eax, esi
// 00733599  0f8ffd010000         jg 0x73379c
// 0073359f  897c2418             mov dword ptr [esp + 0x18], edi
// 007335a3  e9f4010000           jmp 0x73379c
// 007335a8  0fb65248             movzx edx, byte ptr [edx + 0x48]
// 007335ac  3bf2                 cmp esi, edx
// 007335ae  e9e3010000           jmp 0x733796
// 007335b3  8b4208               mov eax, dword ptr [edx + 8]
// 007335b6  c1e604               shl esi, 4
// 007335b9  837c060804           cmp dword ptr [esi + eax + 8], 4
// 007335be  0f85fefeffff         jne 0x7334c2
// 007335c4  e9d3010000           jmp 0x73379c
// 007335c9  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 007335cd  45                   inc ebp
// 007335ce  3be8                 cmp ebp, eax
// 007335d0  0f8decfeffff         jge 0x7334c2
// 007335d6  396c2434             cmp dword ptr [esp + 0x34], ebp
// 007335da  0f85bc010000         jne 0x73379c
// 007335e0  897c2418             mov dword ptr [esp + 0x18], edi
// 007335e4  e9b3010000           jmp 0x73379c
// 007335e9  3b742414             cmp esi, dword ptr [esp + 0x14]
// 007335ed  e9a4010000           jmp 0x733796
// 007335f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 007335f6  83f801               cmp eax, 1
// 007335f9  0f8cc3feffff         jl 0x7334c2
// 007335ff  8d4c2802             lea ecx, [eax + ebp + 2]
// 00733603  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 00733607  3bc8                 cmp ecx, eax
// 00733609  0f8db3feffff         jge 0x7334c2
// 0073360f  83c502               add ebp, 2
// 00733612  396c2434             cmp dword ptr [esp + 0x34], ebp
// 00733616  0f8c80010000         jl 0x73379c
// 0073361c  897c2418             mov dword ptr [esp + 0x18], edi
// 00733620  e977010000           jmp 0x73379c
// 00733625  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 00733629  83c503               add ebp, 3
// 0073362c  3be8                 cmp ebp, eax
// 0073362e  0f8d8efeffff         jge 0x7334c2
// 00733634  817c2434ff000000     cmp dword ptr [esp + 0x34], 0xff
// 0073363c  8d443e01             lea eax, [esi + edi + 1]
// 00733640  0f8456010000         je 0x73379c
// 00733646  3bf8                 cmp edi, eax
// 00733648  0f8d4e010000         jge 0x73379c
// 0073364e  3b442430             cmp eax, dword ptr [esp + 0x30]
// 00733652  0f8f44010000         jg 0x73379c
// 00733658  03f7                 add esi, edi
// 0073365a  89742410             mov dword ptr [esp + 0x10], esi
// 0073365e  e939010000           jmp 0x73379c
// 00733663  85f6                 test esi, esi
// 00733665  7410                 je 0x733677
// 00733667  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0073366b  8d742eff             lea esi, [esi + ebp - 1]
// 0073366f  3bf0                 cmp esi, eax
// 00733671  0f8d4bfeffff         jge 0x7334c2
// 00733677  8b442414             mov eax, dword ptr [esp + 0x14]
// 0073367b  48                   dec eax
// 0073367c  83f8ff               cmp eax, -1
// 0073367f  7517                 jne 0x733698
// 00733681  8b54b904             mov edx, dword ptr [ecx + edi*4 + 4]
// 00733685  52                   push edx
// 00733686  e875fcffff           call 0x733300
// 0073368b  83c404               add esp, 4
// 0073368e  85c0                 test eax, eax
// 00733690  0f842cfeffff         je 0x7334c2
// 00733696  eb14                 jmp 0x7336ac
// 00733698  85c0                 test eax, eax
// 0073369a  7410                 je 0x7336ac
// 0073369c  8d4c28ff             lea ecx, [eax + ebp - 1]
// 007336a0  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 007336a4  3bc8                 cmp ecx, eax
// 007336a6  0f8d16feffff         jge 0x7334c2
// 007336ac  396c2434             cmp dword ptr [esp + 0x34], ebp
// 007336b0  0f8ce6000000         jl 0x73379c
// 007336b6  897c2418             mov dword ptr [esp + 0x18], edi
// 007336ba  e9dd000000           jmp 0x73379c
// 007336bf  4e                   dec esi
// 007336c0  85f6                 test esi, esi
// 007336c2  0f8ed4000000         jle 0x73379c
// 007336c8  e9bf000000           jmp 0x73378c
// 007336cd  85f6                 test esi, esi
// 007336cf  7e0e                 jle 0x7336df
// 007336d1  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 007336d5  03f5                 add esi, ebp
// 007336d7  3bf0                 cmp esi, eax
// 007336d9  0f8de3fdffff         jge 0x7334c2
// 007336df  837c241400           cmp dword ptr [esp + 0x14], 0
// 007336e4  0f85b2000000         jne 0x73379c
// 007336ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007336ee  47                   inc edi
// 007336ef  48                   dec eax
// 007336f0  897c2410             mov dword ptr [esp + 0x10], edi
// 007336f4  3bf8                 cmp edi, eax
// 007336f6  e99b000000           jmp 0x733796
// 007336fb  3b7234               cmp esi, dword ptr [edx + 0x34]
// 007336fe  0f8dbefdffff         jge 0x7334c2
// 00733704  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00733708  8b4210               mov eax, dword ptr [edx + 0x10]
// 0073370b  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0073370e  0fb65148             movzx edx, byte ptr [ecx + 0x48]
// 00733712  8b442410             mov eax, dword ptr [esp + 0x10]
// 00733716  8d3c02               lea edi, [edx + eax]
// 00733719  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0073371d  0f8d9ffdffff         jge 0x7334c2
// 00733723  be01000000           mov esi, 1
// 00733728  3bd6                 cmp edx, esi
// 0073372a  7c22                 jl 0x73374e
// 0073372c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00733730  8d4c8104             lea ecx, [ecx + eax*4 + 4]
// 00733734  8b01                 mov eax, dword ptr [ecx]
// 00733736  83e03f               and eax, 0x3f
// 00733739  83f804               cmp eax, 4
// 0073373c  7408                 je 0x733746
// 0073373e  85c0                 test eax, eax
// 00733740  0f857cfdffff         jne 0x7334c2
// 00733746  46                   inc esi
// 00733747  83c104               add ecx, 4
// 0073374a  3bf2                 cmp esi, edx
// 0073374c  7ee6                 jle 0x733734
// 0073374e  817c2434ff000000     cmp dword ptr [esp + 0x34], 0xff
// 00733756  7444                 je 0x73379c
// 00733758  897c2410             mov dword ptr [esp + 0x10], edi
// 0073375c  eb3e                 jmp 0x73379c
// 0073375e  8a424a               mov al, byte ptr [edx + 0x4a]
// 00733761  a802                 test al, 2
// 00733763  0f8459fdffff         je 0x7334c2
// 00733769  a804                 test al, 4
// 0073376b  0f8551fdffff         jne 0x7334c2
// 00733771  4e                   dec esi
// 00733772  83feff               cmp esi, -1
// 00733775  7515                 jne 0x73378c
// 00733777  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 0073377b  50                   push eax
// 0073377c  e87ffbffff           call 0x733300
// 00733781  83c404               add esp, 4
// 00733784  85c0                 test eax, eax
// 00733786  0f8436fdffff         je 0x7334c2
// 0073378c  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 00733790  8d4c2eff             lea ecx, [esi + ebp - 1]
// 00733794  3bc8                 cmp ecx, eax
// 00733796  0f8d26fdffff         jge 0x7334c2
// 0073379c  8b442410             mov eax, dword ptr [esp + 0x10]
// 007337a0  40                   inc eax
// 007337a1  3b442430             cmp eax, dword ptr [esp + 0x30]
// 007337a5  89442410             mov dword ptr [esp + 0x10], eax
// 007337a9  0f8c12fcffff         jl 0x7333c1
// 007337af  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007337b3  8b560c               mov edx, dword ptr [esi + 0xc]
// 007337b6  8b442418             mov eax, dword ptr [esp + 0x18]
// 007337ba  8b0482               mov eax, dword ptr [edx + eax*4]
// 007337bd  5f                   pop edi
// 007337be  5d                   pop ebp
// 007337bf  5b                   pop ebx
// 007337c0  5e                   pop esi
// 007337c1  83c418               add esp, 0x18
// 007337c4  c3                   ret 
// 007337c5  8d4900               lea ecx, [ecx]
// 007337c8  51                   push ecx
// 007337c9  3573008b35           xor eax, 0x358b0073
// 007337ce  7300                 jae 0x7337d0
// 007337d0  a835                 test al, 0x35
// 007337d2  7300                 jae 0x7337d4
// 007337d4  b335                 mov bl, 0x35
// 007337d6  7300                 jae 0x7337d8
// 007337d8  c9                   leave 
// 007337d9  357300e935           xor eax, 0x35e90073
// 007337de  7300                 jae 0x7337e0
// 007337e0  3436                 xor al, 0x36
// 007337e2  7300                 jae 0x7337e4
// 007337e4  6336                 arpl word ptr [esi], si
// 007337e6  7300                 jae 0x7337e8
// 007337e8  bf36730025           mov edi, 0x25007336
// 007337ed  367300               jae 0x7337f0
// 007337f0  f2357300cd36         xor eax, 0x36cd0073
// 007337f6  7300                 jae 0x7337f8
// 007337f8  fb                   sti 
// 007337f9  367300               jae 0x7337fc
// 007337fc  5e                   pop esi
// 007337fd  37                   aaa 
// 007337fe  7300                 jae 0x733800
// 00733800  9c                   pushfd 
// 00733801  37                   aaa 
// 00733802  7300                 jae 0x733804
// 00733804  0001                 add byte ptr [ecx], al
// 00733806  0203                 add al, byte ptr [ebx]
// 00733808  0e                   push cs
// 00733809  0302                 add eax, dword ptr [edx]
// 0073380b  0e                   push cs
// 0073380c  0e                   push cs
// 0073380d  040e                 add al, 0xe
// 0073380f  0e                   push cs
// 00733810  0e                   push cs
// 00733811  0e                   push cs
// 00733812  0e                   push cs
// 00733813  0e                   push cs
// 00733814  0e                   push cs
// 00733815  0e                   push cs
// 00733816  0e                   push cs
// 00733817  05060e0e0e           add eax, 0xe0e0e06
// 0073381c  0e                   push cs
// 0073381d  0e                   push cs
// 0073381e  07                   pop es
// 0073381f  07                   pop es
// 00733820  0809                 or byte ptr [ecx], cl
// 00733822  090a                 or dword ptr [edx], ecx
// 00733824  0b0e                 or ecx, dword ptr [esi]
// 00733826  0c0d                 or al, 0xd
// library lua-5.1.4/ldebug.c (function _symbexec)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
