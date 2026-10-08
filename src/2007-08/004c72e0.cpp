// roc 2007-08 004c72e0  unit: RakPeer  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c72e0
//
// 004c72e0  51                   push ecx
// 004c72e1  53                   push ebx
// 004c72e2  55                   push ebp
// 004c72e3  56                   push esi
// 004c72e4  57                   push edi
// 004c72e5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004c72e9  8d44241c             lea eax, [esp + 0x1c]
// 004c72ed  8be9                 mov ebp, ecx
// 004c72ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c72f3  50                   push eax
// 004c72f4  57                   push edi
// 004c72f5  51                   push ecx
// 004c72f6  8bcd                 mov ecx, ebp
// 004c72f8  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004c72fc  e8afdfffff           call 0x4c52b0
// 004c7301  84c0                 test al, al
// 004c7303  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004c7307  7403                 je 0x4c730c
// 004c7309  83c601               add esi, 1
// 004c730c  8b9cb710010000       mov ebx, dword ptr [edi + esi*4 + 0x110]
// 004c7313  803b00               cmp byte ptr [ebx], 0
// 004c7316  0f859c000000         jne 0x4c73b8
// 004c731c  3b7704               cmp esi, dword ptr [edi + 4]
// 004c731f  7d06                 jge 0x4c7327
// 004c7321  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004c7325  eb04                 jmp 0x4c732b
// 004c7327  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004c732b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004c732f  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004c7333  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c7337  52                   push edx
// 004c7338  55                   push ebp
// 004c7339  50                   push eax
// 004c733a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004c733e  50                   push eax
// 004c733f  53                   push ebx
// 004c7340  51                   push ecx
// 004c7341  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004c7345  e896ffffff           call 0x4c72e0
// 004c734a  84c0                 test al, al
// 004c734c  750a                 jne 0x4c7358
// 004c734e  5f                   pop edi
// 004c734f  5e                   pop esi
// 004c7350  5d                   pop ebp
// 004c7351  32c0                 xor al, al
// 004c7353  5b                   pop ebx
// 004c7354  59                   pop ecx
// 004c7355  c21800               ret 0x18
// 004c7358  3b7704               cmp esi, dword ptr [edi + 4]
// 004c735b  7d06                 jge 0x4c7363
// 004c735d  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004c7361  eb04                 jmp 0x4c7367
// 004c7363  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004c7367  837d0803             cmp dword ptr [ebp + 8], 3
// 004c736b  751f                 jne 0x4c738c
// 004c736d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c7371  3bf1                 cmp esi, ecx
// 004c7373  7417                 je 0x4c738c
// 004c7375  8b5500               mov edx, dword ptr [ebp]
// 004c7378  c7450800000000       mov dword ptr [ebp + 8], 0
// 004c737f  89548f08             mov dword ptr [edi + ecx*4 + 8], edx
// 004c7383  3b7704               cmp esi, dword ptr [edi + 4]
// 004c7386  7d2a                 jge 0x4c73b2
// 004c7388  8b44b708             mov eax, dword ptr [edi + esi*4 + 8]
// 004c738c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c7390  803900               cmp byte ptr [ecx], 0
// 004c7393  7413                 je 0x4c73a8
// 004c7395  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c7399  55                   push ebp
// 004c739a  50                   push eax
// 004c739b  57                   push edi
// 004c739c  56                   push esi
// 004c739d  e83ef0ffff           call 0x4c63e0
// 004c73a2  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c73a6  8802                 mov byte ptr [edx], al
// 004c73a8  5f                   pop edi
// 004c73a9  5e                   pop esi
// 004c73aa  5d                   pop ebp
// 004c73ab  b001                 mov al, 1
// 004c73ad  5b                   pop ebx
// 004c73ae  59                   pop ecx
// 004c73af  c21800               ret 0x18
// 004c73b2  8b44b704             mov eax, dword ptr [edi + esi*4 + 4]
// 004c73b6  ebd4                 jmp 0x4c738c
// 004c73b8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c73bc  8d44241c             lea eax, [esp + 0x1c]
// 004c73c0  50                   push eax
// 004c73c1  53                   push ebx
// 004c73c2  51                   push ecx
// 004c73c3  8bcd                 mov ecx, ebp
// 004c73c5  e8e6deffff           call 0x4c52b0
// 004c73ca  84c0                 test al, al
// 004c73cc  7480                 je 0x4c734e
// 004c73ce  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004c73d2  8b94ab88000000       mov edx, dword ptr [ebx + ebp*4 + 0x88]
// 004c73d9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004c73dd  8910                 mov dword ptr [eax], edx
// 004c73df  8b8cb710010000       mov ecx, dword ptr [edi + esi*4 + 0x110]
// 004c73e6  51                   push ecx
// 004c73e7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004c73eb  55                   push ebp
// 004c73ec  e81fdeffff           call 0x4c5210
// 004c73f1  85ed                 test ebp, ebp
// 004c73f3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 004c73f7  7527                 jne 0x4c7420
// 004c73f9  85f6                 test esi, esi
// 004c73fb  7e0e                 jle 0x4c740b
// 004c73fd  8b94b710010000       mov edx, dword ptr [edi + esi*4 + 0x110]
// 004c7404  8b4208               mov eax, dword ptr [edx + 8]
// 004c7407  8944b704             mov dword ptr [edi + esi*4 + 4], eax
// 004c740b  7513                 jne 0x4c7420
// 004c740d  c7450803000000       mov dword ptr [ebp + 8], 3
// 004c7414  8b8f10010000         mov ecx, dword ptr [edi + 0x110]
// 004c741a  8b5108               mov edx, dword ptr [ecx + 8]
// 004c741d  895500               mov dword ptr [ebp], edx
// 004c7420  8b84b710010000       mov eax, dword ptr [edi + esi*4 + 0x110]
// 004c7427  83780410             cmp dword ptr [eax + 4], 0x10
// 004c742b  7d10                 jge 0x4c743d
// 004c742d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c7431  8b442424             mov eax, dword ptr [esp + 0x24]
// 004c7435  c60101               mov byte ptr [ecx], 1
// 004c7438  e958ffffff           jmp 0x4c7395
// 004c743d  8b542420             mov edx, dword ptr [esp + 0x20]
// 004c7441  5f                   pop edi
// 004c7442  5e                   pop esi
// 004c7443  5d                   pop ebp
// 004c7444  c60200               mov byte ptr [edx], 0
// 004c7447  b001                 mov al, 1
// 004c7449  5b                   pop ebx
// 004c744a  59                   pop ecx
// 004c744b  c21800               ret 0x18
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?FindDeleteRebalance@?$BPlusTree@IPAUInternalPacket@@$0CA@@DataStructures@@IAE_NIPAU?$Page@IPAUInternalPacket@@$0CA@@2@PA_NIPAUReturnAction@12@AAPAUInternalPacket@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
