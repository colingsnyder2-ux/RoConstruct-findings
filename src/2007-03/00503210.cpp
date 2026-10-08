// roc 2007-03 00503210  unit: seg_00500000  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503210
//
// 00503210  8b542404             mov edx, dword ptr [esp + 4]
// 00503214  83ec08               sub esp, 8
// 00503217  53                   push ebx
// 00503218  8bd9                 mov ebx, ecx
// 0050321a  8b4308               mov eax, dword ptr [ebx + 8]
// 0050321d  b95d74d105           mov ecx, 0x5d1745d
// 00503222  2bc8                 sub ecx, eax
// 00503224  3bca                 cmp ecx, edx
// 00503226  7305                 jae 0x50322d
// 00503228  e8635af0ff           call 0x408c90
// 0050322d  8bc8                 mov ecx, eax
// 0050322f  d1e9                 shr ecx, 1
// 00503231  83f908               cmp ecx, 8
// 00503234  7305                 jae 0x50323b
// 00503236  b908000000           mov ecx, 8
// 0050323b  3bd1                 cmp edx, ecx
// 0050323d  55                   push ebp
// 0050323e  56                   push esi
// 0050323f  57                   push edi
// 00503240  7311                 jae 0x503253
// 00503242  be5d74d105           mov esi, 0x5d1745d
// 00503247  2bf1                 sub esi, ecx
// 00503249  3bc6                 cmp eax, esi
// 0050324b  7706                 ja 0x503253
// 0050324d  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00503251  8bd1                 mov edx, ecx
// 00503253  8b6b0c               mov ebp, dword ptr [ebx + 0xc]
// 00503256  03c2                 add eax, edx
// 00503258  6a00                 push 0
// 0050325a  50                   push eax
// 0050325b  e8005bf1ff           call 0x418d60
// 00503260  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00503263  89442418             mov dword ptr [esp + 0x18], eax
// 00503267  8d34ad00000000       lea esi, [ebp*4]
// 0050326e  8d3c06               lea edi, [esi + eax]
// 00503271  8b4308               mov eax, dword ptr [ebx + 8]
// 00503274  03c0                 add eax, eax
// 00503276  03c0                 add eax, eax
// 00503278  8d140e               lea edx, [esi + ecx]
// 0050327b  2bc2                 sub eax, edx
// 0050327d  03c1                 add eax, ecx
// 0050327f  83c408               add esp, 8
// 00503282  c1f802               sar eax, 2
// 00503285  8d048500000000       lea eax, [eax*4]
// 0050328c  8d0c38               lea ecx, [eax + edi]
// 0050328f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00503293  7415                 je 0x5032aa
// 00503295  50                   push eax
// 00503296  52                   push edx
// 00503297  50                   push eax
// 00503298  57                   push edi
// 00503299  8b3d78e97700         mov edi, dword ptr [0x77e978]
// 0050329f  ffd7                 call edi
// 005032a1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005032a5  83c410               add esp, 0x10
// 005032a8  eb06                 jmp 0x5032b0
// 005032aa  8b3d78e97700         mov edi, dword ptr [0x77e978]
// 005032b0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005032b4  3be8                 cmp ebp, eax
// 005032b6  7735                 ja 0x5032ed
// 005032b8  8b4304               mov eax, dword ptr [ebx + 4]
// 005032bb  c1fe02               sar esi, 2
// 005032be  8d14b500000000       lea edx, [esi*4]
// 005032c5  8d340a               lea esi, [edx + ecx]
// 005032c8  7409                 je 0x5032d3
// 005032ca  52                   push edx
// 005032cb  50                   push eax
// 005032cc  52                   push edx
// 005032cd  51                   push ecx
// 005032ce  ffd7                 call edi
// 005032d0  83c410               add esp, 0x10
// 005032d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005032d7  2bcd                 sub ecx, ebp
// 005032d9  7406                 je 0x5032e1
// 005032db  33c0                 xor eax, eax
// 005032dd  8bfe                 mov edi, esi
// 005032df  f3ab                 rep stosd dword ptr es:[edi], eax
// 005032e1  85ed                 test ebp, ebp
// 005032e3  765a                 jbe 0x50333f
// 005032e5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005032e9  8bcd                 mov ecx, ebp
// 005032eb  eb4e                 jmp 0x50333b
// 005032ed  8b5304               mov edx, dword ptr [ebx + 4]
// 005032f0  8d2c8500000000       lea ebp, [eax*4]
// 005032f7  8bc5                 mov eax, ebp
// 005032f9  c1f802               sar eax, 2
// 005032fc  740d                 je 0x50330b
// 005032fe  03c0                 add eax, eax
// 00503300  03c0                 add eax, eax
// 00503302  50                   push eax
// 00503303  52                   push edx
// 00503304  50                   push eax
// 00503305  51                   push ecx
// 00503306  ffd7                 call edi
// 00503308  83c410               add esp, 0x10
// 0050330b  8b4304               mov eax, dword ptr [ebx + 4]
// 0050330e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00503312  8d0c28               lea ecx, [eax + ebp]
// 00503315  2bf1                 sub esi, ecx
// 00503317  03f0                 add esi, eax
// 00503319  c1fe02               sar esi, 2
// 0050331c  8d04b500000000       lea eax, [esi*4]
// 00503323  8d3410               lea esi, [eax + edx]
// 00503326  7409                 je 0x503331
// 00503328  50                   push eax
// 00503329  51                   push ecx
// 0050332a  50                   push eax
// 0050332b  52                   push edx
// 0050332c  ffd7                 call edi
// 0050332e  83c410               add esp, 0x10
// 00503331  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00503335  85c9                 test ecx, ecx
// 00503337  7606                 jbe 0x50333f
// 00503339  8bfe                 mov edi, esi
// 0050333b  33c0                 xor eax, eax
// 0050333d  f3ab                 rep stosd dword ptr es:[edi], eax
// 0050333f  8b4304               mov eax, dword ptr [ebx + 4]
// 00503342  85c0                 test eax, eax
// 00503344  5f                   pop edi
// 00503345  5e                   pop esi
// 00503346  5d                   pop ebp
// 00503347  7409                 je 0x503352
// 00503349  50                   push eax
// 0050334a  e8a1ad1100           call 0x61e0f0
// 0050334f  83c404               add esp, 4
// 00503352  8b542404             mov edx, dword ptr [esp + 4]
// 00503356  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050335a  014308               add dword ptr [ebx + 8], eax
// 0050335d  895304               mov dword ptr [ebx + 4], edx
// 00503360  5b                   pop ebx
// 00503361  83c408               add esp, 8
// 00503364  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ?_Growmap@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
