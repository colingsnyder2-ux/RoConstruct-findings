// roc 2007-03 005f6820  unit: seg_005f0000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f6820
//
// 005f6820  83ec08               sub esp, 8
// 005f6823  53                   push ebx
// 005f6824  55                   push ebp
// 005f6825  56                   push esi
// 005f6826  8bf1                 mov esi, ecx
// 005f6828  8b4604               mov eax, dword ptr [esi + 4]
// 005f682b  8b28                 mov ebp, dword ptr [eax]
// 005f682d  57                   push edi
// 005f682e  8bfe                 mov edi, esi
// 005f6830  896c2414             mov dword ptr [esp + 0x14], ebp
// 005f6834  897c2410             mov dword ptr [esp + 0x10], edi
// 005f6838  85ff                 test edi, edi
// 005f683a  8b5e04               mov ebx, dword ptr [esi + 4]
// 005f683d  7404                 je 0x5f6843
// 005f683f  3bfe                 cmp edi, esi
// 005f6841  7406                 je 0x5f6849
// 005f6843  ff1544e97700         call dword ptr [0x77e944]
// 005f6849  3beb                 cmp ebp, ebx
// 005f684b  7434                 je 0x5f6881
// 005f684d  85ff                 test edi, edi
// 005f684f  7506                 jne 0x5f6857
// 005f6851  ff1544e97700         call dword ptr [0x77e944]
// 005f6857  3b6f04               cmp ebp, dword ptr [edi + 4]
// 005f685a  7506                 jne 0x5f6862
// 005f685c  ff1544e97700         call dword ptr [0x77e944]
// 005f6862  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 005f6865  51                   push ecx
// 005f6866  e885780200           call 0x61e0f0
// 005f686b  83c404               add esp, 4
// 005f686e  8d4c2410             lea ecx, [esp + 0x10]
// 005f6872  e8e9c6eeff           call 0x4e2f60
// 005f6877  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005f687b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005f687f  ebb7                 jmp 0x5f6838
// 005f6881  8b4604               mov eax, dword ptr [esi + 4]
// 005f6884  8b08                 mov ecx, dword ptr [eax]
// 005f6886  50                   push eax
// 005f6887  56                   push esi
// 005f6888  51                   push ecx
// 005f6889  56                   push esi
// 005f688a  8d542420             lea edx, [esp + 0x20]
// 005f688e  52                   push edx
// 005f688f  8bce                 mov ecx, esi
// 005f6891  e82afbffff           call 0x5f63c0
// 005f6896  8b4604               mov eax, dword ptr [esi + 4]
// 005f6899  50                   push eax
// 005f689a  e851780200           call 0x61e0f0
// 005f689f  83c404               add esp, 4
// 005f68a2  33c0                 xor eax, eax
// 005f68a4  5f                   pop edi
// 005f68a5  894604               mov dword ptr [esi + 4], eax
// 005f68a8  894608               mov dword ptr [esi + 8], eax
// 005f68ab  5e                   pop esi
// 005f68ac  5d                   pop ebp
// 005f68ad  5b                   pop ebx
// 005f68ae  83c408               add esp, 8
// 005f68b1  c3                   ret 
// library openrbx-client/App\v8world\Block.cpp (function ??1BlockTemplates@BlockTemplate@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Block.cpp
