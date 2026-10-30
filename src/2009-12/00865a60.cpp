// roc 2009-12 00865a60  unit: CPropertyGridItemBrickColor  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865a60
//
// 00865a60  8b442404             mov eax, dword ptr [esp + 4]
// 00865a64  83ec10               sub esp, 0x10
// 00865a67  53                   push ebx
// 00865a68  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00865a6c  55                   push ebp
// 00865a6d  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00865a71  56                   push esi
// 00865a72  57                   push edi
// 00865a73  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00865a77  8bf1                 mov esi, ecx
// 00865a79  c70700000000         mov dword ptr [edi], 0
// 00865a7f  8d4c2434             lea ecx, [esp + 0x34]
// 00865a83  c70300000000         mov dword ptr [ebx], 0
// 00865a89  51                   push ecx
// 00865a8a  c7450000000000       mov dword ptr [ebp], 0
// 00865a91  8bce                 mov ecx, esi
// 00865a93  c70000000000         mov dword ptr [eax], 0
// 00865a99  e8025ffdff           call 0x83b9a0
// 00865a9e  85c0                 test eax, eax
// 00865aa0  740f                 je 0x865ab1
// 00865aa2  5f                   pop edi
// 00865aa3  5e                   pop esi
// 00865aa4  5d                   pop ebp
// 00865aa5  b857000780           mov eax, 0x80070057
// 00865aaa  5b                   pop ebx
// 00865aab  83c410               add esp, 0x10
// 00865aae  c22000               ret 0x20
// 00865ab1  8b969c000000         mov edx, dword ptr [esi + 0x9c]
// 00865ab7  85d2                 test edx, edx
// 00865ab9  7454                 je 0x865b0f
// 00865abb  837a2000             cmp dword ptr [edx + 0x20], 0
// 00865abf  744e                 je 0x865b0f
// 00865ac1  8d442410             lea eax, [esp + 0x10]
// 00865ac5  50                   push eax
// 00865ac6  8d4ee0               lea ecx, [esi - 0x20]
// 00865ac9  e852efffff           call 0x864a20
// 00865ace  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 00865ad1  50                   push eax
// 00865ad2  6898010000           push 0x198
// 00865ad7  51                   push ecx
// 00865ad8  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00865ade  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00865ae4  8d542410             lea edx, [esp + 0x10]
// 00865ae8  52                   push edx
// 00865ae9  e80ce3f8ff           call 0x7f3dfa
// 00865aee  8b442410             mov eax, dword ptr [esp + 0x10]
// 00865af2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00865af6  8b542418             mov edx, dword ptr [esp + 0x18]
// 00865afa  8901                 mov dword ptr [ecx], eax
// 00865afc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00865b00  2bd0                 sub edx, eax
// 00865b02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00865b06  894d00               mov dword ptr [ebp], ecx
// 00865b09  2bc1                 sub eax, ecx
// 00865b0b  8913                 mov dword ptr [ebx], edx
// 00865b0d  8907                 mov dword ptr [edi], eax
// 00865b0f  5f                   pop edi
// 00865b10  5e                   pop esi
// 00865b11  5d                   pop ebp
// 00865b12  33c0                 xor eax, eax
// 00865b14  5b                   pop ebx
// 00865b15  83c410               add esp, 0x10
// 00865b18  c22000               ret 0x20
// copied from an identical function in another client (function ?AccessibleLocation@CXTPPropertyGridItem@@MAEJPAJ000UtagVARIANT@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp