// roc 2010-06 008130d0  unit: CXTColorDialog  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008130d0
//
// 008130d0  6aff                 push -1
// 008130d2  68d3459b00           push 0x9b45d3
// 008130d7  64a100000000         mov eax, dword ptr fs:[0]
// 008130dd  50                   push eax
// 008130de  83ec08               sub esp, 8
// 008130e1  56                   push esi
// 008130e2  57                   push edi
// 008130e3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008130e8  33c4                 xor eax, esp
// 008130ea  50                   push eax
// 008130eb  8d442414             lea eax, [esp + 0x14]
// 008130ef  64a300000000         mov dword ptr fs:[0], eax
// 008130f5  8bf1                 mov esi, ecx
// 008130f7  89742410             mov dword ptr [esp + 0x10], esi
// 008130fb  e874a01600           call 0x97d174
// 00813100  8dbeb0000000         lea edi, [esi + 0xb0]
// 00813106  8bcf                 mov ecx, edi
// 00813108  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00813110  c706041ea600         mov dword ptr [esi], 0xa61e04
// 00813116  e86d51f9ff           call 0x7a8288
// 0081311b  c7072467a500         mov dword ptr [edi], 0xa56724
// 00813121  8d4c240c             lea ecx, [esp + 0xc]
// 00813125  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0081312b  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00813130  e87bf70000           call 0x8228b0
// 00813135  8b10                 mov edx, dword ptr [eax]
// 00813137  8b5208               mov edx, dword ptr [edx + 8]
// 0081313a  6887240000           push 0x2487
// 0081313f  8d4c2410             lea ecx, [esp + 0x10]
// 00813143  51                   push ecx
// 00813144  8bc8                 mov ecx, eax
// 00813146  ffd2                 call edx
// 00813148  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081314c  6a00                 push 0
// 0081314e  50                   push eax
// 0081314f  8d4c2414             lea ecx, [esp + 0x14]
// 00813153  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00813159  50                   push eax
// 0081315a  8bce                 mov ecx, esi
// 0081315c  e80da01600           call 0x97d16e
// 00813161  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00813164  8b542424             mov edx, dword ptr [esp + 0x24]
// 00813168  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081316c  81e1fffdffff         and ecx, 0xfffffdff
// 00813172  81c980000000         or ecx, 0x80
// 00813178  894e58               mov dword ptr [esi + 0x58], ecx
// 0081317b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081317f  681c010000           push 0x11c
// 00813184  899624010000         mov dword ptr [esi + 0x124], edx
// 0081318a  898628010000         mov dword ptr [esi + 0x128], eax
// 00813190  898eac000000         mov dword ptr [esi + 0xac], ecx
// 00813196  e80548f9ff           call 0x7a79a0
// 0081319b  83c404               add esp, 4
// 0081319e  89442430             mov dword ptr [esp + 0x30], eax
// 008131a2  c644241c03           mov byte ptr [esp + 0x1c], 3
// 008131a7  85c0                 test eax, eax
// 008131a9  740a                 je 0x8131b5
// 008131ab  56                   push esi
// 008131ac  8bc8                 mov ecx, eax
// 008131ae  e8fdbf0700           call 0x88f1b0
// 008131b3  eb02                 jmp 0x8131b7
// 008131b5  33c0                 xor eax, eax
// 008131b7  50                   push eax
// 008131b8  8bce                 mov ecx, esi
// 008131ba  c644242002           mov byte ptr [esp + 0x20], 2
// 008131bf  e8ece8fdff           call 0x7f1ab0
// 008131c4  6888070000           push 0x788
// 008131c9  e8d247f9ff           call 0x7a79a0
// 008131ce  83c404               add esp, 4
// 008131d1  89442430             mov dword ptr [esp + 0x30], eax
// 008131d5  c644241c04           mov byte ptr [esp + 0x1c], 4
// 008131da  85c0                 test eax, eax
// 008131dc  740a                 je 0x8131e8
// 008131de  56                   push esi
// 008131df  8bc8                 mov ecx, eax
// 008131e1  e8aaf50700           call 0x892790
// 008131e6  eb02                 jmp 0x8131ea
// 008131e8  33c0                 xor eax, eax
// 008131ea  50                   push eax
// 008131eb  8bce                 mov ecx, esi
// 008131ed  c644242002           mov byte ptr [esp + 0x20], 2
// 008131f2  e8b9e8fdff           call 0x7f1ab0
// 008131f7  8d4c240c             lea ecx, [esp + 0xc]
// 008131fb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00813201  8bc6                 mov eax, esi
// 00813203  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00813207  64890d00000000       mov dword ptr fs:[0], ecx
// 0081320e  59                   pop ecx
// 0081320f  5f                   pop edi
// 00813210  5e                   pop esi
// 00813211  83c414               add esp, 0x14
// 00813214  c21000               ret 0x10
// copied from an identical function in another client (function ??0CXTColorDialog@@QAE@KKKPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp