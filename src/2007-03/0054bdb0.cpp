// roc 2007-03 0054bdb0  unit: seg_00540000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054bdb0
//
// 0054bdb0  55                   push ebp
// 0054bdb1  8bec                 mov ebp, esp
// 0054bdb3  6aff                 push -1
// 0054bdb5  6818337500           push 0x753318
// 0054bdba  64a100000000         mov eax, dword ptr fs:[0]
// 0054bdc0  50                   push eax
// 0054bdc1  64892500000000       mov dword ptr fs:[0], esp
// 0054bdc8  83ec08               sub esp, 8
// 0054bdcb  53                   push ebx
// 0054bdcc  56                   push esi
// 0054bdcd  8bf1                 mov esi, ecx
// 0054bdcf  57                   push edi
// 0054bdd0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054bdd3  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054bdd6  c706c47a7a00         mov dword ptr [esi], 0x7a7ac4
// 0054bddc  b001                 mov al, 1
// 0054bdde  844658               test byte ptr [esi + 0x58], al
// 0054bde1  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054bde8  8845fc               mov byte ptr [ebp - 4], al
// 0054bdeb  741c                 je 0x54be09
// 0054bded  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0054bdf0  c1e904               shr ecx, 4
// 0054bdf3  84c8                 test al, cl
// 0054bdf5  7412                 je 0x54be09
// 0054bdf7  8bce                 mov ecx, esi
// 0054bdf9  e832feffff           call 0x54bc30
// 0054bdfe  eb09                 jmp 0x54be09
// 0054be00  b806be5400           mov eax, 0x54be06
// 0054be05  c3                   ret 
// 0054be06  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0054be09  8bce                 mov ecx, esi
// 0054be0b  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054be12  e849f5ffff           call 0x54b360
// 0054be17  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054be1a  5f                   pop edi
// 0054be1b  5e                   pop esi
// 0054be1c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054be23  5b                   pop ebx
// 0054be24  8be5                 mov esp, ebp
// 0054be26  5d                   pop ebp
// 0054be27  c3                   ret 
// copied from an identical function in another client (function ??1?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp