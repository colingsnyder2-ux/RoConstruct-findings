// from server: 100% by auto
// roc 2011-06 008f3e50  unit: CXTPScrollBase  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3e50
//
// 008f3e50  8b442408             mov eax, dword ptr [esp + 8]
// 008f3e54  56                   push esi
// 008f3e55  8b742408             mov esi, dword ptr [esp + 8]
// 008f3e59  8b5640               mov edx, dword ptr [esi + 0x40]
// 008f3e5c  3bc2                 cmp eax, edx
// 008f3e5e  7d04                 jge 0x8f3e64
// 008f3e60  8b06                 mov eax, dword ptr [esi]
// 008f3e62  5e                   pop esi
// 008f3e63  c3                   ret 
// 008f3e64  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 008f3e67  57                   push edi
// 008f3e68  8d3c11               lea edi, [ecx + edx]
// 008f3e6b  3bc7                 cmp eax, edi
// 008f3e6d  7c1c                 jl 0x8f3e8b
// 008f3e6f  8b4608               mov eax, dword ptr [esi + 8]
// 008f3e72  85c0                 test eax, eax
// 008f3e74  740b                 je 0x8f3e81
// 008f3e76  8d48ff               lea ecx, [eax - 1]
// 008f3e79  8b4604               mov eax, dword ptr [esi + 4]
// 008f3e7c  5f                   pop edi
// 008f3e7d  2bc1                 sub eax, ecx
// 008f3e7f  5e                   pop esi
// 008f3e80  c3                   ret 
// 008f3e81  8b4604               mov eax, dword ptr [esi + 4]
// 008f3e84  33c9                 xor ecx, ecx
// 008f3e86  5f                   pop edi
// 008f3e87  2bc1                 sub eax, ecx
// 008f3e89  5e                   pop esi
// 008f3e8a  c3                   ret 
// 008f3e8b  85c9                 test ecx, ecx
// 008f3e8d  7423                 je 0x8f3eb2
// 008f3e8f  8b7e08               mov edi, dword ptr [esi + 8]
// 008f3e92  85ff                 test edi, edi
// 008f3e94  7403                 je 0x8f3e99
// 008f3e96  4f                   dec edi
// 008f3e97  eb02                 jmp 0x8f3e9b
// 008f3e99  33ff                 xor edi, edi
// 008f3e9b  2bc2                 sub eax, edx
// 008f3e9d  51                   push ecx
// 008f3e9e  50                   push eax
// 008f3e9f  8b4604               mov eax, dword ptr [esi + 4]
// 008f3ea2  2b06                 sub eax, dword ptr [esi]
// 008f3ea4  2bc7                 sub eax, edi
// 008f3ea6  50                   push eax
// 008f3ea7  ff15dc01a400         call dword ptr [0xa401dc]
// 008f3ead  0306                 add eax, dword ptr [esi]
// 008f3eaf  5f                   pop edi
// 008f3eb0  5e                   pop esi
// 008f3eb1  c3                   ret 
// 008f3eb2  8b06                 mov eax, dword ptr [esi]
// 008f3eb4  5f                   pop edi
// 008f3eb5  48                   dec eax
// 008f3eb6  5e                   pop esi
// 008f3eb7  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?SBPosFromPx@@YAHPAUSCROLLBARPOSINFO@CXTPScrollBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
