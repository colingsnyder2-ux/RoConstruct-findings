// roc 2008-06 00662e90  unit: RBX::FilterStairs  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662e90
//
// 00662e90  83ec30               sub esp, 0x30
// 00662e93  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 00662e9a  55                   push ebp
// 00662e9b  56                   push esi
// 00662e9c  57                   push edi
// 00662e9d  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 00662ea0  7424                 je 0x662ec6
// 00662ea2  681d010000           push 0x11d
// 00662ea7  53                   push ebx
// 00662ea8  e863120000           call 0x664110
// 00662ead  50                   push eax
// 00662eae  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00662eb1  68c0c48400           push 0x84c4c0
// 00662eb6  50                   push eax
// 00662eb7  e804fcfbff           call 0x622ac0
// 00662ebc  50                   push eax
// 00662ebd  53                   push ebx
// 00662ebe  e84d130000           call 0x664210
// 00662ec3  83c41c               add esp, 0x1c
// 00662ec6  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00662ec9  53                   push ebx
// 00662eca  e831270000           call 0x665600
// 00662ecf  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00662ed2  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00662ed6  41                   inc ecx
// 00662ed7  83c404               add esp, 4
// 00662eda  81f9c8000000         cmp ecx, 0xc8
// 00662ee0  7e0f                 jle 0x662ef1
// 00662ee2  b964c58400           mov ecx, 0x84c564
// 00662ee7  bac8000000           mov edx, 0xc8
// 00662eec  e8dfd8ffff           call 0x6607d0
// 00662ef1  55                   push ebp
// 00662ef2  53                   push ebx
// 00662ef3  e818daffff           call 0x660910
// 00662ef8  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00662efc  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00662f04  8b4724               mov eax, dword ptr [edi + 0x24]
// 00662f07  83c9ff               or ecx, 0xffffffff
// 00662f0a  6a01                 push 1
// 00662f0c  57                   push edi
// 00662f0d  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00662f11  894c2430             mov dword ptr [esp + 0x30], ecx
// 00662f15  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 00662f1d  89442424             mov dword ptr [esp + 0x24], eax
// 00662f21  e87a7e0000           call 0x66ada0
// 00662f26  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00662f29  fe4032               inc byte ptr [eax + 0x32]
// 00662f2c  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 00662f30  0fb78c48aa000000     movzx ecx, word ptr [eax + ecx*2 + 0xaa]
// 00662f38  8d1449               lea edx, [ecx + ecx*2]
// 00662f3b  8b08                 mov ecx, dword ptr [eax]
// 00662f3d  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00662f40  8b4018               mov eax, dword ptr [eax + 0x18]
// 00662f43  89449104             mov dword ptr [ecx + edx*4 + 4], eax
// 00662f47  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00662f4a  51                   push ecx
// 00662f4b  8d542438             lea edx, [esp + 0x38]
// 00662f4f  6a00                 push 0
// 00662f51  52                   push edx
// 00662f52  8bc3                 mov eax, ebx
// 00662f54  e8d7e6ffff           call 0x661630
// 00662f59  8d442440             lea eax, [esp + 0x40]
// 00662f5d  50                   push eax
// 00662f5e  8d4c242c             lea ecx, [esp + 0x2c]
// 00662f62  51                   push ecx
// 00662f63  57                   push edi
// 00662f64  e8b78a0000           call 0x66ba20
// 00662f69  0fb65732             movzx edx, byte ptr [edi + 0x32]
// 00662f6d  8b0f                 mov ecx, dword ptr [edi]
// 00662f6f  0fb78457aa000000     movzx eax, word ptr [edi + edx*2 + 0xaa]
// 00662f77  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00662f7a  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00662f7d  83c428               add esp, 0x28
// 00662f80  5f                   pop edi
// 00662f81  8d0440               lea eax, [eax + eax*2]
// 00662f84  5e                   pop esi
// 00662f85  894c8204             mov dword ptr [edx + eax*4 + 4], ecx
// 00662f89  5d                   pop ebp
// 00662f8a  83c430               add esp, 0x30
// 00662f8d  c3                   ret 
// library lua-5.1.4/lparser.c (function _localfunc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
