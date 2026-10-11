// roc 2007-08 00587280  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587280
//
// 00587280  6aff                 push -1
// 00587282  68635f7500           push 0x755f63
// 00587287  64a100000000         mov eax, dword ptr fs:[0]
// 0058728d  50                   push eax
// 0058728e  64892500000000       mov dword ptr fs:[0], esp
// 00587295  51                   push ecx
// 00587296  53                   push ebx
// 00587297  8bd9                 mov ebx, ecx
// 00587299  55                   push ebp
// 0058729a  57                   push edi
// 0058729b  895c240c             mov dword ptr [esp + 0xc], ebx
// 0058729f  c70380cf7a00         mov dword ptr [ebx], 0x7acf80
// 005872a5  c744241801000000     mov dword ptr [esp + 0x18], 1
// 005872ad  e80effffff           call 0x5871c0
// 005872b2  8b7808               mov edi, dword ptr [eax + 8]
// 005872b5  397804               cmp dword ptr [eax + 4], edi
// 005872b8  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005872be  7602                 jbe 0x5872c2
// 005872c0  ffd5                 call ebp
// 005872c2  56                   push esi
// 005872c3  e8f8feffff           call 0x5871c0
// 005872c8  8b7004               mov esi, dword ptr [eax + 4]
// 005872cb  3b7008               cmp esi, dword ptr [eax + 8]
// 005872ce  7602                 jbe 0x5872d2
// 005872d0  ffd5                 call ebp
// 005872d2  3bf7                 cmp esi, edi
// 005872d4  740b                 je 0x5872e1
// 005872d6  391e                 cmp dword ptr [esi], ebx
// 005872d8  7407                 je 0x5872e1
// 005872da  83c604               add esi, 4
// 005872dd  3bf7                 cmp esi, edi
// 005872df  75f5                 jne 0x5872d6
// 005872e1  e8dafeffff           call 0x5871c0
// 005872e6  8bf8                 mov edi, eax
// 005872e8  8b4708               mov eax, dword ptr [edi + 8]
// 005872eb  8d4e04               lea ecx, [esi + 4]
// 005872ee  2bc1                 sub eax, ecx
// 005872f0  c1f802               sar eax, 2
// 005872f3  33ed                 xor ebp, ebp
// 005872f5  3bc5                 cmp eax, ebp
// 005872f7  7e11                 jle 0x58730a
// 005872f9  03c0                 add eax, eax
// 005872fb  03c0                 add eax, eax
// 005872fd  50                   push eax
// 005872fe  51                   push ecx
// 005872ff  50                   push eax
// 00587300  56                   push esi
// 00587301  ff1548e77700         call dword ptr [0x77e748]
// 00587307  83c410               add esp, 0x10
// 0058730a  834708fc             add dword ptr [edi + 8], -4
// 0058730e  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00587311  3bc5                 cmp eax, ebp
// 00587313  5e                   pop esi
// 00587314  7409                 je 0x58731f
// 00587316  50                   push eax
// 00587317  e846890a00           call 0x62fc62
// 0058731c  83c404               add esp, 4
// 0058731f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00587323  896b14               mov dword ptr [ebx + 0x14], ebp
// 00587326  896b18               mov dword ptr [ebx + 0x18], ebp
// 00587329  896b1c               mov dword ptr [ebx + 0x1c], ebp
// 0058732c  5f                   pop edi
// 0058732d  c703b4707800         mov dword ptr [ebx], 0x7870b4
// 00587333  5d                   pop ebp
// 00587334  5b                   pop ebx
// 00587335  64890d00000000       mov dword ptr fs:[0], ecx
// 0058733c  83c410               add esp, 0x10
// 0058733f  c3                   ret 
// library openrbx-client/App\reflection\reflection_property.cpp (function ??1EnumDescriptor@Reflection@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_property.cpp
