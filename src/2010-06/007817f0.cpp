// roc 2010-06 007817f0  unit: seg_00780000  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007817f0
//
// 007817f0  56                   push esi
// 007817f1  8b742408             mov esi, dword ptr [esp + 8]
// 007817f5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007817f8  66ff4034             inc word ptr [eax + 0x34]
// 007817fc  8b4634               mov eax, dword ptr [esi + 0x34]
// 007817ff  b9c8000000           mov ecx, 0xc8
// 00781804  57                   push edi
// 00781805  66394834             cmp word ptr [eax + 0x34], cx
// 00781809  7615                 jbe 0x781820
// 0078180b  6a00                 push 0
// 0078180d  68f830a500           push 0xa530f8
// 00781812  56                   push esi
// 00781813  e8d80c0000           call 0x7824f0
// 00781818  83c40c               add esp, 0xc
// 0078181b  eb03                 jmp 0x781820
// 0078181d  8d4900               lea ecx, [ecx]
// 00781820  8b4610               mov eax, dword ptr [esi + 0x10]
// 00781823  05fcfeffff           add eax, 0xfffffefc
// 00781828  83f81b               cmp eax, 0x1b
// 0078182b  770e                 ja 0x78183b
// 0078182d  0fb69078187800       movzx edx, byte ptr [eax + 0x781878]
// 00781834  ff249570187800       jmp dword ptr [edx*4 + 0x781870]
// 0078183b  8bc6                 mov eax, esi
// 0078183d  e85efeffff           call 0x7816a0
// 00781842  837e103b             cmp dword ptr [esi + 0x10], 0x3b
// 00781846  8bf8                 mov edi, eax
// 00781848  7509                 jne 0x781853
// 0078184a  56                   push esi
// 0078184b  e830210000           call 0x783980
// 00781850  83c404               add esp, 4
// 00781853  8b4630               mov eax, dword ptr [esi + 0x30]
// 00781856  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 0078185a  894824               mov dword ptr [eax + 0x24], ecx
// 0078185d  85ff                 test edi, edi
// 0078185f  74bf                 je 0x781820
// 00781861  8b7634               mov esi, dword ptr [esi + 0x34]
// 00781864  baffff0000           mov edx, 0xffff
// 00781869  66015634             add word ptr [esi + 0x34], dx
// 0078186d  5f                   pop edi
// 0078186e  5e                   pop esi
// 0078186f  c3                   ret 
// 00781870  61                   popal 
// 00781871  187800               sbb byte ptr [eax], bh
// 00781874  3b18                 cmp ebx, dword ptr [eax]
// 00781876  7800                 js 0x781878
// 00781878  0000                 add byte ptr [eax], al
// 0078187a  0001                 add byte ptr [ecx], al
// 0078187c  0101                 add dword ptr [ecx], eax
// 0078187e  0101                 add dword ptr [ecx], eax
// 00781880  0101                 add dword ptr [ecx], eax
// 00781882  0101                 add dword ptr [ecx], eax
// 00781884  0101                 add dword ptr [ecx], eax
// 00781886  0101                 add dword ptr [ecx], eax
// 00781888  0001                 add byte ptr [ecx], al
// 0078188a  0101                 add dword ptr [ecx], eax
// 0078188c  0101                 add dword ptr [ecx], eax
// 0078188e  0101                 add dword ptr [ecx], eax
// 00781890  0101                 add dword ptr [ecx], eax
// 00781892  0100                 add dword ptr [eax], eax
// library lua-5.1.4/lparser.c (function _chunk)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
