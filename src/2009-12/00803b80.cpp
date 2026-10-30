// roc 2009-12 00803b80  unit: CXTPPaintManager  size: 300 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00803b80
//
// 00803b80  6aff                 push -1
// 00803b82  6878949500           push 0x959478
// 00803b87  64a100000000         mov eax, dword ptr fs:[0]
// 00803b8d  50                   push eax
// 00803b8e  83ec1c               sub esp, 0x1c
// 00803b91  53                   push ebx
// 00803b92  55                   push ebp
// 00803b93  56                   push esi
// 00803b94  57                   push edi
// 00803b95  a10052b600           mov eax, dword ptr [0xb65200]
// 00803b9a  33c4                 xor eax, esp
// 00803b9c  50                   push eax
// 00803b9d  8d442430             lea eax, [esp + 0x30]
// 00803ba1  64a300000000         mov dword ptr fs:[0], eax
// 00803ba7  8b742450             mov esi, dword ptr [esp + 0x50]
// 00803bab  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00803baf  2b742448             sub esi, dword ptr [esp + 0x48]
// 00803bb3  2b7c2444             sub edi, dword ptr [esp + 0x44]
// 00803bb7  33ed                 xor ebp, ebp
// 00803bb9  896c2418             mov dword ptr [esp + 0x18], ebp
// 00803bbd  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 00803bc5  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 00803bc9  896c2438             mov dword ptr [esp + 0x38], ebp
// 00803bcd  3bdd                 cmp ebx, ebp
// 00803bcf  7504                 jne 0x803bd5
// 00803bd1  33c0                 xor eax, eax
// 00803bd3  eb03                 jmp 0x803bd8
// 00803bd5  8b4304               mov eax, dword ptr [ebx + 4]
// 00803bd8  8d4c2440             lea ecx, [esp + 0x40]
// 00803bdc  51                   push ecx
// 00803bdd  56                   push esi
// 00803bde  57                   push edi
// 00803bdf  50                   push eax
// 00803be0  e85b4f0000           call 0x808b40
// 00803be5  83c410               add esp, 0x10
// 00803be8  50                   push eax
// 00803be9  8d4c2418             lea ecx, [esp + 0x18]
// 00803bed  e83802ffff           call 0x7f3e2a
// 00803bf2  8d542414             lea edx, [esp + 0x14]
// 00803bf6  52                   push edx
// 00803bf7  53                   push ebx
// 00803bf8  8d4c2424             lea ecx, [esp + 0x24]
// 00803bfc  e87f7c0400           call 0x84b880
// 00803c01  3bdd                 cmp ebx, ebp
// 00803c03  7504                 jne 0x803c09
// 00803c05  33c0                 xor eax, eax
// 00803c07  eb03                 jmp 0x803c0c
// 00803c09  8b4304               mov eax, dword ptr [ebx + 4]
// 00803c0c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00803c10  8b542444             mov edx, dword ptr [esp + 0x44]
// 00803c14  682000cc00           push 0xcc0020
// 00803c19  51                   push ecx
// 00803c1a  52                   push edx
// 00803c1b  50                   push eax
// 00803c1c  8b442430             mov eax, dword ptr [esp + 0x30]
// 00803c20  56                   push esi
// 00803c21  57                   push edi
// 00803c22  55                   push ebp
// 00803c23  55                   push ebp
// 00803c24  8b2d48b19800         mov ebp, dword ptr [0x98b148]
// 00803c2a  50                   push eax
// 00803c2b  ffd5                 call ebp
// 00803c2d  8bc6                 mov eax, esi
// 00803c2f  0fafc7               imul eax, edi
// 00803c32  85c0                 test eax, eax
// 00803c34  7e20                 jle 0x803c56
// 00803c36  8bc8                 mov ecx, eax
// 00803c38  8b442440             mov eax, dword ptr [esp + 0x40]
// 00803c3c  8d642400             lea esp, [esp]
// 00803c40  8108000000ff         or dword ptr [eax], 0xff000000
// 00803c46  8b442440             mov eax, dword ptr [esp + 0x40]
// 00803c4a  83c004               add eax, 4
// 00803c4d  83e901               sub ecx, 1
// 00803c50  89442440             mov dword ptr [esp + 0x40], eax
// 00803c54  75ea                 jne 0x803c40
// 00803c56  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00803c5a  8b542448             mov edx, dword ptr [esp + 0x48]
// 00803c5e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00803c62  682000cc00           push 0xcc0020
// 00803c67  6a00                 push 0
// 00803c69  6a00                 push 0
// 00803c6b  51                   push ecx
// 00803c6c  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00803c6f  56                   push esi
// 00803c70  57                   push edi
// 00803c71  52                   push edx
// 00803c72  50                   push eax
// 00803c73  51                   push ecx
// 00803c74  ffd5                 call ebp
// 00803c76  8d4c241c             lea ecx, [esp + 0x1c]
// 00803c7a  e8117d0400           call 0x84b990
// 00803c7f  8d4c2414             lea ecx, [esp + 0x14]
// 00803c83  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00803c8b  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 00803c93  e898b5c0ff           call 0x40f230
// 00803c98  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00803c9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00803ca3  59                   pop ecx
// 00803ca4  5f                   pop edi
// 00803ca5  5e                   pop esi
// 00803ca6  5d                   pop ebp
// 00803ca7  5b                   pop ebx
// 00803ca8  83c428               add esp, 0x28
// 00803cab  c3                   ret 
// copied from an identical function in another client (function ?FillCompositeAlpha@CXTPPaintManager@@SAXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp