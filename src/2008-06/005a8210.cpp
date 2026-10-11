// roc 2008-06 005a8210  unit: RBX::Log  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8210
//
// 005a8210  56                   push esi
// 005a8211  57                   push edi
// 005a8212  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a8216  8b07                 mov eax, dword ptr [edi]
// 005a8218  8bf1                 mov esi, ecx
// 005a821a  8b0e                 mov ecx, dword ptr [esi]
// 005a821c  3bc8                 cmp ecx, eax
// 005a821e  741d                 je 0x5a823d
// 005a8220  83c004               add eax, 4
// 005a8223  50                   push eax
// 005a8224  83c104               add ecx, 4
// 005a8227  ff1524248000         call dword ptr [0x802424]
// 005a822d  83f8ff               cmp eax, -1
// 005a8230  741d                 je 0x5a824f
// 005a8232  85c0                 test eax, eax
// 005a8234  7407                 je 0x5a823d
// 005a8236  5f                   pop edi
// 005a8237  32c0                 xor al, al
// 005a8239  5e                   pop esi
// 005a823a  c20400               ret 4
// 005a823d  8b4604               mov eax, dword ptr [esi + 4]
// 005a8240  33c9                 xor ecx, ecx
// 005a8242  3b4704               cmp eax, dword ptr [edi + 4]
// 005a8245  5f                   pop edi
// 005a8246  0f9cc1               setl cl
// 005a8249  8ac1                 mov al, cl
// 005a824b  5e                   pop esi
// 005a824c  c20400               ret 4
// 005a824f  5f                   pop edi
// 005a8250  b001                 mov al, 1
// 005a8252  5e                   pop esi
// 005a8253  c20400               ret 4
// library openrbx-client/App\util\Guid.cpp (function ??MData@Guid@RBX@@QBE_NABU012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Guid.cpp
