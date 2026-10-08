// roc 2009-06 00574ce0  unit: G3D::BinaryInput  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574ce0
//
// 00574ce0  6aff                 push -1
// 00574ce2  68fa758600           push 0x8675fa
// 00574ce7  64a100000000         mov eax, dword ptr fs:[0]
// 00574ced  50                   push eax
// 00574cee  64892500000000       mov dword ptr fs:[0], esp
// 00574cf5  51                   push ecx
// 00574cf6  53                   push ebx
// 00574cf7  55                   push ebp
// 00574cf8  33c0                 xor eax, eax
// 00574cfa  56                   push esi
// 00574cfb  8bf1                 mov esi, ecx
// 00574cfd  8944240c             mov dword ptr [esp + 0xc], eax
// 00574d01  57                   push edi
// 00574d02  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00574d06  8944241c             mov dword ptr [esp + 0x1c], eax
// 00574d0a  8b4644               mov eax, dword ptr [esi + 0x44]
// 00574d0d  8d0c38               lea ecx, [eax + edi]
// 00574d10  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00574d13  7e0e                 jle 0x574d23
// 00574d15  8b5634               mov edx, dword ptr [esi + 0x34]
// 00574d18  57                   push edi
// 00574d19  03d0                 add edx, eax
// 00574d1b  52                   push edx
// 00574d1c  8bce                 mov ecx, esi
// 00574d1e  e82dfaffff           call 0x574750
// 00574d23  8d4701               lea eax, [edi + 1]
// 00574d26  50                   push eax
// 00574d27  e81464ffff           call 0x56b140
// 00574d2c  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00574d2f  034e44               add ecx, dword ptr [esi + 0x44]
// 00574d32  57                   push edi
// 00574d33  8be8                 mov ebp, eax
// 00574d35  51                   push ecx
// 00574d36  55                   push ebp
// 00574d37  e87a511a00           call 0x719eb6
// 00574d3c  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00574d40  83c410               add esp, 0x10
// 00574d43  55                   push ebp
// 00574d44  8bcb                 mov ecx, ebx
// 00574d46  c6042f00             mov byte ptr [edi + ebp], 0
// 00574d4a  ff15b4e48900         call dword ptr [0x89e4b4]
// 00574d50  55                   push ebp
// 00574d51  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00574d59  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00574d61  e8fa63ffff           call 0x56b160
// 00574d66  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00574d6a  83c404               add esp, 4
// 00574d6d  017e44               add dword ptr [esi + 0x44], edi
// 00574d70  5f                   pop edi
// 00574d71  5e                   pop esi
// 00574d72  5d                   pop ebp
// 00574d73  8bc3                 mov eax, ebx
// 00574d75  5b                   pop ebx
// 00574d76  64890d00000000       mov dword ptr fs:[0], ecx
// 00574d7d  83c410               add esp, 0x10
// 00574d80  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readString@BinaryInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
