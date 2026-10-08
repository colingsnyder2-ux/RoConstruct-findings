// roc 2007-08 00577170  unit: RBX::PartInstance::W4FormFactor::?$EnumDesc  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00577170
//
// 00577170  6aff                 push -1
// 00577172  6803637500           push 0x756303
// 00577177  64a100000000         mov eax, dword ptr fs:[0]
// 0057717d  50                   push eax
// 0057717e  64892500000000       mov dword ptr fs:[0], esp
// 00577185  83ec0c               sub esp, 0xc
// 00577188  53                   push ebx
// 00577189  55                   push ebp
// 0057718a  56                   push esi
// 0057718b  8bf1                 mov esi, ecx
// 0057718d  57                   push edi
// 0057718e  89742410             mov dword ptr [esp + 0x10], esi
// 00577192  c7064cac7a00         mov dword ptr [esi], 0x7aac4c
// 00577198  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0057719b  396e14               cmp dword ptr [esi + 0x14], ebp
// 0057719e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005771a4  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005771ac  7602                 jbe 0x5771b0
// 005771ae  ffd3                 call ebx
// 005771b0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005771b3  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005771b6  7602                 jbe 0x5771ba
// 005771b8  ffd3                 call ebx
// 005771ba  33db                 xor ebx, ebx
// 005771bc  3bfd                 cmp edi, ebp
// 005771be  7415                 je 0x5771d5
// 005771c0  8b0f                 mov ecx, dword ptr [edi]
// 005771c2  3bcb                 cmp ecx, ebx
// 005771c4  7408                 je 0x5771ce
// 005771c6  8b01                 mov eax, dword ptr [ecx]
// 005771c8  8b10                 mov edx, dword ptr [eax]
// 005771ca  6a01                 push 1
// 005771cc  ffd2                 call edx
// 005771ce  83c704               add edi, 4
// 005771d1  3bfd                 cmp edi, ebp
// 005771d3  75eb                 jne 0x5771c0
// 005771d5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005771db  3bc3                 cmp eax, ebx
// 005771dd  7409                 je 0x5771e8
// 005771df  50                   push eax
// 005771e0  e87d8a0b00           call 0x62fc62
// 005771e5  83c404               add esp, 4
// 005771e8  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005771ee  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005771f4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005771fa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005771fd  3bc3                 cmp eax, ebx
// 005771ff  7409                 je 0x57720a
// 00577201  50                   push eax
// 00577202  e85b8a0b00           call 0x62fc62
// 00577207  83c404               add esp, 4
// 0057720a  8d4e68               lea ecx, [esi + 0x68]
// 0057720d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00577210  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00577216  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0057721c  c644242405           mov byte ptr [esp + 0x24], 5
// 00577221  e83a30e9ff           call 0x40a260
// 00577226  8b4660               mov eax, dword ptr [esi + 0x60]
// 00577229  8b08                 mov ecx, dword ptr [eax]
// 0057722b  8d7e5c               lea edi, [esi + 0x5c]
// 0057722e  50                   push eax
// 0057722f  57                   push edi
// 00577230  51                   push ecx
// 00577231  57                   push edi
// 00577232  8d442424             lea eax, [esp + 0x24]
// 00577236  50                   push eax
// 00577237  8bcf                 mov ecx, edi
// 00577239  c644243804           mov byte ptr [esp + 0x38], 4
// 0057723e  e81dc2fcff           call 0x543460
// 00577243  8b4704               mov eax, dword ptr [edi + 4]
// 00577246  50                   push eax
// 00577247  e8168a0b00           call 0x62fc62
// 0057724c  895f04               mov dword ptr [edi + 4], ebx
// 0057724f  895f08               mov dword ptr [edi + 8], ebx
// 00577252  8b4654               mov eax, dword ptr [esi + 0x54]
// 00577255  8b08                 mov ecx, dword ptr [eax]
// 00577257  83c404               add esp, 4
// 0057725a  8d7e50               lea edi, [esi + 0x50]
// 0057725d  50                   push eax
// 0057725e  57                   push edi
// 0057725f  51                   push ecx
// 00577260  57                   push edi
// 00577261  8d4c2424             lea ecx, [esp + 0x24]
// 00577265  51                   push ecx
// 00577266  8bcf                 mov ecx, edi
// 00577268  c644243803           mov byte ptr [esp + 0x38], 3
// 0057726d  e8eec1fcff           call 0x543460
// 00577272  8b4704               mov eax, dword ptr [edi + 4]
// 00577275  50                   push eax
// 00577276  e8e7890b00           call 0x62fc62
// 0057727b  895f04               mov dword ptr [edi + 4], ebx
// 0057727e  895f08               mov dword ptr [edi + 8], ebx
// 00577281  8b4644               mov eax, dword ptr [esi + 0x44]
// 00577284  83c404               add esp, 4
// 00577287  3bc3                 cmp eax, ebx
// 00577289  7409                 je 0x577294
// 0057728b  50                   push eax
// 0057728c  e8d1890b00           call 0x62fc62
// 00577291  83c404               add esp, 4
// 00577294  8d7e34               lea edi, [esi + 0x34]
// 00577297  895e44               mov dword ptr [esi + 0x44], ebx
// 0057729a  895e48               mov dword ptr [esi + 0x48], ebx
// 0057729d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005772a0  8b4704               mov eax, dword ptr [edi + 4]
// 005772a3  8b08                 mov ecx, dword ptr [eax]
// 005772a5  50                   push eax
// 005772a6  57                   push edi
// 005772a7  51                   push ecx
// 005772a8  57                   push edi
// 005772a9  8d542424             lea edx, [esp + 0x24]
// 005772ad  52                   push edx
// 005772ae  8bcf                 mov ecx, edi
// 005772b0  c644243801           mov byte ptr [esp + 0x38], 1
// 005772b5  e876010400           call 0x5b7430
// 005772ba  8b4704               mov eax, dword ptr [edi + 4]
// 005772bd  50                   push eax
// 005772be  e89f890b00           call 0x62fc62
// 005772c3  895f04               mov dword ptr [edi + 4], ebx
// 005772c6  895f08               mov dword ptr [edi + 8], ebx
// 005772c9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005772cc  8b08                 mov ecx, dword ptr [eax]
// 005772ce  83c404               add esp, 4
// 005772d1  8d7e28               lea edi, [esi + 0x28]
// 005772d4  50                   push eax
// 005772d5  57                   push edi
// 005772d6  51                   push ecx
// 005772d7  57                   push edi
// 005772d8  8d442424             lea eax, [esp + 0x24]
// 005772dc  50                   push eax
// 005772dd  8bcf                 mov ecx, edi
// 005772df  885c2438             mov byte ptr [esp + 0x38], bl
// 005772e3  e848010400           call 0x5b7430
// 005772e8  8b4704               mov eax, dword ptr [edi + 4]
// 005772eb  50                   push eax
// 005772ec  e871890b00           call 0x62fc62
// 005772f1  83c404               add esp, 4
// 005772f4  8bce                 mov ecx, esi
// 005772f6  895f04               mov dword ptr [edi + 4], ebx
// 005772f9  895f08               mov dword ptr [edi + 8], ebx
// 005772fc  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00577304  e877ff0000           call 0x587280
// 00577309  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057730d  5f                   pop edi
// 0057730e  5e                   pop esi
// 0057730f  5d                   pop ebp
// 00577310  5b                   pop ebx
// 00577311  64890d00000000       mov dword ptr fs:[0], ecx
// 00577318  83c418               add esp, 0x18
// 0057731b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
