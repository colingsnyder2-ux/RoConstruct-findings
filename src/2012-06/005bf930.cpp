// roc 2012-06 005bf930  unit: RakNet::RakPeer  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005bf930
//
// 005bf930  53                   push ebx
// 005bf931  56                   push esi
// 005bf932  57                   push edi
// 005bf933  6a00                 push 0
// 005bf935  6a00                 push 0
// 005bf937  83ec28               sub esp, 0x28
// 005bf93a  8bf4                 mov esi, esp
// 005bf93c  8bd9                 mov ebx, ecx
// 005bf93e  8bce                 mov ecx, esi
// 005bf940  e89b23faff           call 0x561ce0
// 005bf945  8d7e10               lea edi, [esi + 0x10]
// 005bf948  8bcf                 mov ecx, edi
// 005bf94a  e8e120faff           call 0x561a30
// 005bf94f  8b442440             mov eax, dword ptr [esp + 0x40]
// 005bf953  8906                 mov dword ptr [esi], eax
// 005bf955  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005bf959  894e04               mov dword ptr [esi + 4], ecx
// 005bf95c  668b542448           mov dx, word ptr [esp + 0x48]
// 005bf961  8d442450             lea eax, [esp + 0x50]
// 005bf965  50                   push eax
// 005bf966  8bcf                 mov ecx, edi
// 005bf968  66895608             mov word ptr [esi + 8], dx
// 005bf96c  e89f1efaff           call 0x561810
// 005bf971  8bcb                 mov ecx, ebx
// 005bf973  e868eeffff           call 0x5be7e0
// 005bf978  85c0                 test eax, eax
// 005bf97a  7509                 jne 0x5bf985
// 005bf97c  83c8ff               or eax, 0xffffffff
// 005bf97f  5f                   pop edi
// 005bf980  5e                   pop esi
// 005bf981  5b                   pop ebx
// 005bf982  c22800               ret 0x28
// 005bf985  0fb780c0110000       movzx eax, word ptr [eax + 0x11c0]
// 005bf98c  5f                   pop edi
// 005bf98d  5e                   pop esi
// 005bf98e  5b                   pop ebx
// 005bf98f  c22800               ret 0x28
// library rbx2016-raknet/RakPeer.cpp (function ?GetLowestPing@RakPeer@RakNet@@UBEHUAddressOrGUID@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet RakPeer.cpp
