// roc 2007-08 00574470  unit: RBX::PartInstance  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574470
//
// 00574470  53                   push ebx
// 00574471  55                   push ebp
// 00574472  56                   push esi
// 00574473  8bf1                 mov esi, ecx
// 00574475  8b4608               mov eax, dword ptr [esi + 8]
// 00574478  8b2e                 mov ebp, dword ptr [esi]
// 0057447a  03c0                 add eax, eax
// 0057447c  57                   push edi
// 0057447d  03c0                 add eax, eax
// 0057447f  03c0                 add eax, eax
// 00574481  6a10                 push 0x10
// 00574483  50                   push eax
// 00574484  e8d7bbf8ff           call 0x500060
// 00574489  8b4e08               mov ecx, dword ptr [esi + 8]
// 0057448c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00574490  83c408               add esp, 8
// 00574493  3bf9                 cmp edi, ecx
// 00574495  8906                 mov dword ptr [esi], eax
// 00574497  7d02                 jge 0x57449b
// 00574499  8bcf                 mov ecx, edi
// 0057449b  8d34c8               lea esi, [eax + ecx*8]
// 0057449e  3bc6                 cmp eax, esi
// 005744a0  8bcd                 mov ecx, ebp
// 005744a2  7328                 jae 0x5744cc
// 005744a4  85c0                 test eax, eax
// 005744a6  741a                 je 0x5744c2
// 005744a8  8b11                 mov edx, dword ptr [ecx]
// 005744aa  8910                 mov dword ptr [eax], edx
// 005744ac  8b5104               mov edx, dword ptr [ecx + 4]
// 005744af  85d2                 test edx, edx
// 005744b1  895004               mov dword ptr [eax + 4], edx
// 005744b4  740c                 je 0x5744c2
// 005744b6  83c204               add edx, 4
// 005744b9  bb01000000           mov ebx, 1
// 005744be  f00fc11a             lock xadd dword ptr [edx], ebx
// 005744c2  83c008               add eax, 8
// 005744c5  83c108               add ecx, 8
// 005744c8  3bc6                 cmp eax, esi
// 005744ca  72d8                 jb 0x5744a4
// 005744cc  8d44fd00             lea eax, [ebp + edi*8]
// 005744d0  3be8                 cmp ebp, eax
// 005744d2  7348                 jae 0x57451c
// 005744d4  2bc5                 sub eax, ebp
// 005744d6  83e801               sub eax, 1
// 005744d9  c1e803               shr eax, 3
// 005744dc  83c001               add eax, 1
// 005744df  8d7d04               lea edi, [ebp + 4]
// 005744e2  8bd8                 mov ebx, eax
// 005744e4  8b37                 mov esi, dword ptr [edi]
// 005744e6  85f6                 test esi, esi
// 005744e8  742a                 je 0x574514
// 005744ea  8d4604               lea eax, [esi + 4]
// 005744ed  83c9ff               or ecx, 0xffffffff
// 005744f0  f00fc108             lock xadd dword ptr [eax], ecx
// 005744f4  751e                 jne 0x574514
// 005744f6  8b16                 mov edx, dword ptr [esi]
// 005744f8  8b4204               mov eax, dword ptr [edx + 4]
// 005744fb  8bce                 mov ecx, esi
// 005744fd  ffd0                 call eax
// 005744ff  8d4e08               lea ecx, [esi + 8]
// 00574502  83caff               or edx, 0xffffffff
// 00574505  f00fc111             lock xadd dword ptr [ecx], edx
// 00574509  7509                 jne 0x574514
// 0057450b  8b06                 mov eax, dword ptr [esi]
// 0057450d  8b5008               mov edx, dword ptr [eax + 8]
// 00574510  8bce                 mov ecx, esi
// 00574512  ffd2                 call edx
// 00574514  83c708               add edi, 8
// 00574517  83eb01               sub ebx, 1
// 0057451a  75c8                 jne 0x5744e4
// 0057451c  55                   push ebp
// 0057451d  e8eeb2f8ff           call 0x4ff810
// 00574522  83c404               add esp, 4
// 00574525  5f                   pop edi
// 00574526  5e                   pop esi
// 00574527  5d                   pop ebp
// 00574528  5b                   pop ebx
// 00574529  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?realloc@?$Array@V?$shared_ptr@VPartInstance@RBX@@@boost@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
