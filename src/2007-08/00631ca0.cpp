// roc 2007-08 00631ca0  unit: CXTPCommandBars  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631ca0
//
// 00631ca0  83ec24               sub esp, 0x24
// 00631ca3  53                   push ebx
// 00631ca4  55                   push ebp
// 00631ca5  8be9                 mov ebp, ecx
// 00631ca7  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 00631cad  56                   push esi
// 00631cae  57                   push edi
// 00631caf  c74424141be80000     mov dword ptr [esp + 0x14], 0xe81b
// 00631cb7  c744241800280000     mov dword ptr [esp + 0x18], 0x2800
// 00631cbf  c744241c1ee80000     mov dword ptr [esp + 0x1c], 0xe81e
// 00631cc7  c744242000820000     mov dword ptr [esp + 0x20], 0x8200
// 00631ccf  c74424241ce80000     mov dword ptr [esp + 0x24], 0xe81c
// 00631cd7  c744242800140000     mov dword ptr [esp + 0x28], 0x1400
// 00631cdf  c744242c1de80000     mov dword ptr [esp + 0x2c], 0xe81d
// 00631ce7  c744243000410000     mov dword ptr [esp + 0x30], 0x4100
// 00631cef  89442410             mov dword ptr [esp + 0x10], eax
// 00631cf3  33f6                 xor esi, esi
// 00631cf5  8d9d90000000         lea ebx, [ebp + 0x90]
// 00631cfb  eb03                 jmp 0x631d00
// 00631cfd  8d4900               lea ecx, [ecx]
// 00631d00  8b0db4868c00         mov ecx, dword ptr [0x8c86b4]
// 00631d06  e821e8ffff           call 0x63052c
// 00631d0b  8b4cf414             mov ecx, dword ptr [esp + esi*8 + 0x14]
// 00631d0f  8b54f418             mov edx, dword ptr [esp + esi*8 + 0x18]
// 00631d13  51                   push ecx
// 00631d14  8bf8                 mov edi, eax
// 00631d16  8b442414             mov eax, dword ptr [esp + 0x14]
// 00631d1a  81ca00000056         or edx, 0x56000000
// 00631d20  52                   push edx
// 00631d21  50                   push eax
// 00631d22  8bcf                 mov ecx, edi
// 00631d24  896f6c               mov dword ptr [edi + 0x6c], ebp
// 00631d27  e8f4f20600           call 0x6a1020
// 00631d2c  85c0                 test eax, eax
// 00631d2e  7505                 jne 0x631d35
// 00631d30  e8e7651000           call 0x73831c
// 00631d35  893b                 mov dword ptr [ebx], edi
// 00631d37  83c601               add esi, 1
// 00631d3a  83c304               add ebx, 4
// 00631d3d  83fe04               cmp esi, 4
// 00631d40  7cbe                 jl 0x631d00
// 00631d42  5f                   pop edi
// 00631d43  5e                   pop esi
// 00631d44  5d                   pop ebp
// 00631d45  5b                   pop ebx
// 00631d46  83c424               add esp, 0x24
// 00631d49  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?EnableDocking@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
