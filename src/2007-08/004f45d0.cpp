// from server: 100% by tester
// roc 2007-03 004e7f50  unit: seg_004e0000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7f50
//
// 004e7f50  6aff                 push -1
// 004e7f52  68f0e97400           push 0x74e9f0
// 004e7f57  64a100000000         mov eax, dword ptr fs:[0]
// 004e7f5d  50                   push eax
// 004e7f5e  83ec08               sub esp, 8
// 004e7f61  56                   push esi
// 004e7f62  57                   push edi
// 004e7f63  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004e7f68  33c4                 xor eax, esp
// 004e7f6a  50                   push eax
// 004e7f6b  8d442414             lea eax, [esp + 0x14]
// 004e7f6f  64a300000000         mov dword ptr fs:[0], eax
// 004e7f75  8bf1                 mov esi, ecx
// 004e7f77  8974240c             mov dword ptr [esp + 0xc], esi
// 004e7f7b  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004e7f83  c70600000000         mov dword ptr [esi], 0
// 004e7f89  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004e7f8d  6a0c                 push 0xc
// 004e7f8f  6806140000           push 0x1406
// 004e7f94  51                   push ecx
// 004e7f95  8bcc                 mov ecx, esp
// 004e7f97  8964241c             mov dword ptr [esp + 0x1c], esp
// 004e7f9b  57                   push edi
// 004e7f9c  c644242c01           mov byte ptr [esp + 0x2c], 1
// 004e7fa1  c70100000000         mov dword ptr [ecx], 0
// 004e7fa7  e8e4d0f8ff           call 0x475090
// 004e7fac  8b442430             mov eax, dword ptr [esp + 0x30]
// 004e7fb0  8b4804               mov ecx, dword ptr [eax + 4]
// 004e7fb3  8b00                 mov eax, dword ptr [eax]
// 004e7fb5  51                   push ecx
// 004e7fb6  50                   push eax
// 004e7fb7  8bce                 mov ecx, esi
// 004e7fb9  e832c9f9ff           call 0x4848f0
// 004e7fbe  85ff                 test edi, edi
// 004e7fc0  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004e7fc8  741f                 je 0x4e7fe9
// 004e7fca  8d4704               lea eax, [edi + 4]
// 004e7fcd  50                   push eax
// 004e7fce  ff15a8d27700         call dword ptr [0x77d2a8]
// 004e7fd4  85c0                 test eax, eax
// 004e7fd6  7511                 jne 0x4e7fe9
// 004e7fd8  8bcf                 mov ecx, edi
// 004e7fda  e8e1b3f7ff           call 0x4633c0
// 004e7fdf  8b17                 mov edx, dword ptr [edi]
// 004e7fe1  8b02                 mov eax, dword ptr [edx]
// 004e7fe3  6a01                 push 1
// 004e7fe5  8bcf                 mov ecx, edi
// 004e7fe7  ffd0                 call eax
// 004e7fe9  8bc6                 mov eax, esi
// 004e7feb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004e7fef  64890d00000000       mov dword ptr fs:[0], ecx
// 004e7ff6  59                   pop ecx
// 004e7ff7  5f                   pop edi
// 004e7ff8  5e                   pop esi
// 004e7ff9  83c414               add esp, 0x14
// 004e7ffc  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??$?0VVector3@G3D@@@VAR@G3D@@QAE@ABV?$Array@VVector3@G3D@@@1@V?$ReferenceCountedPointer@VVARArea@G3D@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
