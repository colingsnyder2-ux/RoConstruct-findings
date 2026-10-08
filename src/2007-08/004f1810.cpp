// roc 2007-08 004f1810  unit: RBX::Render::AggregatingSceneManager  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f1810
//
// 004f1810  55                   push ebp
// 004f1811  8bec                 mov ebp, esp
// 004f1813  83e4f8               and esp, 0xfffffff8
// 004f1816  83ec20               sub esp, 0x20
// 004f1819  53                   push ebx
// 004f181a  55                   push ebp
// 004f181b  8bd9                 mov ebx, ecx
// 004f181d  8b4318               mov eax, dword ptr [ebx + 0x18]
// 004f1820  8b4804               mov ecx, dword ptr [eax + 4]
// 004f1823  56                   push esi
// 004f1824  8d7314               lea esi, [ebx + 0x14]
// 004f1827  57                   push edi
// 004f1828  51                   push ecx
// 004f1829  8bce                 mov ecx, esi
// 004f182b  e890efffff           call 0x4f07c0
// 004f1830  8b4604               mov eax, dword ptr [esi + 4]
// 004f1833  894004               mov dword ptr [eax + 4], eax
// 004f1836  8b4604               mov eax, dword ptr [esi + 4]
// 004f1839  33ff                 xor edi, edi
// 004f183b  897e08               mov dword ptr [esi + 8], edi
// 004f183e  8900                 mov dword ptr [eax], eax
// 004f1840  8b7604               mov esi, dword ptr [esi + 4]
// 004f1843  897608               mov dword ptr [esi + 8], esi
// 004f1846  8b5324               mov edx, dword ptr [ebx + 0x24]
// 004f1849  8b4204               mov eax, dword ptr [edx + 4]
// 004f184c  8d7320               lea esi, [ebx + 0x20]
// 004f184f  50                   push eax
// 004f1850  8bce                 mov ecx, esi
// 004f1852  e869efffff           call 0x4f07c0
// 004f1857  8b4604               mov eax, dword ptr [esi + 4]
// 004f185a  894004               mov dword ptr [eax + 4], eax
// 004f185d  8b4604               mov eax, dword ptr [esi + 4]
// 004f1860  897e08               mov dword ptr [esi + 8], edi
// 004f1863  8900                 mov dword ptr [eax], eax
// 004f1865  8b7604               mov esi, dword ptr [esi + 4]
// 004f1868  897608               mov dword ptr [esi + 8], esi
// 004f186b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 004f186e  8b29                 mov ebp, dword ptr [ecx]
// 004f1870  8d7b08               lea edi, [ebx + 8]
// 004f1873  8bf7                 mov esi, edi
// 004f1875  8bd1                 mov edx, ecx
// 004f1877  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004f187b  89742418             mov dword ptr [esp + 0x18], esi
// 004f187f  89542424             mov dword ptr [esp + 0x24], edx
// 004f1883  85f6                 test esi, esi
// 004f1885  7404                 je 0x4f188b
// 004f1887  3bf7                 cmp esi, edi
// 004f1889  7406                 je 0x4f1891
// 004f188b  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f1891  3b6c2424             cmp ebp, dword ptr [esp + 0x24]
// 004f1895  7462                 je 0x4f18f9
// 004f1897  85f6                 test esi, esi
// 004f1899  7506                 jne 0x4f18a1
// 004f189b  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f18a1  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004f18a4  7506                 jne 0x4f18ac
// 004f18a6  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f18ac  8b7518               mov esi, dword ptr [ebp + 0x18]
// 004f18af  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 004f18b2  83c60c               add esi, 0xc
// 004f18b5  396e04               cmp dword ptr [esi + 4], ebp
// 004f18b8  7606                 jbe 0x4f18c0
// 004f18ba  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f18c0  8b4604               mov eax, dword ptr [esi + 4]
// 004f18c3  3b4608               cmp eax, dword ptr [esi + 8]
// 004f18c6  89442414             mov dword ptr [esp + 0x14], eax
// 004f18ca  760a                 jbe 0x4f18d6
// 004f18cc  ff15d8e67700         call dword ptr [0x77e6d8]
// 004f18d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f18d6  55                   push ebp
// 004f18d7  56                   push esi
// 004f18d8  50                   push eax
// 004f18d9  56                   push esi
// 004f18da  8d442438             lea eax, [esp + 0x38]
// 004f18de  50                   push eax
// 004f18df  8bce                 mov ecx, esi
// 004f18e1  e85aeeffff           call 0x4f0740
// 004f18e6  8d4c2418             lea ecx, [esp + 0x18]
// 004f18ea  e891b41100           call 0x60cd80
// 004f18ef  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004f18f3  8b742418             mov esi, dword ptr [esp + 0x18]
// 004f18f7  eb8a                 jmp 0x4f1883
// 004f18f9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 004f18fc  6a01                 push 1
// 004f18fe  6a00                 push 0
// 004f1900  81c198000000         add ecx, 0x98
// 004f1906  e855dfffff           call 0x4ef860
// 004f190b  5f                   pop edi
// 004f190c  5e                   pop esi
// 004f190d  5d                   pop ebp
// 004f190e  5b                   pop ebx
// 004f190f  8be5                 mov esp, ebp
// 004f1911  5d                   pop ebp
// 004f1912  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ?clear@AggregatingSceneManager@Render@RBX@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
