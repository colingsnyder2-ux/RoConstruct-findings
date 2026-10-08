// roc 2009-06 0046cf60  unit: DxUserInput  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046cf60
//
// 0046cf60  6aff                 push -1
// 0046cf62  6888348500           push 0x853488
// 0046cf67  64a100000000         mov eax, dword ptr fs:[0]
// 0046cf6d  50                   push eax
// 0046cf6e  64892500000000       mov dword ptr fs:[0], esp
// 0046cf75  83ec7c               sub esp, 0x7c
// 0046cf78  56                   push esi
// 0046cf79  c744240400000000     mov dword ptr [esp + 4], 0
// 0046cf81  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0046cf84  8b5108               mov edx, dword ptr [ecx + 8]
// 0046cf87  50                   push eax
// 0046cf88  8b4104               mov eax, dword ptr [ecx + 4]
// 0046cf8b  52                   push edx
// 0046cf8c  8b11                 mov edx, dword ptr [ecx]
// 0046cf8e  50                   push eax
// 0046cf8f  52                   push edx
// 0046cf90  83ec44               sub esp, 0x44
// 0046cf93  8d4110               lea eax, [ecx + 0x10]
// 0046cf96  8bcc                 mov ecx, esp
// 0046cf98  8964245c             mov dword ptr [esp + 0x5c], esp
// 0046cf9c  50                   push eax
// 0046cf9d  e8eef5ffff           call 0x46c590
// 0046cfa2  8d4c2460             lea ecx, [esp + 0x60]
// 0046cfa6  e805ffffff           call 0x46ceb0
// 0046cfab  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 0046cfb2  50                   push eax
// 0046cfb3  8bce                 mov ecx, esi
// 0046cfb5  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 0046cfc0  e8dbf7ffff           call 0x46c7a0
// 0046cfc5  c744240401000000     mov dword ptr [esp + 4], 1
// 0046cfcd  8d4c2464             lea ecx, [esp + 0x64]
// 0046cfd1  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0046cfdc  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046cfe2  8d4c2428             lea ecx, [esp + 0x28]
// 0046cfe6  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 0046cff1  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046cff7  8d4c240c             lea ecx, [esp + 0xc]
// 0046cffb  c684248800000000     mov byte ptr [esp + 0x88], 0
// 0046d003  ff15c4e48900         call dword ptr [0x89e4c4]
// 0046d009  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0046d010  8bc6                 mov eax, esi
// 0046d012  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d019  5e                   pop esi
// 0046d01a  81c488000000         add esp, 0x88
// 0046d020  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?begin@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
