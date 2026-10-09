// roc 2007-03 006e0070  unit: seg_006e0000  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e0070
//
// 006e0070  8b442414             mov eax, dword ptr [esp + 0x14]
// 006e0074  85c0                 test eax, eax
// 006e0076  56                   push esi
// 006e0077  7504                 jne 0x6e007d
// 006e0079  33f6                 xor esi, esi
// 006e007b  eb03                 jmp 0x6e0080
// 006e007d  8b7004               mov esi, dword ptr [eax + 4]
// 006e0080  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e0084  85c0                 test eax, eax
// 006e0086  7504                 jne 0x6e008c
// 006e0088  33d2                 xor edx, edx
// 006e008a  eb03                 jmp 0x6e008f
// 006e008c  8b5004               mov edx, dword ptr [eax + 4]
// 006e008f  8b4104               mov eax, dword ptr [ecx + 4]
// 006e0092  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e0096  83c904               or ecx, 4
// 006e0099  51                   push ecx
// 006e009a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e009e  51                   push ecx
// 006e009f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e00a3  51                   push ecx
// 006e00a4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e00a8  51                   push ecx
// 006e00a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e00ad  51                   push ecx
// 006e00ae  6a00                 push 0
// 006e00b0  56                   push esi
// 006e00b1  6a00                 push 0
// 006e00b3  52                   push edx
// 006e00b4  50                   push eax
// 006e00b5  ff15f4ee7700         call dword ptr [0x77eef4]
// 006e00bb  5e                   pop esi
// 006e00bc  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?DrawState@CDC@@QAEHVCPoint@@VCSize@@PAVCBitmap@@IPAVCBrush@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
