// roc 2009-06 007e90d0  unit: CXTPImageEditorPicture  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e90d0
//
// 007e90d0  6aff                 push -1
// 007e90d2  6838018800           push 0x880138
// 007e90d7  64a100000000         mov eax, dword ptr fs:[0]
// 007e90dd  50                   push eax
// 007e90de  83ec2c               sub esp, 0x2c
// 007e90e1  53                   push ebx
// 007e90e2  55                   push ebp
// 007e90e3  56                   push esi
// 007e90e4  57                   push edi
// 007e90e5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007e90ea  33c4                 xor eax, esp
// 007e90ec  50                   push eax
// 007e90ed  8d442440             lea eax, [esp + 0x40]
// 007e90f1  64a300000000         mov dword ptr fs:[0], eax
// 007e90f7  8bf1                 mov esi, ecx
// 007e90f9  e8c2d5ffff           call 0x7e66c0
// 007e90fe  83f805               cmp eax, 5
// 007e9101  0f875c020000         ja 0x7e9363
// 007e9107  ff248580937e00       jmp dword ptr [eax*4 + 0x7e9380]
// 007e910e  8b467c               mov eax, dword ptr [esi + 0x7c]
// 007e9111  6a0c                 push 0xc
// 007e9113  894678               mov dword ptr [esi + 0x78], eax
// 007e9116  e81df9f2ff           call 0x718a38
// 007e911b  33ed                 xor ebp, ebp
// 007e911d  83c404               add esp, 4
// 007e9120  3bc5                 cmp eax, ebp
// 007e9122  740e                 je 0x7e9132
// 007e9124  896804               mov dword ptr [eax + 4], ebp
// 007e9127  c700a4859000         mov dword ptr [eax], 0x9085a4
// 007e912d  896808               mov dword ptr [eax + 8], ebp
// 007e9130  eb02                 jmp 0x7e9134
// 007e9132  33c0                 xor eax, eax
// 007e9134  55                   push ebp
// 007e9135  68fffeff00           push 0xfffeff
// 007e913a  68fffeff00           push 0xfffeff
// 007e913f  83ec08               sub esp, 8
// 007e9142  89467c               mov dword ptr [esi + 0x7c], eax
// 007e9145  8bc4                 mov eax, esp
// 007e9147  8928                 mov dword ptr [eax], ebp
// 007e9149  896804               mov dword ptr [eax + 4], ebp
// 007e914c  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007e914f  8b5654               mov edx, dword ptr [esi + 0x54]
// 007e9152  8b4678               mov eax, dword ptr [esi + 0x78]
// 007e9155  89642464             mov dword ptr [esp + 0x64], esp
// 007e9159  51                   push ecx
// 007e915a  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 007e915d  52                   push edx
// 007e915e  50                   push eax
// 007e915f  51                   push ecx
// 007e9160  e87bdeffff           call 0x7e6fe0
// 007e9165  8b467c               mov eax, dword ptr [esi + 0x7c]
// 007e9168  83c424               add esp, 0x24
// 007e916b  3bc5                 cmp eax, ebp
// 007e916d  7504                 jne 0x7e9173
// 007e916f  33c0                 xor eax, eax
// 007e9171  eb03                 jmp 0x7e9176
// 007e9173  8b4004               mov eax, dword ptr [eax + 4]
// 007e9176  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007e9179  50                   push eax
// 007e917a  52                   push edx
// 007e917b  e80c2f0600           call 0x84c08c
// 007e9180  89442450             mov dword ptr [esp + 0x50], eax
// 007e9184  8d4668               lea eax, [esi + 0x68]
// 007e9187  3bc5                 cmp eax, ebp
// 007e9189  7504                 jne 0x7e918f
// 007e918b  33d2                 xor edx, edx
// 007e918d  eb03                 jmp 0x7e9192
// 007e918f  8b5004               mov edx, dword ptr [eax + 4]
// 007e9192  8bce                 mov ecx, esi
// 007e9194  e897d9ffff           call 0x7e6b30
// 007e9199  50                   push eax
// 007e919a  52                   push edx
// 007e919b  8d4c2434             lea ecx, [esp + 0x34]
// 007e919f  e81c78f8ff           call 0x7709c0
// 007e91a4  8b442458             mov eax, dword ptr [esp + 0x58]
// 007e91a8  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007e91ac  50                   push eax
// 007e91ad  51                   push ecx
// 007e91ae  8d54241c             lea edx, [esp + 0x1c]
// 007e91b2  52                   push edx
// 007e91b3  8bce                 mov ecx, esi
// 007e91b5  896c2454             mov dword ptr [esp + 0x54], ebp
// 007e91b9  e802deffff           call 0x7e6fc0
// 007e91be  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007e91c2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007e91c6  57                   push edi
// 007e91c7  53                   push ebx
// 007e91c8  e8f3dcffff           call 0x7e6ec0
// 007e91cd  6a01                 push 1
// 007e91cf  50                   push eax
// 007e91d0  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007e91d3  57                   push edi
// 007e91d4  53                   push ebx
// 007e91d5  50                   push eax
// 007e91d6  ff1504e18900         call dword ptr [0x89e104]
// 007e91dc  8b442450             mov eax, dword ptr [esp + 0x50]
// 007e91e0  3bc5                 cmp eax, ebp
// 007e91e2  7504                 jne 0x7e91e8
// 007e91e4  33c0                 xor eax, eax
// 007e91e6  eb03                 jmp 0x7e91eb
// 007e91e8  8b4004               mov eax, dword ptr [eax + 4]
// 007e91eb  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007e91ee  50                   push eax
// 007e91ef  51                   push ecx
// 007e91f0  e8972e0600           call 0x84c08c
// 007e91f5  8b4678               mov eax, dword ptr [esi + 0x78]
// 007e91f8  3bc5                 cmp eax, ebp
// 007e91fa  7411                 je 0x7e920d
// 007e91fc  396808               cmp dword ptr [eax + 8], ebp
// 007e91ff  740c                 je 0x7e920d
// 007e9201  8b567c               mov edx, dword ptr [esi + 0x7c]
// 007e9204  50                   push eax
// 007e9205  52                   push edx
// 007e9206  8bce                 mov ecx, esi
// 007e9208  e853dfffff           call 0x7e7160
// 007e920d  8bce                 mov ecx, esi
// 007e920f  e83cfeffff           call 0x7e9050
// 007e9214  8d4c242c             lea ecx, [esp + 0x2c]
// 007e9218  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 007e9220  e82b78f8ff           call 0x770a50
// 007e9225  e939010000           jmp 0x7e9363
// 007e922a  8b442458             mov eax, dword ptr [esp + 0x58]
// 007e922e  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007e9232  50                   push eax
// 007e9233  51                   push ecx
// 007e9234  8d542424             lea edx, [esp + 0x24]
// 007e9238  52                   push edx
// 007e9239  8bce                 mov ecx, esi
// 007e923b  e880ddffff           call 0x7e6fc0
// 007e9240  8b4804               mov ecx, dword ptr [eax + 4]
// 007e9243  8b10                 mov edx, dword ptr [eax]
// 007e9245  51                   push ecx
// 007e9246  52                   push edx
// 007e9247  8bce                 mov ecx, esi
// 007e9249  e872dcffff           call 0x7e6ec0
// 007e924e  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007e9251  50                   push eax
// 007e9252  81c164080000         add ecx, 0x864
// 007e9258  e833e2ffff           call 0x7e7490
// 007e925d  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007e9260  8d8164080000         lea eax, [ecx + 0x864]
// 007e9266  50                   push eax
// 007e9267  e8d4eaffff           call 0x7e7d40
// 007e926c  8b4664               mov eax, dword ptr [esi + 0x64]
// 007e926f  8b885c0a0000         mov ecx, dword ptr [eax + 0xa5c]
// 007e9275  8988580a0000         mov dword ptr [eax + 0xa58], ecx
// 007e927b  e9e3000000           jmp 0x7e9363
// 007e9280  8b567c               mov edx, dword ptr [esi + 0x7c]
// 007e9283  6a0c                 push 0xc
// 007e9285  895678               mov dword ptr [esi + 0x78], edx
// 007e9288  e8abf7f2ff           call 0x718a38
// 007e928d  33ed                 xor ebp, ebp
// 007e928f  83c404               add esp, 4
// 007e9292  3bc5                 cmp eax, ebp
// 007e9294  740e                 je 0x7e92a4
// 007e9296  896804               mov dword ptr [eax + 4], ebp
// 007e9299  c700a4859000         mov dword ptr [eax], 0x9085a4
// 007e929f  896808               mov dword ptr [eax + 8], ebp
// 007e92a2  eb02                 jmp 0x7e92a6
// 007e92a4  33c0                 xor eax, eax
// 007e92a6  55                   push ebp
// 007e92a7  68fffeff00           push 0xfffeff
// 007e92ac  68fffeff00           push 0xfffeff
// 007e92b1  83ec08               sub esp, 8
// 007e92b4  89467c               mov dword ptr [esi + 0x7c], eax
// 007e92b7  8bc4                 mov eax, esp
// 007e92b9  8928                 mov dword ptr [eax], ebp
// 007e92bb  896804               mov dword ptr [eax + 4], ebp
// 007e92be  8b4658               mov eax, dword ptr [esi + 0x58]
// 007e92c1  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007e92c4  8b5678               mov edx, dword ptr [esi + 0x78]
// 007e92c7  89642428             mov dword ptr [esp + 0x28], esp
// 007e92cb  50                   push eax
// 007e92cc  8b467c               mov eax, dword ptr [esi + 0x7c]
// 007e92cf  51                   push ecx
// 007e92d0  52                   push edx
// 007e92d1  50                   push eax
// 007e92d2  e809ddffff           call 0x7e6fe0
// 007e92d7  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007e92db  8b542478             mov edx, dword ptr [esp + 0x78]
// 007e92df  83c424               add esp, 0x24
// 007e92e2  51                   push ecx
// 007e92e3  52                   push edx
// 007e92e4  8d44242c             lea eax, [esp + 0x2c]
// 007e92e8  50                   push eax
// 007e92e9  8bce                 mov ecx, esi
// 007e92eb  e8d0dcffff           call 0x7e6fc0
// 007e92f0  8b4804               mov ecx, dword ptr [eax + 4]
// 007e92f3  8b10                 mov edx, dword ptr [eax]
// 007e92f5  51                   push ecx
// 007e92f6  52                   push edx
// 007e92f7  8bce                 mov ecx, esi
// 007e92f9  e8c2dbffff           call 0x7e6ec0
// 007e92fe  8bce                 mov ecx, esi
// 007e9300  8bd0                 mov edx, eax
// 007e9302  e829d8ffff           call 0x7e6b30
// 007e9307  3bc2                 cmp eax, edx
// 007e9309  7409                 je 0x7e9314
// 007e930b  8bce                 mov ecx, esi
// 007e930d  e81ed8ffff           call 0x7e6b30
// 007e9312  eb05                 jmp 0x7e9319
// 007e9314  b8fffeff00           mov eax, 0xfffeff
// 007e9319  8b5620               mov edx, dword ptr [esi + 0x20]
// 007e931c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007e9320  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 007e9326  8b442454             mov eax, dword ptr [esp + 0x54]
// 007e932a  52                   push edx
// 007e932b  c786c000000001000000 mov dword ptr [esi + 0xc0], 1
// 007e9335  8986b8000000         mov dword ptr [esi + 0xb8], eax
// 007e933b  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 007e9341  ff1538ee8900         call dword ptr [0x89ee38]
// 007e9347  50                   push eax
// 007e9348  e8b5f9f2ff           call 0x718d02
// 007e934d  8b442458             mov eax, dword ptr [esp + 0x58]
// 007e9351  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007e9355  8b542450             mov edx, dword ptr [esp + 0x50]
// 007e9359  50                   push eax
// 007e935a  51                   push ecx
// 007e935b  52                   push edx
// 007e935c  8bce                 mov ecx, esi
// 007e935e  e8bdeeffff           call 0x7e8220
// 007e9363  8bce                 mov ecx, esi
// 007e9365  e89efcf2ff           call 0x719008
// 007e936a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007e936e  64890d00000000       mov dword ptr fs:[0], ecx
// 007e9375  59                   pop ecx
// 007e9376  5f                   pop edi
// 007e9377  5e                   pop esi
// 007e9378  5d                   pop ebp
// 007e9379  5b                   pop ebx
// 007e937a  83c438               add esp, 0x38
// 007e937d  c20c00               ret 0xc
// 007e9380  80927e000e917e       adc byte ptr [edx - 0x6ef1ff82], 0x7e
// 007e9387  002a                 add byte ptr [edx], ch
// 007e9389  92                   xchg edx, eax
// 007e938a  7e00                 jle 0x7e938c
// 007e938c  80927e0080927e       adc byte ptr [edx - 0x6d7fff82], 0x7e
// copied from an identical function in another client (function ?OnLButtonDown@CXTPImageEditorPicture@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPImageEditor.cpp