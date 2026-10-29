// roc 2010-06 004159b0  unit: PasteVerb  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004159b0
//
// 004159b0  56                   push esi
// 004159b1  8b742408             mov esi, dword ptr [esp + 8]
// 004159b5  57                   push edi
// 004159b6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004159ba  57                   push edi
// 004159bb  56                   push esi
// 004159bc  ff155caa9e00         call dword ptr [0x9eaa5c]
// 004159c2  85c0                 test eax, eax
// 004159c4  7c27                 jl 0x4159ed
// 004159c6  85ff                 test edi, edi
// 004159c8  7423                 je 0x4159ed
// 004159ca  66833f0d             cmp word ptr [edi], 0xd
// 004159ce  751d                 jne 0x4159ed
// 004159d0  85f6                 test esi, esi
// 004159d2  7419                 je 0x4159ed
// 004159d4  0fb74e02             movzx ecx, word ptr [esi + 2]
// 004159d8  f6c140               test cl, 0x40
// 004159db  7410                 je 0x4159ed
// 004159dd  f7c100040000         test ecx, 0x400
// 004159e3  7408                 je 0x4159ed
// 004159e5  b909000000           mov ecx, 9
// 004159ea  66890f               mov word ptr [edi], cx
// 004159ed  5f                   pop edi
// 004159ee  5e                   pop esi
// 004159ef  c3                   ret 
// copied from an identical function in another client (function ?f@@YAJPAUSafeArray@@PAG@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct SafeArray {
    unsigned short dimensions;
    unsigned short flags;
};

extern "C" {
    long (__stdcall *SafeArrayGetVartype)(SafeArray*, unsigned short*);
}

long __cdecl f(SafeArray* array, unsigned short* type)
{
    long result = SafeArrayGetVartype(array, type);
    if (result < 0)
        return result;
    if (type != 0 && *type == 13 && array != 0) {
        unsigned short flags = array->flags;
        if ((flags & 0x40) != 0 && (flags & 0x400) != 0)
            *type = 9;
    }
    return result;
}