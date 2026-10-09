// roc 2009-12 0071bc30  unit: RBX::VPhysicsService::?$EventDesc  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071bc30
//
// 0071bc30  83ec10               sub esp, 0x10
// 0071bc33  53                   push ebx
// 0071bc34  55                   push ebp
// 0071bc35  56                   push esi
// 0071bc36  57                   push edi
// 0071bc37  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0071bc3b  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 0071bc3e  395f0c               cmp dword ptr [edi + 0xc], ebx
// 0071bc41  7606                 jbe 0x71bc49
// 0071bc43  ff1560b79800         call dword ptr [0x98b760]
// 0071bc49  8b770c               mov esi, dword ptr [edi + 0xc]
// 0071bc4c  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0071bc4f  7606                 jbe 0x71bc57
// 0071bc51  ff1560b79800         call dword ptr [0x98b760]
// 0071bc57  8b07                 mov eax, dword ptr [edi]
// 0071bc59  89442410             mov dword ptr [esp + 0x10], eax
// 0071bc5d  89742414             mov dword ptr [esp + 0x14], esi
// 0071bc61  8bee                 mov ebp, esi
// 0071bc63  3bf3                 cmp esi, ebx
// 0071bc65  7415                 je 0x71bc7c
// 0071bc67  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0071bc6b  8b01                 mov eax, dword ptr [ecx]
// 0071bc6d  8d4900               lea ecx, [ecx]
// 0071bc70  394500               cmp dword ptr [ebp], eax
// 0071bc73  7407                 je 0x71bc7c
// 0071bc75  83c504               add ebp, 4
// 0071bc78  3beb                 cmp ebp, ebx
// 0071bc7a  75f4                 jne 0x71bc70
// 0071bc7c  8b770c               mov esi, dword ptr [edi + 0xc]
// 0071bc7f  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 0071bc85  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0071bc88  7602                 jbe 0x71bc8c
// 0071bc8a  ffd3                 call ebx
// 0071bc8c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071bc90  8b07                 mov eax, dword ptr [edi]
// 0071bc92  85c9                 test ecx, ecx
// 0071bc94  7404                 je 0x71bc9a
// 0071bc96  3bc8                 cmp ecx, eax
// 0071bc98  7402                 je 0x71bc9c
// 0071bc9a  ffd3                 call ebx
// 0071bc9c  8bc5                 mov eax, ebp
// 0071bc9e  2bc6                 sub eax, esi
// 0071bca0  8b7710               mov esi, dword ptr [edi + 0x10]
// 0071bca3  c1f802               sar eax, 2
// 0071bca6  89442424             mov dword ptr [esp + 0x24], eax
// 0071bcaa  39770c               cmp dword ptr [edi + 0xc], esi
// 0071bcad  7602                 jbe 0x71bcb1
// 0071bcaf  ffd3                 call ebx
// 0071bcb1  8b1f                 mov ebx, dword ptr [edi]
// 0071bcb3  85db                 test ebx, ebx
// 0071bcb5  7530                 jne 0x71bce7
// 0071bcb7  ff1560b79800         call dword ptr [0x98b760]
// 0071bcbd  33c0                 xor eax, eax
// 0071bcbf  3b700c               cmp esi, dword ptr [eax + 0xc]
// 0071bcc2  7706                 ja 0x71bcca
// 0071bcc4  ff1560b79800         call dword ptr [0x98b760]
// 0071bcca  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071bcce  83c6fc               add esi, -4
// 0071bcd1  8974241c             mov dword ptr [esp + 0x1c], esi
// 0071bcd5  85c0                 test eax, eax
// 0071bcd7  7404                 je 0x71bcdd
// 0071bcd9  3bc3                 cmp eax, ebx
// 0071bcdb  740e                 je 0x71bceb
// 0071bcdd  8b3560b79800         mov esi, dword ptr [0x98b760]
// 0071bce3  ffd6                 call esi
// 0071bce5  eb0a                 jmp 0x71bcf1
// 0071bce7  8b03                 mov eax, dword ptr [ebx]
// 0071bce9  ebd4                 jmp 0x71bcbf
// 0071bceb  8b3560b79800         mov esi, dword ptr [0x98b760]
// 0071bcf1  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0071bcf5  742d                 je 0x71bd24
// 0071bcf7  85db                 test ebx, ebx
// 0071bcf9  7549                 jne 0x71bd44
// 0071bcfb  ffd6                 call esi
// 0071bcfd  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0071bd01  3b5310               cmp edx, dword ptr [ebx + 0x10]
// 0071bd04  7202                 jb 0x71bd08
// 0071bd06  ffd6                 call esi
// 0071bd08  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071bd0c  85c0                 test eax, eax
// 0071bd0e  7538                 jne 0x71bd48
// 0071bd10  ffd6                 call esi
// 0071bd12  33c0                 xor eax, eax
// 0071bd14  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0071bd17  7202                 jb 0x71bd1b
// 0071bd19  ffd6                 call esi
// 0071bd1b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0071bd1f  8b08                 mov ecx, dword ptr [eax]
// 0071bd21  894d00               mov dword ptr [ebp], ecx
// 0071bd24  8b5710               mov edx, dword ptr [edi + 0x10]
// 0071bd27  2b570c               sub edx, dword ptr [edi + 0xc]
// 0071bd2a  6a00                 push 0
// 0071bd2c  c1fa02               sar edx, 2
// 0071bd2f  4a                   dec edx
// 0071bd30  52                   push edx
// 0071bd31  8bcf                 mov ecx, edi
// 0071bd33  e808bb0900           call 0x7b7840
// 0071bd38  8b442424             mov eax, dword ptr [esp + 0x24]
// 0071bd3c  5f                   pop edi
// 0071bd3d  5e                   pop esi
// 0071bd3e  5d                   pop ebp
// 0071bd3f  5b                   pop ebx
// 0071bd40  83c410               add esp, 0x10
// 0071bd43  c3                   ret 
// 0071bd44  8b1b                 mov ebx, dword ptr [ebx]
// 0071bd46  ebb5                 jmp 0x71bcfd
// 0071bd48  8b00                 mov eax, dword ptr [eax]
// 0071bd4a  ebc8                 jmp 0x71bd14
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$fastRemoveShort@PAVAssembly@RBX@@@RBX@@YAIAAV?$vector@PAVAssembly@RBX@@V?$allocator@PAVAssembly@RBX@@@std@@@std@@ABQAVAssembly@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
