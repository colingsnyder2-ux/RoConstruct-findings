// roc 2007-03 00505eb0  unit: seg_00500000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505eb0
//
// 00505eb0  8b442408             mov eax, dword ptr [esp + 8]
// 00505eb4  2d10010000           sub eax, 0x110
// 00505eb9  7430                 je 0x505eeb
// 00505ebb  83e801               sub eax, 1
// 00505ebe  0f85a0000000         jne 0x505f64
// 00505ec4  0fb744240c           movzx eax, word ptr [esp + 0xc]
// 00505ec9  2dd0070000           sub eax, 0x7d0
// 00505ece  83f809               cmp eax, 9
// 00505ed1  0f878d000000         ja 0x505f64
// 00505ed7  50                   push eax
// 00505ed8  8b442408             mov eax, dword ptr [esp + 8]
// 00505edc  50                   push eax
// 00505edd  ff152cee7700         call dword ptr [0x77ee2c]
// 00505ee3  b801000000           mov eax, 1
// 00505ee8  c21000               ret 0x10
// 00505eeb  53                   push ebx
// 00505eec  8b1d28ee7700         mov ebx, dword ptr [0x77ee28]
// 00505ef2  55                   push ebp
// 00505ef3  56                   push esi
// 00505ef4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00505ef8  57                   push edi
// 00505ef9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00505efd  8b0f                 mov ecx, dword ptr [edi]
// 00505eff  51                   push ecx
// 00505f00  68e8030000           push 0x3e8
// 00505f05  56                   push esi
// 00505f06  ffd3                 call ebx
// 00505f08  8b2de0ed7700         mov ebp, dword ptr [0x77ede0]
// 00505f0e  50                   push eax
// 00505f0f  ffd5                 call ebp
// 00505f11  68d0070000           push 0x7d0
// 00505f16  56                   push esi
// 00505f17  ffd3                 call ebx
// 00505f19  50                   push eax
// 00505f1a  ff1534ee7700         call dword ptr [0x77ee34]
// 00505f20  8b5704               mov edx, dword ptr [edi + 4]
// 00505f23  52                   push edx
// 00505f24  56                   push esi
// 00505f25  ffd5                 call ebp
// 00505f27  68cc067a00           push 0x7a06cc
// 00505f2c  6a31                 push 0x31
// 00505f2e  6a02                 push 2
// 00505f30  6a00                 push 0
// 00505f32  6a00                 push 0
// 00505f34  6a00                 push 0
// 00505f36  6a00                 push 0
// 00505f38  6a00                 push 0
// 00505f3a  6a00                 push 0
// 00505f3c  6890010000           push 0x190
// 00505f41  6a00                 push 0
// 00505f43  6a00                 push 0
// 00505f45  6a00                 push 0
// 00505f47  6a10                 push 0x10
// 00505f49  ff15a0d07700         call dword ptr [0x77d0a0]
// 00505f4f  6a01                 push 1
// 00505f51  50                   push eax
// 00505f52  6a30                 push 0x30
// 00505f54  68e8030000           push 0x3e8
// 00505f59  56                   push esi
// 00505f5a  ff1524ee7700         call dword ptr [0x77ee24]
// 00505f60  5f                   pop edi
// 00505f61  5e                   pop esi
// 00505f62  5d                   pop ebp
// 00505f63  5b                   pop ebx
// 00505f64  33c0                 xor eax, eax
// 00505f66  c21000               ret 0x10
// library rbxgs-g3d/G3Dcpp\prompt.cpp (function ?PromptDlgProc@_internal@G3D@@YGHPAUHWND__@@IIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/prompt.cpp
