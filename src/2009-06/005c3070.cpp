// roc 2009-06 005c3070  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005c3070
//
// 005c3070  55                   push ebp
// 005c3071  8bec                 mov ebp, esp
// 005c3073  51                   push ecx
// 005c3074  894dfc               mov dword ptr [ebp - 4], ecx
// 005c3077  8b45fc               mov eax, dword ptr [ebp - 4]
// 005c307a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005c307d  8b5004               mov edx, dword ptr [eax + 4]
// 005c3080  3b5104               cmp edx, dword ptr [ecx + 4]
// 005c3083  1bc0                 sbb eax, eax
// 005c3085  f7d8                 neg eax
// 005c3087  8be5                 mov esp, ebp
// 005c3089  5d                   pop ebp
// 005c308a  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEHABU1@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)
struct S {
    unsigned int unused;
    unsigned int value;
    int f(const S& other);
};

int S::f(const S& other) {
    return value < other.value;
}