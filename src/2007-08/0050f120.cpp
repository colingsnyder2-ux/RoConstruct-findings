// from server: 100% by tester
// roc 2007-03 005037c0  unit: seg_00500000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005037c0
//
// 005037c0  6aff                 push -1
// 005037c2  68f40f7500           push 0x750ff4
// 005037c7  64a100000000         mov eax, dword ptr fs:[0]
// 005037cd  50                   push eax
// 005037ce  51                   push ecx
// 005037cf  56                   push esi
// 005037d0  57                   push edi
// 005037d1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 005037d6  33c4                 xor eax, esp
// 005037d8  50                   push eax
// 005037d9  8d442410             lea eax, [esp + 0x10]
// 005037dd  64a300000000         mov dword ptr fs:[0], eax
// 005037e3  8bf1                 mov esi, ecx
// 005037e5  8974240c             mov dword ptr [esp + 0xc], esi
// 005037e9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005037ed  57                   push edi
// 005037ee  e81df6ffff           call 0x502e10
// 005037f3  8d4744               lea eax, [edi + 0x44]
// 005037f6  50                   push eax
// 005037f7  8d4e44               lea ecx, [esi + 0x44]
// 005037fa  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00503802  c706b8057a00         mov dword ptr [esi], 0x7a05b8
// 00503808  ff157ce77700         call dword ptr [0x77e77c]
// 0050380e  83c760               add edi, 0x60
// 00503811  57                   push edi
// 00503812  8d4e60               lea ecx, [esi + 0x60]
// 00503815  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0050381a  ff157ce77700         call dword ptr [0x77e77c]
// 00503820  8bc6                 mov eax, esi
// 00503822  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00503826  64890d00000000       mov dword ptr fs:[0], ecx
// 0050382d  59                   pop ecx
// 0050382e  5f                   pop edi
// 0050382f  5e                   pop esi
// 00503830  83c410               add esp, 0x10
// 00503833  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongString@TextInput@G3D@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
