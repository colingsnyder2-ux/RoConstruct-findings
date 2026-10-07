// roc 2008-06 006fa820  unit: CXTPPropertyGrid  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fa820
//
// 006fa820  53                   push ebx
// 006fa821  8b1df82d8000         mov ebx, dword ptr [0x802df8]
// 006fa827  56                   push esi
// 006fa828  57                   push edi
// 006fa829  8bf9                 mov edi, ecx
// 006fa82b  8b4720               mov eax, dword ptr [edi + 0x20]
// 006fa82e  50                   push eax
// 006fa82f  ffd3                 call ebx
// 006fa831  50                   push eax
// 006fa832  e8a763faff           call 0x6a0bde
// 006fa837  8bf0                 mov esi, eax
// 006fa839  85f6                 test esi, esi
// 006fa83b  7453                 je 0x6fa890
// 006fa83d  8bce                 mov ecx, esi
// 006fa83f  e854170c00           call 0x7bbf98
// 006fa844  a900000100           test eax, 0x10000
// 006fa849  741c                 je 0x6fa867
// 006fa84b  8bce                 mov ecx, esi
// 006fa84d  e8b8170c00           call 0x7bc00a
// 006fa852  a900000040           test eax, 0x40000000
// 006fa857  740e                 je 0x6fa867
// 006fa859  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006fa85c  51                   push ecx
// 006fa85d  ffd3                 call ebx
// 006fa85f  50                   push eax
// 006fa860  e87963faff           call 0x6a0bde
// 006fa865  8bf0                 mov esi, eax
// 006fa867  8b542410             mov edx, dword ptr [esp + 0x10]
// 006fa86b  8b4720               mov eax, dword ptr [edi + 0x20]
// 006fa86e  52                   push edx
// 006fa86f  50                   push eax
// 006fa870  8b4620               mov eax, dword ptr [esi + 0x20]
// 006fa873  50                   push eax
// 006fa874  ff15642b8000         call dword ptr [0x802b64]
// 006fa87a  50                   push eax
// 006fa87b  e85e63faff           call 0x6a0bde
// 006fa880  8bc8                 mov ecx, eax
// 006fa882  2bc7                 sub eax, edi
// 006fa884  f7d8                 neg eax
// 006fa886  5f                   pop edi
// 006fa887  1bc0                 sbb eax, eax
// 006fa889  5e                   pop esi
// 006fa88a  23c1                 and eax, ecx
// 006fa88c  5b                   pop ebx
// 006fa88d  c20400               ret 4
// 006fa890  5f                   pop edi
// 006fa891  5e                   pop esi
// 006fa892  33c0                 xor eax, eax
// 006fa894  5b                   pop ebx
// 006fa895  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?GetNextGridTabItem@CXTPPropertyGrid@@AAEPAVCWnd@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
