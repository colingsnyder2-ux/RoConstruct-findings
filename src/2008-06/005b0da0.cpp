// roc 2008-06 005b0da0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0da0
//
// 005b0da0  6aff                 push -1
// 005b0da2  6810377d00           push 0x7d3710
// 005b0da7  64a100000000         mov eax, dword ptr fs:[0]
// 005b0dad  50                   push eax
// 005b0dae  64892500000000       mov dword ptr fs:[0], esp
// 005b0db5  51                   push ecx
// 005b0db6  53                   push ebx
// 005b0db7  56                   push esi
// 005b0db8  57                   push edi
// 005b0db9  8bf1                 mov esi, ecx
// 005b0dbb  8974240c             mov dword ptr [esp + 0xc], esi
// 005b0dbf  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005b0dc5  c706f44b8300         mov dword ptr [esi], 0x834bf4
// 005b0dcb  c74610e84b8300       mov dword ptr [esi + 0x10], 0x834be8
// 005b0dd2  c74614e04b8300       mov dword ptr [esi + 0x14], 0x834be0
// 005b0dd9  c74620d84b8300       mov dword ptr [esi + 0x20], 0x834bd8
// 005b0de0  c74624c84b8300       mov dword ptr [esi + 0x24], 0x834bc8
// 005b0de7  c74644b84b8300       mov dword ptr [esi + 0x44], 0x834bb8
// 005b0dee  c74664a84b8300       mov dword ptr [esi + 0x64], 0x834ba8
// 005b0df5  c78684000000984b8300 mov dword ptr [esi + 0x84], 0x834b98
// 005b0dff  c786a4000000884b8300 mov dword ptr [esi + 0xa4], 0x834b88
// 005b0e09  c786c4000000784b8300 mov dword ptr [esi + 0xc4], 0x834b78
// 005b0e13  c78630010000704b8300 mov dword ptr [esi + 0x130], 0x834b70
// 005b0e1d  c78640010000584b8300 mov dword ptr [esi + 0x140], 0x834b58
// 005b0e27  8b4804               mov ecx, dword ptr [eax + 4]
// 005b0e2a  c7843150010000504b8300 mov dword ptr [ecx + esi + 0x150], 0x834b50
// 005b0e35  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 005b0e3b  8b4208               mov eax, dword ptr [edx + 8]
// 005b0e3e  8dbe30010000         lea edi, [esi + 0x130]
// 005b0e44  8d9e40010000         lea ebx, [esi + 0x140]
// 005b0e4a  c7843050010000344b8300 mov dword ptr [eax + esi + 0x150], 0x834b34
// 005b0e55  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 005b0e5b  8b4104               mov eax, dword ptr [ecx + 4]
// 005b0e5e  8d5088               lea edx, [eax - 0x78]
// 005b0e61  8994304c010000       mov dword ptr [eax + esi + 0x14c], edx
// 005b0e68  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005b0e6e  8b4008               mov eax, dword ptr [eax + 8]
// 005b0e71  8d4880               lea ecx, [eax - 0x80]
// 005b0e74  898c304c010000       mov dword ptr [eax + esi + 0x14c], ecx
// 005b0e7b  8d8eb0010000         lea ecx, [esi + 0x1b0]
// 005b0e81  c744241804000000     mov dword ptr [esp + 0x18], 4
// 005b0e89  e82246feff           call 0x5954b0
// 005b0e8e  8d8e9c010000         lea ecx, [esi + 0x19c]
// 005b0e94  c644241803           mov byte ptr [esp + 0x18], 3
// 005b0e99  e81246feff           call 0x5954b0
// 005b0e9e  8d8e88010000         lea ecx, [esi + 0x188]
// 005b0ea4  c644241802           mov byte ptr [esp + 0x18], 2
// 005b0ea9  e80246feff           call 0x5954b0
// 005b0eae  8bcb                 mov ecx, ebx
// 005b0eb0  c644241801           mov byte ptr [esp + 0x18], 1
// 005b0eb5  e856c5ecff           call 0x47d410
// 005b0eba  8bcf                 mov ecx, edi
// 005b0ebc  c644241800           mov byte ptr [esp + 0x18], 0
// 005b0ec1  e8ba800700           call 0x628f80
// 005b0ec6  8bce                 mov ecx, esi
// 005b0ec8  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005b0ed0  e82bfbffff           call 0x5b0a00
// 005b0ed5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005b0ed9  5f                   pop edi
// 005b0eda  5e                   pop esi
// 005b0edb  5b                   pop ebx
// 005b0edc  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0ee3  83c410               add esp, 0x10
// 005b0ee6  c3                   ret 
// library rbxgs/roc_unit_0f8187f1fe467d96.cpp (function ??1Accoutrement@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_0f8187f1fe467d96.cpp
