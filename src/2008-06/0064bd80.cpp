// roc 2008-06 0064bd80  unit: RBX::SleepStage  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064bd80
//
// 0064bd80  83ec0c               sub esp, 0xc
// 0064bd83  53                   push ebx
// 0064bd84  55                   push ebp
// 0064bd85  56                   push esi
// 0064bd86  57                   push edi
// 0064bd87  8bf9                 mov edi, ecx
// 0064bd89  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 0064bd8f  8b18                 mov ebx, dword ptr [eax]
// 0064bd91  8bb720010000         mov esi, dword ptr [edi + 0x120]
// 0064bd97  895c2418             mov dword ptr [esp + 0x18], ebx
// 0064bd9b  89742414             mov dword ptr [esp + 0x14], esi
// 0064bd9f  90                   nop 
// 0064bda0  8baf38010000         mov ebp, dword ptr [edi + 0x138]
// 0064bda6  8b8720010000         mov eax, dword ptr [edi + 0x120]
// 0064bdac  85f6                 test esi, esi
// 0064bdae  7404                 je 0x64bdb4
// 0064bdb0  3bf0                 cmp esi, eax
// 0064bdb2  7406                 je 0x64bdba
// 0064bdb4  ff1590288000         call dword ptr [0x802890]
// 0064bdba  3bdd                 cmp ebx, ebp
// 0064bdbc  0f8496000000         je 0x64be58
// 0064bdc2  85f6                 test esi, esi
// 0064bdc4  7571                 jne 0x64be37
// 0064bdc6  ff1590288000         call dword ptr [0x802890]
// 0064bdcc  3b5e18               cmp ebx, dword ptr [esi + 0x18]
// 0064bdcf  7506                 jne 0x64bdd7
// 0064bdd1  ff1590288000         call dword ptr [0x802890]
// 0064bdd7  80bfd800000000       cmp byte ptr [edi + 0xd8], 0
// 0064bdde  8b730c               mov esi, dword ptr [ebx + 0xc]
// 0064bde1  89742410             mov dword ptr [esp + 0x10], esi
// 0064bde5  7412                 je 0x64bdf9
// 0064bde7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0064bdea  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0064bded  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0064bdf3  80783000             cmp byte ptr [eax + 0x30], 0
// 0064bdf7  7549                 jne 0x64be42
// 0064bdf9  56                   push esi
// 0064bdfa  8bcf                 mov ecx, edi
// 0064bdfc  e84febffff           call 0x64a950
// 0064be01  84c0                 test al, al
// 0064be03  8b4618               mov eax, dword ptr [esi + 0x18]
// 0064be06  7433                 je 0x64be3b
// 0064be08  ff4004               inc dword ptr [eax + 4]
// 0064be0b  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0064be0e  83790414             cmp dword ptr [ecx + 4], 0x14
// 0064be12  7e2e                 jle 0x64be42
// 0064be14  8d542410             lea edx, [esp + 0x10]
// 0064be18  52                   push edx
// 0064be19  8d4f40               lea ecx, [edi + 0x40]
// 0064be1c  e87f55ddff           call 0x4213a0
// 0064be21  8d4c2414             lea ecx, [esp + 0x14]
// 0064be25  e816d5f9ff           call 0x5e9340
// 0064be2a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0064be2e  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064be32  e969ffffff           jmp 0x64bda0
// 0064be37  8b36                 mov esi, dword ptr [esi]
// 0064be39  eb91                 jmp 0x64bdcc
// 0064be3b  c7400400000000       mov dword ptr [eax + 4], 0
// 0064be42  8d4c2414             lea ecx, [esp + 0x14]
// 0064be46  e8f5d4f9ff           call 0x5e9340
// 0064be4b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0064be4f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064be53  e948ffffff           jmp 0x64bda0
// 0064be58  6a04                 push 4
// 0064be5a  8d7740               lea esi, [edi + 0x40]
// 0064be5d  56                   push esi
// 0064be5e  8bcf                 mov ecx, edi
// 0064be60  e8dbf9ffff           call 0x64b840
// 0064be65  6a00                 push 0
// 0064be67  6a00                 push 0
// 0064be69  8bce                 mov ecx, esi
// 0064be6b  e870aff9ff           call 0x5e6de0
// 0064be70  5f                   pop edi
// 0064be71  5e                   pop esi
// 0064be72  5d                   pop ebp
// 0064be73  5b                   pop ebx
// 0064be74  83c40c               add esp, 0xc
// 0064be77  c3                   ret 
// library rbxgs/roc_unit_32e3ce177c352edc.cpp (function ?stepAssembliesAwake@SleepStage@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_32e3ce177c352edc.cpp
