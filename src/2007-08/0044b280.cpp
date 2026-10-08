// roc 2007-08 0044b280  unit: ErrorUploader::Udata::?$sp_counted_impl_p  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044b280
//
// 0044b280  53                   push ebx
// 0044b281  8b19                 mov ebx, dword ptr [ecx]
// 0044b283  56                   push esi
// 0044b284  57                   push edi
// 0044b285  e806ffffff           call 0x44b190
// 0044b28a  8bf0                 mov esi, eax
// 0044b28c  8bce                 mov ecx, esi
// 0044b28e  e8ddac2d00           call 0x725f70
// 0044b293  8bf8                 mov edi, eax
// 0044b295  3bfb                 cmp edi, ebx
// 0044b297  7414                 je 0x44b2ad
// 0044b299  53                   push ebx
// 0044b29a  8bce                 mov ecx, esi
// 0044b29c  e86faf2d00           call 0x726210
// 0044b2a1  85ff                 test edi, edi
// 0044b2a3  7408                 je 0x44b2ad
// 0044b2a5  57                   push edi
// 0044b2a6  8bce                 mov ecx, esi
// 0044b2a8  e873a72d00           call 0x725a20
// 0044b2ad  5f                   pop edi
// 0044b2ae  5e                   pop esi
// 0044b2af  5b                   pop ebx
// 0044b2b0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1Impersonator@Security@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
