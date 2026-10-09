// roc 2010-06 0069b6b0  unit: RBX::PolyContact  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0069b6b0
//
// 0069b6b0  83ec10               sub esp, 0x10
// 0069b6b3  53                   push ebx
// 0069b6b4  55                   push ebp
// 0069b6b5  56                   push esi
// 0069b6b6  57                   push edi
// 0069b6b7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0069b6bb  8b5f10               mov ebx, dword ptr [edi + 0x10]
// 0069b6be  395f0c               cmp dword ptr [edi + 0xc], ebx
// 0069b6c1  7606                 jbe 0x69b6c9
// 0069b6c3  ff150ca99e00         call dword ptr [0x9ea90c]
// 0069b6c9  8b770c               mov esi, dword ptr [edi + 0xc]
// 0069b6cc  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0069b6cf  7606                 jbe 0x69b6d7
// 0069b6d1  ff150ca99e00         call dword ptr [0x9ea90c]
// 0069b6d7  8b07                 mov eax, dword ptr [edi]
// 0069b6d9  89442410             mov dword ptr [esp + 0x10], eax
// 0069b6dd  89742414             mov dword ptr [esp + 0x14], esi
// 0069b6e1  8bee                 mov ebp, esi
// 0069b6e3  3bf3                 cmp esi, ebx
// 0069b6e5  7415                 je 0x69b6fc
// 0069b6e7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0069b6eb  8b01                 mov eax, dword ptr [ecx]
// 0069b6ed  8d4900               lea ecx, [ecx]
// 0069b6f0  394500               cmp dword ptr [ebp], eax
// 0069b6f3  7407                 je 0x69b6fc
// 0069b6f5  83c504               add ebp, 4
// 0069b6f8  3beb                 cmp ebp, ebx
// 0069b6fa  75f4                 jne 0x69b6f0
// 0069b6fc  8b770c               mov esi, dword ptr [edi + 0xc]
// 0069b6ff  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 0069b705  3b7710               cmp esi, dword ptr [edi + 0x10]
// 0069b708  7602                 jbe 0x69b70c
// 0069b70a  ffd3                 call ebx
// 0069b70c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0069b710  8b07                 mov eax, dword ptr [edi]
// 0069b712  85c9                 test ecx, ecx
// 0069b714  7404                 je 0x69b71a
// 0069b716  3bc8                 cmp ecx, eax
// 0069b718  7402                 je 0x69b71c
// 0069b71a  ffd3                 call ebx
// 0069b71c  8bc5                 mov eax, ebp
// 0069b71e  2bc6                 sub eax, esi
// 0069b720  8b7710               mov esi, dword ptr [edi + 0x10]
// 0069b723  c1f802               sar eax, 2
// 0069b726  89442424             mov dword ptr [esp + 0x24], eax
// 0069b72a  39770c               cmp dword ptr [edi + 0xc], esi
// 0069b72d  7602                 jbe 0x69b731
// 0069b72f  ffd3                 call ebx
// 0069b731  8b1f                 mov ebx, dword ptr [edi]
// 0069b733  85db                 test ebx, ebx
// 0069b735  7530                 jne 0x69b767
// 0069b737  ff150ca99e00         call dword ptr [0x9ea90c]
// 0069b73d  33c0                 xor eax, eax
// 0069b73f  3b700c               cmp esi, dword ptr [eax + 0xc]
// 0069b742  7706                 ja 0x69b74a
// 0069b744  ff150ca99e00         call dword ptr [0x9ea90c]
// 0069b74a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069b74e  83c6fc               add esi, -4
// 0069b751  8974241c             mov dword ptr [esp + 0x1c], esi
// 0069b755  85c0                 test eax, eax
// 0069b757  7404                 je 0x69b75d
// 0069b759  3bc3                 cmp eax, ebx
// 0069b75b  740e                 je 0x69b76b
// 0069b75d  8b350ca99e00         mov esi, dword ptr [0x9ea90c]
// 0069b763  ffd6                 call esi
// 0069b765  eb0a                 jmp 0x69b771
// 0069b767  8b03                 mov eax, dword ptr [ebx]
// 0069b769  ebd4                 jmp 0x69b73f
// 0069b76b  8b350ca99e00         mov esi, dword ptr [0x9ea90c]
// 0069b771  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 0069b775  742d                 je 0x69b7a4
// 0069b777  85db                 test ebx, ebx
// 0069b779  7549                 jne 0x69b7c4
// 0069b77b  ffd6                 call esi
// 0069b77d  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0069b781  3b5310               cmp edx, dword ptr [ebx + 0x10]
// 0069b784  7202                 jb 0x69b788
// 0069b786  ffd6                 call esi
// 0069b788  8b442410             mov eax, dword ptr [esp + 0x10]
// 0069b78c  85c0                 test eax, eax
// 0069b78e  7538                 jne 0x69b7c8
// 0069b790  ffd6                 call esi
// 0069b792  33c0                 xor eax, eax
// 0069b794  3b6810               cmp ebp, dword ptr [eax + 0x10]
// 0069b797  7202                 jb 0x69b79b
// 0069b799  ffd6                 call esi
// 0069b79b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0069b79f  8b08                 mov ecx, dword ptr [eax]
// 0069b7a1  894d00               mov dword ptr [ebp], ecx
// 0069b7a4  8b5710               mov edx, dword ptr [edi + 0x10]
// 0069b7a7  2b570c               sub edx, dword ptr [edi + 0xc]
// 0069b7aa  6a00                 push 0
// 0069b7ac  c1fa02               sar edx, 2
// 0069b7af  4a                   dec edx
// 0069b7b0  52                   push edx
// 0069b7b1  8bcf                 mov ecx, edi
// 0069b7b3  e8c8cbfbff           call 0x658380
// 0069b7b8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069b7bc  5f                   pop edi
// 0069b7bd  5e                   pop esi
// 0069b7be  5d                   pop ebp
// 0069b7bf  5b                   pop ebx
// 0069b7c0  83c410               add esp, 0x10
// 0069b7c3  c3                   ret 
// 0069b7c4  8b1b                 mov ebx, dword ptr [ebx]
// 0069b7c6  ebb5                 jmp 0x69b77d
// 0069b7c8  8b00                 mov eax, dword ptr [eax]
// 0069b7ca  ebc8                 jmp 0x69b794
// library openrbx-client/App\v8world\Assembly2.cpp (function ??$fastRemoveShort@PAVAssembly@RBX@@@RBX@@YAIAAV?$vector@PAVAssembly@RBX@@V?$allocator@PAVAssembly@RBX@@@std@@@std@@ABQAVAssembly@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Assembly2.cpp
