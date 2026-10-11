// roc 2007-08 004c4800  unit: RakPeer  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4800
//
// 004c4800  83ec14               sub esp, 0x14
// 004c4803  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c4808  33c4                 xor eax, esp
// 004c480a  89442410             mov dword ptr [esp + 0x10], eax
// 004c480e  56                   push esi
// 004c480f  8b742420             mov esi, dword ptr [esp + 0x20]
// 004c4813  57                   push edi
// 004c4814  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004c4818  83ffff               cmp edi, -1
// 004c481b  7515                 jne 0x4c4832
// 004c481d  0bc7                 or eax, edi
// 004c481f  5f                   pop edi
// 004c4820  5e                   pop esi
// 004c4821  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c4825  33cc                 xor ecx, esp
// 004c4827  e8f2c11600           call 0x630a1e
// 004c482c  83c414               add esp, 0x14
// 004c482f  c21400               ret 0x14
// 004c4832  8b442430             mov eax, dword ptr [esp + 0x30]
// 004c4836  53                   push ebx
// 004c4837  55                   push ebp
// 004c4838  50                   push eax
// 004c4839  ff1540ef7700         call dword ptr [0x77ef40]
// 004c483f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004c4843  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 004c4847  8b2d5cef7700         mov ebp, dword ptr [0x77ef5c]
// 004c484d  6689442412           mov word ptr [esp + 0x12], ax
// 004c4852  894c2414             mov dword ptr [esp + 0x14], ecx
// 004c4856  66c74424100200       mov word ptr [esp + 0x10], 2
// 004c485d  8d4900               lea ecx, [ecx]
// 004c4860  6a10                 push 0x10
// 004c4862  8d542414             lea edx, [esp + 0x14]
// 004c4866  52                   push edx
// 004c4867  6a00                 push 0
// 004c4869  53                   push ebx
// 004c486a  56                   push esi
// 004c486b  57                   push edi
// 004c486c  ffd5                 call ebp
// 004c486e  85c0                 test eax, eax
// 004c4870  74ee                 je 0x4c4860
// 004c4872  83f8ff               cmp eax, -1
// 004c4875  5d                   pop ebp
// 004c4876  5b                   pop ebx
// 004c4877  7415                 je 0x4c488e
// 004c4879  5f                   pop edi
// 004c487a  33c0                 xor eax, eax
// 004c487c  5e                   pop esi
// 004c487d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004c4881  33cc                 xor ecx, esp
// 004c4883  e896c11600           call 0x630a1e
// 004c4888  83c414               add esp, 0x14
// 004c488b  c21400               ret 0x14
// 004c488e  ff1524ef7700         call dword ptr [0x77ef24]
// 004c4894  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c4898  5f                   pop edi
// 004c4899  5e                   pop esi
// 004c489a  33cc                 xor ecx, esp
// 004c489c  e87dc11600           call 0x630a1e
// 004c48a1  83c414               add esp, 0x14
// 004c48a4  c21400               ret 0x14
// library openrbx-raknet/SocketLayer.cpp (function ?SendTo@SocketLayer@@QAEHIPBDHIG@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet SocketLayer.cpp
