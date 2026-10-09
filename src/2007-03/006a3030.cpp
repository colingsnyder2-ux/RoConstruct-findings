// roc 2007-03 006a3030  unit: seg_006a0000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a3030
//
// 006a3030  56                   push esi
// 006a3031  57                   push edi
// 006a3032  8bf9                 mov edi, ecx
// 006a3034  8d44240c             lea eax, [esp + 0xc]
// 006a3038  50                   push eax
// 006a3039  8db7c0000000         lea esi, [edi + 0xc0]
// 006a303f  56                   push esi
// 006a3040  ff15d8ee7700         call dword ptr [0x77eed8]
// 006a3046  85c0                 test eax, eax
// 006a3048  7522                 jne 0x6a306c
// 006a304a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a304e  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a3052  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a3056  890e                 mov dword ptr [esi], ecx
// 006a3058  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a305c  895604               mov dword ptr [esi + 4], edx
// 006a305f  894608               mov dword ptr [esi + 8], eax
// 006a3062  894e0c               mov dword ptr [esi + 0xc], ecx
// 006a3065  8bcf                 mov ecx, edi
// 006a3067  e8d4ecffff           call 0x6a1d40
// 006a306c  5f                   pop edi
// 006a306d  5e                   pop esi
// 006a306e  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?SetRect@CXTPControlGallery@@MAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
