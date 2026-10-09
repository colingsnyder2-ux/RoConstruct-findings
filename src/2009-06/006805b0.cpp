// roc 2009-06 006805b0  unit: RBX::Mechanism  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006805b0
//
// 006805b0  83ec10               sub esp, 0x10
// 006805b3  53                   push ebx
// 006805b4  55                   push ebp
// 006805b5  56                   push esi
// 006805b6  57                   push edi
// 006805b7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006805bb  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 006805be  395f0c               cmp dword ptr [edi + 0xc], ebx
// 006805c1  7606                 jbe 0x6805c9
// 006805c3  ff15ace98900         call dword ptr [0x89e9ac]
// 006805c9  8b770c               mov esi, dword ptr [edi + 0xc]
// 006805cc  3b7710               cmp esi, dword ptr [edi + 0x10]
// 006805cf  7606                 jbe 0x6805d7
// 006805d1  ff15ace98900         call dword ptr [0x89e9ac]
// 006805d7  8b07                 mov eax, dword ptr [edi]
// 006805d9  89442410             mov dword ptr [esp + 0x10], eax
// 006805dd  89742414             mov dword ptr [esp + 0x14], esi
// 006805e1  8bee                 mov ebp, esi
// 006805e3  3bf3                 cmp esi, ebx
// 006805e5  7415                 je 0x6805fc
// 006805e7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006805eb  8b01                 mov eax, dword ptr [ecx]
// 006805ed  8d4900               lea ecx, [ecx]
// 006805f0  394500               cmp dword ptr [ebp], eax
// 006805f3  7407                 je 0x6805fc
// 006805f5  83c504               add ebp, 4
// 006805f8  3beb                 cmp ebp, ebx
// 006805fa  75f4                 jne 0x6805f0
// 006805fc  8b770c               mov esi, dword ptr [edi + 0xc]
// 006805ff  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 00680605  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00680608  7602                 jbe 0x68060c
// 0068060a  ffd3                 call ebx
// 0068060c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00680610  8b07                 mov eax, dword ptr [edi]
// 00680612  85c9                 test ecx, ecx
// 00680614  7404                 je 0x68061a
// 00680616  3bc8                 cmp ecx, eax
// 00680618  7402                 je 0x68061c
// 0068061a  ffd3                 call ebx
// 0068061c  8bc5                 mov eax, ebp
// 0068061e  2bc6                 sub eax, esi
// 00680620  8b7710               mov esi, dword ptr [edi + 0x10]
// 00680623  c1f802               sar eax, 2
// 00680626  89442424             mov dword ptr [esp + 0x24], eax
// 0068062a  39770c               cmp dword ptr [edi + 0xc], esi
// 0068062d  7602                 jbe 0x680631
// 0068062f  ffd3                 call ebx
// 00680631  8b1f                 mov ebx, dword ptr [edi]
// 00680633  85db                 test ebx, ebx
// 00680635  7530                 jne 0x680667
// 00680637  ff15ace98900         call dword ptr [0x89e9ac]
// 0068063d  33c0                 xor eax, eax
// 0068063f  3b700c               cmp esi, dword ptr [eax + 0xc]
// 00680642  7706                 ja 0x68064a
// 00680644  ff15ace98900         call dword ptr [0x89e9ac]
// 0068064a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0068064e  83c6fc               add esi, -4
// 00680651  8974241c             mov dword ptr [esp + 0x1c], esi
// 00680655  85c0                 test eax, eax
// 00680657  7404                 je 0x68065d
// 00680659  3bc3                 cmp eax, ebx
// 0068065b  740e                 je 0x68066b
// 0068065d  8b35ace98900         mov esi, dword ptr [0x89e9ac]
// 00680663  ffd6                 call esi
// 00680665  eb0a                 jmp 0x680671
// 00680667  8b03                 mov eax, dword ptr [ebx]
// 00680669  ebd4                 jmp 0x68063f
// 0068066b  8b35ace98900         mov esi, dword ptr [0x89e9ac]
// 00680671  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00680675  742d                 je 0x6806a4
// 00680677  85db                 test ebx, ebx
// 00680679  7549                 jne 0x6806c4
// 0068067b  ffd6                 call esi
// 0068067d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00680681  3b5310               cmp edx, dword ptr [ebx + 0x10]
// 00680684  7202                 jb 0x680688
// 00680686  ffd6                 call esi
// 00680688  8b442410             mov eax, dword ptr [esp + 0x10]
// 0068068c  85c0                 test eax, eax
// 0068068e  7538                 jne 0x6806c8
// 00680690  ffd6                 call esi
// 00680692  33c0                 xor eax, eax
// 00680694  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 00680697  7202                 jb 0x68069b
// 00680699  ffd6                 call esi
// 0068069b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068069f  8b08                 mov ecx, dword ptr [eax]
// 006806a1  894d00               mov dword ptr [ebp], ecx
// 006806a4  8b5710               mov edx, dword ptr [edi + 0x10]
// 006806a7  2b570c               sub edx, dword ptr [edi + 0xc]
// 006806aa  6a00                 push 0
// 006806ac  c1fa02               sar edx, 2
// 006806af  4a                   dec edx
// 006806b0  52                   push edx
// 006806b1  8bcf                 mov ecx, edi
// 006806b3  e848feffff           call 0x680500
// 006806b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006806bc  5f                   pop edi
// 006806bd  5e                   pop esi
// 006806be  5d                   pop ebp
// 006806bf  5b                   pop ebx
// 006806c0  83c410               add esp, 0x10
// 006806c3  c3                   ret 
// 006806c4  8b1b                 mov ebx, dword ptr [ebx]
// 006806c6  ebb5                 jmp 0x68067d
// 006806c8  8b00                 mov eax, dword ptr [eax]
// 006806ca  ebc8                 jmp 0x680694
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$fastRemoveShort@PAVAssembly@RBX@@@RBX@@YAIAAV?$vector@PAVAssembly@RBX@@V?$allocator@PAVAssembly@RBX@@@std@@@std@@ABQAVAssembly@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
