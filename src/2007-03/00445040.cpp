// roc 2007-03 00445040  unit: seg_00440000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00445040
//
// 00445040  55                   push ebp
// 00445041  56                   push esi
// 00445042  8b742410             mov esi, dword ptr [esp + 0x10]
// 00445046  85f6                 test esi, esi
// 00445048  8be9                 mov ebp, ecx
// 0044504a  7406                 je 0x445052
// 0044504c  3b742418             cmp esi, dword ptr [esp + 0x18]
// 00445050  7406                 je 0x445058
// 00445052  ff1544e97700         call dword ptr [0x77e944]
// 00445058  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0044505c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00445060  3bca                 cmp ecx, edx
// 00445062  744b                 je 0x4450af
// 00445064  8b4508               mov eax, dword ptr [ebp + 8]
// 00445067  53                   push ebx
// 00445068  57                   push edi
// 00445069  c644242000           mov byte ptr [esp + 0x20], 0
// 0044506e  8b742420             mov esi, dword ptr [esp + 0x20]
// 00445072  56                   push esi
// 00445073  8b742418             mov esi, dword ptr [esp + 0x18]
// 00445077  56                   push esi
// 00445078  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0044507c  56                   push esi
// 0044507d  51                   push ecx
// 0044507e  50                   push eax
// 0044507f  52                   push edx
// 00445080  e8fbf5ffff           call 0x444680
// 00445085  8b5d08               mov ebx, dword ptr [ebp + 8]
// 00445088  8bf8                 mov edi, eax
// 0044508a  83c418               add esp, 0x18
// 0044508d  3bfb                 cmp edi, ebx
// 0044508f  8bf7                 mov esi, edi
// 00445091  740f                 je 0x4450a2
// 00445093  8bce                 mov ecx, esi
// 00445095  ff158ce77700         call dword ptr [0x77e78c]
// 0044509b  83c61c               add esi, 0x1c
// 0044509e  3bf3                 cmp esi, ebx
// 004450a0  75f1                 jne 0x445093
// 004450a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004450a6  8b742418             mov esi, dword ptr [esp + 0x18]
// 004450aa  897d08               mov dword ptr [ebp + 8], edi
// 004450ad  5f                   pop edi
// 004450ae  5b                   pop ebx
// 004450af  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004450b3  8930                 mov dword ptr [eax], esi
// 004450b5  5e                   pop esi
// 004450b6  894804               mov dword ptr [eax + 4], ecx
// 004450b9  5d                   pop ebp
// 004450ba  c21400               ret 0x14
// library rbxgs/v8datamodel\Camera.cpp (function ?erase@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE?AV?$_Vector_iterator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V32@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
