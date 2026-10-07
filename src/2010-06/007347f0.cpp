// roc 2010-06 007347f0  unit: seg_00730000  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007347f0
//
// 007347f0  81ec10020000         sub esp, 0x210
// 007347f6  53                   push ebx
// 007347f7  55                   push ebp
// 007347f8  56                   push esi
// 007347f9  8bb42420020000       mov esi, dword ptr [esp + 0x220]
// 00734800  57                   push edi
// 00734801  8d442410             lea eax, [esp + 0x10]
// 00734805  50                   push eax
// 00734806  68fe08a000           push 0xa008fe
// 0073480b  6a02                 push 2
// 0073480d  56                   push esi
// 0073480e  e86de7feff           call 0x722f80
// 00734813  6a05                 push 5
// 00734815  6a01                 push 1
// 00734817  56                   push esi
// 00734818  8be8                 mov ebp, eax
// 0073481a  e881e6feff           call 0x722ea0
// 0073481f  6a01                 push 1
// 00734821  6a03                 push 3
// 00734823  56                   push esi
// 00734824  e8a7e8feff           call 0x7230d0
// 00734829  6a04                 push 4
// 0073482b  56                   push esi
// 0073482c  8bf8                 mov edi, eax
// 0073482e  e80dc9feff           call 0x721140
// 00734833  83c430               add esp, 0x30
// 00734836  85c0                 test eax, eax
// 00734838  7f0a                 jg 0x734844
// 0073483a  6a01                 push 1
// 0073483c  56                   push esi
// 0073483d  e87ecbfeff           call 0x7213c0
// 00734842  eb08                 jmp 0x73484c
// 00734844  6a04                 push 4
// 00734846  56                   push esi
// 00734847  e814e8feff           call 0x723060
// 0073484c  83c408               add esp, 8
// 0073484f  8d4c2414             lea ecx, [esp + 0x14]
// 00734853  51                   push ecx
// 00734854  56                   push esi
// 00734855  8bd8                 mov ebx, eax
// 00734857  e884e0feff           call 0x7228e0
// 0073485c  83c408               add esp, 8
// 0073485f  3bfb                 cmp edi, ebx
// 00734861  7d5c                 jge 0x7348bf
// 00734863  57                   push edi
// 00734864  6a01                 push 1
// 00734866  56                   push esi
// 00734867  e8d4cffeff           call 0x721840
// 0073486c  6aff                 push -1
// 0073486e  56                   push esi
// 0073486f  e87cc9feff           call 0x7211f0
// 00734874  83c414               add esp, 0x14
// 00734877  85c0                 test eax, eax
// 00734879  7522                 jne 0x73489d
// 0073487b  57                   push edi
// 0073487c  6aff                 push -1
// 0073487e  56                   push esi
// 0073487f  e8bcc8feff           call 0x721140
// 00734884  50                   push eax
// 00734885  56                   push esi
// 00734886  e8d5c8feff           call 0x721160
// 0073488b  83c410               add esp, 0x10
// 0073488e  50                   push eax
// 0073488f  6894dfa400           push 0xa4df94
// 00734894  56                   push esi
// 00734895  e806dcfeff           call 0x7224a0
// 0073489a  83c410               add esp, 0x10
// 0073489d  8d542414             lea edx, [esp + 0x14]
// 007348a1  52                   push edx
// 007348a2  e8b9dffeff           call 0x722860
// 007348a7  8b442414             mov eax, dword ptr [esp + 0x14]
// 007348ab  50                   push eax
// 007348ac  8d4c241c             lea ecx, [esp + 0x1c]
// 007348b0  55                   push ebp
// 007348b1  51                   push ecx
// 007348b2  e809dffeff           call 0x7227c0
// 007348b7  47                   inc edi
// 007348b8  83c410               add esp, 0x10
// 007348bb  3bfb                 cmp edi, ebx
// 007348bd  7ca4                 jl 0x734863
// 007348bf  7547                 jne 0x734908
// 007348c1  57                   push edi
// 007348c2  6a01                 push 1
// 007348c4  56                   push esi
// 007348c5  e876cffeff           call 0x721840
// 007348ca  6aff                 push -1
// 007348cc  56                   push esi
// 007348cd  e81ec9feff           call 0x7211f0
// 007348d2  83c414               add esp, 0x14
// 007348d5  85c0                 test eax, eax
// 007348d7  7522                 jne 0x7348fb
// 007348d9  57                   push edi
// 007348da  6aff                 push -1
// 007348dc  56                   push esi
// 007348dd  e85ec8feff           call 0x721140
// 007348e2  50                   push eax
// 007348e3  56                   push esi
// 007348e4  e877c8feff           call 0x721160
// 007348e9  83c410               add esp, 0x10
// 007348ec  50                   push eax
// 007348ed  6894dfa400           push 0xa4df94
// 007348f2  56                   push esi
// 007348f3  e8a8dbfeff           call 0x7224a0
// 007348f8  83c410               add esp, 0x10
// 007348fb  8d542414             lea edx, [esp + 0x14]
// 007348ff  52                   push edx
// 00734900  e85bdffeff           call 0x722860
// 00734905  83c404               add esp, 4
// 00734908  8d442414             lea eax, [esp + 0x14]
// 0073490c  50                   push eax
// 0073490d  e80edffeff           call 0x722820
// 00734912  83c404               add esp, 4
// 00734915  5f                   pop edi
// 00734916  5e                   pop esi
// 00734917  5d                   pop ebp
// 00734918  b801000000           mov eax, 1
// 0073491d  5b                   pop ebx
// 0073491e  81c410020000         add esp, 0x210
// 00734924  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tconcat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
