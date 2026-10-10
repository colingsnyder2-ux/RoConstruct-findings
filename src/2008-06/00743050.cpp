// roc 2008-06 00743050  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00743050
//
// 00743050  56                   push esi
// 00743051  8bf1                 mov esi, ecx
// 00743053  8b06                 mov eax, dword ptr [esi]
// 00743055  8b5074               mov edx, dword ptr [eax + 0x74]
// 00743058  ffd2                 call edx
// 0074305a  85c0                 test eax, eax
// 0074305c  0f846c010000         je 0x7431ce
// 00743062  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00743068  85c0                 test eax, eax
// 0074306a  0f845e010000         je 0x7431ce
// 00743070  83782000             cmp dword ptr [eax + 0x20], 0
// 00743074  0f8454010000         je 0x7431ce
// 0074307a  85c0                 test eax, eax
// 0074307c  740f                 je 0x74308d
// 0074307e  83785400             cmp dword ptr [eax + 0x54], 0
// 00743082  7409                 je 0x74308d
// 00743084  b802000000           mov eax, 2
// 00743089  5e                   pop esi
// 0074308a  c20800               ret 8
// 0074308d  53                   push ebx
// 0074308e  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00743092  83fb0d               cmp ebx, 0xd
// 00743095  0f842c010000         je 0x7431c7
// 0074309b  83fb09               cmp ebx, 9
// 0074309e  0f8423010000         je 0x7431c7
// 007430a4  83fb1b               cmp ebx, 0x1b
// 007430a7  7530                 jne 0x7430d9
// 007430a9  8d8694010000         lea eax, [esi + 0x194]
// 007430af  50                   push eax
// 007430b0  8bce                 mov ecx, esi
// 007430b2  e809ffffff           call 0x742fc0
// 007430b7  8b16                 mov edx, dword ptr [esi]
// 007430b9  8b4270               mov eax, dword ptr [edx + 0x70]
// 007430bc  6a00                 push 0
// 007430be  8bce                 mov ecx, esi
// 007430c0  ffd0                 call eax
// 007430c2  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007430c8  33c0                 xor eax, eax
// 007430ca  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 007430d1  5b                   pop ebx
// 007430d2  0f94c0               sete al
// 007430d5  5e                   pop esi
// 007430d6  c20800               ret 8
// 007430d9  57                   push edi
// 007430da  85c0                 test eax, eax
// 007430dc  743c                 je 0x74311a
// 007430de  83782000             cmp dword ptr [eax + 0x20], 0
// 007430e2  7436                 je 0x74311a
// 007430e4  8b3da42d8000         mov edi, dword ptr [0x802da4]
// 007430ea  6a12                 push 0x12
// 007430ec  ffd7                 call edi
// 007430ee  6685c0               test ax, ax
// 007430f1  7d27                 jge 0x74311a
// 007430f3  6a11                 push 0x11
// 007430f5  ffd7                 call edi
// 007430f7  6685c0               test ax, ax
// 007430fa  7c1e                 jl 0x74311a
// 007430fc  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00743102  e8091df7ff           call 0x6b4e10
// 00743107  85c0                 test eax, eax
// 00743109  740f                 je 0x74311a
// 0074310b  0fbed3               movsx edx, bl
// 0074310e  52                   push edx
// 0074310f  8bc8                 mov ecx, eax
// 00743111  e86a18f6ff           call 0x6a4980
// 00743116  85c0                 test eax, eax
// 00743118  756f                 jne 0x743189
// 0074311a  83beac01000000       cmp dword ptr [esi + 0x1ac], 0
// 00743121  7471                 je 0x743194
// 00743123  83fb26               cmp ebx, 0x26
// 00743126  7405                 je 0x74312d
// 00743128  83fb28               cmp ebx, 0x28
// 0074312b  7567                 jne 0x743194
// 0074312d  8b06                 mov eax, dword ptr [esi]
// 0074312f  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 00743135  33c9                 xor ecx, ecx
// 00743137  83fb26               cmp ebx, 0x26
// 0074313a  0f94c1               sete cl
// 0074313d  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 00743141  51                   push ecx
// 00743142  6a01                 push 1
// 00743144  8bce                 mov ecx, esi
// 00743146  ffd2                 call edx
// 00743148  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0074314e  85c0                 test eax, eax
// 00743150  7437                 je 0x743189
// 00743152  8b7820               mov edi, dword ptr [eax + 0x20]
// 00743155  ff15102e8000         call dword ptr [0x802e10]
// 0074315b  3bc7                 cmp eax, edi
// 0074315d  752a                 jne 0x743189
// 0074315f  8bb674010000         mov esi, dword ptr [esi + 0x174]
// 00743165  8b4620               mov eax, dword ptr [esi + 0x20]
// 00743168  8b3d142e8000         mov edi, dword ptr [0x802e14]
// 0074316e  6aff                 push -1
// 00743170  6a00                 push 0
// 00743172  68b1000000           push 0xb1
// 00743177  50                   push eax
// 00743178  ffd7                 call edi
// 0074317a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0074317d  6a00                 push 0
// 0074317f  6a00                 push 0
// 00743181  68b7000000           push 0xb7
// 00743186  51                   push ecx
// 00743187  ffd7                 call edi
// 00743189  5f                   pop edi
// 0074318a  5b                   pop ebx
// 0074318b  b801000000           mov eax, 1
// 00743190  5e                   pop esi
// 00743191  c20800               ret 8
// 00743194  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0074319a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0074319e  85c9                 test ecx, ecx
// 007431a0  740b                 je 0x7431ad
// 007431a2  57                   push edi
// 007431a3  53                   push ebx
// 007431a4  e8e737f6ff           call 0x6a6990
// 007431a9  85c0                 test eax, eax
// 007431ab  75dc                 jne 0x743189
// 007431ad  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 007431b3  57                   push edi
// 007431b4  53                   push ebx
// 007431b5  e81636f6ff           call 0x6a67d0
// 007431ba  f7d8                 neg eax
// 007431bc  5f                   pop edi
// 007431bd  1bc0                 sbb eax, eax
// 007431bf  5b                   pop ebx
// 007431c0  83c002               add eax, 2
// 007431c3  5e                   pop esi
// 007431c4  c20800               ret 8
// 007431c7  5b                   pop ebx
// 007431c8  33c0                 xor eax, eax
// 007431ca  5e                   pop esi
// 007431cb  c20800               ret 8
// 007431ce  33c0                 xor eax, eax
// 007431d0  5e                   pop esi
// 007431d1  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlEdit.cpp (function ?OnHookKeyDown@CXTPControlEdit@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlEdit.cpp
