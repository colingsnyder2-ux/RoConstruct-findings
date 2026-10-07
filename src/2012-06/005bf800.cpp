// roc 2012-06 005bf800  unit: RakNet::RakPeer  size: 145 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bf800
//
// 005bf800  53                   push ebx
// 005bf801  56                   push esi
// 005bf802  57                   push edi
// 005bf803  6a00                 push 0
// 005bf805  6a00                 push 0
// 005bf807  83ec28               sub esp, 0x28
// 005bf80a  8bf4                 mov esi, esp
// 005bf80c  8bd9                 mov ebx, ecx
// 005bf80e  8bce                 mov ecx, esi
// 005bf810  e8cb24faff           call 0x561ce0
// 005bf815  8d7e10               lea edi, [esi + 0x10]
// 005bf818  8bcf                 mov ecx, edi
// 005bf81a  e81122faff           call 0x561a30
// 005bf81f  8b442440             mov eax, dword ptr [esp + 0x40]
// 005bf823  8906                 mov dword ptr [esi], eax
// 005bf825  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005bf829  894e04               mov dword ptr [esi + 4], ecx
// 005bf82c  668b542448           mov dx, word ptr [esp + 0x48]
// 005bf831  8d442450             lea eax, [esp + 0x50]
// 005bf835  50                   push eax
// 005bf836  8bcf                 mov ecx, edi
// 005bf838  66895608             mov word ptr [esi + 8], dx
// 005bf83c  e8cf1ffaff           call 0x561810
// 005bf841  8bcb                 mov ecx, ebx
// 005bf843  e898efffff           call 0x5be7e0
// 005bf848  8bd0                 mov edx, eax
// 005bf84a  85d2                 test edx, edx
// 005bf84c  743a                 je 0x5bf888
// 005bf84e  33c0                 xor eax, eax
// 005bf850  33c9                 xor ecx, ecx
// 005bf852  8db268110000         lea esi, [edx + 0x1168]
// 005bf858  eb06                 jmp 0x5bf860
// 005bf85a  8d9b00000000         lea ebx, [ebx]
// 005bf860  0fb716               movzx edx, word ptr [esi]
// 005bf863  bfffff0000           mov edi, 0xffff
// 005bf868  663bd7               cmp dx, di
// 005bf86b  740e                 je 0x5bf87b
// 005bf86d  0fb7d2               movzx edx, dx
// 005bf870  41                   inc ecx
// 005bf871  03c2                 add eax, edx
// 005bf873  83c610               add esi, 0x10
// 005bf876  83f905               cmp ecx, 5
// 005bf879  7ce5                 jl 0x5bf860
// 005bf87b  85c9                 test ecx, ecx
// 005bf87d  7e09                 jle 0x5bf888
// 005bf87f  99                   cdq 
// 005bf880  f7f9                 idiv ecx
// 005bf882  5f                   pop edi
// 005bf883  5e                   pop esi
// 005bf884  5b                   pop ebx
// 005bf885  c22800               ret 0x28
// 005bf888  5f                   pop edi
// 005bf889  5e                   pop esi
// 005bf88a  83c8ff               or eax, 0xffffffff
// 005bf88d  5b                   pop ebx
// 005bf88e  c22800               ret 0x28
// library rbx2016-raknet/RakPeer.cpp (function ?GetAveragePing@RakPeer@RakNet@@UAEHUAddressOrGUID@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
