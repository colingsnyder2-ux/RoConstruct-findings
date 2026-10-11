// roc 2007-08 005a9fd0  unit: RBX::VHumanoid::?$SignalDesc  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9fd0
//
// 005a9fd0  83ec14               sub esp, 0x14
// 005a9fd3  55                   push ebp
// 005a9fd4  56                   push esi
// 005a9fd5  57                   push edi
// 005a9fd6  8bf1                 mov esi, ecx
// 005a9fd8  83467801             add dword ptr [esi + 0x78], 1
// 005a9fdc  6a00                 push 0
// 005a9fde  8d7e7c               lea edi, [esi + 0x7c]
// 005a9fe1  6a00                 push 0
// 005a9fe3  8bcf                 mov ecx, edi
// 005a9fe5  e886a3fcff           call 0x574370
// 005a9fea  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005a9fee  57                   push edi
// 005a9fef  55                   push ebp
// 005a9ff0  8bcd                 mov ecx, ebp
// 005a9ff2  e899ac0000           call 0x5b4c90
// 005a9ff7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005a9ffa  50                   push eax
// 005a9ffb  e8b0540500           call 0x5ff4b0
// 005aa000  83be8000000000       cmp dword ptr [esi + 0x80], 0
// 005aa007  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005aa00f  0f8ea3000000         jle 0x5aa0b8
// 005aa015  53                   push ebx
// 005aa016  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 005aa01a  8d9b00000000         lea ebx, [ebx]
// 005aa020  85db                 test ebx, ebx
// 005aa022  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005aa025  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005aa029  8b3c88               mov edi, dword ptr [eax + ecx*4]
// 005aa02c  897c242c             mov dword ptr [esp + 0x2c], edi
// 005aa030  7438                 je 0x5aa06a
// 005aa032  8b5304               mov edx, dword ptr [ebx + 4]
// 005aa035  8d44242c             lea eax, [esp + 0x2c]
// 005aa039  50                   push eax
// 005aa03a  8d4c2420             lea ecx, [esp + 0x20]
// 005aa03e  51                   push ecx
// 005aa03f  8bcb                 mov ecx, ebx
// 005aa041  89542420             mov dword ptr [esp + 0x20], edx
// 005aa045  e806b50500           call 0x605550
// 005aa04a  8be8                 mov ebp, eax
// 005aa04c  8b4500               mov eax, dword ptr [ebp]
// 005aa04f  85c0                 test eax, eax
// 005aa051  7404                 je 0x5aa057
// 005aa053  3bc3                 cmp eax, ebx
// 005aa055  7406                 je 0x5aa05d
// 005aa057  ff15d8e67700         call dword ptr [0x77e6d8]
// 005aa05d  8b542418             mov edx, dword ptr [esp + 0x18]
// 005aa061  395504               cmp dword ptr [ebp + 4], edx
// 005aa064  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005aa068  7536                 jne 0x5aa0a0
// 005aa06a  57                   push edi
// 005aa06b  55                   push ebp
// 005aa06c  e8afad0000           call 0x5b4e20
// 005aa071  83c408               add esp, 8
// 005aa074  85c0                 test eax, eax
// 005aa076  7528                 jne 0x5aa0a0
// 005aa078  57                   push edi
// 005aa079  55                   push ebp
// 005aa07a  e831ef0500           call 0x608fb0
// 005aa07f  8bf8                 mov edi, eax
// 005aa081  83c408               add esp, 8
// 005aa084  85ff                 test edi, edi
// 005aa086  7418                 je 0x5aa0a0
// 005aa088  57                   push edi
// 005aa089  8bce                 mov ecx, esi
// 005aa08b  e870feffff           call 0x5a9f00
// 005aa090  57                   push edi
// 005aa091  8bce                 mov ecx, esi
// 005aa093  c6465201             mov byte ptr [esi + 0x52], 1
// 005aa097  e884f8ffff           call 0x5a9920
// 005aa09c  c6465200             mov byte ptr [esi + 0x52], 0
// 005aa0a0  8b442410             mov eax, dword ptr [esp + 0x10]
// 005aa0a4  83c001               add eax, 1
// 005aa0a7  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 005aa0ad  89442410             mov dword ptr [esp + 0x10], eax
// 005aa0b1  0f8c69ffffff         jl 0x5aa020
// 005aa0b7  5b                   pop ebx
// 005aa0b8  5f                   pop edi
// 005aa0b9  5e                   pop esi
// 005aa0ba  5d                   pop ebp
// 005aa0bb  83c414               add esp, 0x14
// 005aa0be  c20800               ret 8
// library openrbx-client/App\v8world\World.cpp (function ?createJoints@World@RBX@@AAEXPAVPrimitive@2@PAV?$set@PAVPrimitive@RBX@@U?$less@PAVPrimitive@RBX@@@std@@V?$allocator@PAVPrimitive@RBX@@@4@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/World.cpp
