// roc 2007-03 0054bcb0  unit: seg_00540000  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054bcb0
//
// 0054bcb0  55                   push ebp
// 0054bcb1  8bec                 mov ebp, esp
// 0054bcb3  6aff                 push -1
// 0054bcb5  68d8327500           push 0x7532d8
// 0054bcba  64a100000000         mov eax, dword ptr fs:[0]
// 0054bcc0  50                   push eax
// 0054bcc1  64892500000000       mov dword ptr fs:[0], esp
// 0054bcc8  83ec08               sub esp, 8
// 0054bccb  53                   push ebx
// 0054bccc  56                   push esi
// 0054bccd  8bf1                 mov esi, ecx
// 0054bccf  57                   push edi
// 0054bcd0  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054bcd3  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054bcd6  c706647a7a00         mov dword ptr [esi], 0x7a7a64
// 0054bcdc  b001                 mov al, 1
// 0054bcde  844658               test byte ptr [esi + 0x58], al
// 0054bce1  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054bce8  8845fc               mov byte ptr [ebp - 4], al
// 0054bceb  741c                 je 0x54bd09
// 0054bced  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0054bcf0  c1e904               shr ecx, 4
// 0054bcf3  84c8                 test al, cl
// 0054bcf5  7412                 je 0x54bd09
// 0054bcf7  8bce                 mov ecx, esi
// 0054bcf9  e832ffffff           call 0x54bc30
// 0054bcfe  eb09                 jmp 0x54bd09
// 0054bd00  b806bd5400           mov eax, 0x54bd06
// 0054bd05  c3                   ret 
// 0054bd06  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0054bd09  8bce                 mov ecx, esi
// 0054bd0b  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054bd12  e849f6ffff           call 0x54b360
// 0054bd17  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054bd1a  5f                   pop edi
// 0054bd1b  5e                   pop esi
// 0054bd1c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054bd23  5b                   pop ebx
// 0054bd24  8be5                 mov esp, ebp
// 0054bd26  5d                   pop ebp
// 0054bd27  c3                   ret 
// copied from an identical function in another client (function ??1?$stream_buffer@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@iostreams@boost@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp