// roc 2008-06 0042bc90  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042bc90
//
// 0042bc90  53                   push ebx
// 0042bc91  8b19                 mov ebx, dword ptr [ecx]
// 0042bc93  56                   push esi
// 0042bc94  57                   push edi
// 0042bc95  e816ffffff           call 0x42bbb0
// 0042bc9a  8bf0                 mov esi, eax
// 0042bc9c  8bce                 mov ecx, esi
// 0042bc9e  e8cdb81700           call 0x5a7570
// 0042bca3  8bf8                 mov edi, eax
// 0042bca5  3bfb                 cmp edi, ebx
// 0042bca7  7414                 je 0x42bcbd
// 0042bca9  53                   push ebx
// 0042bcaa  8bce                 mov ecx, esi
// 0042bcac  e8ffb91700           call 0x5a76b0
// 0042bcb1  85ff                 test edi, edi
// 0042bcb3  7408                 je 0x42bcbd
// 0042bcb5  57                   push edi
// 0042bcb6  8bce                 mov ecx, esi
// 0042bcb8  e833b31700           call 0x5a6ff0
// 0042bcbd  5f                   pop edi
// 0042bcbe  5e                   pop esi
// 0042bcbf  5b                   pop ebx
// 0042bcc0  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ??1Impersonator@Security@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
