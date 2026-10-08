// from server: 100% by auto
// roc 2008-06 0051fbb0  unit: seg_00510000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051fbb0
//
// 0051fbb0  51                   push ecx
// 0051fbb1  8b442408             mov eax, dword ptr [esp + 8]
// 0051fbb5  53                   push ebx
// 0051fbb6  55                   push ebp
// 0051fbb7  56                   push esi
// 0051fbb8  57                   push edi
// 0051fbb9  33f6                 xor esi, esi
// 0051fbbb  33ff                 xor edi, edi
// 0051fbbd  89742410             mov dword ptr [esp + 0x10], esi
// 0051fbc1  85c0                 test eax, eax
// 0051fbc3  7402                 je 0x51fbc7
// 0051fbc5  8b30                 mov esi, dword ptr [eax]
// 0051fbc7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051fbcb  85c0                 test eax, eax
// 0051fbcd  7402                 je 0x51fbd1
// 0051fbcf  8b38                 mov edi, dword ptr [eax]
// 0051fbd1  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051fbd5  85c0                 test eax, eax
// 0051fbd7  7406                 je 0x51fbdf
// 0051fbd9  8b00                 mov eax, dword ptr [eax]
// 0051fbdb  89442410             mov dword ptr [esp + 0x10], eax
// 0051fbdf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fbe3  8b9e4c020000         mov ebx, dword ptr [esi + 0x24c]
// 0051fbe9  8bae44020000         mov ebp, dword ptr [esi + 0x244]
// 0051fbef  51                   push ecx
// 0051fbf0  57                   push edi
// 0051fbf1  56                   push esi
// 0051fbf2  e8f9fcffff           call 0x51f8f0
// 0051fbf7  83c40c               add esp, 0xc
// 0051fbfa  85ff                 test edi, edi
// 0051fbfc  7423                 je 0x51fc21
// 0051fbfe  6aff                 push -1
// 0051fc00  6800400000           push 0x4000
// 0051fc05  57                   push edi
// 0051fc06  56                   push esi
// 0051fc07  e8c4e1ffff           call 0x51ddd0
// 0051fc0c  55                   push ebp
// 0051fc0d  53                   push ebx
// 0051fc0e  57                   push edi
// 0051fc0f  e8aca70000           call 0x52a3c0
// 0051fc14  8b542438             mov edx, dword ptr [esp + 0x38]
// 0051fc18  83c41c               add esp, 0x1c
// 0051fc1b  c70200000000         mov dword ptr [edx], 0
// 0051fc21  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0051fc25  85ff                 test edi, edi
// 0051fc27  7423                 je 0x51fc4c
// 0051fc29  6aff                 push -1
// 0051fc2b  6800400000           push 0x4000
// 0051fc30  57                   push edi
// 0051fc31  56                   push esi
// 0051fc32  e899e1ffff           call 0x51ddd0
// 0051fc37  55                   push ebp
// 0051fc38  53                   push ebx
// 0051fc39  57                   push edi
// 0051fc3a  e881a70000           call 0x52a3c0
// 0051fc3f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0051fc43  83c41c               add esp, 0x1c
// 0051fc46  c70000000000         mov dword ptr [eax], 0
// 0051fc4c  55                   push ebp
// 0051fc4d  53                   push ebx
// 0051fc4e  56                   push esi
// 0051fc4f  e86ca70000           call 0x52a3c0
// 0051fc54  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051fc58  83c40c               add esp, 0xc
// 0051fc5b  5f                   pop edi
// 0051fc5c  5e                   pop esi
// 0051fc5d  5d                   pop ebp
// 0051fc5e  c70100000000         mov dword ptr [ecx], 0
// 0051fc64  5b                   pop ebx
// 0051fc65  59                   pop ecx
// 0051fc66  c3                   ret 
// library libpng-1.2.5/pngread.c (function _png_destroy_read_struct)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngread.c
