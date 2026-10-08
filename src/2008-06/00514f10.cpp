// from server: 100% by auto
// roc 2008-06 00514f10  unit: seg_00510000  size: 1376 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514f10
//
// 00514f10  6aff                 push -1
// 00514f12  68bec57c00           push 0x7cc5be
// 00514f17  64a100000000         mov eax, dword ptr fs:[0]
// 00514f1d  50                   push eax
// 00514f1e  64892500000000       mov dword ptr fs:[0], esp
// 00514f25  83ec40               sub esp, 0x40
// 00514f28  8b442450             mov eax, dword ptr [esp + 0x50]
// 00514f2c  56                   push esi
// 00514f2d  50                   push eax
// 00514f2e  8d4c2410             lea ecx, [esp + 0x10]
// 00514f32  ff155c248000         call dword ptr [0x80245c]
// 00514f38  8b742458             mov esi, dword ptr [esp + 0x58]
// 00514f3c  6816b78000           push 0x80b716
// 00514f41  8bce                 mov ecx, esi
// 00514f43  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00514f4b  ff154c248000         call dword ptr [0x80244c]
// 00514f51  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00514f55  6a01                 push 1
// 00514f57  6a00                 push 0
// 00514f59  e85247ffff           call 0x5096b0
// 00514f5e  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00514f62  6816b78000           push 0x80b716
// 00514f67  ff154c248000         call dword ptr [0x80244c]
// 00514f6d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00514f71  6816b78000           push 0x80b716
// 00514f76  ff154c248000         call dword ptr [0x80244c]
// 00514f7c  8d4c240c             lea ecx, [esp + 0xc]
// 00514f80  6816b78000           push 0x80b716
// 00514f85  51                   push ecx
// 00514f86  ff156c238000         call dword ptr [0x80236c]
// 00514f8c  83c408               add esp, 8
// 00514f8f  84c0                 test al, al
// 00514f91  7422                 je 0x514fb5
// 00514f93  8d4c240c             lea ecx, [esp + 0xc]
// 00514f97  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00514f9f  ff1568248000         call dword ptr [0x802468]
// 00514fa5  5e                   pop esi
// 00514fa6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00514faa  64890d00000000       mov dword ptr fs:[0], ecx
// 00514fb1  83c44c               add esp, 0x4c
// 00514fb4  c3                   ret 
// 00514fb5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00514fb9  53                   push ebx
// 00514fba  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00514fc0  55                   push ebp
// 00514fc1  57                   push edi
// 00514fc2  83f902               cmp ecx, 2
// 00514fc5  0f82fc000000         jb 0x5150c7
// 00514fcb  83f901               cmp ecx, 1
// 00514fce  7306                 jae 0x514fd6
// 00514fd0  ffd3                 call ebx
// 00514fd2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00514fd6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00514fda  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00514fde  8bc5                 mov eax, ebp
// 00514fe0  83ff10               cmp edi, 0x10
// 00514fe3  7304                 jae 0x514fe9
// 00514fe5  8d44241c             lea eax, [esp + 0x1c]
// 00514fe9  8078013a             cmp byte ptr [eax + 1], 0x3a
// 00514fed  0f85dc000000         jne 0x5150cf
// 00514ff3  83f902               cmp ecx, 2
// 00514ff6  7675                 jbe 0x51506d
// 00514ff8  730a                 jae 0x515004
// 00514ffa  ffd3                 call ebx
// 00514ffc  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00515000  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00515004  8bc5                 mov eax, ebp
// 00515006  83ff10               cmp edi, 0x10
// 00515009  7304                 jae 0x51500f
// 0051500b  8d44241c             lea eax, [esp + 0x1c]
// 0051500f  8a4002               mov al, byte ptr [eax + 2]
// 00515012  3c5c                 cmp al, 0x5c
// 00515014  7404                 je 0x51501a
// 00515016  3c2f                 cmp al, 0x2f
// 00515018  7553                 jne 0x51506d
// 0051501a  6a03                 push 3
// 0051501c  6a00                 push 0
// 0051501e  8d54243c             lea edx, [esp + 0x3c]
// 00515022  52                   push edx
// 00515023  8d4c2424             lea ecx, [esp + 0x24]
// 00515027  ff15e0238000         call dword ptr [0x8023e0]
// 0051502d  50                   push eax
// 0051502e  8bce                 mov ecx, esi
// 00515030  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00515035  ff150c248000         call dword ptr [0x80240c]
// 0051503b  8d4c2434             lea ecx, [esp + 0x34]
// 0051503f  c644245800           mov byte ptr [esp + 0x58], 0
// 00515044  ff1568248000         call dword ptr [0x802468]
// 0051504a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0051504e  83c0fd               add eax, -3
// 00515051  50                   push eax
// 00515052  6a03                 push 3
// 00515054  8d4c243c             lea ecx, [esp + 0x3c]
// 00515058  51                   push ecx
// 00515059  8d4c2424             lea ecx, [esp + 0x24]
// 0051505d  ff15e0238000         call dword ptr [0x8023e0]
// 00515063  c644245802           mov byte ptr [esp + 0x58], 2
// 00515068  e960010000           jmp 0x5151cd
// 0051506d  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 00515073  8b02                 mov eax, dword ptr [edx]
// 00515075  50                   push eax
// 00515076  6a02                 push 2
// 00515078  8d4c243c             lea ecx, [esp + 0x3c]
// 0051507c  51                   push ecx
// 0051507d  8d4c2424             lea ecx, [esp + 0x24]
// 00515081  ff15e0238000         call dword ptr [0x8023e0]
// 00515087  50                   push eax
// 00515088  8bce                 mov ecx, esi
// 0051508a  c644245c03           mov byte ptr [esp + 0x5c], 3
// 0051508f  ff150c248000         call dword ptr [0x80240c]
// 00515095  8d4c2434             lea ecx, [esp + 0x34]
// 00515099  c644245800           mov byte ptr [esp + 0x58], 0
// 0051509e  ff1568248000         call dword ptr [0x802468]
// 005150a4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005150a8  83c2fe               add edx, -2
// 005150ab  52                   push edx
// 005150ac  6a02                 push 2
// 005150ae  8d44243c             lea eax, [esp + 0x3c]
// 005150b2  50                   push eax
// 005150b3  8d4c2424             lea ecx, [esp + 0x24]
// 005150b7  ff15e0238000         call dword ptr [0x8023e0]
// 005150bd  c644245804           mov byte ptr [esp + 0x58], 4
// 005150c2  e906010000           jmp 0x5151cd
// 005150c7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005150cb  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005150cf  8bc5                 mov eax, ebp
// 005150d1  83ff10               cmp edi, 0x10
// 005150d4  7304                 jae 0x5150da
// 005150d6  8d44241c             lea eax, [esp + 0x1c]
// 005150da  8a00                 mov al, byte ptr [eax]
// 005150dc  3c5c                 cmp al, 0x5c
// 005150de  7408                 je 0x5150e8
// 005150e0  3c2f                 cmp al, 0x2f
// 005150e2  7404                 je 0x5150e8
// 005150e4  33c0                 xor eax, eax
// 005150e6  eb05                 jmp 0x5150ed
// 005150e8  b801000000           mov eax, 1
// 005150ed  83f902               cmp ecx, 2
// 005150f0  1bd2                 sbb edx, edx
// 005150f2  42                   inc edx
// 005150f3  84d0                 test al, dl
// 005150f5  7475                 je 0x51516c
// 005150f7  83f901               cmp ecx, 1
// 005150fa  730a                 jae 0x515106
// 005150fc  ffd3                 call ebx
// 005150fe  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00515102  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00515106  8bc5                 mov eax, ebp
// 00515108  83ff10               cmp edi, 0x10
// 0051510b  7304                 jae 0x515111
// 0051510d  8d44241c             lea eax, [esp + 0x1c]
// 00515111  8a4001               mov al, byte ptr [eax + 1]
// 00515114  3c5c                 cmp al, 0x5c
// 00515116  7404                 je 0x51511c
// 00515118  3c2f                 cmp al, 0x2f
// 0051511a  7550                 jne 0x51516c
// 0051511c  6a02                 push 2
// 0051511e  6a00                 push 0
// 00515120  8d44243c             lea eax, [esp + 0x3c]
// 00515124  50                   push eax
// 00515125  8d4c2424             lea ecx, [esp + 0x24]
// 00515129  ff15e0238000         call dword ptr [0x8023e0]
// 0051512f  50                   push eax
// 00515130  8bce                 mov ecx, esi
// 00515132  c644245c05           mov byte ptr [esp + 0x5c], 5
// 00515137  ff150c248000         call dword ptr [0x80240c]
// 0051513d  8d4c2434             lea ecx, [esp + 0x34]
// 00515141  c644245800           mov byte ptr [esp + 0x58], 0
// 00515146  ff1568248000         call dword ptr [0x802468]
// 0051514c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00515150  83c1fe               add ecx, -2
// 00515153  51                   push ecx
// 00515154  6a02                 push 2
// 00515156  8d54243c             lea edx, [esp + 0x3c]
// 0051515a  52                   push edx
// 0051515b  8d4c2424             lea ecx, [esp + 0x24]
// 0051515f  ff15e0238000         call dword ptr [0x8023e0]
// 00515165  c644245806           mov byte ptr [esp + 0x58], 6
// 0051516a  eb61                 jmp 0x5151cd
// 0051516c  8bc5                 mov eax, ebp
// 0051516e  83ff10               cmp edi, 0x10
// 00515171  7304                 jae 0x515177
// 00515173  8d44241c             lea eax, [esp + 0x1c]
// 00515177  8a00                 mov al, byte ptr [eax]
// 00515179  3c5c                 cmp al, 0x5c
// 0051517b  7404                 je 0x515181
// 0051517d  3c2f                 cmp al, 0x2f
// 0051517f  7566                 jne 0x5151e7
// 00515181  6a01                 push 1
// 00515183  6a00                 push 0
// 00515185  8d44243c             lea eax, [esp + 0x3c]
// 00515189  50                   push eax
// 0051518a  8d4c2424             lea ecx, [esp + 0x24]
// 0051518e  ff15e0238000         call dword ptr [0x8023e0]
// 00515194  50                   push eax
// 00515195  8bce                 mov ecx, esi
// 00515197  c644245c07           mov byte ptr [esp + 0x5c], 7
// 0051519c  ff150c248000         call dword ptr [0x80240c]
// 005151a2  8d4c2434             lea ecx, [esp + 0x34]
// 005151a6  c644245800           mov byte ptr [esp + 0x58], 0
// 005151ab  ff1568248000         call dword ptr [0x802468]
// 005151b1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005151b5  49                   dec ecx
// 005151b6  51                   push ecx
// 005151b7  6a01                 push 1
// 005151b9  8d54243c             lea edx, [esp + 0x3c]
// 005151bd  52                   push edx
// 005151be  8d4c2424             lea ecx, [esp + 0x24]
// 005151c2  ff15e0238000         call dword ptr [0x8023e0]
// 005151c8  c644245808           mov byte ptr [esp + 0x58], 8
// 005151cd  50                   push eax
// 005151ce  8d4c241c             lea ecx, [esp + 0x1c]
// 005151d2  ff150c248000         call dword ptr [0x80240c]
// 005151d8  8d4c2434             lea ecx, [esp + 0x34]
// 005151dc  c644245800           mov byte ptr [esp + 0x58], 0
// 005151e1  ff1568248000         call dword ptr [0x802468]
// 005151e7  a1e8238000           mov eax, dword ptr [0x8023e8]
// 005151ec  8b00                 mov eax, dword ptr [eax]
// 005151ee  6a01                 push 1
// 005151f0  50                   push eax
// 005151f1  8d4c2418             lea ecx, [esp + 0x18]
// 005151f5  51                   push ecx
// 005151f6  8d4c2424             lea ecx, [esp + 0x24]
// 005151fa  c644241c2e           mov byte ptr [esp + 0x1c], 0x2e
// 005151ff  ff159c248000         call dword ptr [0x80249c]
// 00515205  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 0051520b  8bf0                 mov esi, eax
// 0051520d  8b02                 mov eax, dword ptr [edx]
// 0051520f  6a01                 push 1
// 00515211  50                   push eax
// 00515212  8d442418             lea eax, [esp + 0x18]
// 00515216  50                   push eax
// 00515217  8d4c2424             lea ecx, [esp + 0x24]
// 0051521b  c644241c5c           mov byte ptr [esp + 0x1c], 0x5c
// 00515220  ff159c248000         call dword ptr [0x80249c]
// 00515226  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 0051522c  8bf8                 mov edi, eax
// 0051522e  8b01                 mov eax, dword ptr [ecx]
// 00515230  6a01                 push 1
// 00515232  50                   push eax
// 00515233  8d54241c             lea edx, [esp + 0x1c]
// 00515237  52                   push edx
// 00515238  8d4c2424             lea ecx, [esp + 0x24]
// 0051523c  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 00515241  ff159c248000         call dword ptr [0x80249c]
// 00515247  3bc7                 cmp eax, edi
// 00515249  7d02                 jge 0x51524d
// 0051524b  8bc7                 mov eax, edi
// 0051524d  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 00515253  3b31                 cmp esi, dword ptr [ecx]
// 00515255  746f                 je 0x5152c6
// 00515257  3bf0                 cmp esi, eax
// 00515259  766b                 jbe 0x5152c6
// 0051525b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0051525f  2bd6                 sub edx, esi
// 00515261  4a                   dec edx
// 00515262  52                   push edx
// 00515263  8d4601               lea eax, [esi + 1]
// 00515266  50                   push eax
// 00515267  8d4c243c             lea ecx, [esp + 0x3c]
// 0051526b  51                   push ecx
// 0051526c  8d4c2424             lea ecx, [esp + 0x24]
// 00515270  ff15e0238000         call dword ptr [0x8023e0]
// 00515276  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0051527a  50                   push eax
// 0051527b  c644245c09           mov byte ptr [esp + 0x5c], 9
// 00515280  ff150c248000         call dword ptr [0x80240c]
// 00515286  8d4c2434             lea ecx, [esp + 0x34]
// 0051528a  c644245800           mov byte ptr [esp + 0x58], 0
// 0051528f  ff1568248000         call dword ptr [0x802468]
// 00515295  56                   push esi
// 00515296  6a00                 push 0
// 00515298  8d54243c             lea edx, [esp + 0x3c]
// 0051529c  52                   push edx
// 0051529d  8d4c2424             lea ecx, [esp + 0x24]
// 005152a1  ff15e0238000         call dword ptr [0x8023e0]
// 005152a7  50                   push eax
// 005152a8  8d4c241c             lea ecx, [esp + 0x1c]
// 005152ac  c644245c0a           mov byte ptr [esp + 0x5c], 0xa
// 005152b1  ff150c248000         call dword ptr [0x80240c]
// 005152b7  8d4c2434             lea ecx, [esp + 0x34]
// 005152bb  c644245800           mov byte ptr [esp + 0x58], 0
// 005152c0  ff1568248000         call dword ptr [0x802468]
// 005152c6  a1e8238000           mov eax, dword ptr [0x8023e8]
// 005152cb  8b00                 mov eax, dword ptr [eax]
// 005152cd  6a01                 push 1
// 005152cf  50                   push eax
// 005152d0  8d4c241c             lea ecx, [esp + 0x1c]
// 005152d4  51                   push ecx
// 005152d5  8d4c2424             lea ecx, [esp + 0x24]
// 005152d9  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 005152de  ff159c248000         call dword ptr [0x80249c]
// 005152e4  8b15e8238000         mov edx, dword ptr [0x8023e8]
// 005152ea  8bf0                 mov esi, eax
// 005152ec  8b02                 mov eax, dword ptr [edx]
// 005152ee  6a01                 push 1
// 005152f0  50                   push eax
// 005152f1  8d442418             lea eax, [esp + 0x18]
// 005152f5  50                   push eax
// 005152f6  8d4c2424             lea ecx, [esp + 0x24]
// 005152fa  c644241c2f           mov byte ptr [esp + 0x1c], 0x2f
// 005152ff  ff159c248000         call dword ptr [0x80249c]
// 00515305  3bc6                 cmp eax, esi
// 00515307  7c02                 jl 0x51530b
// 00515309  8bf0                 mov esi, eax
// 0051530b  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 00515311  3b31                 cmp esi, dword ptr [ecx]
// 00515313  7520                 jne 0x515335
// 00515315  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00515319  8d542418             lea edx, [esp + 0x18]
// 0051531d  52                   push edx
// 0051531e  ff150c248000         call dword ptr [0x80240c]
// 00515324  6816b78000           push 0x80b716
// 00515329  8d4c241c             lea ecx, [esp + 0x1c]
// 0051532d  ff154c248000         call dword ptr [0x80244c]
// 00515333  eb72                 jmp 0x5153a7
// 00515335  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00515339  8d48ff               lea ecx, [eax - 1]
// 0051533c  3bf1                 cmp esi, ecx
// 0051533e  7367                 jae 0x5153a7
// 00515340  2bc6                 sub eax, esi
// 00515342  48                   dec eax
// 00515343  50                   push eax
// 00515344  8d5601               lea edx, [esi + 1]
// 00515347  52                   push edx
// 00515348  8d44243c             lea eax, [esp + 0x3c]
// 0051534c  50                   push eax
// 0051534d  8d4c2424             lea ecx, [esp + 0x24]
// 00515351  ff15e0238000         call dword ptr [0x8023e0]
// 00515357  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0051535b  50                   push eax
// 0051535c  c644245c0b           mov byte ptr [esp + 0x5c], 0xb
// 00515361  ff150c248000         call dword ptr [0x80240c]
// 00515367  8d4c2434             lea ecx, [esp + 0x34]
// 0051536b  c644245800           mov byte ptr [esp + 0x58], 0
// 00515370  ff1568248000         call dword ptr [0x802468]
// 00515376  56                   push esi
// 00515377  6a00                 push 0
// 00515379  8d4c243c             lea ecx, [esp + 0x3c]
// 0051537d  51                   push ecx
// 0051537e  8d4c2424             lea ecx, [esp + 0x24]
// 00515382  ff15e0238000         call dword ptr [0x8023e0]
// 00515388  50                   push eax
// 00515389  8d4c241c             lea ecx, [esp + 0x1c]
// 0051538d  c644245c0c           mov byte ptr [esp + 0x5c], 0xc
// 00515392  ff150c248000         call dword ptr [0x80240c]
// 00515398  8d4c2434             lea ecx, [esp + 0x34]
// 0051539c  c644245800           mov byte ptr [esp + 0x58], 0
// 005153a1  ff1568248000         call dword ptr [0x802468]
// 005153a7  33f6                 xor esi, esi
// 005153a9  3974242c             cmp dword ptr [esp + 0x2c], esi
// 005153ad  0f8698000000         jbe 0x51544b
// 005153b3  b30d                 mov bl, 0xd
// 005153b5  6a01                 push 1
// 005153b7  8d7e01               lea edi, [esi + 1]
// 005153ba  57                   push edi
// 005153bb  8d54241c             lea edx, [esp + 0x1c]
// 005153bf  52                   push edx
// 005153c0  8d4c2424             lea ecx, [esp + 0x24]
// 005153c4  8bee                 mov ebp, esi
// 005153c6  c64424202f           mov byte ptr [esp + 0x20], 0x2f
// 005153cb  ff1598248000         call dword ptr [0x802498]
// 005153d1  6a01                 push 1
// 005153d3  8bf0                 mov esi, eax
// 005153d5  57                   push edi
// 005153d6  8d44241c             lea eax, [esp + 0x1c]
// 005153da  50                   push eax
// 005153db  8d4c2424             lea ecx, [esp + 0x24]
// 005153df  c64424205c           mov byte ptr [esp + 0x20], 0x5c
// 005153e4  ff1598248000         call dword ptr [0x802498]
// 005153ea  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 005153f0  8b09                 mov ecx, dword ptr [ecx]
// 005153f2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005153f6  3bf1                 cmp esi, ecx
// 005153f8  7502                 jne 0x5153fc
// 005153fa  8bf2                 mov esi, edx
// 005153fc  3bc1                 cmp eax, ecx
// 005153fe  7502                 jne 0x515402
// 00515400  8bc2                 mov eax, edx
// 00515402  3bf0                 cmp esi, eax
// 00515404  7c02                 jl 0x515408
// 00515406  8bf0                 mov esi, eax
// 00515408  3bf1                 cmp esi, ecx
// 0051540a  7502                 jne 0x51540e
// 0051540c  8bf2                 mov esi, edx
// 0051540e  8bd6                 mov edx, esi
// 00515410  2bd5                 sub edx, ebp
// 00515412  52                   push edx
// 00515413  55                   push ebp
// 00515414  8d44243c             lea eax, [esp + 0x3c]
// 00515418  50                   push eax
// 00515419  8d4c2424             lea ecx, [esp + 0x24]
// 0051541d  ff15e0238000         call dword ptr [0x8023e0]
// 00515423  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00515427  50                   push eax
// 00515428  885c245c             mov byte ptr [esp + 0x5c], bl
// 0051542c  e8bf44ffff           call 0x5098f0
// 00515431  8d4c2434             lea ecx, [esp + 0x34]
// 00515435  c644245800           mov byte ptr [esp + 0x58], 0
// 0051543a  ff1568248000         call dword ptr [0x802468]
// 00515440  46                   inc esi
// 00515441  3b74242c             cmp esi, dword ptr [esp + 0x2c]
// 00515445  0f826affffff         jb 0x5153b5
// 0051544b  8d4c2418             lea ecx, [esp + 0x18]
// 0051544f  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00515457  ff1568248000         call dword ptr [0x802468]
// 0051545d  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00515461  5f                   pop edi
// 00515462  5d                   pop ebp
// 00515463  5b                   pop ebx
// 00515464  5e                   pop esi
// 00515465  64890d00000000       mov dword ptr fs:[0], ecx
// 0051546c  83c44c               add esp, 0x4c
// 0051546f  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?parseFilename@G3D@@YAXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV23@AAV?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@11@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
