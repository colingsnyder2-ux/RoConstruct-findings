// roc 2008-06 0064be80  unit: RBX::SleepStage  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064be80
//
// 0064be80  83ec0c               sub esp, 0xc
// 0064be83  53                   push ebx
// 0064be84  55                   push ebp
// 0064be85  56                   push esi
// 0064be86  8bf1                 mov esi, ecx
// 0064be88  8b8658010000         mov eax, dword ptr [esi + 0x158]
// 0064be8e  8b28                 mov ebp, dword ptr [eax]
// 0064be90  57                   push edi
// 0064be91  8bbe40010000         mov edi, dword ptr [esi + 0x140]
// 0064be97  896c2418             mov dword ptr [esp + 0x18], ebp
// 0064be9b  897c2414             mov dword ptr [esp + 0x14], edi
// 0064be9f  90                   nop 
// 0064bea0  8b9e58010000         mov ebx, dword ptr [esi + 0x158]
// 0064bea6  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0064beac  85ff                 test edi, edi
// 0064beae  7404                 je 0x64beb4
// 0064beb0  3bf8                 cmp edi, eax
// 0064beb2  7406                 je 0x64beba
// 0064beb4  ff1590288000         call dword ptr [0x802890]
// 0064beba  3beb                 cmp ebp, ebx
// 0064bebc  745c                 je 0x64bf1a
// 0064bebe  85ff                 test edi, edi
// 0064bec0  7534                 jne 0x64bef6
// 0064bec2  ff1590288000         call dword ptr [0x802890]
// 0064bec8  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 0064becb  7506                 jne 0x64bed3
// 0064becd  ff1590288000         call dword ptr [0x802890]
// 0064bed3  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0064bed6  50                   push eax
// 0064bed7  8bce                 mov ecx, esi
// 0064bed9  89442414             mov dword ptr [esp + 0x14], eax
// 0064bedd  e8aee8ffff           call 0x64a790
// 0064bee2  83e803               sub eax, 3
// 0064bee5  7413                 je 0x64befa
// 0064bee7  83e802               sub eax, 2
// 0064beea  751b                 jne 0x64bf07
// 0064beec  8d4c2410             lea ecx, [esp + 0x10]
// 0064bef0  51                   push ecx
// 0064bef1  8d4e10               lea ecx, [esi + 0x10]
// 0064bef4  eb0c                 jmp 0x64bf02
// 0064bef6  8b3f                 mov edi, dword ptr [edi]
// 0064bef8  ebce                 jmp 0x64bec8
// 0064befa  8d542410             lea edx, [esp + 0x10]
// 0064befe  52                   push edx
// 0064beff  8d4e28               lea ecx, [esi + 0x28]
// 0064bf02  e89954ddff           call 0x4213a0
// 0064bf07  8d4c2414             lea ecx, [esp + 0x14]
// 0064bf0b  e830d4f9ff           call 0x5e9340
// 0064bf10  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0064bf14  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0064bf18  eb86                 jmp 0x64bea0
// 0064bf1a  6a02                 push 2
// 0064bf1c  8d7e28               lea edi, [esi + 0x28]
// 0064bf1f  57                   push edi
// 0064bf20  8bce                 mov ecx, esi
// 0064bf22  e819f9ffff           call 0x64b840
// 0064bf27  6a05                 push 5
// 0064bf29  8d5e10               lea ebx, [esi + 0x10]
// 0064bf2c  53                   push ebx
// 0064bf2d  8bce                 mov ecx, esi
// 0064bf2f  e80cf9ffff           call 0x64b840
// 0064bf34  6a00                 push 0
// 0064bf36  6a00                 push 0
// 0064bf38  8bcf                 mov ecx, edi
// 0064bf3a  e8a1aef9ff           call 0x5e6de0
// 0064bf3f  6a00                 push 0
// 0064bf41  6a00                 push 0
// 0064bf43  8bcb                 mov ecx, ebx
// 0064bf45  e896aef9ff           call 0x5e6de0
// 0064bf4a  5f                   pop edi
// 0064bf4b  5e                   pop esi
// 0064bf4c  5d                   pop ebp
// 0064bf4d  5b                   pop ebx
// 0064bf4e  83c40c               add esp, 0xc
// 0064bf51  c3                   ret 
// library rbxgs/roc_unit_32e3ce177c352edc.cpp (function ?stepAssembliesSleepingChecking@SleepStage@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_32e3ce177c352edc.cpp
