// roc 2012-06 009e8ea0  unit: CXTColorDialog  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e8ea0
//
// 009e8ea0  6aff                 push -1
// 009e8ea2  68d312ae00           push 0xae12d3
// 009e8ea7  64a100000000         mov eax, dword ptr fs:[0]
// 009e8ead  50                   push eax
// 009e8eae  83ec08               sub esp, 8
// 009e8eb1  56                   push esi
// 009e8eb2  57                   push edi
// 009e8eb3  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e8eb8  33c4                 xor eax, esp
// 009e8eba  50                   push eax
// 009e8ebb  8d442414             lea eax, [esp + 0x14]
// 009e8ebf  64a300000000         mov dword ptr fs:[0], eax
// 009e8ec5  8bf1                 mov esi, ecx
// 009e8ec7  89742410             mov dword ptr [esp + 0x10], esi
// 009e8ecb  e8080d0b00           call 0xa99bd8
// 009e8ed0  8dbeb0000000         lea edi, [esi + 0xb0]
// 009e8ed6  8bcf                 mov ecx, edi
// 009e8ed8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 009e8ee0  c706d47dc100         mov dword ptr [esi], 0xc17dd4
// 009e8ee6  e8db9af9ff           call 0x9829c6
// 009e8eeb  c7076cdac000         mov dword ptr [edi], 0xc0da6c
// 009e8ef1  8d4c240c             lea ecx, [esp + 0xc]
// 009e8ef5  ff158447b200         call dword ptr [0xb24784]
// 009e8efb  c644241c02           mov byte ptr [esp + 0x1c], 2
// 009e8f00  e8ebf50000           call 0x9f84f0
// 009e8f05  8b10                 mov edx, dword ptr [eax]
// 009e8f07  8b5208               mov edx, dword ptr [edx + 8]
// 009e8f0a  6887240000           push 0x2487
// 009e8f0f  8d4c2410             lea ecx, [esp + 0x10]
// 009e8f13  51                   push ecx
// 009e8f14  8bc8                 mov ecx, eax
// 009e8f16  ffd2                 call edx
// 009e8f18  8b442430             mov eax, dword ptr [esp + 0x30]
// 009e8f1c  6a00                 push 0
// 009e8f1e  50                   push eax
// 009e8f1f  8d4c2414             lea ecx, [esp + 0x14]
// 009e8f23  ff159847b200         call dword ptr [0xb24798]
// 009e8f29  50                   push eax
// 009e8f2a  8bce                 mov ecx, esi
// 009e8f2c  e8a10c0b00           call 0xa99bd2
// 009e8f31  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009e8f34  8b542424             mov edx, dword ptr [esp + 0x24]
// 009e8f38  8b442428             mov eax, dword ptr [esp + 0x28]
// 009e8f3c  81e1fffdffff         and ecx, 0xfffffdff
// 009e8f42  81c980000000         or ecx, 0x80
// 009e8f48  894e58               mov dword ptr [esi + 0x58], ecx
// 009e8f4b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009e8f4f  681c010000           push 0x11c
// 009e8f54  899624010000         mov dword ptr [esi + 0x124], edx
// 009e8f5a  898628010000         mov dword ptr [esi + 0x128], eax
// 009e8f60  898eac000000         mov dword ptr [esi + 0xac], ecx
// 009e8f66  e8af91f9ff           call 0x98211a
// 009e8f6b  83c404               add esp, 4
// 009e8f6e  89442430             mov dword ptr [esp + 0x30], eax
// 009e8f72  c644241c03           mov byte ptr [esp + 0x1c], 3
// 009e8f77  85c0                 test eax, eax
// 009e8f79  740a                 je 0x9e8f85
// 009e8f7b  56                   push esi
// 009e8f7c  8bc8                 mov ecx, eax
// 009e8f7e  e8cd710700           call 0xa60150
// 009e8f83  eb02                 jmp 0x9e8f87
// 009e8f85  33c0                 xor eax, eax
// 009e8f87  50                   push eax
// 009e8f88  8bce                 mov ecx, esi
// 009e8f8a  c644242002           mov byte ptr [esp + 0x20], 2
// 009e8f8f  e8ccfdffff           call 0x9e8d60
// 009e8f94  6888070000           push 0x788
// 009e8f99  e87c91f9ff           call 0x98211a
// 009e8f9e  83c404               add esp, 4
// 009e8fa1  89442430             mov dword ptr [esp + 0x30], eax
// 009e8fa5  c644241c04           mov byte ptr [esp + 0x1c], 4
// 009e8faa  85c0                 test eax, eax
// 009e8fac  740a                 je 0x9e8fb8
// 009e8fae  56                   push esi
// 009e8faf  8bc8                 mov ecx, eax
// 009e8fb1  e8caa70700           call 0xa63780
// 009e8fb6  eb02                 jmp 0x9e8fba
// 009e8fb8  33c0                 xor eax, eax
// 009e8fba  50                   push eax
// 009e8fbb  8bce                 mov ecx, esi
// 009e8fbd  c644242002           mov byte ptr [esp + 0x20], 2
// 009e8fc2  e899fdffff           call 0x9e8d60
// 009e8fc7  8d4c240c             lea ecx, [esp + 0xc]
// 009e8fcb  ff15d047b200         call dword ptr [0xb247d0]
// 009e8fd1  8bc6                 mov eax, esi
// 009e8fd3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009e8fd7  64890d00000000       mov dword ptr fs:[0], ecx
// 009e8fde  59                   pop ecx
// 009e8fdf  5f                   pop edi
// 009e8fe0  5e                   pop esi
// 009e8fe1  83c414               add esp, 0x14
// 009e8fe4  c21000               ret 0x10
// copied from an identical function in another client (function ??0CXTColorDialog@@QAE@KKKPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp