// from server: 100% by king_originala
// roc 2008-06 005e7ce0  unit: RBX::Geometry  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7ce0
//
// 005e7ce0  8b442404             mov eax, dword ptr [esp + 4]
// 005e7ce4  8b503c               mov edx, dword ptr [eax + 0x3c]
// 005e7ce7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e7ceb  3b513c               cmp edx, dword ptr [ecx + 0x3c]
// 005e7cee  56                   push esi
// 005e7cef  57                   push edi
// 005e7cf0  7d06                 jge 0x5e7cf8
// 005e7cf2  8bf0                 mov esi, eax
// 005e7cf4  8bf9                 mov edi, ecx
// 005e7cf6  eb0c                 jmp 0x5e7d04
// 005e7cf8  8bf1                 mov esi, ecx
// 005e7cfa  3bc8                 cmp ecx, eax
// 005e7cfc  7504                 jne 0x5e7d02
// 005e7cfe  8bf9                 mov edi, ecx
// 005e7d00  eb02                 jmp 0x5e7d04
// 005e7d02  8bf8                 mov edi, eax
// 005e7d04  8b563c               mov edx, dword ptr [esi + 0x3c]
// 005e7d07  33c0                 xor eax, eax
// 005e7d09  85d2                 test edx, edx
// 005e7d0b  7e0f                 jle 0x5e7d1c
// 005e7d0d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 005e7d10  3939                 cmp dword ptr [ecx], edi
// 005e7d12  740d                 je 0x5e7d21
// 005e7d14  40                   inc eax
// 005e7d15  83c104               add ecx, 4
// 005e7d18  3bc2                 cmp eax, edx
// 005e7d1a  7cf4                 jl 0x5e7d10
// 005e7d1c  5f                   pop edi
// 005e7d1d  33c0                 xor eax, eax
// 005e7d1f  5e                   pop esi
// 005e7d20  c3                   ret 
// 005e7d21  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005e7d24  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005e7d27  5f                   pop edi
// 005e7d28  5e                   pop esi
// 005e7d29  c3                   ret 

struct Geometry
{
    unsigned char padding[0x38];
    void **connections;
    int count;
    unsigned char padding40[4];
    Geometry **neighbors;
};

void *__cdecl findConnection(Geometry *a, Geometry *b)
{
    Geometry *smaller = a->count < b->count ? a : b;
    Geometry *other = smaller == a ? b : a;

    for (int i = 0; i < smaller->count; ++i)
    {
        if (smaller->neighbors[i] == other)
            return smaller->connections[i];
    }

    return 0;
}
