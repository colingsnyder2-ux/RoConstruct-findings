// roc 2007-03 0045cd60  unit: seg_00450000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045cd60
//
// 0045cd60  51                   push ecx
// 0045cd61  53                   push ebx
// 0045cd62  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0045cd66  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0045cd69  55                   push ebp
// 0045cd6a  56                   push esi
// 0045cd6b  8bf1                 mov esi, ecx
// 0045cd6d  8944240c             mov dword ptr [esp + 0xc], eax
// 0045cd71  83c0ff               add eax, -1
// 0045cd74  8daeb4000000         lea ebp, [esi + 0xb4]
// 0045cd7a  0f889b000000         js 0x45ce1b
// 0045cd80  3b4508               cmp eax, dword ptr [ebp + 8]
// 0045cd83  0f8d92000000         jge 0x45ce1b
// 0045cd89  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0045cd8c  8b1481               mov edx, dword ptr [ecx + eax*4]
// 0045cd8f  8b03                 mov eax, dword ptr [ebx]
// 0045cd91  8b4874               mov ecx, dword ptr [eax + 0x74]
// 0045cd94  f6411401             test byte ptr [ecx + 0x14], 1
// 0045cd98  57                   push edi
// 0045cd99  8954241c             mov dword ptr [esp + 0x1c], edx
// 0045cd9d  6a01                 push 1
// 0045cd9f  8d4e58               lea ecx, [esi + 0x58]
// 0045cda2  7407                 je 0x45cdab
// 0045cda4  e8e7d1ffff           call 0x459f90
// 0045cda9  eb05                 jmp 0x45cdb0
// 0045cdab  e800d7ffff           call 0x45a4b0
// 0045cdb0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0045cdb4  8b16                 mov edx, dword ptr [esi]
// 0045cdb6  8b9290010000         mov edx, dword ptr [edx + 0x190]
// 0045cdbc  8bf8                 mov edi, eax
// 0045cdbe  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0045cdc2  57                   push edi
// 0045cdc3  50                   push eax
// 0045cdc4  53                   push ebx
// 0045cdc5  51                   push ecx
// 0045cdc6  8bce                 mov ecx, esi
// 0045cdc8  ffd2                 call edx
// 0045cdca  3bc7                 cmp eax, edi
// 0045cdcc  8944241c             mov dword ptr [esp + 0x1c], eax
// 0045cdd0  7c0e                 jl 0x45cde0
// 0045cdd2  8b0b                 mov ecx, dword ptr [ebx]
// 0045cdd4  8b5174               mov edx, dword ptr [ecx + 0x74]
// 0045cdd7  668b4c2410           mov cx, word ptr [esp + 0x10]
// 0045cddc  66894a1e             mov word ptr [edx + 0x1e], cx
// 0045cde0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0045cde4  3b96bc000000         cmp edx, dword ptr [esi + 0xbc]
// 0045cdea  7527                 jne 0x45ce13
// 0045cdec  3bc7                 cmp eax, edi
// 0045cdee  7d23                 jge 0x45ce13
// 0045cdf0  8b7508               mov esi, dword ptr [ebp + 8]
// 0045cdf3  85f6                 test esi, esi
// 0045cdf5  7d05                 jge 0x45cdfc
// 0045cdf7  e8b2151c00           call 0x61e3ae
// 0045cdfc  6aff                 push -1
// 0045cdfe  8d4601               lea eax, [esi + 1]
// 0045ce01  50                   push eax
// 0045ce02  8bcd                 mov ecx, ebp
// 0045ce04  e817e4ffff           call 0x45b220
// 0045ce09  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0045ce0c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045ce10  8914b1               mov dword ptr [ecx + esi*4], edx
// 0045ce13  5f                   pop edi
// 0045ce14  5e                   pop esi
// 0045ce15  5d                   pop ebp
// 0045ce16  5b                   pop ebx
// 0045ce17  59                   pop ecx
// 0045ce18  c20800               ret 8
// 0045ce1b  e88e151c00           call 0x61e3ae
// copied from an identical function in another client (function ?OnPrint@CScintillaView@@MAEXPAVCDC@@PAUCPrintInfo@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp