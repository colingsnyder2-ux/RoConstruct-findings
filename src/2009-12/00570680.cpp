// roc 2009-12 00570680  unit: CSHA1  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00570680
//
// 00570680  56                   push esi
// 00570681  8bf1                 mov esi, ecx
// 00570683  8b4604               mov eax, dword ptr [esi + 4]
// 00570686  57                   push edi
// 00570687  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057068b  85c0                 test eax, eax
// 0057068d  7612                 jbe 0x5706a1
// 0057068f  3bf8                 cmp edi, eax
// 00570691  730e                 jae 0x5706a1
// 00570693  8b06                 mov eax, dword ptr [esi]
// 00570695  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00570699  890cb8               mov dword ptr [eax + edi*4], ecx
// 0057069c  5f                   pop edi
// 0057069d  5e                   pop esi
// 0057069e  c20c00               ret 0xc
// 005706a1  3b7e08               cmp edi, dword ptr [esi + 8]
// 005706a4  7246                 jb 0x5706ec
// 005706a6  33c9                 xor ecx, ecx
// 005706a8  8d4701               lea eax, [edi + 1]
// 005706ab  894608               mov dword ptr [esi + 8], eax
// 005706ae  ba04000000           mov edx, 4
// 005706b3  f7e2                 mul edx
// 005706b5  0f90c1               seto cl
// 005706b8  53                   push ebx
// 005706b9  f7d9                 neg ecx
// 005706bb  0bc8                 or ecx, eax
// 005706bd  51                   push ecx
// 005706be  e87f342800           call 0x7f3b42
// 005706c3  8bd8                 mov ebx, eax
// 005706c5  33c0                 xor eax, eax
// 005706c7  83c404               add esp, 4
// 005706ca  394604               cmp dword ptr [esi + 4], eax
// 005706cd  760f                 jbe 0x5706de
// 005706cf  90                   nop 
// 005706d0  8b0e                 mov ecx, dword ptr [esi]
// 005706d2  8b1481               mov edx, dword ptr [ecx + eax*4]
// 005706d5  891483               mov dword ptr [ebx + eax*4], edx
// 005706d8  40                   inc eax
// 005706d9  3b4604               cmp eax, dword ptr [esi + 4]
// 005706dc  72f2                 jb 0x5706d0
// 005706de  8b06                 mov eax, dword ptr [esi]
// 005706e0  50                   push eax
// 005706e1  e820342800           call 0x7f3b06
// 005706e6  83c404               add esp, 4
// 005706e9  891e                 mov dword ptr [esi], ebx
// 005706eb  5b                   pop ebx
// 005706ec  397e04               cmp dword ptr [esi + 4], edi
// 005706ef  7314                 jae 0x570705
// 005706f1  8b442410             mov eax, dword ptr [esp + 0x10]
// 005706f5  8b4e04               mov ecx, dword ptr [esi + 4]
// 005706f8  8b16                 mov edx, dword ptr [esi]
// 005706fa  89048a               mov dword ptr [edx + ecx*4], eax
// 005706fd  ff4604               inc dword ptr [esi + 4]
// 00570700  397e04               cmp dword ptr [esi + 4], edi
// 00570703  72f0                 jb 0x5706f5
// 00570705  8b4604               mov eax, dword ptr [esi + 4]
// 00570708  8b0e                 mov ecx, dword ptr [esi]
// 0057070a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057070e  891481               mov dword ptr [ecx + eax*4], edx
// 00570711  ff4604               inc dword ptr [esi + 4]
// 00570714  5f                   pop edi
// 00570715  5e                   pop esi
// 00570716  c20c00               ret 0xc
// library rbxgs-raknet/RPCMap.cpp (function ?Replace@?$List@PAURPCNode@@@DataStructures@@QAEXQAURPCNode@@0I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp
