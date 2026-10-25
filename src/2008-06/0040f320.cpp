// from server: 100% by king_originala
// roc 2008-06 0040f320  unit: VCBrowserViewExternal::?$CComObject  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f320
//
// 0040f320  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040f324  83ec14               sub esp, 0x14
// 0040f327  85c0                 test eax, eax
// 0040f329  750b                 jne 0x40f336
// 0040f32b  b803400080           mov eax, 0x80004003
// 0040f330  83c414               add esp, 0x14
// 0040f333  c20c00               ret 0xc
// 0040f336  c70000000000         mov dword ptr [eax], 0
// 0040f33c  b801000000           mov eax, 1
// 0040f341  c7042400020480       mov dword ptr [esp], 0x80040200
// 0040f348  8405d0cb9600         test byte ptr [0x96cbd0], al
// 0040f34e  751a                 jne 0x40f36a
// 0040f350  0905d0cb9600         or dword ptr [0x96cbd0], eax
// 0040f356  c705c8cb960004000000 mov dword ptr [0x96cbc8], 4
// 0040f360  c705cccb9600ffffffff mov dword ptr [0x96cbcc], 0xffffffff
// 0040f36a  833dc8cb9600ff       cmp dword ptr [0x96cbc8], -1
// 0040f371  57                   push edi
// 0040f372  bfc8cb9600           mov edi, 0x96cbc8
// 0040f377  0f8486000000         je 0x40f403
// 0040f37d  53                   push ebx
// 0040f37e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0040f382  55                   push ebp
// 0040f383  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0040f387  56                   push esi
// 0040f388  8b07                 mov eax, dword ptr [edi]
// 0040f38a  83f8fe               cmp eax, -2
// 0040f38d  750e                 jne 0x40f39d
// 0040f38f  8b7f04               mov edi, dword ptr [edi + 4]
// 0040f392  6a00                 push 0
// 0040f394  ffd7                 call edi
// 0040f396  83c404               add esp, 4
// 0040f399  8bf8                 mov edi, eax
// 0040f39b  eb3a                 jmp 0x40f3d7
// 0040f39d  8d3428               lea esi, [eax + ebp]
// 0040f3a0  8b06                 mov eax, dword ptr [esi]
// 0040f3a2  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040f3a5  8d4c2414             lea ecx, [esp + 0x14]
// 0040f3a9  51                   push ecx
// 0040f3aa  56                   push esi
// 0040f3ab  ffd2                 call edx
// 0040f3ad  85c0                 test eax, eax
// 0040f3af  7c23                 jl 0x40f3d4
// 0040f3b1  8b03                 mov eax, dword ptr [ebx]
// 0040f3b3  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0040f3b7  751b                 jne 0x40f3d4
// 0040f3b9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0040f3bc  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0040f3c0  7512                 jne 0x40f3d4
// 0040f3c2  8b5308               mov edx, dword ptr [ebx + 8]
// 0040f3c5  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0040f3c9  7509                 jne 0x40f3d4
// 0040f3cb  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0040f3ce  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0040f3d2  7416                 je 0x40f3ea
// 0040f3d4  83c704               add edi, 4
// 0040f3d7  833fff               cmp dword ptr [edi], -1
// 0040f3da  75ac                 jne 0x40f388
// 0040f3dc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040f3e0  5e                   pop esi
// 0040f3e1  5d                   pop ebp
// 0040f3e2  5b                   pop ebx
// 0040f3e3  5f                   pop edi
// 0040f3e4  83c414               add esp, 0x14
// 0040f3e7  c20c00               ret 0xc
// 0040f3ea  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0040f3ee  8931                 mov dword ptr [ecx], esi
// 0040f3f0  8b16                 mov edx, dword ptr [esi]
// 0040f3f2  8b4204               mov eax, dword ptr [edx + 4]
// 0040f3f5  56                   push esi
// 0040f3f6  ffd0                 call eax
// 0040f3f8  5e                   pop esi
// 0040f3f9  5d                   pop ebp
// 0040f3fa  c744240800000000     mov dword ptr [esp + 8], 0
// 0040f402  5b                   pop ebx
// 0040f403  8b442404             mov eax, dword ptr [esp + 4]
// 0040f407  5f                   pop edi
// 0040f408  83c414               add esp, 0x14
// 0040f40b  c20c00               ret 0xc

struct Guid {
    unsigned long a, b, c, d;
};

struct Point;

struct PointTable {
    void* slot0;
    unsigned long (__stdcall *addRef)(Point*);
    void* slot2;
    long (__stdcall *getGuid)(Point*, Guid*);
};

struct Point {
    PointTable* table;
};

long __stdcall function(void* object, const Guid& requested, Point** output)
{
    if (!output)
        return (long)0x80004003UL;

    *output = 0;
    long result = (long)0x80040200UL;

    static int offsets[2];
    static unsigned int initialized;

    if (!(initialized & 1)) {
        initialized |= 1;
        offsets[0] = 4;
        offsets[1] = -1;
    }

    int* entry = offsets;
    while (*entry != -1) {
        if (*entry == -2) {
            typedef int* (__cdecl *GetEntries)(int);
            GetEntries getEntries = (GetEntries)entry[1];
            entry = getEntries(0);
        } else {
            Point* point = (Point*)((char*)object + *entry);
            Guid actual;

            if (point->table->getGuid(point, &actual) >= 0 &&
                requested.a == actual.a &&
                requested.b == actual.b &&
                requested.c == actual.c &&
                requested.d == actual.d) {
                *output = point;
                point->table->addRef(point);
                result = 0;
                break;
            }
            ++entry;
        }
    }

    return result;
}
