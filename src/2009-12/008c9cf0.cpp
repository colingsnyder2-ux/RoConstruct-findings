// roc 2009-12 008c9cf0  unit: CXTPPropertyGridPaintManager  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c9cf0
//
// 008c9cf0  56                   push esi
// 008c9cf1  57                   push edi
// 008c9cf2  8bf1                 mov esi, ecx
// 008c9cf4  e8a778f6ff           call 0x8315a0
// 008c9cf9  e8d25cf6ff           call 0x82f9d0
// 008c9cfe  6a0d                 push 0xd
// 008c9d00  8bc8                 mov ecx, eax
// 008c9d02  e8f953f6ff           call 0x82f100
// 008c9d07  89464c               mov dword ptr [esi + 0x4c], eax
// 008c9d0a  e8c15cf6ff           call 0x82f9d0
// 008c9d0f  6a0e                 push 0xe
// 008c9d11  8bc8                 mov ecx, eax
// 008c9d13  e8e853f6ff           call 0x82f100
// 008c9d18  894658               mov dword ptr [esi + 0x58], eax
// 008c9d1b  e8b05cf6ff           call 0x82f9d0
// 008c9d20  6a0f                 push 0xf
// 008c9d22  8bc8                 mov ecx, eax
// 008c9d24  e8d753f6ff           call 0x82f100
// 008c9d29  894634               mov dword ptr [esi + 0x34], eax
// 008c9d2c  e89f5cf6ff           call 0x82f9d0
// 008c9d31  6a10                 push 0x10
// 008c9d33  8bc8                 mov ecx, eax
// 008c9d35  e8c653f6ff           call 0x82f100
// 008c9d3a  894640               mov dword ptr [esi + 0x40], eax
// 008c9d3d  e88e5cf6ff           call 0x82f9d0
// 008c9d42  6a02                 push 2
// 008c9d44  8bc8                 mov ecx, eax
// 008c9d46  e8b553f6ff           call 0x82f100
// 008c9d4b  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008c9d4e  89818c000000         mov dword ptr [ecx + 0x8c], eax
// 008c9d54  8b4638               mov eax, dword ptr [esi + 0x38]
// 008c9d57  83f8ff               cmp eax, -1
// 008c9d5a  7503                 jne 0x8c9d5f
// 008c9d5c  8b4634               mov eax, dword ptr [esi + 0x34]
// 008c9d5f  8b5674               mov edx, dword ptr [esi + 0x74]
// 008c9d62  894238               mov dword ptr [edx + 0x38], eax
// 008c9d65  e8665cf6ff           call 0x82f9d0
// 008c9d6a  6a12                 push 0x12
// 008c9d6c  8bc8                 mov ecx, eax
// 008c9d6e  e88d53f6ff           call 0x82f100
// 008c9d73  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008c9d76  6a00                 push 0
// 008c9d78  894144               mov dword ptr [ecx + 0x44], eax
// 008c9d7b  ff15d8ca9800         call dword ptr [0x98cad8]
// 008c9d81  8b5674               mov edx, dword ptr [esi + 0x74]
// 008c9d84  894250               mov dword ptr [edx + 0x50], eax
// 008c9d87  e8445cf6ff           call 0x82f9d0
// 008c9d8c  6a11                 push 0x11
// 008c9d8e  8bc8                 mov ecx, eax
// 008c9d90  e86b53f6ff           call 0x82f100
// 008c9d95  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008c9d98  894168               mov dword ptr [ecx + 0x68], eax
// 008c9d9b  e8305cf6ff           call 0x82f9d0
// 008c9da0  6a05                 push 5
// 008c9da2  8bc8                 mov ecx, eax
// 008c9da4  e85753f6ff           call 0x82f100
// 008c9da9  8b5674               mov edx, dword ptr [esi + 0x74]
// 008c9dac  894274               mov dword ptr [edx + 0x74], eax
// 008c9daf  e81c5cf6ff           call 0x82f9d0
// 008c9db4  6a08                 push 8
// 008c9db6  8bc8                 mov ecx, eax
// 008c9db8  e84353f6ff           call 0x82f100
// 008c9dbd  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008c9dc0  89415c               mov dword ptr [ecx + 0x5c], eax
// 008c9dc3  e8085cf6ff           call 0x82f9d0
// 008c9dc8  6a11                 push 0x11
// 008c9dca  8bc8                 mov ecx, eax
// 008c9dcc  e82f53f6ff           call 0x82f100
// 008c9dd1  8b5674               mov edx, dword ptr [esi + 0x74]
// 008c9dd4  898280000000         mov dword ptr [edx + 0x80], eax
// 008c9dda  e837a2f2ff           call 0x7f4016
// 008c9ddf  85c0                 test eax, eax
// 008c9de1  7428                 je 0x8c9e0b
// 008c9de3  8b10                 mov edx, dword ptr [eax]
// 008c9de5  8bc8                 mov ecx, eax
// 008c9de7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008c9dea  ffd0                 call eax
// 008c9dec  85c0                 test eax, eax
// 008c9dee  741b                 je 0x8c9e0b
// 008c9df0  e821a2f2ff           call 0x7f4016
// 008c9df5  85c0                 test eax, eax
// 008c9df7  7412                 je 0x8c9e0b
// 008c9df9  8b10                 mov edx, dword ptr [eax]
// 008c9dfb  8bc8                 mov ecx, eax
// 008c9dfd  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008c9e00  ffd0                 call eax
// 008c9e02  85c0                 test eax, eax
// 008c9e04  7405                 je 0x8c9e0b
// 008c9e06  8b7820               mov edi, dword ptr [eax + 0x20]
// 008c9e09  eb02                 jmp 0x8c9e0d
// 008c9e0b  33ff                 xor edi, edi
// 008c9e0d  6858659f00           push 0x9f6558
// 008c9e12  57                   push edi
// 008c9e13  8d4e08               lea ecx, [esi + 8]
// 008c9e16  e8e51efaff           call 0x86bd00
// 008c9e1b  6820299f00           push 0x9f2920
// 008c9e20  57                   push edi
// 008c9e21  8d4e14               lea ecx, [esi + 0x14]
// 008c9e24  e8d71efaff           call 0x86bd00
// 008c9e29  68c42ba000           push 0xa02bc4
// 008c9e2e  57                   push edi
// 008c9e2f  8d4e20               lea ecx, [esi + 0x20]
// 008c9e32  e8c91efaff           call 0x86bd00
// 008c9e37  5f                   pop edi
// 008c9e38  5e                   pop esi
// 008c9e39  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPPropertyGridPaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridPaintManager.cpp