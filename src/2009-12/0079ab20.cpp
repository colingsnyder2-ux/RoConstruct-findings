// roc 2009-12 0079ab20  unit: lua_exception  size: 1192 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079ab20
//
// 0079ab20  83ec18               sub esp, 0x18
// 0079ab23  56                   push esi
// 0079ab24  8b742420             mov esi, dword ptr [esp + 0x20]
// 0079ab28  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0079ab2b  89442410             mov dword ptr [esp + 0x10], eax
// 0079ab2f  48                   dec eax
// 0079ab30  8944240c             mov dword ptr [esp + 0xc], eax
// 0079ab34  8bc6                 mov eax, esi
// 0079ab36  e805ffffff           call 0x79aa40
// 0079ab3b  85c0                 test eax, eax
// 0079ab3d  7505                 jne 0x79ab44
// 0079ab3f  5e                   pop esi
// 0079ab40  83c418               add esp, 0x18
// 0079ab43  c3                   ret 
// 0079ab44  837c242400           cmp dword ptr [esp + 0x24], 0
// 0079ab49  53                   push ebx
// 0079ab4a  55                   push ebp
// 0079ab4b  57                   push edi
// 0079ab4c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0079ab54  0f8ef9030000         jle 0x79af53
// 0079ab5a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0079ab5d  89442420             mov dword ptr [esp + 0x20], eax
// 0079ab61  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079ab65  8b542410             mov edx, dword ptr [esp + 0x10]
// 0079ab69  8b0491               mov eax, dword ptr [ecx + edx*4]
// 0079ab6c  8be8                 mov ebp, eax
// 0079ab6e  8bd8                 mov ebx, eax
// 0079ab70  c1ed06               shr ebp, 6
// 0079ab73  83e33f               and ebx, 0x3f
// 0079ab76  33f6                 xor esi, esi
// 0079ab78  81e5ff000000         and ebp, 0xff
// 0079ab7e  83fb26               cmp ebx, 0x26
// 0079ab81  895c2424             mov dword ptr [esp + 0x24], ebx
// 0079ab85  89742414             mov dword ptr [esp + 0x14], esi
// 0079ab89  0f8dd3000000         jge 0x79ac62
// 0079ab8f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079ab93  0fb6494b             movzx ecx, byte ptr [ecx + 0x4b]
// 0079ab97  3be9                 cmp ebp, ecx
// 0079ab99  0f8dc3000000         jge 0x79ac62
// 0079ab9f  8a937cf29e00         mov dl, byte ptr [ebx + 0x9ef27c]
// 0079aba5  0fb6fa               movzx edi, dl
// 0079aba8  8bcf                 mov ecx, edi
// 0079abaa  83e103               and ecx, 3
// 0079abad  2bce                 sub ecx, esi
// 0079abaf  0f84cf000000         je 0x79ac84
// 0079abb5  83e901               sub ecx, 1
// 0079abb8  0f84ae000000         je 0x79ac6c
// 0079abbe  83e901               sub ecx, 1
// 0079abc1  7563                 jne 0x79ac26
// 0079abc3  c1e80e               shr eax, 0xe
// 0079abc6  2dffff0100           sub eax, 0x1ffff
// 0079abcb  80e230               and dl, 0x30
// 0079abce  8bf0                 mov esi, eax
// 0079abd0  80fa20               cmp dl, 0x20
// 0079abd3  7551                 jne 0x79ac26
// 0079abd5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0079abd9  8d443e01             lea eax, [esi + edi + 1]
// 0079abdd  85c0                 test eax, eax
// 0079abdf  0f8c7d000000         jl 0x79ac62
// 0079abe5  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0079abe9  7d77                 jge 0x79ac62
// 0079abeb  85c0                 test eax, eax
// 0079abed  0f8ed7000000         jle 0x79acca
// 0079abf3  33d2                 xor edx, edx
// 0079abf5  85c0                 test eax, eax
// 0079abf7  7e28                 jle 0x79ac21
// 0079abf9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079abfd  8d7c81fc             lea edi, [ecx + eax*4 - 4]
// 0079ac01  8b0f                 mov ecx, dword ptr [edi]
// 0079ac03  8bd9                 mov ebx, ecx
// 0079ac05  83e33f               and ebx, 0x3f
// 0079ac08  80fb22               cmp bl, 0x22
// 0079ac0b  7510                 jne 0x79ac1d
// 0079ac0d  f7c100c07f00         test ecx, 0x7fc000
// 0079ac13  7508                 jne 0x79ac1d
// 0079ac15  42                   inc edx
// 0079ac16  83ef04               sub edi, 4
// 0079ac19  3bd0                 cmp edx, eax
// 0079ac1b  7ce4                 jl 0x79ac01
// 0079ac1d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0079ac21  f6c201               test dl, 1
// 0079ac24  753c                 jne 0x79ac62
// 0079ac26  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079ac2a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0079ac2e  8a837cf29e00         mov al, byte ptr [ebx + 0x9ef27c]
// 0079ac34  a840                 test al, 0x40
// 0079ac36  740a                 je 0x79ac42
// 0079ac38  3b6c2434             cmp ebp, dword ptr [esp + 0x34]
// 0079ac3c  7504                 jne 0x79ac42
// 0079ac3e  897c2418             mov dword ptr [esp + 0x18], edi
// 0079ac42  84c0                 test al, al
// 0079ac44  0f8989000000         jns 0x79acd3
// 0079ac4a  8d4702               lea eax, [edi + 2]
// 0079ac4d  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0079ac51  7d0f                 jge 0x79ac62
// 0079ac53  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079ac57  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 0079ac5b  83e03f               and eax, 0x3f
// 0079ac5e  3c16                 cmp al, 0x16
// 0079ac60  7475                 je 0x79acd7
// 0079ac62  5f                   pop edi
// 0079ac63  5d                   pop ebp
// 0079ac64  5b                   pop ebx
// 0079ac65  33c0                 xor eax, eax
// 0079ac67  5e                   pop esi
// 0079ac68  83c418               add esp, 0x18
// 0079ac6b  c3                   ret 
// 0079ac6c  c1e80e               shr eax, 0xe
// 0079ac6f  80e230               and dl, 0x30
// 0079ac72  8bf0                 mov esi, eax
// 0079ac74  80fa30               cmp dl, 0x30
// 0079ac77  75ad                 jne 0x79ac26
// 0079ac79  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079ac7d  3b7228               cmp esi, dword ptr [edx + 0x28]
// 0079ac80  7de0                 jge 0x79ac62
// 0079ac82  eba6                 jmp 0x79ac2a
// 0079ac84  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079ac88  8bf0                 mov esi, eax
// 0079ac8a  c1e80e               shr eax, 0xe
// 0079ac8d  25ff010000           and eax, 0x1ff
// 0079ac92  89442414             mov dword ptr [esp + 0x14], eax
// 0079ac96  8bc7                 mov eax, edi
// 0079ac98  c1e804               shr eax, 4
// 0079ac9b  c1ee17               shr esi, 0x17
// 0079ac9e  83e003               and eax, 3
// 0079aca1  8bce                 mov ecx, esi
// 0079aca3  e828feffff           call 0x79aad0
// 0079aca8  85c0                 test eax, eax
// 0079acaa  74b6                 je 0x79ac62
// 0079acac  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079acb0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079acb4  8bc7                 mov eax, edi
// 0079acb6  c1e802               shr eax, 2
// 0079acb9  83e003               and eax, 3
// 0079acbc  e80ffeffff           call 0x79aad0
// 0079acc1  85c0                 test eax, eax
// 0079acc3  749d                 je 0x79ac62
// 0079acc5  e95cffffff           jmp 0x79ac26
// 0079acca  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079acce  e95bffffff           jmp 0x79ac2e
// 0079acd3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079acd7  83c3fe               add ebx, -2
// 0079acda  83fb23               cmp ebx, 0x23
// 0079acdd  0f8759020000         ja 0x79af3c
// 0079ace3  0fb683a4af7900       movzx eax, byte ptr [ebx + 0x79afa4]
// 0079acea  ff248568af7900       jmp dword ptr [eax*4 + 0x79af68]
// 0079acf1  837c241401           cmp dword ptr [esp + 0x14], 1
// 0079acf6  0f8540020000         jne 0x79af3c
// 0079acfc  8d5702               lea edx, [edi + 2]
// 0079acff  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0079ad03  0f8d59ffffff         jge 0x79ac62
// 0079ad09  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 0079ad0d  8bc8                 mov ecx, eax
// 0079ad0f  83e13f               and ecx, 0x3f
// 0079ad12  80f922               cmp cl, 0x22
// 0079ad15  0f8521020000         jne 0x79af3c
// 0079ad1b  a900c07f00           test eax, 0x7fc000
// 0079ad20  0f843cffffff         je 0x79ac62
// 0079ad26  e911020000           jmp 0x79af3c
// 0079ad2b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079ad2f  3be8                 cmp ebp, eax
// 0079ad31  0f8f05020000         jg 0x79af3c
// 0079ad37  3bc6                 cmp eax, esi
// 0079ad39  0f8ffd010000         jg 0x79af3c
// 0079ad3f  897c2418             mov dword ptr [esp + 0x18], edi
// 0079ad43  e9f4010000           jmp 0x79af3c
// 0079ad48  0fb65248             movzx edx, byte ptr [edx + 0x48]
// 0079ad4c  3bf2                 cmp esi, edx
// 0079ad4e  e9e3010000           jmp 0x79af36
// 0079ad53  8b4208               mov eax, dword ptr [edx + 8]
// 0079ad56  c1e604               shl esi, 4
// 0079ad59  837c060804           cmp dword ptr [esi + eax + 8], 4
// 0079ad5e  0f85fefeffff         jne 0x79ac62
// 0079ad64  e9d3010000           jmp 0x79af3c
// 0079ad69  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0079ad6d  45                   inc ebp
// 0079ad6e  3be8                 cmp ebp, eax
// 0079ad70  0f8decfeffff         jge 0x79ac62
// 0079ad76  396c2434             cmp dword ptr [esp + 0x34], ebp
// 0079ad7a  0f85bc010000         jne 0x79af3c
// 0079ad80  897c2418             mov dword ptr [esp + 0x18], edi
// 0079ad84  e9b3010000           jmp 0x79af3c
// 0079ad89  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0079ad8d  e9a4010000           jmp 0x79af36
// 0079ad92  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079ad96  83f801               cmp eax, 1
// 0079ad99  0f8cc3feffff         jl 0x79ac62
// 0079ad9f  8d4c2802             lea ecx, [eax + ebp + 2]
// 0079ada3  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0079ada7  3bc8                 cmp ecx, eax
// 0079ada9  0f8db3feffff         jge 0x79ac62
// 0079adaf  83c502               add ebp, 2
// 0079adb2  396c2434             cmp dword ptr [esp + 0x34], ebp
// 0079adb6  0f8c80010000         jl 0x79af3c
// 0079adbc  897c2418             mov dword ptr [esp + 0x18], edi
// 0079adc0  e977010000           jmp 0x79af3c
// 0079adc5  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0079adc9  83c503               add ebp, 3
// 0079adcc  3be8                 cmp ebp, eax
// 0079adce  0f8d8efeffff         jge 0x79ac62
// 0079add4  817c2434ff000000     cmp dword ptr [esp + 0x34], 0xff
// 0079addc  8d443e01             lea eax, [esi + edi + 1]
// 0079ade0  0f8456010000         je 0x79af3c
// 0079ade6  3bf8                 cmp edi, eax
// 0079ade8  0f8d4e010000         jge 0x79af3c
// 0079adee  3b442430             cmp eax, dword ptr [esp + 0x30]
// 0079adf2  0f8f44010000         jg 0x79af3c
// 0079adf8  03f7                 add esi, edi
// 0079adfa  89742410             mov dword ptr [esp + 0x10], esi
// 0079adfe  e939010000           jmp 0x79af3c
// 0079ae03  85f6                 test esi, esi
// 0079ae05  7410                 je 0x79ae17
// 0079ae07  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0079ae0b  8d742eff             lea esi, [esi + ebp - 1]
// 0079ae0f  3bf0                 cmp esi, eax
// 0079ae11  0f8d4bfeffff         jge 0x79ac62
// 0079ae17  8b442414             mov eax, dword ptr [esp + 0x14]
// 0079ae1b  48                   dec eax
// 0079ae1c  83f8ff               cmp eax, -1
// 0079ae1f  7517                 jne 0x79ae38
// 0079ae21  8b54b904             mov edx, dword ptr [ecx + edi*4 + 4]
// 0079ae25  52                   push edx
// 0079ae26  e875fcffff           call 0x79aaa0
// 0079ae2b  83c404               add esp, 4
// 0079ae2e  85c0                 test eax, eax
// 0079ae30  0f842cfeffff         je 0x79ac62
// 0079ae36  eb14                 jmp 0x79ae4c
// 0079ae38  85c0                 test eax, eax
// 0079ae3a  7410                 je 0x79ae4c
// 0079ae3c  8d4c28ff             lea ecx, [eax + ebp - 1]
// 0079ae40  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0079ae44  3bc8                 cmp ecx, eax
// 0079ae46  0f8d16feffff         jge 0x79ac62
// 0079ae4c  396c2434             cmp dword ptr [esp + 0x34], ebp
// 0079ae50  0f8ce6000000         jl 0x79af3c
// 0079ae56  897c2418             mov dword ptr [esp + 0x18], edi
// 0079ae5a  e9dd000000           jmp 0x79af3c
// 0079ae5f  4e                   dec esi
// 0079ae60  85f6                 test esi, esi
// 0079ae62  0f8ed4000000         jle 0x79af3c
// 0079ae68  e9bf000000           jmp 0x79af2c
// 0079ae6d  85f6                 test esi, esi
// 0079ae6f  7e0e                 jle 0x79ae7f
// 0079ae71  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0079ae75  03f5                 add esi, ebp
// 0079ae77  3bf0                 cmp esi, eax
// 0079ae79  0f8de3fdffff         jge 0x79ac62
// 0079ae7f  837c241400           cmp dword ptr [esp + 0x14], 0
// 0079ae84  0f85b2000000         jne 0x79af3c
// 0079ae8a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079ae8e  47                   inc edi
// 0079ae8f  48                   dec eax
// 0079ae90  897c2410             mov dword ptr [esp + 0x10], edi
// 0079ae94  3bf8                 cmp edi, eax
// 0079ae96  e99b000000           jmp 0x79af36
// 0079ae9b  3b7234               cmp esi, dword ptr [edx + 0x34]
// 0079ae9e  0f8dbefdffff         jge 0x79ac62
// 0079aea4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079aea8  8b4210               mov eax, dword ptr [edx + 0x10]
// 0079aeab  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0079aeae  0fb65148             movzx edx, byte ptr [ecx + 0x48]
// 0079aeb2  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079aeb6  8d3c02               lea edi, [edx + eax]
// 0079aeb9  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 0079aebd  0f8d9ffdffff         jge 0x79ac62
// 0079aec3  be01000000           mov esi, 1
// 0079aec8  3bd6                 cmp edx, esi
// 0079aeca  7c22                 jl 0x79aeee
// 0079aecc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079aed0  8d4c8104             lea ecx, [ecx + eax*4 + 4]
// 0079aed4  8b01                 mov eax, dword ptr [ecx]
// 0079aed6  83e03f               and eax, 0x3f
// 0079aed9  83f804               cmp eax, 4
// 0079aedc  7408                 je 0x79aee6
// 0079aede  85c0                 test eax, eax
// 0079aee0  0f857cfdffff         jne 0x79ac62
// 0079aee6  46                   inc esi
// 0079aee7  83c104               add ecx, 4
// 0079aeea  3bf2                 cmp esi, edx
// 0079aeec  7ee6                 jle 0x79aed4
// 0079aeee  817c2434ff000000     cmp dword ptr [esp + 0x34], 0xff
// 0079aef6  7444                 je 0x79af3c
// 0079aef8  897c2410             mov dword ptr [esp + 0x10], edi
// 0079aefc  eb3e                 jmp 0x79af3c
// 0079aefe  8a424a               mov al, byte ptr [edx + 0x4a]
// 0079af01  a802                 test al, 2
// 0079af03  0f8459fdffff         je 0x79ac62
// 0079af09  a804                 test al, 4
// 0079af0b  0f8551fdffff         jne 0x79ac62
// 0079af11  4e                   dec esi
// 0079af12  83feff               cmp esi, -1
// 0079af15  7515                 jne 0x79af2c
// 0079af17  8b44b904             mov eax, dword ptr [ecx + edi*4 + 4]
// 0079af1b  50                   push eax
// 0079af1c  e87ffbffff           call 0x79aaa0
// 0079af21  83c404               add esp, 4
// 0079af24  85c0                 test eax, eax
// 0079af26  0f8436fdffff         je 0x79ac62
// 0079af2c  0fb6424b             movzx eax, byte ptr [edx + 0x4b]
// 0079af30  8d4c2eff             lea ecx, [esi + ebp - 1]
// 0079af34  3bc8                 cmp ecx, eax
// 0079af36  0f8d26fdffff         jge 0x79ac62
// 0079af3c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079af40  40                   inc eax
// 0079af41  3b442430             cmp eax, dword ptr [esp + 0x30]
// 0079af45  89442410             mov dword ptr [esp + 0x10], eax
// 0079af49  0f8c12fcffff         jl 0x79ab61
// 0079af4f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0079af53  8b560c               mov edx, dword ptr [esi + 0xc]
// 0079af56  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079af5a  8b0482               mov eax, dword ptr [edx + eax*4]
// 0079af5d  5f                   pop edi
// 0079af5e  5d                   pop ebp
// 0079af5f  5b                   pop ebx
// 0079af60  5e                   pop esi
// 0079af61  83c418               add esp, 0x18
// 0079af64  c3                   ret 
// 0079af65  8d4900               lea ecx, [ecx]
// 0079af68  f1                   int1 
// 0079af69  ac                   lodsb al, byte ptr [esi]
// 0079af6a  7900                 jns 0x79af6c
// 0079af6c  2bad790048ad         sub ebp, dword ptr [ebp - 0x52b7ff87]
// 0079af72  7900                 jns 0x79af74
// 0079af74  53                   push ebx
// 0079af75  ad                   lodsd eax, dword ptr [esi]
// 0079af76  7900                 jns 0x79af78
// 0079af78  69ad790089ad7900d4ad imul ebp, dword ptr [ebp - 0x5276ff87], 0xadd40079
// 0079af82  7900                 jns 0x79af84
// 0079af84  03ae79005fae         add ebp, dword ptr [esi - 0x51a0ff87]
// 0079af8a  7900                 jns 0x79af8c
// 0079af8c  c5ad790092ad         lds ebp, ptr [ebp - 0x526dff87]
// 0079af92  7900                 jns 0x79af94
// 0079af94  6d                   insd dword ptr es:[edi], dx
// 0079af95  ae                   scasb al, byte ptr es:[edi]
// 0079af96  7900                 jns 0x79af98
// 0079af98  9b                   wait 
// 0079af99  ae                   scasb al, byte ptr es:[edi]
// 0079af9a  7900                 jns 0x79af9c
// library lua-5.1.4/ldebug.c (function _symbexec)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
