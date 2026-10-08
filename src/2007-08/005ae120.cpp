// roc 2007-08 005ae120  unit: RBX::VLighting::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ae120
//
// 005ae120  6aff                 push -1
// 005ae122  6828897500           push 0x758928
// 005ae127  64a100000000         mov eax, dword ptr fs:[0]
// 005ae12d  50                   push eax
// 005ae12e  64892500000000       mov dword ptr fs:[0], esp
// 005ae135  83ec7c               sub esp, 0x7c
// 005ae138  56                   push esi
// 005ae139  c744240400000000     mov dword ptr [esp + 4], 0
// 005ae141  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005ae144  8b5108               mov edx, dword ptr [ecx + 8]
// 005ae147  50                   push eax
// 005ae148  52                   push edx
// 005ae149  50                   push eax
// 005ae14a  52                   push edx
// 005ae14b  83ec44               sub esp, 0x44
// 005ae14e  8d4110               lea eax, [ecx + 0x10]
// 005ae151  8bcc                 mov ecx, esp
// 005ae153  8964245c             mov dword ptr [esp + 0x5c], esp
// 005ae157  50                   push eax
// 005ae158  e843ebffff           call 0x5acca0
// 005ae15d  8d4c2460             lea ecx, [esp + 0x60]
// 005ae161  e8aafaffff           call 0x5adc10
// 005ae166  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 005ae16d  50                   push eax
// 005ae16e  8bce                 mov ecx, esi
// 005ae170  c784248c00000001000000 mov dword ptr [esp + 0x8c], 1
// 005ae17b  e8b0ecffff           call 0x5ace30
// 005ae180  c744240401000000     mov dword ptr [esp + 4], 1
// 005ae188  8d4c2464             lea ecx, [esp + 0x64]
// 005ae18c  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 005ae197  ff15ace67700         call dword ptr [0x77e6ac]
// 005ae19d  8d4c2428             lea ecx, [esp + 0x28]
// 005ae1a1  c784248800000003000000 mov dword ptr [esp + 0x88], 3
// 005ae1ac  ff15ace67700         call dword ptr [0x77e6ac]
// 005ae1b2  8d4c240c             lea ecx, [esp + 0xc]
// 005ae1b6  c684248800000000     mov byte ptr [esp + 0x88], 0
// 005ae1be  ff15ace67700         call dword ptr [0x77e6ac]
// 005ae1c4  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 005ae1cb  8bc6                 mov eax, esi
// 005ae1cd  64890d00000000       mov dword ptr fs:[0], ecx
// 005ae1d4  5e                   pop esi
// 005ae1d5  81c488000000         add esp, 0x88
// 005ae1db  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?end@?$tokenizer@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@QBE?AV?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
