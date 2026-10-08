// roc 2009-06 007997b0  unit: CXTPRibbonTheme  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007997b0
//
// 007997b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 007997b4  83ec30               sub esp, 0x30
// 007997b7  53                   push ebx
// 007997b8  55                   push ebp
// 007997b9  33db                 xor ebx, ebx
// 007997bb  56                   push esi
// 007997bc  57                   push edi
// 007997bd  3bc3                 cmp eax, ebx
// 007997bf  7433                 je 0x7997f4
// 007997c1  8b542458             mov edx, dword ptr [esp + 0x58]
// 007997c5  50                   push eax
// 007997c6  8b442460             mov eax, dword ptr [esp + 0x60]
// 007997ca  50                   push eax
// 007997cb  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007997cf  52                   push edx
// 007997d0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007997d4  50                   push eax
// 007997d5  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007997d9  52                   push edx
// 007997da  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007997de  50                   push eax
// 007997df  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007997e3  52                   push edx
// 007997e4  50                   push eax
// 007997e5  e886a9f8ff           call 0x724170
// 007997ea  5f                   pop edi
// 007997eb  5e                   pop esi
// 007997ec  5d                   pop ebp
// 007997ed  5b                   pop ebx
// 007997ee  83c430               add esp, 0x30
// 007997f1  c22000               ret 0x20
// 007997f4  68140c9000           push 0x900c14
// 007997f9  e8c2a50000           call 0x7a3dc0
// 007997fe  8bf8                 mov edi, eax
// 00799800  3bfb                 cmp edi, ebx
// 00799802  0f84b2000000         je 0x7998ba
// 00799808  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0079980c  8d48fe               lea ecx, [eax - 2]
// 0079980f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00799813  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00799817  8d51fe               lea edx, [ecx - 2]
// 0079981a  83c003               add eax, 3
// 0079981d  83c102               add ecx, 2
// 00799820  89542414             mov dword ptr [esp + 0x14], edx
// 00799824  89442418             mov dword ptr [esp + 0x18], eax
// 00799828  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0079982c  395c245c             cmp dword ptr [esp + 0x5c], ebx
// 00799830  7507                 jne 0x799839
// 00799832  bd03000000           mov ebp, 3
// 00799837  eb0b                 jmp 0x799844
// 00799839  33c0                 xor eax, eax
// 0079983b  395c2454             cmp dword ptr [esp + 0x54], ebx
// 0079983f  0f95c0               setne al
// 00799842  8be8                 mov ebp, eax
// 00799844  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00799848  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0079984e  8d542410             lea edx, [esp + 0x10]
// 00799852  52                   push edx
// 00799853  50                   push eax
// 00799854  e857bbffff           call 0x7953b0
// 00799859  83c408               add esp, 8
// 0079985c  8bf0                 mov esi, eax
// 0079985e  6a04                 push 4
// 00799860  f7de                 neg esi
// 00799862  55                   push ebp
// 00799863  8d442438             lea eax, [esp + 0x38]
// 00799867  1bf6                 sbb esi, esi
// 00799869  50                   push eax
// 0079986a  8bcf                 mov ecx, edi
// 0079986c  f7de                 neg esi
// 0079986e  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00799872  895c2430             mov dword ptr [esp + 0x30], ebx
// 00799876  895c2434             mov dword ptr [esp + 0x34], ebx
// 0079987a  895c2438             mov dword ptr [esp + 0x38], ebx
// 0079987e  e83dc50600           call 0x805dc0
// 00799883  8b10                 mov edx, dword ptr [eax]
// 00799885  56                   push esi
// 00799886  68ff00ff00           push 0xff00ff
// 0079988b  8d4c2428             lea ecx, [esp + 0x28]
// 0079988f  51                   push ecx
// 00799890  83ec10               sub esp, 0x10
// 00799893  8bcc                 mov ecx, esp
// 00799895  8911                 mov dword ptr [ecx], edx
// 00799897  8b5004               mov edx, dword ptr [eax + 4]
// 0079989a  895104               mov dword ptr [ecx + 4], edx
// 0079989d  8b5008               mov edx, dword ptr [eax + 8]
// 007998a0  8b400c               mov eax, dword ptr [eax + 0xc]
// 007998a3  895108               mov dword ptr [ecx + 8], edx
// 007998a6  8b542460             mov edx, dword ptr [esp + 0x60]
// 007998aa  89410c               mov dword ptr [ecx + 0xc], eax
// 007998ad  8d4c242c             lea ecx, [esp + 0x2c]
// 007998b1  51                   push ecx
// 007998b2  52                   push edx
// 007998b3  8bcf                 mov ecx, edi
// 007998b5  e816cf0600           call 0x8067d0
// 007998ba  5f                   pop edi
// 007998bb  5e                   pop esi
// 007998bc  5d                   pop ebp
// 007998bd  5b                   pop ebx
// 007998be  83c430               add esp, 0x30
// 007998c1  c22000               ret 0x20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawDropDownGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
