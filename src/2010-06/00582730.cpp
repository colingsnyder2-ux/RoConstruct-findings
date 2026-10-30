// roc 2010-06 00582730  unit: seg_00580000  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582730
//
// 00582730  56                   push esi
// 00582731  8b742408             mov esi, dword ptr [esp + 8]
// 00582735  8b4604               mov eax, dword ptr [esi + 4]
// 00582738  8b08                 mov ecx, dword ptr [eax]
// 0058273a  57                   push edi
// 0058273b  6a18                 push 0x18
// 0058273d  6a01                 push 1
// 0058273f  56                   push esi
// 00582740  ffd1                 call ecx
// 00582742  8bf8                 mov edi, eax
// 00582744  89bea4010000         mov dword ptr [esi + 0x1a4], edi
// 0058274a  c707b0454500         mov dword ptr [edi], 0x4545b0
// 00582750  8b4628               mov eax, dword ptr [esi + 0x28]
// 00582753  48                   dec eax
// 00582754  83c40c               add esp, 0xc
// 00582757  83f804               cmp eax, 4
// 0058275a  771f                 ja 0x58277b
// 0058275c  ff2485a0285800       jmp dword ptr [eax*4 + 0x5828a0]
// 00582763  837e2401             cmp dword ptr [esi + 0x24], 1
// 00582767  742b                 je 0x582794
// 00582769  eb16                 jmp 0x582781
// 0058276b  837e2403             cmp dword ptr [esi + 0x24], 3
// 0058276f  7423                 je 0x582794
// 00582771  eb0e                 jmp 0x582781
// 00582773  837e2404             cmp dword ptr [esi + 0x24], 4
// 00582777  741b                 je 0x582794
// 00582779  eb06                 jmp 0x582781
// 0058277b  837e2401             cmp dword ptr [esi + 0x24], 1
// 0058277f  7d13                 jge 0x582794
// 00582781  8b16                 mov edx, dword ptr [esi]
// 00582783  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0058278a  8b06                 mov eax, dword ptr [esi]
// 0058278c  8b08                 mov ecx, dword ptr [eax]
// 0058278e  56                   push esi
// 0058278f  ffd1                 call ecx
// 00582791  83c404               add esp, 4
// 00582794  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00582797  8bc1                 mov eax, ecx
// 00582799  ba01000000           mov edx, 1
// 0058279e  2bc2                 sub eax, edx
// 005827a0  0f8491000000         je 0x582837
// 005827a6  2bc2                 sub eax, edx
// 005827a8  7453                 je 0x5827fd
// 005827aa  83e802               sub eax, 2
// 005827ad  741b                 je 0x5827ca
// 005827af  3b4e28               cmp ecx, dword ptr [esi + 0x28]
// 005827b2  0f858e000000         jne 0x582846
// 005827b8  8b5624               mov edx, dword ptr [esi + 0x24]
// 005827bb  895664               mov dword ptr [esi + 0x64], edx
// 005827be  c74704c0245800       mov dword ptr [edi + 4], 0x5824c0
// 005827c5  e9bb000000           jmp 0x582885
// 005827ca  8b4628               mov eax, dword ptr [esi + 0x28]
// 005827cd  c7466404000000       mov dword ptr [esi + 0x64], 4
// 005827d4  83f805               cmp eax, 5
// 005827d7  7513                 jne 0x5827ec
// 005827d9  8bc6                 mov eax, esi
// 005827db  c74704e0255800       mov dword ptr [edi + 4], 0x5825e0
// 005827e2  e8e9faffff           call 0x5822d0
// 005827e7  e999000000           jmp 0x582885
// 005827ec  83f804               cmp eax, 4
// 005827ef  7555                 jne 0x582846
// 005827f1  c74704c0245800       mov dword ptr [edi + 4], 0x5824c0
// 005827f8  e988000000           jmp 0x582885
// 005827fd  8b4628               mov eax, dword ptr [esi + 0x28]
// 00582800  c7466403000000       mov dword ptr [esi + 0x64], 3
// 00582807  83f803               cmp eax, 3
// 0058280a  7510                 jne 0x58281c
// 0058280c  8bc6                 mov eax, esi
// 0058280e  c74704a0235800       mov dword ptr [edi + 4], 0x5823a0
// 00582815  e8b6faffff           call 0x5822d0
// 0058281a  eb69                 jmp 0x582885
// 0058281c  3bc2                 cmp eax, edx
// 0058281e  7509                 jne 0x582829
// 00582820  c7470480255800       mov dword ptr [edi + 4], 0x582580
// 00582827  eb5c                 jmp 0x582885
// 00582829  83f802               cmp eax, 2
// 0058282c  7518                 jne 0x582846
// 0058282e  c74704c0245800       mov dword ptr [edi + 4], 0x5824c0
// 00582835  eb4e                 jmp 0x582885
// 00582837  8b4628               mov eax, dword ptr [esi + 0x28]
// 0058283a  895664               mov dword ptr [esi + 0x64], edx
// 0058283d  3bc2                 cmp eax, edx
// 0058283f  741a                 je 0x58285b
// 00582841  83f803               cmp eax, 3
// 00582844  7415                 je 0x58285b
// 00582846  8b06                 mov eax, dword ptr [esi]
// 00582848  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 0058284f  8b0e                 mov ecx, dword ptr [esi]
// 00582851  8b11                 mov edx, dword ptr [ecx]
// 00582853  56                   push esi
// 00582854  ffd2                 call edx
// 00582856  83c404               add esp, 4
// 00582859  eb2a                 jmp 0x582885
// 0058285b  c7470450255800       mov dword ptr [edi + 4], 0x582550
// 00582862  395624               cmp dword ptr [esi + 0x24], edx
// 00582865  8bc2                 mov eax, edx
// 00582867  7e1c                 jle 0x582885
// 00582869  b954000000           mov ecx, 0x54
// 0058286e  8bff                 mov edi, edi
// 00582870  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00582876  c6440f3000           mov byte ptr [edi + ecx + 0x30], 0
// 0058287b  03c2                 add eax, edx
// 0058287d  83c154               add ecx, 0x54
// 00582880  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00582883  7ceb                 jl 0x582870
// 00582885  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00582889  740a                 je 0x582895
// 0058288b  5f                   pop edi
// 0058288c  c7466801000000       mov dword ptr [esi + 0x68], 1
// 00582893  5e                   pop esi
// 00582894  c3                   ret 
// 00582895  8b4664               mov eax, dword ptr [esi + 0x64]
// 00582898  5f                   pop edi
// 00582899  894668               mov dword ptr [esi + 0x68], eax
// 0058289c  5e                   pop esi
// 0058289d  c3                   ret 
// 0058289e  8bff                 mov edi, edi
// 005828a0  6327                 arpl word ptr [edi], sp
// 005828a2  58                   pop eax
// 005828a3  006b27               add byte ptr [ebx + 0x27], ch
// 005828a6  58                   pop eax
// 005828a7  006b27               add byte ptr [ebx + 0x27], ch
// 005828aa  58                   pop eax
// 005828ab  007327               add byte ptr [ebx + 0x27], dh
// 005828ae  58                   pop eax
// 005828af  007327               add byte ptr [ebx + 0x27], dh
// 005828b2  58                   pop eax
// library jpeg-6b/jdcolor.c (function _jinit_color_deconverter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
