// roc 2009-06 005bf580  unit: RBX::AggregatingSceneManager::Bucket  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bf580
//
// 005bf580  55                   push ebp
// 005bf581  8bec                 mov ebp, esp
// 005bf583  83ec1c               sub esp, 0x1c
// 005bf586  56                   push esi
// 005bf587  894de4               mov dword ptr [ebp - 0x1c], ecx
// 005bf58a  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005bf58d  e80e6b0000           call 0x5c60a0
// 005bf592  8bf0                 mov esi, eax
// 005bf594  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005bf597  e8640b0000           call 0x5c0100
// 005bf59c  3bf0                 cmp esi, eax
// 005bf59e  731d                 jae 0x5bf5bd
// 005bf5a0  8b4508               mov eax, dword ptr [ebp + 8]
// 005bf5a3  50                   push eax
// 005bf5a4  6a01                 push 1
// 005bf5a6  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005bf5a9  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005bf5ac  52                   push edx
// 005bf5ad  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005bf5b0  e8ab0c0000           call 0x5c0260
// 005bf5b5  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005bf5b8  894110               mov dword ptr [ecx + 0x10], eax
// 005bf5bb  eb2f                 jmp 0x5bf5ec
// 005bf5bd  8d55f0               lea edx, [ebp - 0x10]
// 005bf5c0  52                   push edx
// 005bf5c1  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005bf5c4  e8d7590000           call 0x5c4fa0
// 005bf5c9  8b08                 mov ecx, dword ptr [eax]
// 005bf5cb  8b5004               mov edx, dword ptr [eax + 4]
// 005bf5ce  894df8               mov dword ptr [ebp - 8], ecx
// 005bf5d1  8955fc               mov dword ptr [ebp - 4], edx
// 005bf5d4  8b4508               mov eax, dword ptr [ebp + 8]
// 005bf5d7  50                   push eax
// 005bf5d8  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bf5db  51                   push ecx
// 005bf5dc  8b55f8               mov edx, dword ptr [ebp - 8]
// 005bf5df  52                   push edx
// 005bf5e0  8d45e8               lea eax, [ebp - 0x18]
// 005bf5e3  50                   push eax
// 005bf5e4  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 005bf5e7  e8540b0000           call 0x5c0140
// 005bf5ec  5e                   pop esi
// 005bf5ed  8be5                 mov esp, ebp
// 005bf5ef  5d                   pop ebp
// 005bf5f0  c20400               ret 4
// copied from an identical function in another client (function ?push_back@?$vector@VVertex@?$ConvexClipper@M@Wml@@V?$allocator@VVertex@?$ConvexClipper@M@Wml@@@std@@@std@@QAEXABVVertex@?$ConvexClipper@M@Wml@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS- /MD
// roc-lib: wildmagic-2-core Geometry/WmlConvexClipper.cpp