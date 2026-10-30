// roc 2009-12 008e0e00  unit: CXTPOffice2007Image  size: 477 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0e00
//
// 008e0e00  6aff                 push -1
// 008e0e02  68005b9600           push 0x965b00
// 008e0e07  64a100000000         mov eax, dword ptr fs:[0]
// 008e0e0d  50                   push eax
// 008e0e0e  83ec2c               sub esp, 0x2c
// 008e0e11  53                   push ebx
// 008e0e12  55                   push ebp
// 008e0e13  56                   push esi
// 008e0e14  57                   push edi
// 008e0e15  a10052b600           mov eax, dword ptr [0xb65200]
// 008e0e1a  33c4                 xor eax, esp
// 008e0e1c  50                   push eax
// 008e0e1d  8d442440             lea eax, [esp + 0x40]
// 008e0e21  64a300000000         mov dword ptr fs:[0], eax
// 008e0e27  8bd9                 mov ebx, ecx
// 008e0e29  33c0                 xor eax, eax
// 008e0e2b  3bd8                 cmp ebx, eax
// 008e0e2d  0f8494010000         je 0x8e0fc7
// 008e0e33  394320               cmp dword ptr [ebx + 0x20], eax
// 008e0e36  0f848b010000         je 0x8e0fc7
// 008e0e3c  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 008e0e40  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e0e44  8b770c               mov esi, dword ptr [edi + 0xc]
// 008e0e47  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008e0e4b  037704               add esi, dword ptr [edi + 4]
// 008e0e4e  8be9                 mov ebp, ecx
// 008e0e50  2bea                 sub ebp, edx
// 008e0e52  3bf5                 cmp esi, ebp
// 008e0e54  0f8f6d010000         jg 0x8e0fc7
// 008e0e5a  837c246cff           cmp dword ptr [esp + 0x6c], -1
// 008e0e5f  0f841b010000         je 0x8e0f80
// 008e0e65  394324               cmp dword ptr [ebx + 0x24], eax
// 008e0e68  0f8512010000         jne 0x8e0f80
// 008e0e6e  89442418             mov dword ptr [esp + 0x18], eax
// 008e0e72  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 008e0e7a  8b742454             mov esi, dword ptr [esp + 0x54]
// 008e0e7e  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e0e81  2b0e                 sub ecx, dword ptr [esi]
// 008e0e83  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 008e0e87  89442448             mov dword ptr [esp + 0x48], eax
// 008e0e8b  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e0e8e  2b4604               sub eax, dword ptr [esi + 4]
// 008e0e91  50                   push eax
// 008e0e92  51                   push ecx
// 008e0e93  55                   push ebp
// 008e0e94  8d4c2420             lea ecx, [esp + 0x20]
// 008e0e98  e8b38df2ff           call 0x809c50
// 008e0e9d  8d542414             lea edx, [esp + 0x14]
// 008e0ea1  52                   push edx
// 008e0ea2  55                   push ebp
// 008e0ea3  8d4c2434             lea ecx, [esp + 0x34]
// 008e0ea7  e8d4a9f6ff           call 0x84b880
// 008e0eac  8b460c               mov eax, dword ptr [esi + 0xc]
// 008e0eaf  2b4604               sub eax, dword ptr [esi + 4]
// 008e0eb2  8b4e08               mov ecx, dword ptr [esi + 8]
// 008e0eb5  2b0e                 sub ecx, dword ptr [esi]
// 008e0eb7  89442428             mov dword ptr [esp + 0x28], eax
// 008e0ebb  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008e0ebf  894c2424             mov dword ptr [esp + 0x24], ecx
// 008e0ec3  50                   push eax
// 008e0ec4  8d4c2420             lea ecx, [esp + 0x20]
// 008e0ec8  33d2                 xor edx, edx
// 008e0eca  51                   push ecx
// 008e0ecb  8d4c2434             lea ecx, [esp + 0x34]
// 008e0ecf  c644245001           mov byte ptr [esp + 0x50], 1
// 008e0ed4  89542424             mov dword ptr [esp + 0x24], edx
// 008e0ed8  89542428             mov dword ptr [esp + 0x28], edx
// 008e0edc  e81d37f1ff           call 0x7f45fe
// 008e0ee1  8b17                 mov edx, dword ptr [edi]
// 008e0ee3  8b4f04               mov ecx, dword ptr [edi + 4]
// 008e0ee6  83ec10               sub esp, 0x10
// 008e0ee9  8bc4                 mov eax, esp
// 008e0eeb  8910                 mov dword ptr [eax], edx
// 008e0eed  8b5708               mov edx, dword ptr [edi + 8]
// 008e0ef0  894804               mov dword ptr [eax + 4], ecx
// 008e0ef3  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008e0ef6  895008               mov dword ptr [eax + 8], edx
// 008e0ef9  8b542468             mov edx, dword ptr [esp + 0x68]
// 008e0efd  89480c               mov dword ptr [eax + 0xc], ecx
// 008e0f00  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008e0f04  83ec10               sub esp, 0x10
// 008e0f07  8bc4                 mov eax, esp
// 008e0f09  8910                 mov dword ptr [eax], edx
// 008e0f0b  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008e0f12  894804               mov dword ptr [eax + 4], ecx
// 008e0f15  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008e0f1c  895008               mov dword ptr [eax + 8], edx
// 008e0f1f  89480c               mov dword ptr [eax + 0xc], ecx
// 008e0f22  8d54243c             lea edx, [esp + 0x3c]
// 008e0f26  52                   push edx
// 008e0f27  8d442450             lea eax, [esp + 0x50]
// 008e0f2b  50                   push eax
// 008e0f2c  8bcb                 mov ecx, ebx
// 008e0f2e  e85df2ffff           call 0x8e0190
// 008e0f33  85ed                 test ebp, ebp
// 008e0f35  7403                 je 0x8e0f3a
// 008e0f37  8b6d04               mov ebp, dword ptr [ebp + 4]
// 008e0f3a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008e0f3e  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e0f42  51                   push ecx
// 008e0f43  8d542420             lea edx, [esp + 0x20]
// 008e0f47  52                   push edx
// 008e0f48  50                   push eax
// 008e0f49  56                   push esi
// 008e0f4a  55                   push ebp
// 008e0f4b  e860f5f2ff           call 0x8104b0
// 008e0f50  8bc8                 mov ecx, eax
// 008e0f52  e8c98ff2ff           call 0x809f20
// 008e0f57  8d4c242c             lea ecx, [esp + 0x2c]
// 008e0f5b  c644244800           mov byte ptr [esp + 0x48], 0
// 008e0f60  e82baaf6ff           call 0x84b990
// 008e0f65  8d4c2414             lea ecx, [esp + 0x14]
// 008e0f69  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008e0f71  c744241418229a00     mov dword ptr [esp + 0x14], 0x9a2218
// 008e0f79  e8b2e2b2ff           call 0x40f230
// 008e0f7e  eb47                 jmp 0x8e0fc7
// 008e0f80  8b37                 mov esi, dword ptr [edi]
// 008e0f82  83ec10               sub esp, 0x10
// 008e0f85  8bc4                 mov eax, esp
// 008e0f87  8930                 mov dword ptr [eax], esi
// 008e0f89  8b7704               mov esi, dword ptr [edi + 4]
// 008e0f8c  897004               mov dword ptr [eax + 4], esi
// 008e0f8f  8b7708               mov esi, dword ptr [edi + 8]
// 008e0f92  897008               mov dword ptr [eax + 8], esi
// 008e0f95  8b770c               mov esi, dword ptr [edi + 0xc]
// 008e0f98  89700c               mov dword ptr [eax + 0xc], esi
// 008e0f9b  8b742468             mov esi, dword ptr [esp + 0x68]
// 008e0f9f  83ec10               sub esp, 0x10
// 008e0fa2  8bc4                 mov eax, esp
// 008e0fa4  8930                 mov dword ptr [eax], esi
// 008e0fa6  895004               mov dword ptr [eax + 4], edx
// 008e0fa9  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 008e0fb0  895008               mov dword ptr [eax + 8], edx
// 008e0fb3  89480c               mov dword ptr [eax + 0xc], ecx
// 008e0fb6  8b442474             mov eax, dword ptr [esp + 0x74]
// 008e0fba  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e0fbe  50                   push eax
// 008e0fbf  51                   push ecx
// 008e0fc0  8bcb                 mov ecx, ebx
// 008e0fc2  e8c9f1ffff           call 0x8e0190
// 008e0fc7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008e0fcb  64890d00000000       mov dword ptr fs:[0], ecx
// 008e0fd2  59                   pop ecx
// 008e0fd3  5f                   pop edi
// 008e0fd4  5e                   pop esi
// 008e0fd5  5d                   pop ebp
// 008e0fd6  5b                   pop ebx
// 008e0fd7  83c438               add esp, 0x38
// 008e0fda  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawImage@CXTPOffice2007Image@@QAEXPAVCDC@@ABVCRect@@V3@1K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp