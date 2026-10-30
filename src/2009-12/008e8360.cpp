// roc 2009-12 008e8360  unit: CXTPTabPaintManager::CColorSetOffice2003  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8360
//
// 008e8360  53                   push ebx
// 008e8361  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008e8365  55                   push ebp
// 008e8366  56                   push esi
// 008e8367  57                   push edi
// 008e8368  8bf9                 mov edi, ecx
// 008e836a  8b07                 mov eax, dword ptr [edi]
// 008e836c  8b5024               mov edx, dword ptr [eax + 0x24]
// 008e836f  53                   push ebx
// 008e8370  ffd2                 call edx
// 008e8372  8b6b60               mov ebp, dword ptr [ebx + 0x60]
// 008e8375  8bf0                 mov esi, eax
// 008e8377  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 008e837a  7513                 jne 0x8e838f
// 008e837c  8bb794000000         mov esi, dword ptr [edi + 0x94]
// 008e8382  83feff               cmp esi, -1
// 008e8385  751e                 jne 0x8e83a5
// 008e8387  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 008e838d  eb16                 jmp 0x8e83a5
// 008e838f  395d08               cmp dword ptr [ebp + 8], ebx
// 008e8392  7511                 jne 0x8e83a5
// 008e8394  8bb788000000         mov esi, dword ptr [edi + 0x88]
// 008e839a  83feff               cmp esi, -1
// 008e839d  7506                 jne 0x8e83a5
// 008e839f  8bb784000000         mov esi, dword ptr [edi + 0x84]
// 008e83a5  e82676f4ff           call 0x82f9d0
// 008e83aa  8bd8                 mov ebx, eax
// 008e83ac  8b4500               mov eax, dword ptr [ebp]
// 008e83af  8b5048               mov edx, dword ptr [eax + 0x48]
// 008e83b2  8bcd                 mov ecx, ebp
// 008e83b4  ffd2                 call edx
// 008e83b6  50                   push eax
// 008e83b7  56                   push esi
// 008e83b8  682c010000           push 0x12c
// 008e83bd  68ffffff00           push 0xffffff
// 008e83c2  56                   push esi
// 008e83c3  8bcb                 mov ecx, ebx
// 008e83c5  e8866cf4ff           call 0x82f050
// 008e83ca  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008e83ce  8b542424             mov edx, dword ptr [esp + 0x24]
// 008e83d2  50                   push eax
// 008e83d3  83ec10               sub esp, 0x10
// 008e83d6  8bc4                 mov eax, esp
// 008e83d8  8908                 mov dword ptr [eax], ecx
// 008e83da  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008e83de  895004               mov dword ptr [eax + 4], edx
// 008e83e1  8b542440             mov edx, dword ptr [esp + 0x40]
// 008e83e5  894808               mov dword ptr [eax + 8], ecx
// 008e83e8  89500c               mov dword ptr [eax + 0xc], edx
// 008e83eb  8b442430             mov eax, dword ptr [esp + 0x30]
// 008e83ef  50                   push eax
// 008e83f0  8bcf                 mov ecx, edi
// 008e83f2  e879f0ffff           call 0x8e7470
// 008e83f7  5f                   pop edi
// 008e83f8  8bc6                 mov eax, esi
// 008e83fa  5e                   pop esi
// 008e83fb  5d                   pop ebp
// 008e83fc  5b                   pop ebx
// 008e83fd  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillPropertyButton@CColorSetOffice2003@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
