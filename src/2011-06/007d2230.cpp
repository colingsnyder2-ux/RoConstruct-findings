// roc 2011-06 007d2230  unit: RBX::ScoreHud  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d2230
//
// 007d2230  64a100000000         mov eax, dword ptr fs:[0]
// 007d2236  6aff                 push -1
// 007d2238  68221b9d00           push 0x9d1b22
// 007d223d  50                   push eax
// 007d223e  64892500000000       mov dword ptr fs:[0], esp
// 007d2245  83ec44               sub esp, 0x44
// 007d2248  57                   push edi
// 007d2249  8bf9                 mov edi, ecx
// 007d224b  817f08feffff0f       cmp dword ptr [edi + 8], 0xffffffe
// 007d2252  7259                 jb 0x7d22ad
// 007d2254  683cb6a500           push 0xa5b63c
// 007d2259  8d4c2408             lea ecx, [esp + 8]
// 007d225d  ff15c404a400         call dword ptr [0xa404c4]
// 007d2263  8d4c2420             lea ecx, [esp + 0x20]
// 007d2267  c744245000000000     mov dword ptr [esp + 0x50], 0
// 007d226f  ff15600aa400         call dword ptr [0xa40a60]
// 007d2275  8d442404             lea eax, [esp + 4]
// 007d2279  50                   push eax
// 007d227a  8d4c2430             lea ecx, [esp + 0x30]
// 007d227e  c644245401           mov byte ptr [esp + 0x54], 1
// 007d2283  c7442424c0b5a500     mov dword ptr [esp + 0x24], 0xa5b5c0
// 007d228b  ff15c804a400         call dword ptr [0xa404c8]
// 007d2291  687073b800           push 0xb87370
// 007d2296  8d4c2424             lea ecx, [esp + 0x24]
// 007d229a  51                   push ecx
// 007d229b  c644245800           mov byte ptr [esp + 0x58], 0
// 007d22a0  c7442428ccb5a500     mov dword ptr [esp + 0x28], 0xa5b5cc
// 007d22a8  e8ff8d0300           call 0x80b0ac
// 007d22ad  8b542464             mov edx, dword ptr [esp + 0x64]
// 007d22b1  8b4704               mov eax, dword ptr [edi + 4]
// 007d22b4  53                   push ebx
// 007d22b5  55                   push ebp
// 007d22b6  56                   push esi
// 007d22b7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007d22bb  6a00                 push 0
// 007d22bd  52                   push edx
// 007d22be  50                   push eax
// 007d22bf  56                   push esi
// 007d22c0  50                   push eax
// 007d22c1  e89af9ffff           call 0x7d1c60
// 007d22c6  8be8                 mov ebp, eax
// 007d22c8  8b4704               mov eax, dword ptr [edi + 4]
// 007d22cb  bb01000000           mov ebx, 1
// 007d22d0  015f08               add dword ptr [edi + 8], ebx
// 007d22d3  3bf0                 cmp esi, eax
// 007d22d5  7510                 jne 0x7d22e7
// 007d22d7  896804               mov dword ptr [eax + 4], ebp
// 007d22da  8b4704               mov eax, dword ptr [edi + 4]
// 007d22dd  8928                 mov dword ptr [eax], ebp
// 007d22df  8b4f04               mov ecx, dword ptr [edi + 4]
// 007d22e2  896908               mov dword ptr [ecx + 8], ebp
// 007d22e5  eb22                 jmp 0x7d2309
// 007d22e7  807c246800           cmp byte ptr [esp + 0x68], 0
// 007d22ec  740d                 je 0x7d22fb
// 007d22ee  892e                 mov dword ptr [esi], ebp
// 007d22f0  8b4704               mov eax, dword ptr [edi + 4]
// 007d22f3  3b30                 cmp esi, dword ptr [eax]
// 007d22f5  7512                 jne 0x7d2309
// 007d22f7  8928                 mov dword ptr [eax], ebp
// 007d22f9  eb0e                 jmp 0x7d2309
// 007d22fb  896e08               mov dword ptr [esi + 8], ebp
// 007d22fe  8b4704               mov eax, dword ptr [edi + 4]
// 007d2301  3b7008               cmp esi, dword ptr [eax + 8]
// 007d2304  7503                 jne 0x7d2309
// 007d2306  896808               mov dword ptr [eax + 8], ebp
// 007d2309  8b5504               mov edx, dword ptr [ebp + 4]
// 007d230c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 007d2310  8d4504               lea eax, [ebp + 4]
// 007d2313  8bf5                 mov esi, ebp
// 007d2315  0f85ea000000         jne 0x7d2405
// 007d231b  eb03                 jmp 0x7d2320
// 007d231d  8d4900               lea ecx, [ecx]
// 007d2320  8b08                 mov ecx, dword ptr [eax]
// 007d2322  8b5104               mov edx, dword ptr [ecx + 4]
// 007d2325  3b0a                 cmp ecx, dword ptr [edx]
// 007d2327  7551                 jne 0x7d237a
// 007d2329  8b5208               mov edx, dword ptr [edx + 8]
// 007d232c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 007d2330  7519                 jne 0x7d234b
// 007d2332  88591c               mov byte ptr [ecx + 0x1c], bl
// 007d2335  885a1c               mov byte ptr [edx + 0x1c], bl
// 007d2338  8b10                 mov edx, dword ptr [eax]
// 007d233a  8b4a04               mov ecx, dword ptr [edx + 4]
// 007d233d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 007d2341  8b10                 mov edx, dword ptr [eax]
// 007d2343  8b7204               mov esi, dword ptr [edx + 4]
// 007d2346  e9aa000000           jmp 0x7d23f5
// 007d234b  3b7108               cmp esi, dword ptr [ecx + 8]
// 007d234e  750a                 jne 0x7d235a
// 007d2350  8bf1                 mov esi, ecx
// 007d2352  56                   push esi
// 007d2353  8bcf                 mov ecx, edi
// 007d2355  e84608f5ff           call 0x722ba0
// 007d235a  8b4604               mov eax, dword ptr [esi + 4]
// 007d235d  88581c               mov byte ptr [eax + 0x1c], bl
// 007d2360  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d2363  8b5104               mov edx, dword ptr [ecx + 4]
// 007d2366  c6421c00             mov byte ptr [edx + 0x1c], 0
// 007d236a  8b4604               mov eax, dword ptr [esi + 4]
// 007d236d  8b4804               mov ecx, dword ptr [eax + 4]
// 007d2370  51                   push ecx
// 007d2371  8bcf                 mov ecx, edi
// 007d2373  e84845f6ff           call 0x7368c0
// 007d2378  eb7b                 jmp 0x7d23f5
// 007d237a  8b12                 mov edx, dword ptr [edx]
// 007d237c  807a1c00             cmp byte ptr [edx + 0x1c], 0
// 007d2380  7516                 jne 0x7d2398
// 007d2382  88591c               mov byte ptr [ecx + 0x1c], bl
// 007d2385  885a1c               mov byte ptr [edx + 0x1c], bl
// 007d2388  8b10                 mov edx, dword ptr [eax]
// 007d238a  8b4a04               mov ecx, dword ptr [edx + 4]
// 007d238d  c6411c00             mov byte ptr [ecx + 0x1c], 0
// 007d2391  8b10                 mov edx, dword ptr [eax]
// 007d2393  8b7204               mov esi, dword ptr [edx + 4]
// 007d2396  eb5d                 jmp 0x7d23f5
// 007d2398  3b31                 cmp esi, dword ptr [ecx]
// 007d239a  750a                 jne 0x7d23a6
// 007d239c  8bf1                 mov esi, ecx
// 007d239e  56                   push esi
// 007d239f  8bcf                 mov ecx, edi
// 007d23a1  e81a45f6ff           call 0x7368c0
// 007d23a6  8b4604               mov eax, dword ptr [esi + 4]
// 007d23a9  88581c               mov byte ptr [eax + 0x1c], bl
// 007d23ac  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d23af  8b5104               mov edx, dword ptr [ecx + 4]
// 007d23b2  c6421c00             mov byte ptr [edx + 0x1c], 0
// 007d23b6  8b4604               mov eax, dword ptr [esi + 4]
// 007d23b9  8b4004               mov eax, dword ptr [eax + 4]
// 007d23bc  8b4808               mov ecx, dword ptr [eax + 8]
// 007d23bf  8b11                 mov edx, dword ptr [ecx]
// 007d23c1  895008               mov dword ptr [eax + 8], edx
// 007d23c4  8b11                 mov edx, dword ptr [ecx]
// 007d23c6  807a1d00             cmp byte ptr [edx + 0x1d], 0
// 007d23ca  7503                 jne 0x7d23cf
// 007d23cc  894204               mov dword ptr [edx + 4], eax
// 007d23cf  8b5004               mov edx, dword ptr [eax + 4]
// 007d23d2  895104               mov dword ptr [ecx + 4], edx
// 007d23d5  8b5704               mov edx, dword ptr [edi + 4]
// 007d23d8  3b4204               cmp eax, dword ptr [edx + 4]
// 007d23db  7505                 jne 0x7d23e2
// 007d23dd  894a04               mov dword ptr [edx + 4], ecx
// 007d23e0  eb0e                 jmp 0x7d23f0
// 007d23e2  8b5004               mov edx, dword ptr [eax + 4]
// 007d23e5  3b02                 cmp eax, dword ptr [edx]
// 007d23e7  7504                 jne 0x7d23ed
// 007d23e9  890a                 mov dword ptr [edx], ecx
// 007d23eb  eb03                 jmp 0x7d23f0
// 007d23ed  894a08               mov dword ptr [edx + 8], ecx
// 007d23f0  8901                 mov dword ptr [ecx], eax
// 007d23f2  894804               mov dword ptr [eax + 4], ecx
// 007d23f5  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d23f8  80791c00             cmp byte ptr [ecx + 0x1c], 0
// 007d23fc  8d4604               lea eax, [esi + 4]
// 007d23ff  0f841bffffff         je 0x7d2320
// 007d2405  8b5704               mov edx, dword ptr [edi + 4]
// 007d2408  8b4204               mov eax, dword ptr [edx + 4]
// 007d240b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007d240f  88581c               mov byte ptr [eax + 0x1c], bl
// 007d2412  8b442464             mov eax, dword ptr [esp + 0x64]
// 007d2416  5e                   pop esi
// 007d2417  8928                 mov dword ptr [eax], ebp
// 007d2419  5d                   pop ebp
// 007d241a  5b                   pop ebx
// 007d241b  5f                   pop edi
// 007d241c  64890d00000000       mov dword ptr fs:[0], ecx
// 007d2423  83c450               add esp, 0x50
// 007d2426  c21000               ret 0x10
// copied from an identical function in another client (function ?_Insert@?$_Tree@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@std@@IAE?AViterator@12@_NPAU_Node@?$_Tree_nod@V?$_Tmap_traits@HUValue@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUValue@@@std@@@3@$0A@@std@@@2@ABU?$pair@$$CBHUValue@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
#define _SECURE_SCL 0
#include <map>

// pair<const int, Value> is isnil(0x1d) - 0xd bytes.
struct Value { int words[3]; };
template class std::_Tree<std::_Tmap_traits<int, Value, std::less<int>,
    std::allocator<std::pair<const int, Value> >, false> >;