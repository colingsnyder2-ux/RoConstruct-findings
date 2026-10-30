// roc 2009-06 007840d0  unit: CXTColorDialog  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007840d0
//
// 007840d0  6aff                 push -1
// 007840d2  6813a48700           push 0x87a413
// 007840d7  64a100000000         mov eax, dword ptr fs:[0]
// 007840dd  50                   push eax
// 007840de  83ec08               sub esp, 8
// 007840e1  56                   push esi
// 007840e2  57                   push edi
// 007840e3  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007840e8  33c4                 xor eax, esp
// 007840ea  50                   push eax
// 007840eb  8d442414             lea eax, [esp + 0x14]
// 007840ef  64a300000000         mov dword ptr fs:[0], eax
// 007840f5  8bf1                 mov esi, ecx
// 007840f7  89742410             mov dword ptr [esp + 0x10], esi
// 007840fb  e8cc810c00           call 0x84c2cc
// 00784100  8dbeb0000000         lea edi, [esi + 0xb0]
// 00784106  8bcf                 mov ecx, edi
// 00784108  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00784110  c7069cd68f00         mov dword ptr [esi], 0x8fd69c
// 00784116  e80552f9ff           call 0x719320
// 0078411b  c707b41a8f00         mov dword ptr [edi], 0x8f1ab4
// 00784121  8d4c240c             lea ecx, [esp + 0xc]
// 00784125  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0078412b  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00784130  e80b700100           call 0x79b140
// 00784135  8b10                 mov edx, dword ptr [eax]
// 00784137  8b5208               mov edx, dword ptr [edx + 8]
// 0078413a  6887240000           push 0x2487
// 0078413f  8d4c2410             lea ecx, [esp + 0x10]
// 00784143  51                   push ecx
// 00784144  8bc8                 mov ecx, eax
// 00784146  ffd2                 call edx
// 00784148  8b442430             mov eax, dword ptr [esp + 0x30]
// 0078414c  6a00                 push 0
// 0078414e  50                   push eax
// 0078414f  8d4c2414             lea ecx, [esp + 0x14]
// 00784153  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00784159  50                   push eax
// 0078415a  8bce                 mov ecx, esi
// 0078415c  e865810c00           call 0x84c2c6
// 00784161  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00784164  8b542424             mov edx, dword ptr [esp + 0x24]
// 00784168  8b442428             mov eax, dword ptr [esp + 0x28]
// 0078416c  81e1fffdffff         and ecx, 0xfffffdff
// 00784172  81c980000000         or ecx, 0x80
// 00784178  894e58               mov dword ptr [esi + 0x58], ecx
// 0078417b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0078417f  681c010000           push 0x11c
// 00784184  899624010000         mov dword ptr [esi + 0x124], edx
// 0078418a  898628010000         mov dword ptr [esi + 0x128], eax
// 00784190  898eac000000         mov dword ptr [esi + 0xac], ecx
// 00784196  e89d48f9ff           call 0x718a38
// 0078419b  83c404               add esp, 4
// 0078419e  89442430             mov dword ptr [esp + 0x30], eax
// 007841a2  c644241c03           mov byte ptr [esp + 0x1c], 3
// 007841a7  85c0                 test eax, eax
// 007841a9  740a                 je 0x7841b5
// 007841ab  56                   push esi
// 007841ac  8bc8                 mov ecx, eax
// 007841ae  e86dc20700           call 0x800420
// 007841b3  eb02                 jmp 0x7841b7
// 007841b5  33c0                 xor eax, eax
// 007841b7  50                   push eax
// 007841b8  8bce                 mov ecx, esi
// 007841ba  c644242002           mov byte ptr [esp + 0x20], 2
// 007841bf  e81ceafdff           call 0x762be0
// 007841c4  6888070000           push 0x788
// 007841c9  e86a48f9ff           call 0x718a38
// 007841ce  83c404               add esp, 4
// 007841d1  89442430             mov dword ptr [esp + 0x30], eax
// 007841d5  c644241c04           mov byte ptr [esp + 0x1c], 4
// 007841da  85c0                 test eax, eax
// 007841dc  740a                 je 0x7841e8
// 007841de  56                   push esi
// 007841df  8bc8                 mov ecx, eax
// 007841e1  e86af80700           call 0x803a50
// 007841e6  eb02                 jmp 0x7841ea
// 007841e8  33c0                 xor eax, eax
// 007841ea  50                   push eax
// 007841eb  8bce                 mov ecx, esi
// 007841ed  c644242002           mov byte ptr [esp + 0x20], 2
// 007841f2  e8e9e9fdff           call 0x762be0
// 007841f7  8d4c240c             lea ecx, [esp + 0xc]
// 007841fb  ff1510fd8900         call dword ptr [0x89fd10]
// 00784201  8bc6                 mov eax, esi
// 00784203  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00784207  64890d00000000       mov dword ptr fs:[0], ecx
// 0078420e  59                   pop ecx
// 0078420f  5f                   pop edi
// 00784210  5e                   pop esi
// 00784211  83c414               add esp, 0x14
// 00784214  c21000               ret 0x10
// copied from an identical function in another client (function ??0CXTColorDialog@@QAE@KKKPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp