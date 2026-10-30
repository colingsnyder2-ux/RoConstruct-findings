// roc 2010-06 00879280  unit: CXTPCustomizeToolbarsPage  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00879280
//
// 00879280  53                   push ebx
// 00879281  8b1d54ba9e00         mov ebx, dword ptr [0x9eba54]
// 00879287  56                   push esi
// 00879288  6a00                 push 0
// 0087928a  6a00                 push 0
// 0087928c  8bf1                 mov esi, ecx
// 0087928e  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00879294  6888010000           push 0x188
// 00879299  50                   push eax
// 0087929a  ffd3                 call ebx
// 0087929c  83f8ff               cmp eax, -1
// 0087929f  7469                 je 0x87930a
// 008792a1  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 008792a7  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 008792ad  57                   push edi
// 008792ae  8bb9b8000000         mov edi, dword ptr [ecx + 0xb8]
// 008792b4  6a00                 push 0
// 008792b6  50                   push eax
// 008792b7  6899010000           push 0x199
// 008792bc  52                   push edx
// 008792bd  ffd3                 call ebx
// 008792bf  85c0                 test eax, eax
// 008792c1  7c43                 jl 0x879306
// 008792c3  3b8784000000         cmp eax, dword ptr [edi + 0x84]
// 008792c9  7d3b                 jge 0x879306
// 008792cb  50                   push eax
// 008792cc  8bcf                 mov ecx, edi
// 008792ce  e8ddfaf4ff           call 0x7c8db0
// 008792d3  8bb888010000         mov edi, dword ptr [eax + 0x188]
// 008792d9  57                   push edi
// 008792da  8d8efc000000         lea ecx, [esi + 0xfc]
// 008792e0  e839edf2ff           call 0x7a801e
// 008792e5  33c0                 xor eax, eax
// 008792e7  85ff                 test edi, edi
// 008792e9  0f94c0               sete al
// 008792ec  8d8e50010000         lea ecx, [esi + 0x150]
// 008792f2  8bf8                 mov edi, eax
// 008792f4  57                   push edi
// 008792f5  e824edf2ff           call 0x7a801e
// 008792fa  57                   push edi
// 008792fb  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 00879301  e818edf2ff           call 0x7a801e
// 00879306  5f                   pop edi
// 00879307  5e                   pop esi
// 00879308  5b                   pop ebx
// 00879309  c3                   ret 
// 0087930a  6a00                 push 0
// 0087930c  8d8efc000000         lea ecx, [esi + 0xfc]
// 00879312  e807edf2ff           call 0x7a801e
// 00879317  6a00                 push 0
// 00879319  8d8e50010000         lea ecx, [esi + 0x150]
// 0087931f  e8faecf2ff           call 0x7a801e
// 00879324  6a00                 push 0
// 00879326  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 0087932c  e8edecf2ff           call 0x7a801e
// 00879331  5e                   pop esi
// 00879332  5b                   pop ebx
// 00879333  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSelectionChanged@CXTPCustomizeToolbarsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
