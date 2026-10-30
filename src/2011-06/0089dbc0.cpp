// roc 2011-06 0089dbc0  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089dbc0
//
// 0089dbc0  6aff                 push -1
// 0089dbc2  68989ea000           push 0xa09e98
// 0089dbc7  64a100000000         mov eax, dword ptr fs:[0]
// 0089dbcd  50                   push eax
// 0089dbce  51                   push ecx
// 0089dbcf  56                   push esi
// 0089dbd0  57                   push edi
// 0089dbd1  a12058c900           mov eax, dword ptr [0xc95820]
// 0089dbd6  33c4                 xor eax, esp
// 0089dbd8  50                   push eax
// 0089dbd9  8d442410             lea eax, [esp + 0x10]
// 0089dbdd  64a300000000         mov dword ptr fs:[0], eax
// 0089dbe3  8bf1                 mov esi, ecx
// 0089dbe5  8974240c             mov dword ptr [esp + 0xc], esi
// 0089dbe9  c706401ead00         mov dword ptr [esi], 0xad1e40
// 0089dbef  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0089dbf3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0089dbf6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0089dbf9  50                   push eax
// 0089dbfa  6afc                 push -4
// 0089dbfc  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0089dc04  51                   push ecx
// 0089dc05  7408                 je 0x89dc0f
// 0089dc07  ff15801ba400         call dword ptr [0xa41b80]
// 0089dc0d  eb06                 jmp 0x89dc15
// 0089dc0f  ff15001aa400         call dword ptr [0xa41a00]
// 0089dc15  8b4608               mov eax, dword ptr [esi + 8]
// 0089dc18  8d78ff               lea edi, [eax - 1]
// 0089dc1b  85ff                 test edi, edi
// 0089dc1d  7c26                 jl 0x89dc45
// 0089dc1f  90                   nop 
// 0089dc20  85ff                 test edi, edi
// 0089dc22  7c42                 jl 0x89dc66
// 0089dc24  3b7e08               cmp edi, dword ptr [esi + 8]
// 0089dc27  7d3d                 jge 0x89dc66
// 0089dc29  8b4604               mov eax, dword ptr [esi + 4]
// 0089dc2c  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 0089dc2f  83790400             cmp dword ptr [ecx + 4], 0
// 0089dc33  8d04b8               lea eax, [eax + edi*4]
// 0089dc36  7408                 je 0x89dc40
// 0089dc38  8b11                 mov edx, dword ptr [ecx]
// 0089dc3a  8b02                 mov eax, dword ptr [edx]
// 0089dc3c  6a01                 push 1
// 0089dc3e  ffd0                 call eax
// 0089dc40  83ef01               sub edi, 1
// 0089dc43  79db                 jns 0x89dc20
// 0089dc45  8bce                 mov ecx, esi
// 0089dc47  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0089dc4f  e8ecfeffff           call 0x89db40
// 0089dc54  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089dc58  64890d00000000       mov dword ptr fs:[0], ecx
// 0089dc5f  59                   pop ecx
// 0089dc60  5f                   pop edi
// 0089dc61  5e                   pop esi
// 0089dc62  83c410               add esp, 0x10
// 0089dc65  c3                   ret 
// 0089dc66  e89fc6f6ff           call 0x80a30a
// copied from an identical function in another client (function ??1CHookSink@CXTPHookManager@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPHookManager.cpp