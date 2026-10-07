// roc 2012-06 005683e0  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005683e0
//
// 005683e0  83ec08               sub esp, 8
// 005683e3  53                   push ebx
// 005683e4  55                   push ebp
// 005683e5  56                   push esi
// 005683e6  57                   push edi
// 005683e7  8bf1                 mov esi, ecx
// 005683e9  e872faffff           call 0x567e60
// 005683ee  84c0                 test al, al
// 005683f0  0f84a9000000         je 0x56849f
// 005683f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005683fa  33c0                 xor eax, eax
// 005683fc  41                   inc ecx
// 005683fd  8d4900               lea ecx, [ecx]
// 00568400  8a11                 mov dl, byte ptr [ecx]
// 00568402  88540410             mov byte ptr [esp + eax + 0x10], dl
// 00568406  40                   inc eax
// 00568407  49                   dec ecx
// 00568408  83f802               cmp eax, 2
// 0056840b  72f3                 jb 0x568400
// 0056840d  bb10000000           mov ebx, 0x10
// 00568412  53                   push ebx
// 00568413  8bce                 mov ecx, esi
// 00568415  e856f5ffff           call 0x567970
// 0056841a  8b06                 mov eax, dword ptr [esi]
// 0056841c  8bd0                 mov edx, eax
// 0056841e  83e207               and edx, 7
// 00568421  89542414             mov dword ptr [esp + 0x14], edx
// 00568425  751a                 jne 0x568441
// 00568427  668b4c2410           mov cx, word ptr [esp + 0x10]
// 0056842c  c1e803               shr eax, 3
// 0056842f  03460c               add eax, dword ptr [esi + 0xc]
// 00568432  668908               mov word ptr [eax], cx
// 00568435  011e                 add dword ptr [esi], ebx
// 00568437  5f                   pop edi
// 00568438  5e                   pop esi
// 00568439  5d                   pop ebp
// 0056843a  5b                   pop ebx
// 0056843b  83c408               add esp, 8
// 0056843e  c20400               ret 4
// 00568441  8d6c2410             lea ebp, [esp + 0x10]
// 00568445  8a4500               mov al, byte ptr [ebp]
// 00568448  45                   inc ebp
// 00568449  83fb08               cmp ebx, 8
// 0056844c  7306                 jae 0x568454
// 0056844e  b108                 mov cl, 8
// 00568450  2acb                 sub cl, bl
// 00568452  d2e0                 shl al, cl
// 00568454  8b0e                 mov ecx, dword ptr [esi]
// 00568456  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00568459  c1e903               shr ecx, 3
// 0056845c  03f9                 add edi, ecx
// 0056845e  8ac8                 mov cl, al
// 00568460  884c241c             mov byte ptr [esp + 0x1c], cl
// 00568464  8aca                 mov cl, dl
// 00568466  8ad0                 mov dl, al
// 00568468  d2ea                 shr dl, cl
// 0056846a  b908000000           mov ecx, 8
// 0056846f  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00568473  0817                 or byte ptr [edi], dl
// 00568475  83f908               cmp ecx, 8
// 00568478  7312                 jae 0x56848c
// 0056847a  3bcb                 cmp ecx, ebx
// 0056847c  730e                 jae 0x56848c
// 0056847e  8b16                 mov edx, dword ptr [esi]
// 00568480  d2e0                 shl al, cl
// 00568482  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568485  c1ea03               shr edx, 3
// 00568488  88440a01             mov byte ptr [edx + ecx + 1], al
// 0056848c  83fb08               cmp ebx, 8
// 0056848f  72a4                 jb 0x568435
// 00568491  830608               add dword ptr [esi], 8
// 00568494  83eb08               sub ebx, 8
// 00568497  749e                 je 0x568437
// 00568499  8b542414             mov edx, dword ptr [esp + 0x14]
// 0056849d  eba6                 jmp 0x568445
// 0056849f  bb10000000           mov ebx, 0x10
// 005684a4  53                   push ebx
// 005684a5  8bce                 mov ecx, esi
// 005684a7  e8c4f4ffff           call 0x567970
// 005684ac  8b06                 mov eax, dword ptr [esi]
// 005684ae  8bd0                 mov edx, eax
// 005684b0  83e207               and edx, 7
// 005684b3  89542414             mov dword ptr [esp + 0x14], edx
// 005684b7  751c                 jne 0x5684d5
// 005684b9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005684bd  668b0a               mov cx, word ptr [edx]
// 005684c0  c1e803               shr eax, 3
// 005684c3  03460c               add eax, dword ptr [esi + 0xc]
// 005684c6  5f                   pop edi
// 005684c7  668908               mov word ptr [eax], cx
// 005684ca  011e                 add dword ptr [esi], ebx
// 005684cc  5e                   pop esi
// 005684cd  5d                   pop ebp
// 005684ce  5b                   pop ebx
// 005684cf  83c408               add esp, 8
// 005684d2  c20400               ret 4
// 005684d5  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005684d9  8da42400000000       lea esp, [esp]
// 005684e0  8a4500               mov al, byte ptr [ebp]
// 005684e3  45                   inc ebp
// 005684e4  83fb08               cmp ebx, 8
// 005684e7  7306                 jae 0x5684ef
// 005684e9  b108                 mov cl, 8
// 005684eb  2acb                 sub cl, bl
// 005684ed  d2e0                 shl al, cl
// 005684ef  8b0e                 mov ecx, dword ptr [esi]
// 005684f1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 005684f4  c1e903               shr ecx, 3
// 005684f7  03f9                 add edi, ecx
// 005684f9  8ac8                 mov cl, al
// 005684fb  884c241c             mov byte ptr [esp + 0x1c], cl
// 005684ff  8aca                 mov cl, dl
// 00568501  8ad0                 mov dl, al
// 00568503  d2ea                 shr dl, cl
// 00568505  b908000000           mov ecx, 8
// 0056850a  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0056850e  0817                 or byte ptr [edi], dl
// 00568510  83f908               cmp ecx, 8
// 00568513  7312                 jae 0x568527
// 00568515  3bcb                 cmp ecx, ebx
// 00568517  730e                 jae 0x568527
// 00568519  8b16                 mov edx, dword ptr [esi]
// 0056851b  d2e0                 shl al, cl
// 0056851d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568520  c1ea03               shr edx, 3
// 00568523  88440a01             mov byte ptr [edx + ecx + 1], al
// 00568527  83fb08               cmp ebx, 8
// 0056852a  0f8205ffffff         jb 0x568435
// 00568530  830608               add dword ptr [esi], 8
// 00568533  83eb08               sub ebx, 8
// 00568536  0f84fbfeffff         je 0x568437
// 0056853c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00568540  eb9e                 jmp 0x5684e0
// library rbx2016-raknet/BitStream.cpp (function ??$Write@G@BitStream@RakNet@@QAEXABG@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
