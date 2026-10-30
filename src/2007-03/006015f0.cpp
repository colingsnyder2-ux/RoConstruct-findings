// roc 2007-03 006015f0  unit: seg_00600000  size: 587 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006015f0
//
// 006015f0  83ec50               sub esp, 0x50
// 006015f3  53                   push ebx
// 006015f4  55                   push ebp
// 006015f5  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 006015f9  56                   push esi
// 006015fa  8bd8                 mov ebx, eax
// 006015fc  8b03                 mov eax, dword ptr [ebx]
// 006015fe  57                   push edi
// 006015ff  50                   push eax
// 00601600  e8abf7ffff           call 0x600db0
// 00601605  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601608  8b08                 mov ecx, dword ptr [eax]
// 0060160a  33ff                 xor edi, edi
// 0060160c  83c404               add esp, 4
// 0060160f  3bcf                 cmp ecx, edi
// 00601611  8d51ff               lea edx, [ecx - 1]
// 00601614  8910                 mov dword ptr [eax], edx
// 00601616  7611                 jbe 0x601629
// 00601618  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 0060161b  8b5104               mov edx, dword ptr [ecx + 4]
// 0060161e  0fb602               movzx eax, byte ptr [edx]
// 00601621  83c201               add edx, 1
// 00601624  895104               mov dword ptr [ecx + 4], edx
// 00601627  eb0c                 jmp 0x601635
// 00601629  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0060162c  50                   push eax
// 0060162d  e86eb6ffff           call 0x5fcca0
// 00601632  83c404               add esp, 4
// 00601635  83f80a               cmp eax, 0xa
// 00601638  8903                 mov dword ptr [ebx], eax
// 0060163a  7405                 je 0x601641
// 0060163c  83f80d               cmp eax, 0xd
// 0060163f  7507                 jne 0x601648
// 00601641  8bf3                 mov esi, ebx
// 00601643  e898f9ffff           call 0x600fe0
// 00601648  8b03                 mov eax, dword ptr [ebx]
// 0060164a  8d4801               lea ecx, [eax + 1]
// 0060164d  83f95e               cmp ecx, 0x5e
// 00601650  0f87ce000000         ja 0x601724
// 00601656  0fb689dc176000       movzx ecx, byte ptr [ecx + 0x6017dc]
// 0060165d  ff248dcc176000       jmp dword ptr [ecx*4 + 0x6017cc]
// 00601664  3bef                 cmp ebp, edi
// 00601666  be740a7c00           mov esi, 0x7c0a74
// 0060166b  7505                 jne 0x601672
// 0060166d  be5c0a7c00           mov esi, 0x7c0a5c
// 00601672  8b5340               mov edx, dword ptr [ebx + 0x40]
// 00601675  6a50                 push 0x50
// 00601677  83c210               add edx, 0x10
// 0060167a  52                   push edx
// 0060167b  8d442418             lea eax, [esp + 0x18]
// 0060167f  50                   push eax
// 00601680  e8db71ffff           call 0x5f8860
// 00601685  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00601688  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0060168b  56                   push esi
// 0060168c  51                   push ecx
// 0060168d  8d542424             lea edx, [esp + 0x24]
// 00601691  52                   push edx
// 00601692  686c9a7b00           push 0x7b9a6c
// 00601697  50                   push eax
// 00601698  e8a371ffff           call 0x5f8840
// 0060169d  8b0de0097c00         mov ecx, dword ptr [0x7c09e0]
// 006016a3  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006016a6  51                   push ecx
// 006016a7  50                   push eax
// 006016a8  68140a7c00           push 0x7c0a14
// 006016ad  52                   push edx
// 006016ae  e88d71ffff           call 0x5f8840
// 006016b3  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006016b6  6a03                 push 3
// 006016b8  50                   push eax
// 006016b9  e842ebfbff           call 0x5c0200
// 006016be  83c438               add esp, 0x38
// 006016c1  eb85                 jmp 0x601648
// 006016c3  8bf3                 mov esi, ebx
// 006016c5  e8c6fdffff           call 0x601490
// 006016ca  8b742468             mov esi, dword ptr [esp + 0x68]
// 006016ce  3bc6                 cmp eax, esi
// 006016d0  0f8572ffffff         jne 0x601648
// 006016d6  8b0b                 mov ecx, dword ptr [ebx]
// 006016d8  51                   push ecx
// 006016d9  e8d2f6ffff           call 0x600db0
// 006016de  8b4338               mov eax, dword ptr [ebx + 0x38]
// 006016e1  8b08                 mov ecx, dword ptr [eax]
// 006016e3  83c404               add esp, 4
// 006016e6  3bcf                 cmp ecx, edi
// 006016e8  8d51ff               lea edx, [ecx - 1]
// 006016eb  8910                 mov dword ptr [eax], edx
// 006016ed  7679                 jbe 0x601768
// 006016ef  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 006016f2  8b5104               mov edx, dword ptr [ecx + 4]
// 006016f5  0fb602               movzx eax, byte ptr [edx]
// 006016f8  83c201               add edx, 1
// 006016fb  895104               mov dword ptr [ecx + 4], edx
// 006016fe  eb74                 jmp 0x601774
// 00601700  6a0a                 push 0xa
// 00601702  e8a9f6ffff           call 0x600db0
// 00601707  83c404               add esp, 4
// 0060170a  8bf3                 mov esi, ebx
// 0060170c  e8cff8ffff           call 0x600fe0
// 00601711  3bef                 cmp ebp, edi
// 00601713  0f852fffffff         jne 0x601648
// 00601719  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0060171c  897904               mov dword ptr [ecx + 4], edi
// 0060171f  e924ffffff           jmp 0x601648
// 00601724  3bef                 cmp ebp, edi
// 00601726  7409                 je 0x601731
// 00601728  50                   push eax
// 00601729  e882f6ffff           call 0x600db0
// 0060172e  83c404               add esp, 4
// 00601731  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601734  8b08                 mov ecx, dword ptr [eax]
// 00601736  3bcf                 cmp ecx, edi
// 00601738  8d51ff               lea edx, [ecx - 1]
// 0060173b  8910                 mov dword ptr [eax], edx
// 0060173d  7616                 jbe 0x601755
// 0060173f  8b4b38               mov ecx, dword ptr [ebx + 0x38]
// 00601742  8b5104               mov edx, dword ptr [ecx + 4]
// 00601745  0fb602               movzx eax, byte ptr [edx]
// 00601748  83c201               add edx, 1
// 0060174b  895104               mov dword ptr [ecx + 4], edx
// 0060174e  8903                 mov dword ptr [ebx], eax
// 00601750  e9f3feffff           jmp 0x601648
// 00601755  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00601758  50                   push eax
// 00601759  e842b5ffff           call 0x5fcca0
// 0060175e  83c404               add esp, 4
// 00601761  8903                 mov dword ptr [ebx], eax
// 00601763  e9e0feffff           jmp 0x601648
// 00601768  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0060176b  50                   push eax
// 0060176c  e82fb5ffff           call 0x5fcca0
// 00601771  83c404               add esp, 4
// 00601774  3bef                 cmp ebp, edi
// 00601776  8903                 mov dword ptr [ebx], eax
// 00601778  7448                 je 0x6017c2
// 0060177a  8b4b3c               mov ecx, dword ptr [ebx + 0x3c]
// 0060177d  8b4104               mov eax, dword ptr [ecx + 4]
// 00601780  8b09                 mov ecx, dword ptr [ecx]
// 00601782  8d1436               lea edx, [esi + esi]
// 00601785  2bc2                 sub eax, edx
// 00601787  83e804               sub eax, 4
// 0060178a  8d4c3102             lea ecx, [ecx + esi + 2]
// 0060178e  8b7334               mov esi, dword ptr [ebx + 0x34]
// 00601791  50                   push eax
// 00601792  51                   push ecx
// 00601793  56                   push esi
// 00601794  e887afffff           call 0x5fc720
// 00601799  8b5330               mov edx, dword ptr [ebx + 0x30]
// 0060179c  8bf8                 mov edi, eax
// 0060179e  8b4204               mov eax, dword ptr [edx + 4]
// 006017a1  57                   push edi
// 006017a2  50                   push eax
// 006017a3  56                   push esi
// 006017a4  e8c7adffff           call 0x5fc570
// 006017a9  83c418               add esp, 0x18
// 006017ac  83780800             cmp dword ptr [eax + 8], 0
// 006017b0  750d                 jne 0x6017bf
// 006017b2  c70001000000         mov dword ptr [eax], 1
// 006017b8  c7400801000000       mov dword ptr [eax + 8], 1
// 006017bf  897d00               mov dword ptr [ebp], edi
// 006017c2  5f                   pop edi
// 006017c3  5e                   pop esi
// 006017c4  5d                   pop ebp
// 006017c5  5b                   pop ebx
// 006017c6  83c450               add esp, 0x50
// 006017c9  c3                   ret 
// 006017ca  8bff                 mov edi, edi
// 006017cc  6416                 push ss
// 006017ce  60                   pushal 
// 006017cf  0000                 add byte ptr [eax], al
// 006017d1  17                   pop ss
// 006017d2  60                   pushal 
// 006017d3  00c3                 add bl, al
// 006017d5  16                   push ss
// 006017d6  60                   pushal 
// 006017d7  002417               add byte ptr [edi + edx], ah
// 006017da  60                   pushal 
// 006017db  0000                 add byte ptr [eax], al
// 006017dd  0303                 add eax, dword ptr [ebx]
// 006017df  0303                 add eax, dword ptr [ebx]
// 006017e1  0303                 add eax, dword ptr [ebx]
// 006017e3  0303                 add eax, dword ptr [ebx]
// 006017e5  0303                 add eax, dword ptr [ebx]
// 006017e7  0103                 add dword ptr [ebx], eax
// 006017e9  0301                 add eax, dword ptr [ecx]
// 006017eb  0303                 add eax, dword ptr [ebx]
// 006017ed  0303                 add eax, dword ptr [ebx]
// 006017ef  0303                 add eax, dword ptr [ebx]
// 006017f1  0303                 add eax, dword ptr [ebx]
// 006017f3  0303                 add eax, dword ptr [ebx]
// 006017f5  0303                 add eax, dword ptr [ebx]
// 006017f7  0303                 add eax, dword ptr [ebx]
// 006017f9  0303                 add eax, dword ptr [ebx]
// 006017fb  0303                 add eax, dword ptr [ebx]
// 006017fd  0303                 add eax, dword ptr [ebx]
// 006017ff  0303                 add eax, dword ptr [ebx]
// 00601801  0303                 add eax, dword ptr [ebx]
// 00601803  0303                 add eax, dword ptr [ebx]
// 00601805  0303                 add eax, dword ptr [ebx]
// 00601807  0303                 add eax, dword ptr [ebx]
// 00601809  0303                 add eax, dword ptr [ebx]
// 0060180b  0303                 add eax, dword ptr [ebx]
// 0060180d  0303                 add eax, dword ptr [ebx]
// 0060180f  0303                 add eax, dword ptr [ebx]
// 00601811  0303                 add eax, dword ptr [ebx]
// 00601813  0303                 add eax, dword ptr [ebx]
// 00601815  0303                 add eax, dword ptr [ebx]
// 00601817  0303                 add eax, dword ptr [ebx]
// 00601819  0303                 add eax, dword ptr [ebx]
// 0060181b  0303                 add eax, dword ptr [ebx]
// 0060181d  0303                 add eax, dword ptr [ebx]
// 0060181f  0303                 add eax, dword ptr [ebx]
// 00601821  0303                 add eax, dword ptr [ebx]
// 00601823  0303                 add eax, dword ptr [ebx]
// 00601825  0303                 add eax, dword ptr [ebx]
// 00601827  0303                 add eax, dword ptr [ebx]
// 00601829  0303                 add eax, dword ptr [ebx]
// 0060182b  0303                 add eax, dword ptr [ebx]
// 0060182d  0303                 add eax, dword ptr [ebx]
// 0060182f  0303                 add eax, dword ptr [ebx]
// 00601831  0303                 add eax, dword ptr [ebx]
// 00601833  0303                 add eax, dword ptr [ebx]
// 00601835  0303                 add eax, dword ptr [ebx]
// 00601837  0303                 add eax, dword ptr [ebx]
// 00601839  0302                 add eax, dword ptr [edx]
// copied from an identical function in another client (function _read_long_string)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll-nolstr llex.c