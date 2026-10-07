// roc 2012-06 009dcd00  unit: PAUHWND__::?$CArray  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dcd00
//
// 009dcd00  53                   push ebx
// 009dcd01  56                   push esi
// 009dcd02  57                   push edi
// 009dcd03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009dcd07  33db                 xor ebx, ebx
// 009dcd09  3bfb                 cmp edi, ebx
// 009dcd0b  8bf1                 mov esi, ecx
// 009dcd0d  7d05                 jge 0x9dcd14
// 009dcd0f  e8ac56faff           call 0x9823c0
// 009dcd14  8b442414             mov eax, dword ptr [esp + 0x14]
// 009dcd18  3bc3                 cmp eax, ebx
// 009dcd1a  7c03                 jl 0x9dcd1f
// 009dcd1c  894610               mov dword ptr [esi + 0x10], eax
// 009dcd1f  3bfb                 cmp edi, ebx
// 009dcd21  751f                 jne 0x9dcd42
// 009dcd23  8b4604               mov eax, dword ptr [esi + 4]
// 009dcd26  3bc3                 cmp eax, ebx
// 009dcd28  740c                 je 0x9dcd36
// 009dcd2a  50                   push eax
// 009dcd2b  e88a56faff           call 0x9823ba
// 009dcd30  83c404               add esp, 4
// 009dcd33  895e04               mov dword ptr [esi + 4], ebx
// 009dcd36  5f                   pop edi
// 009dcd37  895e0c               mov dword ptr [esi + 0xc], ebx
// 009dcd3a  895e08               mov dword ptr [esi + 8], ebx
// 009dcd3d  5e                   pop esi
// 009dcd3e  5b                   pop ebx
// 009dcd3f  c20800               ret 8
// 009dcd42  8b4e04               mov ecx, dword ptr [esi + 4]
// 009dcd45  55                   push ebp
// 009dcd46  3bcb                 cmp ecx, ebx
// 009dcd48  7530                 jne 0x9dcd7a
// 009dcd4a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 009dcd4d  3bfd                 cmp edi, ebp
// 009dcd4f  7e02                 jle 0x9dcd53
// 009dcd51  8bef                 mov ebp, edi
// 009dcd53  8bdd                 mov ebx, ebp
// 009dcd55  c1e304               shl ebx, 4
// 009dcd58  53                   push ebx
// 009dcd59  e89256faff           call 0x9823f0
// 009dcd5e  53                   push ebx
// 009dcd5f  6a00                 push 0
// 009dcd61  50                   push eax
// 009dcd62  894604               mov dword ptr [esi + 4], eax
// 009dcd65  e80a66faff           call 0x983374
// 009dcd6a  83c410               add esp, 0x10
// 009dcd6d  896e0c               mov dword ptr [esi + 0xc], ebp
// 009dcd70  5d                   pop ebp
// 009dcd71  897e08               mov dword ptr [esi + 8], edi
// 009dcd74  5f                   pop edi
// 009dcd75  5e                   pop esi
// 009dcd76  5b                   pop ebx
// 009dcd77  c20800               ret 8
// 009dcd7a  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 009dcd7d  3bfd                 cmp edi, ebp
// 009dcd7f  7f2c                 jg 0x9dcdad
// 009dcd81  8b4608               mov eax, dword ptr [esi + 8]
// 009dcd84  3bf8                 cmp edi, eax
// 009dcd86  0f8eb3000000         jle 0x9dce3f
// 009dcd8c  8bd7                 mov edx, edi
// 009dcd8e  2bd0                 sub edx, eax
// 009dcd90  c1e204               shl edx, 4
// 009dcd93  52                   push edx
// 009dcd94  c1e004               shl eax, 4
// 009dcd97  03c1                 add eax, ecx
// 009dcd99  53                   push ebx
// 009dcd9a  50                   push eax
// 009dcd9b  e8d465faff           call 0x983374
// 009dcda0  83c40c               add esp, 0xc
// 009dcda3  5d                   pop ebp
// 009dcda4  897e08               mov dword ptr [esi + 8], edi
// 009dcda7  5f                   pop edi
// 009dcda8  5e                   pop esi
// 009dcda9  5b                   pop ebx
// 009dcdaa  c20800               ret 8
// 009dcdad  8b4610               mov eax, dword ptr [esi + 0x10]
// 009dcdb0  3bc3                 cmp eax, ebx
// 009dcdb2  7524                 jne 0x9dcdd8
// 009dcdb4  8b4608               mov eax, dword ptr [esi + 8]
// 009dcdb7  99                   cdq 
// 009dcdb8  83e207               and edx, 7
// 009dcdbb  03c2                 add eax, edx
// 009dcdbd  c1f803               sar eax, 3
// 009dcdc0  83f804               cmp eax, 4
// 009dcdc3  7d07                 jge 0x9dcdcc
// 009dcdc5  b804000000           mov eax, 4
// 009dcdca  eb0c                 jmp 0x9dcdd8
// 009dcdcc  3d00040000           cmp eax, 0x400
// 009dcdd1  7e05                 jle 0x9dcdd8
// 009dcdd3  b800040000           mov eax, 0x400
// 009dcdd8  8d1c28               lea ebx, [eax + ebp]
// 009dcddb  3bfb                 cmp edi, ebx
// 009dcddd  7d06                 jge 0x9dcde5
// 009dcddf  895c2414             mov dword ptr [esp + 0x14], ebx
// 009dcde3  eb06                 jmp 0x9dcdeb
// 009dcde5  897c2414             mov dword ptr [esp + 0x14], edi
// 009dcde9  8bdf                 mov ebx, edi
// 009dcdeb  3bdd                 cmp ebx, ebp
// 009dcded  7d05                 jge 0x9dcdf4
// 009dcdef  e8cc55faff           call 0x9823c0
// 009dcdf4  c1e304               shl ebx, 4
// 009dcdf7  53                   push ebx
// 009dcdf8  e8f355faff           call 0x9823f0
// 009dcdfd  8b4e04               mov ecx, dword ptr [esi + 4]
// 009dce00  8be8                 mov ebp, eax
// 009dce02  8b4608               mov eax, dword ptr [esi + 8]
// 009dce05  c1e004               shl eax, 4
// 009dce08  50                   push eax
// 009dce09  51                   push ecx
// 009dce0a  53                   push ebx
// 009dce0b  55                   push ebp
// 009dce0c  e8bf73a2ff           call 0x4041d0
// 009dce11  8b4608               mov eax, dword ptr [esi + 8]
// 009dce14  8bd7                 mov edx, edi
// 009dce16  2bd0                 sub edx, eax
// 009dce18  c1e204               shl edx, 4
// 009dce1b  52                   push edx
// 009dce1c  c1e004               shl eax, 4
// 009dce1f  03c5                 add eax, ebp
// 009dce21  6a00                 push 0
// 009dce23  50                   push eax
// 009dce24  e84b65faff           call 0x983374
// 009dce29  8b4604               mov eax, dword ptr [esi + 4]
// 009dce2c  50                   push eax
// 009dce2d  e88855faff           call 0x9823ba
// 009dce32  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 009dce36  83c424               add esp, 0x24
// 009dce39  896e04               mov dword ptr [esi + 4], ebp
// 009dce3c  894e0c               mov dword ptr [esi + 0xc], ecx
// 009dce3f  5d                   pop ebp
// 009dce40  897e08               mov dword ptr [esi + 8], edi
// 009dce43  5f                   pop edi
// 009dce44  5e                   pop esi
// 009dce45  5b                   pop ebx
// 009dce46  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?SetSize@?$CArray@UtagRECT@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBarAnimation.cpp
