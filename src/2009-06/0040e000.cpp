// roc 2009-06 0040e000  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040e000
//
// 0040e000  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040e004  83ec14               sub esp, 0x14
// 0040e007  85c0                 test eax, eax
// 0040e009  750b                 jne 0x40e016
// 0040e00b  b803400080           mov eax, 0x80004003
// 0040e010  83c414               add esp, 0x14
// 0040e013  c20c00               ret 0xc
// 0040e016  c70000000000         mov dword ptr [eax], 0
// 0040e01c  b801000000           mov eax, 1
// 0040e021  c7042400020480       mov dword ptr [esp], 0x80040200
// 0040e028  84056ca0a300         test byte ptr [0xa3a06c], al
// 0040e02e  751a                 jne 0x40e04a
// 0040e030  09056ca0a300         or dword ptr [0xa3a06c], eax
// 0040e036  c70564a0a30004000000 mov dword ptr [0xa3a064], 4
// 0040e040  c70568a0a300ffffffff mov dword ptr [0xa3a068], 0xffffffff
// 0040e04a  833d64a0a300ff       cmp dword ptr [0xa3a064], -1
// 0040e051  57                   push edi
// 0040e052  bf64a0a300           mov edi, 0xa3a064
// 0040e057  0f8486000000         je 0x40e0e3
// 0040e05d  53                   push ebx
// 0040e05e  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0040e062  55                   push ebp
// 0040e063  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0040e067  56                   push esi
// 0040e068  8b07                 mov eax, dword ptr [edi]
// 0040e06a  83f8fe               cmp eax, -2
// 0040e06d  750e                 jne 0x40e07d
// 0040e06f  8b7f04               mov edi, dword ptr [edi + 4]
// 0040e072  6a00                 push 0
// 0040e074  ffd7                 call edi
// 0040e076  83c404               add esp, 4
// 0040e079  8bf8                 mov edi, eax
// 0040e07b  eb3a                 jmp 0x40e0b7
// 0040e07d  8d3428               lea esi, [eax + ebp]
// 0040e080  8b06                 mov eax, dword ptr [esi]
// 0040e082  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040e085  8d4c2414             lea ecx, [esp + 0x14]
// 0040e089  51                   push ecx
// 0040e08a  56                   push esi
// 0040e08b  ffd2                 call edx
// 0040e08d  85c0                 test eax, eax
// 0040e08f  7c23                 jl 0x40e0b4
// 0040e091  8b03                 mov eax, dword ptr [ebx]
// 0040e093  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0040e097  751b                 jne 0x40e0b4
// 0040e099  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0040e09c  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0040e0a0  7512                 jne 0x40e0b4
// 0040e0a2  8b5308               mov edx, dword ptr [ebx + 8]
// 0040e0a5  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0040e0a9  7509                 jne 0x40e0b4
// 0040e0ab  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0040e0ae  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0040e0b2  7416                 je 0x40e0ca
// 0040e0b4  83c704               add edi, 4
// 0040e0b7  833fff               cmp dword ptr [edi], -1
// 0040e0ba  75ac                 jne 0x40e068
// 0040e0bc  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040e0c0  5e                   pop esi
// 0040e0c1  5d                   pop ebp
// 0040e0c2  5b                   pop ebx
// 0040e0c3  5f                   pop edi
// 0040e0c4  83c414               add esp, 0x14
// 0040e0c7  c20c00               ret 0xc
// 0040e0ca  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0040e0ce  8931                 mov dword ptr [ecx], esi
// 0040e0d0  8b16                 mov edx, dword ptr [esi]
// 0040e0d2  8b4204               mov eax, dword ptr [edx + 4]
// 0040e0d5  56                   push esi
// 0040e0d6  ffd0                 call eax
// 0040e0d8  5e                   pop esi
// 0040e0d9  5d                   pop ebp
// 0040e0da  c744240800000000     mov dword ptr [esp + 8], 0
// 0040e0e2  5b                   pop ebx
// 0040e0e3  8b442404             mov eax, dword ptr [esp + 4]
// 0040e0e7  5f                   pop edi
// 0040e0e8  83c414               add esp, 0x14
// 0040e0eb  c20c00               ret 0xc
// copied from an identical function in another client (function ?function@@YGJPAXABUGuid@@PAPAUPoint@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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