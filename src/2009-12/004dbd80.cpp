// roc 2009-12 004dbd80  unit: G3D::Win32Window  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dbd80
//
// 004dbd80  6aff                 push -1
// 004dbd82  68b43e9300           push 0x933eb4
// 004dbd87  64a100000000         mov eax, dword ptr fs:[0]
// 004dbd8d  50                   push eax
// 004dbd8e  64892500000000       mov dword ptr fs:[0], esp
// 004dbd95  51                   push ecx
// 004dbd96  56                   push esi
// 004dbd97  8bf1                 mov esi, ecx
// 004dbd99  89742404             mov dword ptr [esp + 4], esi
// 004dbd9d  c706d4959b00         mov dword ptr [esi], 0x9b95d4
// 004dbda3  a148d9b700           mov eax, dword ptr [0xb7d948]
// 004dbda8  c744241001000000     mov dword ptr [esp + 0x10], 1
// 004dbdb0  85c0                 test eax, eax
// 004dbdb2  744e                 je 0x4dbe02
// 004dbdb4  833de4dbb70000       cmp dword ptr [0xb7dbe4], 0
// 004dbdbb  743d                 je 0x4dbdfa
// 004dbdbd  8d460c               lea eax, [esi + 0xc]
// 004dbdc0  50                   push eax
// 004dbdc1  b9e4dbb700           mov ecx, 0xb7dbe4
// 004dbdc6  e815b7ffff           call 0x4d74e0
// 004dbdcb  a1e8dbb700           mov eax, dword ptr [0xb7dbe8]
// 004dbdd0  83f814               cmp eax, 0x14
// 004dbdd3  7e2d                 jle 0x4dbe02
// 004dbdd5  8b0de4dbb700         mov ecx, dword ptr [0xb7dbe4]
// 004dbddb  8d5481e8             lea edx, [ecx + eax*4 - 0x18]
// 004dbddf  52                   push edx
// 004dbde0  83c0fb               add eax, -5
// 004dbde3  50                   push eax
// 004dbde4  ff1548d9b700         call dword ptr [0xb7d948]
// 004dbdea  6a01                 push 1
// 004dbdec  6a14                 push 0x14
// 004dbdee  b9e4dbb700           mov ecx, 0xb7dbe4
// 004dbdf3  e8e8b1ffff           call 0x4d6fe0
// 004dbdf8  eb08                 jmp 0x4dbe02
// 004dbdfa  8d4e0c               lea ecx, [esi + 0xc]
// 004dbdfd  51                   push ecx
// 004dbdfe  6a01                 push 1
// 004dbe00  ffd0                 call eax
// 004dbe02  8d4e10               lea ecx, [esi + 0x10]
// 004dbe05  c644241000           mov byte ptr [esp + 0x10], 0
// 004dbe0a  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dbe10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004dbe14  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 004dbe1a  5e                   pop esi
// 004dbe1b  64890d00000000       mov dword ptr fs:[0], ecx
// 004dbe22  83c410               add esp, 0x10
// 004dbe25  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ??1Milestone@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
