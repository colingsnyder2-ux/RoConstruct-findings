// roc 2009-06 00794840  unit: CXTPRibbonTheme  size: 1133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00794840
//
// 00794840  6aff                 push -1
// 00794842  6880b98700           push 0x87b980
// 00794847  64a100000000         mov eax, dword ptr fs:[0]
// 0079484d  50                   push eax
// 0079484e  83ec08               sub esp, 8
// 00794851  53                   push ebx
// 00794852  56                   push esi
// 00794853  57                   push edi
// 00794854  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00794859  33c4                 xor eax, esp
// 0079485b  50                   push eax
// 0079485c  8d442418             lea eax, [esp + 0x18]
// 00794860  64a300000000         mov dword ptr fs:[0], eax
// 00794866  8bf1                 mov esi, ecx
// 00794868  e8d3f80000           call 0x7a4140
// 0079486d  8bce                 mov ecx, esi
// 0079486f  e83cf50000           call 0x7a3db0
// 00794874  51                   push ecx
// 00794875  8bcc                 mov ecx, esp
// 00794877  89642414             mov dword ptr [esp + 0x14], esp
// 0079487b  6828039000           push 0x900328
// 00794880  8bf8                 mov edi, eax
// 00794882  ff1508fd8900         call dword ptr [0x89fd08]
// 00794888  51                   push ecx
// 00794889  8bcc                 mov ecx, esp
// 0079488b  8964241c             mov dword ptr [esp + 0x1c], esp
// 0079488f  6820039000           push 0x900320
// 00794894  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0079489c  ff1508fd8900         call dword ptr [0x89fd08]
// 007948a2  8bce                 mov ecx, esi
// 007948a4  c644242801           mov byte ptr [esp + 0x28], 1
// 007948a9  e802f50000           call 0x7a3db0
// 007948ae  83cbff               or ebx, 0xffffffff
// 007948b1  8bc8                 mov ecx, eax
// 007948b3  895c2428             mov dword ptr [esp + 0x28], ebx
// 007948b7  e8441d0700           call 0x806600
// 007948bc  51                   push ecx
// 007948bd  8bcc                 mov ecx, esp
// 007948bf  89642418             mov dword ptr [esp + 0x18], esp
// 007948c3  6810039000           push 0x900310
// 007948c8  89866c060000         mov dword ptr [esi + 0x66c], eax
// 007948ce  ff1508fd8900         call dword ptr [0x89fd08]
// 007948d4  51                   push ecx
// 007948d5  8bcc                 mov ecx, esp
// 007948d7  89642418             mov dword ptr [esp + 0x18], esp
// 007948db  6820039000           push 0x900320
// 007948e0  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 007948e8  ff1508fd8900         call dword ptr [0x89fd08]
// 007948ee  8bcf                 mov ecx, edi
// 007948f0  895c2428             mov dword ptr [esp + 0x28], ebx
// 007948f4  e8071d0700           call 0x806600
// 007948f9  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 007948ff  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00794905  51                   push ecx
// 00794906  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 0079490c  8bcc                 mov ecx, esp
// 0079490e  89642418             mov dword ptr [esp + 0x18], esp
// 00794912  6810039000           push 0x900310
// 00794917  ff1508fd8900         call dword ptr [0x89fd08]
// 0079491d  51                   push ecx
// 0079491e  8bcc                 mov ecx, esp
// 00794920  89642418             mov dword ptr [esp + 0x18], esp
// 00794924  6820039000           push 0x900320
// 00794929  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 00794931  ff1508fd8900         call dword ptr [0x89fd08]
// 00794937  8bcf                 mov ecx, edi
// 00794939  895c2428             mov dword ptr [esp + 0x28], ebx
// 0079493d  e8be1c0700           call 0x806600
// 00794942  8b9668060000         mov edx, dword ptr [esi + 0x668]
// 00794948  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 0079494e  51                   push ecx
// 0079494f  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 00794955  8bcc                 mov ecx, esp
// 00794957  89642418             mov dword ptr [esp + 0x18], esp
// 0079495b  6800039000           push 0x900300
// 00794960  ff1508fd8900         call dword ptr [0x89fd08]
// 00794966  51                   push ecx
// 00794967  8bcc                 mov ecx, esp
// 00794969  89642418             mov dword ptr [esp + 0x18], esp
// 0079496d  6820039000           push 0x900320
// 00794972  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 0079497a  ff1508fd8900         call dword ptr [0x89fd08]
// 00794980  8bcf                 mov ecx, edi
// 00794982  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794986  e8751c0700           call 0x806600
// 0079498b  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 00794991  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00794997  51                   push ecx
// 00794998  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0079499e  8bcc                 mov ecx, esp
// 007949a0  89642418             mov dword ptr [esp + 0x18], esp
// 007949a4  68ec029000           push 0x9002ec
// 007949a9  ff1508fd8900         call dword ptr [0x89fd08]
// 007949af  51                   push ecx
// 007949b0  8bcc                 mov ecx, esp
// 007949b2  89642418             mov dword ptr [esp + 0x18], esp
// 007949b6  6820039000           push 0x900320
// 007949bb  c744242c05000000     mov dword ptr [esp + 0x2c], 5
// 007949c3  ff1508fd8900         call dword ptr [0x89fd08]
// 007949c9  8bcf                 mov ecx, edi
// 007949cb  895c2428             mov dword ptr [esp + 0x28], ebx
// 007949cf  e82c1c0700           call 0x806600
// 007949d4  51                   push ecx
// 007949d5  8bcc                 mov ecx, esp
// 007949d7  89642418             mov dword ptr [esp + 0x18], esp
// 007949db  68dc029000           push 0x9002dc
// 007949e0  898674060000         mov dword ptr [esi + 0x674], eax
// 007949e6  ff1508fd8900         call dword ptr [0x89fd08]
// 007949ec  51                   push ecx
// 007949ed  8bcc                 mov ecx, esp
// 007949ef  89642418             mov dword ptr [esp + 0x18], esp
// 007949f3  6820039000           push 0x900320
// 007949f8  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 00794a00  ff1508fd8900         call dword ptr [0x89fd08]
// 00794a06  8bcf                 mov ecx, edi
// 00794a08  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794a0c  e8ef1b0700           call 0x806600
// 00794a11  51                   push ecx
// 00794a12  8bcc                 mov ecx, esp
// 00794a14  89642418             mov dword ptr [esp + 0x18], esp
// 00794a18  68d0029000           push 0x9002d0
// 00794a1d  898690030000         mov dword ptr [esi + 0x390], eax
// 00794a23  ff1508fd8900         call dword ptr [0x89fd08]
// 00794a29  51                   push ecx
// 00794a2a  8bcc                 mov ecx, esp
// 00794a2c  89642418             mov dword ptr [esp + 0x18], esp
// 00794a30  6820039000           push 0x900320
// 00794a35  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 00794a3d  ff1508fd8900         call dword ptr [0x89fd08]
// 00794a43  8bcf                 mov ecx, edi
// 00794a45  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794a49  e8b21b0700           call 0x806600
// 00794a4e  51                   push ecx
// 00794a4f  8bcc                 mov ecx, esp
// 00794a51  89642418             mov dword ptr [esp + 0x18], esp
// 00794a55  68bc029000           push 0x9002bc
// 00794a5a  898670060000         mov dword ptr [esi + 0x670], eax
// 00794a60  ff1508fd8900         call dword ptr [0x89fd08]
// 00794a66  51                   push ecx
// 00794a67  8bcc                 mov ecx, esp
// 00794a69  89642418             mov dword ptr [esp + 0x18], esp
// 00794a6d  6820039000           push 0x900320
// 00794a72  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 00794a7a  ff1508fd8900         call dword ptr [0x89fd08]
// 00794a80  8bcf                 mov ecx, edi
// 00794a82  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794a86  e8751b0700           call 0x806600
// 00794a8b  51                   push ecx
// 00794a8c  8bcc                 mov ecx, esp
// 00794a8e  89642418             mov dword ptr [esp + 0x18], esp
// 00794a92  68a0029000           push 0x9002a0
// 00794a97  898678060000         mov dword ptr [esi + 0x678], eax
// 00794a9d  ff1508fd8900         call dword ptr [0x89fd08]
// 00794aa3  51                   push ecx
// 00794aa4  8bcc                 mov ecx, esp
// 00794aa6  89642418             mov dword ptr [esp + 0x18], esp
// 00794aaa  6820039000           push 0x900320
// 00794aaf  c744242c09000000     mov dword ptr [esp + 0x2c], 9
// 00794ab7  ff1508fd8900         call dword ptr [0x89fd08]
// 00794abd  8bcf                 mov ecx, edi
// 00794abf  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794ac3  e8381b0700           call 0x806600
// 00794ac8  51                   push ecx
// 00794ac9  89867c060000         mov dword ptr [esi + 0x67c], eax
// 00794acf  8bcc                 mov ecx, esp
// 00794ad1  89642418             mov dword ptr [esp + 0x18], esp
// 00794ad5  6884029000           push 0x900284
// 00794ada  ff1508fd8900         call dword ptr [0x89fd08]
// 00794ae0  51                   push ecx
// 00794ae1  8bcc                 mov ecx, esp
// 00794ae3  89642418             mov dword ptr [esp + 0x18], esp
// 00794ae7  6820039000           push 0x900320
// 00794aec  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 00794af4  ff1508fd8900         call dword ptr [0x89fd08]
// 00794afa  8bcf                 mov ecx, edi
// 00794afc  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794b00  e8fb1a0700           call 0x806600
// 00794b05  51                   push ecx
// 00794b06  8bcc                 mov ecx, esp
// 00794b08  89642418             mov dword ptr [esp + 0x18], esp
// 00794b0c  6874029000           push 0x900274
// 00794b11  898680060000         mov dword ptr [esi + 0x680], eax
// 00794b17  ff1508fd8900         call dword ptr [0x89fd08]
// 00794b1d  51                   push ecx
// 00794b1e  8bcc                 mov ecx, esp
// 00794b20  89642418             mov dword ptr [esp + 0x18], esp
// 00794b24  6820039000           push 0x900320
// 00794b29  c744242c0b000000     mov dword ptr [esp + 0x2c], 0xb
// 00794b31  ff1508fd8900         call dword ptr [0x89fd08]
// 00794b37  8bcf                 mov ecx, edi
// 00794b39  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794b3d  e8be1a0700           call 0x806600
// 00794b42  51                   push ecx
// 00794b43  8bcc                 mov ecx, esp
// 00794b45  89642418             mov dword ptr [esp + 0x18], esp
// 00794b49  6860029000           push 0x900260
// 00794b4e  898678030000         mov dword ptr [esi + 0x378], eax
// 00794b54  ff1508fd8900         call dword ptr [0x89fd08]
// 00794b5a  51                   push ecx
// 00794b5b  8bcc                 mov ecx, esp
// 00794b5d  89642418             mov dword ptr [esp + 0x18], esp
// 00794b61  6820039000           push 0x900320
// 00794b66  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 00794b6e  ff1508fd8900         call dword ptr [0x89fd08]
// 00794b74  8bcf                 mov ecx, edi
// 00794b76  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794b7a  e8811a0700           call 0x806600
// 00794b7f  50                   push eax
// 00794b80  8d8e84060000         lea ecx, [esi + 0x684]
// 00794b86  e8e5fefbff           call 0x754a70
// 00794b8b  d9054cad8b00         fld dword ptr [0x8bad4c]
// 00794b91  83ec08               sub esp, 8
// 00794b94  d95c2404             fstp dword ptr [esp + 4]
// 00794b98  8bcc                 mov ecx, esp
// 00794b9a  8964241c             mov dword ptr [esp + 0x1c], esp
// 00794b9e  6840029000           push 0x900240
// 00794ba3  ff1508fd8900         call dword ptr [0x89fd08]
// 00794ba9  51                   push ecx
// 00794baa  8bcc                 mov ecx, esp
// 00794bac  8964241c             mov dword ptr [esp + 0x1c], esp
// 00794bb0  6820039000           push 0x900320
// 00794bb5  c74424300d000000     mov dword ptr [esp + 0x30], 0xd
// 00794bbd  ff1508fd8900         call dword ptr [0x89fd08]
// 00794bc3  8bcf                 mov ecx, edi
// 00794bc5  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00794bc9  e8321a0700           call 0x806600
// 00794bce  50                   push eax
// 00794bcf  51                   push ecx
// 00794bd0  8bcc                 mov ecx, esp
// 00794bd2  89642420             mov dword ptr [esp + 0x20], esp
// 00794bd6  6820029000           push 0x900220
// 00794bdb  ff1508fd8900         call dword ptr [0x89fd08]
// 00794be1  51                   push ecx
// 00794be2  8bcc                 mov ecx, esp
// 00794be4  89642420             mov dword ptr [esp + 0x20], esp
// 00794be8  6820039000           push 0x900320
// 00794bed  c74424340e000000     mov dword ptr [esp + 0x34], 0xe
// 00794bf5  ff1508fd8900         call dword ptr [0x89fd08]
// 00794bfb  8bcf                 mov ecx, edi
// 00794bfd  895c2430             mov dword ptr [esp + 0x30], ebx
// 00794c01  e8fa190700           call 0x806600
// 00794c06  50                   push eax
// 00794c07  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00794c0d  e8eef3fbff           call 0x754000
// 00794c12  51                   push ecx
// 00794c13  8bcc                 mov ecx, esp
// 00794c15  89642418             mov dword ptr [esp + 0x18], esp
// 00794c19  6808029000           push 0x900208
// 00794c1e  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00794c25  c7860c030000a7a7a700 mov dword ptr [esi + 0x30c], 0xa7a7a7
// 00794c2f  ff1508fd8900         call dword ptr [0x89fd08]
// 00794c35  51                   push ecx
// 00794c36  8bcc                 mov ecx, esp
// 00794c38  89642418             mov dword ptr [esp + 0x18], esp
// 00794c3c  6820039000           push 0x900320
// 00794c41  c744242c0f000000     mov dword ptr [esp + 0x2c], 0xf
// 00794c49  ff1508fd8900         call dword ptr [0x89fd08]
// 00794c4f  8bcf                 mov ecx, edi
// 00794c51  895c2428             mov dword ptr [esp + 0x28], ebx
// 00794c55  e8a6190700           call 0x806600
// 00794c5a  d9054cad8b00         fld dword ptr [0x8bad4c]
// 00794c60  51                   push ecx
// 00794c61  d91c24               fstp dword ptr [esp]
// 00794c64  68e9eeee00           push 0xeeeee9
// 00794c69  68e9eeee00           push 0xeeeee9
// 00794c6e  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00794c74  898684030000         mov dword ptr [esi + 0x384], eax
// 00794c7a  c7866c03000086868600 mov dword ptr [esi + 0x36c], 0x868686
// 00794c84  c78654030000fafafa00 mov dword ptr [esi + 0x354], 0xfafafa
// 00794c8e  e86df3fbff           call 0x754000
// 00794c93  8bce                 mov ecx, esi
// 00794c95  e886540100           call 0x7aa120
// 00794c9a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00794c9e  64890d00000000       mov dword ptr fs:[0], ecx
// 00794ca5  59                   pop ecx
// 00794ca6  5f                   pop edi
// 00794ca7  5e                   pop esi
// 00794ca8  5b                   pop ebx
// 00794ca9  83c414               add esp, 0x14
// 00794cac  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPRibbonTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp