// roc 2012-06 009aa430  unit: CXTPReportControl  size: 860 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aa430
//
// 009aa430  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009aa434  83ec78               sub esp, 0x78
// 009aa437  57                   push edi
// 009aa438  8bf9                 mov edi, ecx
// 009aa43a  33c9                 xor ecx, ecx
// 009aa43c  3bc1                 cmp eax, ecx
// 009aa43e  741f                 je 0x9aa45f
// 009aa440  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 009aa447  50                   push eax
// 009aa448  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 009aa44f  50                   push eax
// 009aa450  51                   push ecx
// 009aa451  8bcf                 mov ecx, edi
// 009aa453  e83cf30e00           call 0xa99794
// 009aa458  5f                   pop edi
// 009aa459  83c478               add esp, 0x78
// 009aa45c  c20c00               ret 0xc
// 009aa45f  53                   push ebx
// 009aa460  55                   push ebp
// 009aa461  8baf0c010000         mov ebp, dword ptr [edi + 0x10c]
// 009aa467  33db                 xor ebx, ebx
// 009aa469  56                   push esi
// 009aa46a  896c2414             mov dword ptr [esp + 0x14], ebp
// 009aa46e  8bf5                 mov esi, ebp
// 009aa470  894c2420             mov dword ptr [esp + 0x20], ecx
// 009aa474  894c2424             mov dword ptr [esp + 0x24], ecx
// 009aa478  894c2418             mov dword ptr [esp + 0x18], ecx
// 009aa47c  894c2410             mov dword ptr [esp + 0x10], ecx
// 009aa480  894c241c             mov dword ptr [esp + 0x1c], ecx
// 009aa484  398f18010000         cmp dword ptr [edi + 0x118], ecx
// 009aa48a  742a                 je 0x9aa4b6
// 009aa48c  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 009aa492  8d54241c             lea edx, [esp + 0x1c]
// 009aa496  52                   push edx
// 009aa497  8d442414             lea eax, [esp + 0x14]
// 009aa49b  50                   push eax
// 009aa49c  8d542420             lea edx, [esp + 0x20]
// 009aa4a0  52                   push edx
// 009aa4a1  8d442430             lea eax, [esp + 0x30]
// 009aa4a5  50                   push eax
// 009aa4a6  8d542430             lea edx, [esp + 0x30]
// 009aa4aa  52                   push edx
// 009aa4ab  e870a70000           call 0x9b4c20
// 009aa4b0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009aa4b4  8bd8                 mov ebx, eax
// 009aa4b6  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 009aa4bd  83f807               cmp eax, 7
// 009aa4c0  0f8762020000         ja 0x9aa728
// 009aa4c6  ff24856ca79a00       jmp dword ptr [eax*4 + 0x9aa76c]
// 009aa4cd  33f6                 xor esi, esi
// 009aa4cf  89742414             mov dword ptr [esp + 0x14], esi
// 009aa4d3  89742410             mov dword ptr [esp + 0x10], esi
// 009aa4d7  e94c020000           jmp 0x9aa728
// 009aa4dc  6a00                 push 0
// 009aa4de  8bcf                 mov ecx, edi
// 009aa4e0  e8a9f20e00           call 0xa9978e
// 009aa4e5  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 009aa4ec  89442414             mov dword ptr [esp + 0x14], eax
// 009aa4f0  0f845d020000         je 0x9aa753
// 009aa4f6  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 009aa4fc  e84fb90400           call 0x9f5e50
// 009aa501  48                   dec eax
// 009aa502  33c9                 xor ecx, ecx
// 009aa504  85c0                 test eax, eax
// 009aa506  0f9ec1               setle cl
// 009aa509  49                   dec ecx
// 009aa50a  23c1                 and eax, ecx
// 009aa50c  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 009aa512  50                   push eax
// 009aa513  e838ba0400           call 0x9f5f50
// 009aa518  85c0                 test eax, eax
// 009aa51a  0f843f020000         je 0x9aa75f
// 009aa520  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 009aa526  8d542428             lea edx, [esp + 0x28]
// 009aa52a  52                   push edx
// 009aa52b  8bc8                 mov ecx, eax
// 009aa52d  e8cedcffff           call 0x9a8200
// 009aa532  8bc8                 mov ecx, eax
// 009aa534  8b4660               mov eax, dword ptr [esi + 0x60]
// 009aa537  2b01                 sub eax, dword ptr [ecx]
// 009aa539  33c9                 xor ecx, ecx
// 009aa53b  99                   cdq 
// 009aa53c  8bf0                 mov esi, eax
// 009aa53e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009aa542  33f2                 xor esi, edx
// 009aa544  2bf2                 sub esi, edx
// 009aa546  48                   dec eax
// 009aa547  2bf3                 sub esi, ebx
// 009aa549  85c0                 test eax, eax
// 009aa54b  0f9ec1               setle cl
// 009aa54e  49                   dec ecx
// 009aa54f  23c8                 and ecx, eax
// 009aa551  894c2410             mov dword ptr [esp + 0x10], ecx
// 009aa555  e9ce010000           jmp 0x9aa728
// 009aa55a  2baf14010000         sub ebp, dword ptr [edi + 0x114]
// 009aa560  33d2                 xor edx, edx
// 009aa562  85ed                 test ebp, ebp
// 009aa564  0f9ec2               setle dl
// 009aa567  4a                   dec edx
// 009aa568  23d5                 and edx, ebp
// 009aa56a  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 009aa571  89542414             mov dword ptr [esp + 0x14], edx
// 009aa575  0f84d8010000         je 0x9aa753
// 009aa57b  85c9                 test ecx, ecx
// 009aa57d  0f84a5010000         je 0x9aa728
// 009aa583  8d442438             lea eax, [esp + 0x38]
// 009aa587  50                   push eax
// 009aa588  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 009aa58e  e86ddcffff           call 0x9a8200
// 009aa593  8bc8                 mov ecx, eax
// 009aa595  8b4660               mov eax, dword ptr [esi + 0x60]
// 009aa598  2b01                 sub eax, dword ptr [ecx]
// 009aa59a  33c9                 xor ecx, ecx
// 009aa59c  99                   cdq 
// 009aa59d  8bf0                 mov esi, eax
// 009aa59f  8b442410             mov eax, dword ptr [esp + 0x10]
// 009aa5a3  33f2                 xor esi, edx
// 009aa5a5  2bf2                 sub esi, edx
// 009aa5a7  48                   dec eax
// 009aa5a8  2bf3                 sub esi, ebx
// 009aa5aa  85c0                 test eax, eax
// 009aa5ac  0f9ec1               setle cl
// 009aa5af  49                   dec ecx
// 009aa5b0  23c8                 and ecx, eax
// 009aa5b2  894c2410             mov dword ptr [esp + 0x10], ecx
// 009aa5b6  e96d010000           jmp 0x9aa728
// 009aa5bb  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 009aa5c1  6a00                 push 0
// 009aa5c3  8bcf                 mov ecx, edi
// 009aa5c5  03ea                 add ebp, edx
// 009aa5c7  e8c2f10e00           call 0xa9978e
// 009aa5cc  3be8                 cmp ebp, eax
// 009aa5ce  7d06                 jge 0x9aa5d6
// 009aa5d0  896c2414             mov dword ptr [esp + 0x14], ebp
// 009aa5d4  eb0d                 jmp 0x9aa5e3
// 009aa5d6  6a00                 push 0
// 009aa5d8  8bcf                 mov ecx, edi
// 009aa5da  e8aff10e00           call 0xa9978e
// 009aa5df  89442414             mov dword ptr [esp + 0x14], eax
// 009aa5e3  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 009aa5ea  0f8463010000         je 0x9aa753
// 009aa5f0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009aa5f4  85c9                 test ecx, ecx
// 009aa5f6  0f842c010000         je 0x9aa728
// 009aa5fc  8d442448             lea eax, [esp + 0x48]
// 009aa600  50                   push eax
// 009aa601  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 009aa607  e8f4dbffff           call 0x9a8200
// 009aa60c  8bc8                 mov ecx, eax
// 009aa60e  8b4660               mov eax, dword ptr [esi + 0x60]
// 009aa611  2b01                 sub eax, dword ptr [ecx]
// 009aa613  99                   cdq 
// 009aa614  8bf0                 mov esi, eax
// 009aa616  33f2                 xor esi, edx
// 009aa618  2bf2                 sub esi, edx
// 009aa61a  2bf3                 sub esi, ebx
// 009aa61c  ff442410             inc dword ptr [esp + 0x10]
// 009aa620  e903010000           jmp 0x9aa728
// 009aa625  8b9790000000         mov edx, dword ptr [edi + 0x90]
// 009aa62b  2b9798000000         sub edx, dword ptr [edi + 0x98]
// 009aa631  03d5                 add edx, ebp
// 009aa633  85d2                 test edx, edx
// 009aa635  7e14                 jle 0x9aa64b
// 009aa637  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 009aa63d  2b8798000000         sub eax, dword ptr [edi + 0x98]
// 009aa643  03e8                 add ebp, eax
// 009aa645  896c2414             mov dword ptr [esp + 0x14], ebp
// 009aa649  eb08                 jmp 0x9aa653
// 009aa64b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 009aa653  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 009aa65a  0f84f3000000         je 0x9aa753
// 009aa660  85c9                 test ecx, ecx
// 009aa662  0f84c0000000         je 0x9aa728
// 009aa668  8d542458             lea edx, [esp + 0x58]
// 009aa66c  52                   push edx
// 009aa66d  e916ffffff           jmp 0x9aa588
// 009aa672  8baf98000000         mov ebp, dword ptr [edi + 0x98]
// 009aa678  2baf90000000         sub ebp, dword ptr [edi + 0x90]
// 009aa67e  6a00                 push 0
// 009aa680  8bcf                 mov ecx, edi
// 009aa682  e807f10e00           call 0xa9978e
// 009aa687  8bd6                 mov edx, esi
// 009aa689  03ea                 add ebp, edx
// 009aa68b  3be8                 cmp ebp, eax
// 009aa68d  7d12                 jge 0x9aa6a1
// 009aa68f  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 009aa695  2b8790000000         sub eax, dword ptr [edi + 0x90]
// 009aa69b  01442414             add dword ptr [esp + 0x14], eax
// 009aa69f  eb0d                 jmp 0x9aa6ae
// 009aa6a1  6a00                 push 0
// 009aa6a3  8bcf                 mov ecx, edi
// 009aa6a5  e8e4f00e00           call 0xa9978e
// 009aa6aa  89442414             mov dword ptr [esp + 0x14], eax
// 009aa6ae  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 009aa6b5  0f8498000000         je 0x9aa753
// 009aa6bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009aa6bf  85c9                 test ecx, ecx
// 009aa6c1  7465                 je 0x9aa728
// 009aa6c3  8d542468             lea edx, [esp + 0x68]
// 009aa6c7  52                   push edx
// 009aa6c8  e934ffffff           jmp 0x9aa601
// 009aa6cd  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 009aa6d4  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 009aa6db  896c2414             mov dword ptr [esp + 0x14], ebp
// 009aa6df  7472                 je 0x9aa753
// 009aa6e1  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 009aa6e7  e864b70400           call 0x9f5e50
// 009aa6ec  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 009aa6f0  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 009aa6f6  03c5                 add eax, ebp
// 009aa6f8  50                   push eax
// 009aa6f9  e852b80400           call 0x9f5f50
// 009aa6fe  85c0                 test eax, eax
// 009aa700  745d                 je 0x9aa75f
// 009aa702  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 009aa708  8d4c2478             lea ecx, [esp + 0x78]
// 009aa70c  51                   push ecx
// 009aa70d  8bc8                 mov ecx, eax
// 009aa70f  e8ecdaffff           call 0x9a8200
// 009aa714  8bc8                 mov ecx, eax
// 009aa716  8b4660               mov eax, dword ptr [esi + 0x60]
// 009aa719  2b01                 sub eax, dword ptr [ecx]
// 009aa71b  896c2410             mov dword ptr [esp + 0x10], ebp
// 009aa71f  99                   cdq 
// 009aa720  8bf0                 mov esi, eax
// 009aa722  33f2                 xor esi, edx
// 009aa724  2bf2                 sub esi, edx
// 009aa726  2bf3                 sub esi, ebx
// 009aa728  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 009aa72f  7422                 je 0x9aa753
// 009aa731  56                   push esi
// 009aa732  8bcf                 mov ecx, edi
// 009aa734  e8b7f5ffff           call 0x9a9cf0
// 009aa739  8b542410             mov edx, dword ptr [esp + 0x10]
// 009aa73d  6a01                 push 1
// 009aa73f  52                   push edx
// 009aa740  6a00                 push 0
// 009aa742  8bcf                 mov ecx, edi
// 009aa744  e82df00e00           call 0xa99776
// 009aa749  5e                   pop esi
// 009aa74a  5d                   pop ebp
// 009aa74b  5b                   pop ebx
// 009aa74c  5f                   pop edi
// 009aa74d  83c478               add esp, 0x78
// 009aa750  c20c00               ret 0xc
// 009aa753  8b442414             mov eax, dword ptr [esp + 0x14]
// 009aa757  50                   push eax
// 009aa758  8bcf                 mov ecx, edi
// 009aa75a  e891f5ffff           call 0x9a9cf0
// 009aa75f  5e                   pop esi
// 009aa760  5d                   pop ebp
// 009aa761  5b                   pop ebx
// 009aa762  5f                   pop edi
// 009aa763  83c478               add esp, 0x78
// 009aa766  c20c00               ret 0xc
// 009aa769  8d4900               lea ecx, [ecx]
// 009aa76c  5a                   pop edx
// 009aa76d  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 009aa76e  9a00bba59a0025       lcall 0x2500, 0x9aa5bb00
// 009aa775  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 009aa776  9a0072a69a00cd       lcall 0xcd00, 0x9aa67200
// 009aa77d  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 009aa77e  9a00cda69a00cd       lcall 0xcd00, 0x9aa6cd00
// 009aa785  a4                   movsb byte ptr es:[edi], byte ptr [esi]
// copied from an identical function in another client (function ?OnHScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp