// roc 2007-03 0054be80  unit: seg_00540000  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054be80
//
// 0054be80  55                   push ebp
// 0054be81  8bec                 mov ebp, esp
// 0054be83  6aff                 push -1
// 0054be85  6830337500           push 0x753330
// 0054be8a  64a100000000         mov eax, dword ptr fs:[0]
// 0054be90  50                   push eax
// 0054be91  64892500000000       mov dword ptr fs:[0], esp
// 0054be98  83ec08               sub esp, 8
// 0054be9b  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0054be9e  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0054bea1  8b00                 mov eax, dword ptr [eax]
// 0054bea3  8b12                 mov edx, dword ptr [edx]
// 0054bea5  53                   push ebx
// 0054bea6  56                   push esi
// 0054bea7  2bc2                 sub eax, edx
// 0054bea9  85c0                 test eax, eax
// 0054beab  57                   push edi
// 0054beac  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054beaf  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054beb6  7e0f                 jle 0x54bec7
// 0054beb8  8b7148               mov esi, dword ptr [ecx + 0x48]
// 0054bebb  50                   push eax
// 0054bebc  52                   push edx
// 0054bebd  56                   push esi
// 0054bebe  83c140               add ecx, 0x40
// 0054bec1  51                   push ecx
// 0054bec2  e809ecffff           call 0x54aad0
// 0054bec7  8b4948               mov ecx, dword ptr [ecx + 0x48]
// 0054beca  85c9                 test ecx, ecx
// 0054becc  7406                 je 0x54bed4
// 0054bece  ff1558e77700         call dword ptr [0x77e758]
// 0054bed4  33c0                 xor eax, eax
// 0054bed6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054bed9  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bee0  5f                   pop edi
// 0054bee1  5e                   pop esi
// 0054bee2  5b                   pop ebx
// 0054bee3  8be5                 mov esp, ebp
// 0054bee5  5d                   pop ebp
// 0054bee6  c3                   ret 
// 0054bee7  b8edbe5400           mov eax, 0x54beed
// 0054beec  c3                   ret 
// 0054beed  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054bef0  5f                   pop edi
// 0054bef1  5e                   pop esi
// 0054bef2  83c8ff               or eax, 0xffffffff
// 0054bef5  64890d00000000       mov dword ptr fs:[0], ecx
// 0054befc  5b                   pop ebx
// 0054befd  8be5                 mov esp, ebp
// 0054beff  5d                   pop ebp
// 0054bf00  c3                   ret 
// copied from an identical function in another client (function ?sync@?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp