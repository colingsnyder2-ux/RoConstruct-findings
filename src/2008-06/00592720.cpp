// roc 2008-06 00592720  unit: ArchiveBinder  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00592720
//
// 00592720  53                   push ebx
// 00592721  55                   push ebp
// 00592722  56                   push esi
// 00592723  8bf1                 mov esi, ecx
// 00592725  8b5e50               mov ebx, dword ptr [esi + 0x50]
// 00592728  8b463c               mov eax, dword ptr [esi + 0x3c]
// 0059272b  8bcb                 mov ecx, ebx
// 0059272d  8b29                 mov ebp, dword ptr [ecx]
// 0059272f  57                   push edi
// 00592730  bf80215900           mov edi, 0x592180
// 00592735  8bc8                 mov ecx, eax
// 00592737  85c0                 test eax, eax
// 00592739  7404                 je 0x59273f
// 0059273b  8b00                 mov eax, dword ptr [eax]
// 0059273d  eb02                 jmp 0x592741
// 0059273f  33c0                 xor eax, eax
// 00592741  8b10                 mov edx, dword ptr [eax]
// 00592743  85c9                 test ecx, ecx
// 00592745  7404                 je 0x59274b
// 00592747  8b01                 mov eax, dword ptr [ecx]
// 00592749  eb02                 jmp 0x59274d
// 0059274b  33c0                 xor eax, eax
// 0059274d  8b00                 mov eax, dword ptr [eax]
// 0059274f  56                   push esi
// 00592750  57                   push edi
// 00592751  53                   push ebx
// 00592752  52                   push edx
// 00592753  55                   push ebp
// 00592754  50                   push eax
// 00592755  e896f2ffff           call 0x5919f0
// 0059275a  83c418               add esp, 0x18
// 0059275d  8bce                 mov ecx, esi
// 0059275f  8bf8                 mov edi, eax
// 00592761  e8fa15ebff           call 0x443d60
// 00592766  84c0                 test al, al
// 00592768  740f                 je 0x592779
// 0059276a  3b7e54               cmp edi, dword ptr [esi + 0x54]
// 0059276d  750a                 jne 0x592779
// 0059276f  5f                   pop edi
// 00592770  5e                   pop esi
// 00592771  5d                   pop ebp
// 00592772  b801000000           mov eax, 1
// 00592777  5b                   pop ebx
// 00592778  c3                   ret 
// 00592779  5f                   pop edi
// 0059277a  5e                   pop esi
// 0059277b  5d                   pop ebp
// 0059277c  33c0                 xor eax, eax
// 0059277e  5b                   pop ebx
// 0059277f  c3                   ret 
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveRefs@ArchiveBinder@@UAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
