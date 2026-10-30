// roc 2011-06 00885710  unit: CXTPControlGallery  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00885710
//
// 00885710  83ec10               sub esp, 0x10
// 00885713  53                   push ebx
// 00885714  56                   push esi
// 00885715  57                   push edi
// 00885716  8bf9                 mov edi, ecx
// 00885718  837f6800             cmp dword ptr [edi + 0x68], 0
// 0088571c  7408                 je 0x885726
// 0088571e  8bb78c000000         mov esi, dword ptr [edi + 0x8c]
// 00885724  eb06                 jmp 0x88572c
// 00885726  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0088572c  8d44240c             lea eax, [esp + 0xc]
// 00885730  8d9f7cfeffff         lea ebx, [edi - 0x184]
// 00885736  50                   push eax
// 00885737  8bcb                 mov ecx, ebx
// 00885739  e8a2cfffff           call 0x8826e0
// 0088573e  8bcb                 mov ecx, ebx
// 00885740  e8abbeffff           call 0x8815f0
// 00885745  85c0                 test eax, eax
// 00885747  0f848a000000         je 0x8857d7
// 0088574d  55                   push ebp
// 0088574e  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00885752  83fd07               cmp ebp, 7
// 00885755  7747                 ja 0x88579e
// 00885757  ff24ade0578800       jmp dword ptr [ebp*4 + 0x8857e0]
// 0088575e  33f6                 xor esi, esi
// 00885760  eb3c                 jmp 0x88579e
// 00885762  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 00885768  eb34                 jmp 0x88579e
// 0088576a  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0088576d  2b7024               sub esi, dword ptr [eax + 0x24]
// 00885770  894c2410             mov dword ptr [esp + 0x10], ecx
// 00885774  eb28                 jmp 0x88579e
// 00885776  8b5020               mov edx, dword ptr [eax + 0x20]
// 00885779  037024               add esi, dword ptr [eax + 0x24]
// 0088577c  89542410             mov dword ptr [esp + 0x10], edx
// 00885780  eb1c                 jmp 0x88579e
// 00885782  8b442414             mov eax, dword ptr [esp + 0x14]
// 00885786  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0088578a  03f0                 add esi, eax
// 0088578c  eb10                 jmp 0x88579e
// 0088578e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00885792  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00885796  03f1                 add esi, ecx
// 00885798  eb04                 jmp 0x88579e
// 0088579a  8b742428             mov esi, dword ptr [esp + 0x28]
// 0088579e  8b13                 mov edx, dword ptr [ebx]
// 008857a0  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008857a6  8bcb                 mov ecx, ebx
// 008857a8  ffd0                 call eax
// 008857aa  85c0                 test eax, eax
// 008857ac  7420                 je 0x8857ce
// 008857ae  85ed                 test ebp, ebp
// 008857b0  740a                 je 0x8857bc
// 008857b2  83fd01               cmp ebp, 1
// 008857b5  7405                 je 0x8857bc
// 008857b7  83fd08               cmp ebp, 8
// 008857ba  7512                 jne 0x8857ce
// 008857bc  56                   push esi
// 008857bd  8bcb                 mov ecx, ebx
// 008857bf  e87ccfffff           call 0x882740
// 008857c4  5d                   pop ebp
// 008857c5  5f                   pop edi
// 008857c6  5e                   pop esi
// 008857c7  5b                   pop ebx
// 008857c8  83c410               add esp, 0x10
// 008857cb  c20800               ret 8
// 008857ce  56                   push esi
// 008857cf  8bcb                 mov ecx, ebx
// 008857d1  e8daf6ffff           call 0x884eb0
// 008857d6  5d                   pop ebp
// 008857d7  5f                   pop edi
// 008857d8  5e                   pop esi
// 008857d9  5b                   pop ebx
// 008857da  83c410               add esp, 0x10
// 008857dd  c20800               ret 8
// 008857e0  6a57                 push 0x57
// 008857e2  8800                 mov byte ptr [eax], al
// 008857e4  7657                 jbe 0x88583d
// 008857e6  8800                 mov byte ptr [eax], al
// 008857e8  82578800             adc byte ptr [edi - 0x78], 0
// 008857ec  8e5788               mov ss, word ptr [edi - 0x78]
// 008857ef  009e5788009a         add byte ptr [esi - 0x65ff77a9], bl
// 008857f5  57                   push edi
// 008857f6  8800                 mov byte ptr [eax], al
// 008857f8  5e                   pop esi
// 008857f9  57                   push edi
// 008857fa  8800                 mov byte ptr [eax], al
// 008857fc  625788               bound edx, qword ptr [edi - 0x78]
// copied from an identical function in another client (function ?DoScroll@CXTPControlGallery@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp