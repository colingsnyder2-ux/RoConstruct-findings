// from server: 100% by auto
// roc 2011-06 00829c30  unit: CXTPCommandBars  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00829c30
//
// 00829c30  83ec24               sub esp, 0x24
// 00829c33  53                   push ebx
// 00829c34  55                   push ebp
// 00829c35  8be9                 mov ebp, ecx
// 00829c37  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 00829c3d  56                   push esi
// 00829c3e  57                   push edi
// 00829c3f  c74424141be80000     mov dword ptr [esp + 0x14], 0xe81b
// 00829c47  c744241800280000     mov dword ptr [esp + 0x18], 0x2800
// 00829c4f  c744241c1ee80000     mov dword ptr [esp + 0x1c], 0xe81e
// 00829c57  c744242000820000     mov dword ptr [esp + 0x20], 0x8200
// 00829c5f  c74424241ce80000     mov dword ptr [esp + 0x24], 0xe81c
// 00829c67  c744242800140000     mov dword ptr [esp + 0x28], 0x1400
// 00829c6f  c744242c1de80000     mov dword ptr [esp + 0x2c], 0xe81d
// 00829c77  c744243000410000     mov dword ptr [esp + 0x30], 0x4100
// 00829c7f  89442410             mov dword ptr [esp + 0x10], eax
// 00829c83  33f6                 xor esi, esi
// 00829c85  8d9d90000000         lea ebx, [ebp + 0x90]
// 00829c8b  eb03                 jmp 0x829c90
// 00829c8d  8d4900               lea ecx, [ecx]
// 00829c90  8b0d6482d100         mov ecx, dword ptr [0xd18264]
// 00829c96  e8cb0dfeff           call 0x80aa66
// 00829c9b  8b4cf414             mov ecx, dword ptr [esp + esi*8 + 0x14]
// 00829c9f  8b54f418             mov edx, dword ptr [esp + esi*8 + 0x18]
// 00829ca3  51                   push ecx
// 00829ca4  8bf8                 mov edi, eax
// 00829ca6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00829caa  81ca00000056         or edx, 0x56000000
// 00829cb0  52                   push edx
// 00829cb1  50                   push eax
// 00829cb2  8bcf                 mov ecx, edi
// 00829cb4  896f6c               mov dword ptr [edi + 0x6c], ebp
// 00829cb7  e894860700           call 0x8a2350
// 00829cbc  85c0                 test eax, eax
// 00829cbe  7505                 jne 0x829cc5
// 00829cc0  e8672a1a00           call 0x9cc72c
// 00829cc5  893b                 mov dword ptr [ebx], edi
// 00829cc7  46                   inc esi
// 00829cc8  83c304               add ebx, 4
// 00829ccb  83fe04               cmp esi, 4
// 00829cce  7cc0                 jl 0x829c90
// 00829cd0  5f                   pop edi
// 00829cd1  5e                   pop esi
// 00829cd2  5d                   pop ebp
// 00829cd3  5b                   pop ebx
// 00829cd4  83c424               add esp, 0x24
// 00829cd7  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPCommandBars.cpp (function ?EnableDocking@CXTPCommandBars@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCommandBars.cpp
