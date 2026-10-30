// from server: 100% by auto
// roc 2008-06 006270a0  unit: seg_00620000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006270a0
//
// 006270a0  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 006270a3  7c27                 jl 0x6270cc
// 006270a5  85ff                 test edi, edi
// 006270a7  7511                 jne 0x6270ba
// 006270a9  2bc1                 sub eax, ecx
// 006270ab  50                   push eax
// 006270ac  8b4608               mov eax, dword ptr [esi + 8]
// 006270af  51                   push ecx
// 006270b0  50                   push eax
// 006270b1  e88ab1feff           call 0x612240
// 006270b6  83c40c               add esp, 0xc
// 006270b9  c3                   ret 
// 006270ba  8b4e08               mov ecx, dword ptr [esi + 8]
// 006270bd  6840518400           push 0x845140
// 006270c2  51                   push ecx
// 006270c3  e8989bfeff           call 0x610c60
// 006270c8  83c408               add esp, 8
// 006270cb  c3                   ret 
// 006270cc  53                   push ebx
// 006270cd  8b5cfe14             mov ebx, dword ptr [esi + edi*8 + 0x14]
// 006270d1  83fbff               cmp ebx, -1
// 006270d4  7525                 jne 0x6270fb
// 006270d6  8b5608               mov edx, dword ptr [esi + 8]
// 006270d9  6800528400           push 0x845200
// 006270de  52                   push edx
// 006270df  e87c9bfeff           call 0x610c60
// 006270e4  83c408               add esp, 8
// 006270e7  8b54fe10             mov edx, dword ptr [esi + edi*8 + 0x10]
// 006270eb  8b4608               mov eax, dword ptr [esi + 8]
// 006270ee  53                   push ebx
// 006270ef  52                   push edx
// 006270f0  50                   push eax
// 006270f1  e84ab1feff           call 0x612240
// 006270f6  83c40c               add esp, 0xc
// 006270f9  5b                   pop ebx
// 006270fa  c3                   ret 
// 006270fb  83fbfe               cmp ebx, -2
// 006270fe  75e7                 jne 0x6270e7
// 00627100  8b44fe10             mov eax, dword ptr [esi + edi*8 + 0x10]
// 00627104  2b06                 sub eax, dword ptr [esi]
// 00627106  8b4e08               mov ecx, dword ptr [esi + 8]
// 00627109  40                   inc eax
// 0062710a  50                   push eax
// 0062710b  51                   push ecx
// 0062710c  e80fb1feff           call 0x612220
// 00627111  83c408               add esp, 8
// 00627114  5b                   pop ebx
// 00627115  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_onecapture)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
