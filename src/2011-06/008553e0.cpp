// roc 2011-06 008553e0  unit: CXTPPopupBar  size: 518 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008553e0
//
// 008553e0  83ec38               sub esp, 0x38
// 008553e3  55                   push ebp
// 008553e4  56                   push esi
// 008553e5  57                   push edi
// 008553e6  8bf9                 mov edi, ecx
// 008553e8  8b8fb8010000         mov ecx, dword ptr [edi + 0x1b8]
// 008553ee  8b87b4010000         mov eax, dword ptr [edi + 0x1b4]
// 008553f4  8b97bc010000         mov edx, dword ptr [edi + 0x1bc]
// 008553fa  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008553fe  8d4c2418             lea ecx, [esp + 0x18]
// 00855402  89442418             mov dword ptr [esp + 0x18], eax
// 00855406  8b87c0010000         mov eax, dword ptr [edi + 0x1c0]
// 0085540c  51                   push ecx
// 0085540d  33ed                 xor ebp, ebp
// 0085540f  8bcf                 mov ecx, edi
// 00855411  89afec010000         mov dword ptr [edi + 0x1ec], ebp
// 00855417  89542424             mov dword ptr [esp + 0x24], edx
// 0085541b  89442428             mov dword ptr [esp + 0x28], eax
// 0085541f  e8da51fbff           call 0x80a5fe
// 00855424  8b35381ba400         mov esi, dword ptr [0xa41b38]
// 0085542a  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00855432  ffd6                 call esi
// 00855434  85c0                 test eax, eax
// 00855436  0f85a3010000         jne 0x8555df
// 0085543c  8b5720               mov edx, dword ptr [edi + 0x20]
// 0085543f  53                   push ebx
// 00855440  52                   push edx
// 00855441  ff15341ba400         call dword ptr [0xa41b34]
// 00855447  50                   push eax
// 00855448  e8db4efbff           call 0x80a328
// 0085544d  33db                 xor ebx, ebx
// 0085544f  ffd6                 call esi
// 00855451  50                   push eax
// 00855452  e8d14efbff           call 0x80a328
// 00855457  3bc7                 cmp eax, edi
// 00855459  0f8562010000         jne 0x8555c1
// 0085545f  8b353c1ba400         mov esi, dword ptr [0xa41b3c]
// 00855465  6a00                 push 0
// 00855467  6a0f                 push 0xf
// 00855469  6a0f                 push 0xf
// 0085546b  6a00                 push 0
// 0085546d  8d44243c             lea eax, [esp + 0x3c]
// 00855471  50                   push eax
// 00855472  ffd6                 call esi
// 00855474  85c0                 test eax, eax
// 00855476  7433                 je 0x8554ab
// 00855478  6a0f                 push 0xf
// 0085547a  6a0f                 push 0xf
// 0085547c  6a00                 push 0
// 0085547e  8d4c2438             lea ecx, [esp + 0x38]
// 00855482  51                   push ecx
// 00855483  ff15281ca400         call dword ptr [0xa41c28]
// 00855489  85c0                 test eax, eax
// 0085548b  741e                 je 0x8554ab
// 0085548d  8d54242c             lea edx, [esp + 0x2c]
// 00855491  52                   push edx
// 00855492  ff150c1aa400         call dword ptr [0xa41a0c]
// 00855498  6a00                 push 0
// 0085549a  6a0f                 push 0xf
// 0085549c  6a0f                 push 0xf
// 0085549e  6a00                 push 0
// 008554a0  8d44243c             lea eax, [esp + 0x3c]
// 008554a4  50                   push eax
// 008554a5  ffd6                 call esi
// 008554a7  85c0                 test eax, eax
// 008554a9  75cd                 jne 0x855478
// 008554ab  6a00                 push 0
// 008554ad  6a00                 push 0
// 008554af  6a00                 push 0
// 008554b1  8d4c2438             lea ecx, [esp + 0x38]
// 008554b5  51                   push ecx
// 008554b6  ff15281ca400         call dword ptr [0xa41c28]
// 008554bc  85c0                 test eax, eax
// 008554be  0f84f3000000         je 0x8555b7
// 008554c4  8b442430             mov eax, dword ptr [esp + 0x30]
// 008554c8  3d02020000           cmp eax, 0x202
// 008554cd  0f84ee000000         je 0x8555c1
// 008554d3  3d00020000           cmp eax, 0x200
// 008554d8  0f85a8000000         jne 0x855586
// 008554de  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008554e2  8b542444             mov edx, dword ptr [esp + 0x44]
// 008554e6  3bd9                 cmp ebx, ecx
// 008554e8  7508                 jne 0x8554f2
// 008554ea  3bea                 cmp ebp, edx
// 008554ec  0f84a4000000         je 0x855596
// 008554f2  8b442424             mov eax, dword ptr [esp + 0x24]
// 008554f6  83c00a               add eax, 0xa
// 008554f9  3bc8                 cmp ecx, eax
// 008554fb  8bea                 mov ebp, edx
// 008554fd  8bd9                 mov ebx, ecx
// 008554ff  896c2418             mov dword ptr [esp + 0x18], ebp
// 00855503  7f28                 jg 0x85552d
// 00855505  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00855509  83c0f6               add eax, -0xa
// 0085550c  3bc8                 cmp ecx, eax
// 0085550e  7c1d                 jl 0x85552d
// 00855510  8b442428             mov eax, dword ptr [esp + 0x28]
// 00855514  83c00a               add eax, 0xa
// 00855517  3bd0                 cmp edx, eax
// 00855519  7f12                 jg 0x85552d
// 0085551b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0085551f  83c0f6               add eax, -0xa
// 00855522  3bd0                 cmp edx, eax
// 00855524  7c07                 jl 0x85552d
// 00855526  b801000000           mov eax, 1
// 0085552b  eb02                 jmp 0x85552f
// 0085552d  33c0                 xor eax, eax
// 0085552f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00855533  7414                 je 0x855549
// 00855535  52                   push edx
// 00855536  51                   push ecx
// 00855537  50                   push eax
// 00855538  8bcf                 mov ecx, edi
// 0085553a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085553e  e81dfaffff           call 0x854f60
// 00855543  8b353c1ba400         mov esi, dword ptr [0xa41b3c]
// 00855549  8b8fec010000         mov ecx, dword ptr [edi + 0x1ec]
// 0085554f  85c9                 test ecx, ecx
// 00855551  744e                 je 0x8555a1
// 00855553  8bb7e4010000         mov esi, dword ptr [edi + 0x1e4]
// 00855559  8bc6                 mov eax, esi
// 0085555b  99                   cdq 
// 0085555c  2bc2                 sub eax, edx
// 0085555e  8bd0                 mov edx, eax
// 00855560  d1fa                 sar edx, 1
// 00855562  8bc3                 mov eax, ebx
// 00855564  2bc2                 sub eax, edx
// 00855566  6a01                 push 1
// 00855568  8d55f6               lea edx, [ebp - 0xa]
// 0085556b  8bafe8010000         mov ebp, dword ptr [edi + 0x1e8]
// 00855571  55                   push ebp
// 00855572  56                   push esi
// 00855573  52                   push edx
// 00855574  50                   push eax
// 00855575  e8b64efbff           call 0x80a430
// 0085557a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0085557e  8b353c1ba400         mov esi, dword ptr [0xa41b3c]
// 00855584  eb1b                 jmp 0x8555a1
// 00855586  3d00010000           cmp eax, 0x100
// 0085558b  7509                 jne 0x855596
// 0085558d  837c24341b           cmp dword ptr [esp + 0x34], 0x1b
// 00855592  742d                 je 0x8555c1
// 00855594  eb0b                 jmp 0x8555a1
// 00855596  8d44242c             lea eax, [esp + 0x2c]
// 0085559a  50                   push eax
// 0085559b  ff150c1aa400         call dword ptr [0xa41a0c]
// 008555a1  ff15381ba400         call dword ptr [0xa41b38]
// 008555a7  50                   push eax
// 008555a8  e87b4dfbff           call 0x80a328
// 008555ad  3bc7                 cmp eax, edi
// 008555af  0f84b0feffff         je 0x855465
// 008555b5  eb0a                 jmp 0x8555c1
// 008555b7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008555bb  51                   push ecx
// 008555bc  e85d731700           call 0x9cc91e
// 008555c1  ff15401ba400         call dword ptr [0xa41b40]
// 008555c7  83bfec01000000       cmp dword ptr [edi + 0x1ec], 0
// 008555ce  5b                   pop ebx
// 008555cf  740e                 je 0x8555df
// 008555d1  8bcf                 mov ecx, edi
// 008555d3  e8b854fcff           call 0x81aa90
// 008555d8  8bc8                 mov ecx, eax
// 008555da  e88164fdff           call 0x82ba60
// 008555df  5f                   pop edi
// 008555e0  5e                   pop esi
// 008555e1  5d                   pop ebp
// 008555e2  83c438               add esp, 0x38
// 008555e5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?TrackTearOff@CXTPPopupBar@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
