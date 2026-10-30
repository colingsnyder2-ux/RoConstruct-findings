// from server: 100% by auto
// roc 2007-08 0071c4e0  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071c4e0
//
// 0071c4e0  53                   push ebx
// 0071c4e1  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0071c4e5  55                   push ebp
// 0071c4e6  56                   push esi
// 0071c4e7  57                   push edi
// 0071c4e8  8bf9                 mov edi, ecx
// 0071c4ea  8b07                 mov eax, dword ptr [edi]
// 0071c4ec  8b5024               mov edx, dword ptr [eax + 0x24]
// 0071c4ef  53                   push ebx
// 0071c4f0  ffd2                 call edx
// 0071c4f2  8b6b60               mov ebp, dword ptr [ebx + 0x60]
// 0071c4f5  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 0071c4f8  8bf0                 mov esi, eax
// 0071c4fa  7513                 jne 0x71c50f
// 0071c4fc  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 0071c502  83feff               cmp esi, -1
// 0071c505  751e                 jne 0x71c525
// 0071c507  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0071c50d  eb16                 jmp 0x71c525
// 0071c50f  395d08               cmp dword ptr [ebp + 8], ebx
// 0071c512  7511                 jne 0x71c525
// 0071c514  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 0071c51a  83feff               cmp esi, -1
// 0071c51d  7506                 jne 0x71c525
// 0071c51f  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 0071c525  e846caf4ff           call 0x668f70
// 0071c52a  8bd8                 mov ebx, eax
// 0071c52c  8b4500               mov eax, dword ptr [ebp]
// 0071c52f  8b5048               mov edx, dword ptr [eax + 0x48]
// 0071c532  8bcd                 mov ecx, ebp
// 0071c534  ffd2                 call edx
// 0071c536  50                   push eax
// 0071c537  56                   push esi
// 0071c538  682c010000           push 0x12c
// 0071c53d  68ffffff00           push 0xffffff
// 0071c542  56                   push esi
// 0071c543  8bcb                 mov ecx, ebx
// 0071c545  e886c1f4ff           call 0x6686d0
// 0071c54a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071c54e  8b542424             mov edx, dword ptr [esp + 0x24]
// 0071c552  50                   push eax
// 0071c553  83ec10               sub esp, 0x10
// 0071c556  8bc4                 mov eax, esp
// 0071c558  8908                 mov dword ptr [eax], ecx
// 0071c55a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0071c55e  895004               mov dword ptr [eax + 4], edx
// 0071c561  8b542440             mov edx, dword ptr [esp + 0x40]
// 0071c565  894808               mov dword ptr [eax + 8], ecx
// 0071c568  89500c               mov dword ptr [eax + 0xc], edx
// 0071c56b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0071c56f  50                   push eax
// 0071c570  8bcf                 mov ecx, edi
// 0071c572  e899f0ffff           call 0x71b610
// 0071c577  5f                   pop edi
// 0071c578  8bc6                 mov eax, esi
// 0071c57a  5e                   pop esi
// 0071c57b  5d                   pop ebp
// 0071c57c  5b                   pop ebx
// 0071c57d  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
