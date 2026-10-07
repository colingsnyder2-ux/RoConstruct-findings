// roc 2011-06 00a2f710  unit: seg_00a20000  size: 625 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a2f710
//
// 00a2f710  56                   push esi
// 00a2f711  8b35c81ba400         mov esi, dword ptr [0xa41bc8]
// 00a2f717  6a3b                 push 0x3b
// 00a2f719  6a5a                 push 0x5a
// 00a2f71b  6a1d                 push 0x1d
// 00a2f71d  6a3d                 push 0x3d
// 00a2f71f  b81e000000           mov eax, 0x1e
// 00a2f724  33c9                 xor ecx, ecx
// 00a2f726  685090d100           push 0xd19050
// 00a2f72b  a34890d100           mov dword ptr [0xd19048], eax
// 00a2f730  890d4c90d100         mov dword ptr [0xd1904c], ecx
// 00a2f736  ffd6                 call esi
// 00a2f738  6a3b                 push 0x3b
// 00a2f73a  6a78                 push 0x78
// 00a2f73c  b91e000000           mov ecx, 0x1e
// 00a2f741  51                   push ecx
// 00a2f742  6a5a                 push 0x5a
// 00a2f744  33c0                 xor eax, eax
// 00a2f746  686890d100           push 0xd19068
// 00a2f74b  a36090d100           mov dword ptr [0xd19060], eax
// 00a2f750  890d6490d100         mov dword ptr [0xd19064], ecx
// 00a2f756  ffd6                 call esi
// 00a2f758  b81e000000           mov eax, 0x1e
// 00a2f75d  50                   push eax
// 00a2f75e  6a78                 push 0x78
// 00a2f760  6a00                 push 0
// 00a2f762  6a5b                 push 0x5b
// 00a2f764  b93b000000           mov ecx, 0x3b
// 00a2f769  688090d100           push 0xd19080
// 00a2f76e  a37890d100           mov dword ptr [0xd19078], eax
// 00a2f773  890d7c90d100         mov dword ptr [0xd1907c], ecx
// 00a2f779  ffd6                 call esi
// 00a2f77b  6a1d                 push 0x1d
// 00a2f77d  6a5c                 push 0x5c
// 00a2f77f  6a00                 push 0
// 00a2f781  6a3e                 push 0x3e
// 00a2f783  b83c000000           mov eax, 0x3c
// 00a2f788  b91e000000           mov ecx, 0x1e
// 00a2f78d  689890d100           push 0xd19098
// 00a2f792  a39090d100           mov dword ptr [0xd19090], eax
// 00a2f797  890d9490d100         mov dword ptr [0xd19094], ecx
// 00a2f79d  ffd6                 call esi
// 00a2f79f  6a78                 push 0x78
// 00a2f7a1  6a5a                 push 0x5a
// 00a2f7a3  6a5a                 push 0x5a
// 00a2f7a5  6a3d                 push 0x3d
// 00a2f7a7  b81e000000           mov eax, 0x1e
// 00a2f7ac  33c9                 xor ecx, ecx
// 00a2f7ae  68b090d100           push 0xd190b0
// 00a2f7b3  a3a890d100           mov dword ptr [0xd190a8], eax
// 00a2f7b8  890dac90d100         mov dword ptr [0xd190ac], ecx
// 00a2f7be  ffd6                 call esi
// 00a2f7c0  6a78                 push 0x78
// 00a2f7c2  6a78                 push 0x78
// 00a2f7c4  6a5b                 push 0x5b
// 00a2f7c6  6a5a                 push 0x5a
// 00a2f7c8  33c0                 xor eax, eax
// 00a2f7ca  b91e000000           mov ecx, 0x1e
// 00a2f7cf  68c890d100           push 0xd190c8
// 00a2f7d4  a3c090d100           mov dword ptr [0xd190c0], eax
// 00a2f7d9  890dc490d100         mov dword ptr [0xd190c4], ecx
// 00a2f7df  ffd6                 call esi
// 00a2f7e1  6a5b                 push 0x5b
// 00a2f7e3  6a78                 push 0x78
// 00a2f7e5  6a3d                 push 0x3d
// 00a2f7e7  6a5b                 push 0x5b
// 00a2f7e9  b81e000000           mov eax, 0x1e
// 00a2f7ee  b93b000000           mov ecx, 0x3b
// 00a2f7f3  68e090d100           push 0xd190e0
// 00a2f7f8  a3d890d100           mov dword ptr [0xd190d8], eax
// 00a2f7fd  890ddc90d100         mov dword ptr [0xd190dc], ecx
// 00a2f803  ffd6                 call esi
// 00a2f805  6a5a                 push 0x5a
// 00a2f807  6a5c                 push 0x5c
// 00a2f809  6a3d                 push 0x3d
// 00a2f80b  b83c000000           mov eax, 0x3c
// 00a2f810  b91e000000           mov ecx, 0x1e
// 00a2f815  6a3e                 push 0x3e
// 00a2f817  a3f090d100           mov dword ptr [0xd190f0], eax
// 00a2f81c  890df490d100         mov dword ptr [0xd190f4], ecx
// 00a2f822  68f890d100           push 0xd190f8
// 00a2f827  ffd6                 call esi
// 00a2f829  6a6f                 push 0x6f
// 00a2f82b  6894000000           push 0x94
// 00a2f830  6a52                 push 0x52
// 00a2f832  b81e000000           mov eax, 0x1e
// 00a2f837  6a78                 push 0x78
// 00a2f839  8bc8                 mov ecx, eax
// 00a2f83b  681091d100           push 0xd19110
// 00a2f840  a30891d100           mov dword ptr [0xd19108], eax
// 00a2f845  890d0c91d100         mov dword ptr [0xd1910c], ecx
// 00a2f84b  ffd6                 call esi
// 00a2f84d  6a52                 push 0x52
// 00a2f84f  68a1000000           push 0xa1
// 00a2f854  6a29                 push 0x29
// 00a2f856  b818000000           mov eax, 0x18
// 00a2f85b  6a78                 push 0x78
// 00a2f85d  8bc8                 mov ecx, eax
// 00a2f85f  682891d100           push 0xd19128
// 00a2f864  a32091d100           mov dword ptr [0xd19120], eax
// 00a2f869  890d2491d100         mov dword ptr [0xd19124], ecx
// 00a2f86f  ffd6                 call esi
// 00a2f871  6a29                 push 0x29
// 00a2f873  68a1000000           push 0xa1
// 00a2f878  6a00                 push 0
// 00a2f87a  b818000000           mov eax, 0x18
// 00a2f87f  6a78                 push 0x78
// 00a2f881  8bc8                 mov ecx, eax
// 00a2f883  684091d100           push 0xd19140
// 00a2f888  a33891d100           mov dword ptr [0xd19138], eax
// 00a2f88d  890d3c91d100         mov dword ptr [0xd1913c], ecx
// 00a2f893  ffd6                 call esi
// 00a2f895  6a3d                 push 0x3d
// 00a2f897  6a1d                 push 0x1d
// 00a2f899  33c9                 xor ecx, ecx
// 00a2f89b  6a1d                 push 0x1d
// 00a2f89d  51                   push ecx
// 00a2f89e  33c0                 xor eax, eax
// 00a2f8a0  685891d100           push 0xd19158
// 00a2f8a5  a35091d100           mov dword ptr [0xd19150], eax
// 00a2f8aa  890d5491d100         mov dword ptr [0xd19154], ecx
// 00a2f8b0  ffd6                 call esi
// 00a2f8b2  6a3d                 push 0x3d
// 00a2f8b4  6a3d                 push 0x3d
// 00a2f8b6  6a20                 push 0x20
// 00a2f8b8  6a1d                 push 0x1d
// 00a2f8ba  33c0                 xor eax, eax
// 00a2f8bc  33c9                 xor ecx, ecx
// 00a2f8be  687091d100           push 0xd19170
// 00a2f8c3  a36891d100           mov dword ptr [0xd19168], eax
// 00a2f8c8  890d6c91d100         mov dword ptr [0xd1916c], ecx
// 00a2f8ce  ffd6                 call esi
// 00a2f8d0  6a20                 push 0x20
// 00a2f8d2  6a3d                 push 0x3d
// 00a2f8d4  33c9                 xor ecx, ecx
// 00a2f8d6  51                   push ecx
// 00a2f8d7  6a20                 push 0x20
// 00a2f8d9  33c0                 xor eax, eax
// 00a2f8db  688891d100           push 0xd19188
// 00a2f8e0  a38091d100           mov dword ptr [0xd19180], eax
// 00a2f8e5  890d8491d100         mov dword ptr [0xd19184], ecx
// 00a2f8eb  ffd6                 call esi
// 00a2f8ed  6a1d                 push 0x1d
// 00a2f8ef  33c9                 xor ecx, ecx
// 00a2f8f1  6a20                 push 0x20
// 00a2f8f3  51                   push ecx
// 00a2f8f4  51                   push ecx
// 00a2f8f5  33c0                 xor eax, eax
// 00a2f8f7  68a091d100           push 0xd191a0
// 00a2f8fc  a39891d100           mov dword ptr [0xd19198], eax
// 00a2f901  890d9c91d100         mov dword ptr [0xd1919c], ecx
// 00a2f907  ffd6                 call esi
// 00a2f909  6a7a                 push 0x7a
// 00a2f90b  6a1d                 push 0x1d
// 00a2f90d  33c9                 xor ecx, ecx
// 00a2f90f  6a5a                 push 0x5a
// 00a2f911  51                   push ecx
// 00a2f912  33c0                 xor eax, eax
// 00a2f914  68b891d100           push 0xd191b8
// 00a2f919  a3b091d100           mov dword ptr [0xd191b0], eax
// 00a2f91e  890db491d100         mov dword ptr [0xd191b4], ecx
// 00a2f924  ffd6                 call esi
// 00a2f926  6a7a                 push 0x7a
// 00a2f928  6a3d                 push 0x3d
// 00a2f92a  6a5d                 push 0x5d
// 00a2f92c  6a1d                 push 0x1d
// 00a2f92e  33c0                 xor eax, eax
// 00a2f930  33c9                 xor ecx, ecx
// 00a2f932  68d091d100           push 0xd191d0
// 00a2f937  a3c891d100           mov dword ptr [0xd191c8], eax
// 00a2f93c  890dcc91d100         mov dword ptr [0xd191cc], ecx
// 00a2f942  ffd6                 call esi
// 00a2f944  6a5d                 push 0x5d
// 00a2f946  6a3d                 push 0x3d
// 00a2f948  6a3d                 push 0x3d
// 00a2f94a  6a20                 push 0x20
// 00a2f94c  33c0                 xor eax, eax
// 00a2f94e  33c9                 xor ecx, ecx
// 00a2f950  68e891d100           push 0xd191e8
// 00a2f955  a3e091d100           mov dword ptr [0xd191e0], eax
// 00a2f95a  890de491d100         mov dword ptr [0xd191e4], ecx
// 00a2f960  ffd6                 call esi
// 00a2f962  6a5a                 push 0x5a
// 00a2f964  6a20                 push 0x20
// 00a2f966  33c9                 xor ecx, ecx
// 00a2f968  6a3d                 push 0x3d
// 00a2f96a  51                   push ecx
// 00a2f96b  33c0                 xor eax, eax
// 00a2f96d  680092d100           push 0xd19200
// 00a2f972  a3f891d100           mov dword ptr [0xd191f8], eax
// 00a2f977  890dfc91d100         mov dword ptr [0xd191fc], ecx
// 00a2f97d  ffd6                 call esi
// 00a2f97f  5e                   pop esi
// 00a2f980  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneContext.cpp (function ??__EarrSpritesStyckerVisualStudio2005@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneContext.cpp
