// roc 2009-12 0040dd60  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040dd60
//
// 0040dd60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040dd64  83ec14               sub esp, 0x14
// 0040dd67  85c0                 test eax, eax
// 0040dd69  750b                 jne 0x40dd76
// 0040dd6b  b803400080           mov eax, 0x80004003
// 0040dd70  83c414               add esp, 0x14
// 0040dd73  c20c00               ret 0xc
// 0040dd76  c70000000000         mov dword ptr [eax], 0
// 0040dd7c  b801000000           mov eax, 1
// 0040dd81  c7042400020480       mov dword ptr [esp], 0x80040200
// 0040dd88  840594a0b700         test byte ptr [0xb7a094], al
// 0040dd8e  751a                 jne 0x40ddaa
// 0040dd90  090594a0b700         or dword ptr [0xb7a094], eax
// 0040dd96  c7058ca0b70004000000 mov dword ptr [0xb7a08c], 4
// 0040dda0  c70590a0b700ffffffff mov dword ptr [0xb7a090], 0xffffffff
// 0040ddaa  833d8ca0b700ff       cmp dword ptr [0xb7a08c], -1
// 0040ddb1  57                   push edi
// 0040ddb2  bf8ca0b700           mov edi, 0xb7a08c
// 0040ddb7  0f8486000000         je 0x40de43
// 0040ddbd  53                   push ebx
// 0040ddbe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0040ddc2  55                   push ebp
// 0040ddc3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0040ddc7  56                   push esi
// 0040ddc8  8b07                 mov eax, dword ptr [edi]
// 0040ddca  83f8fe               cmp eax, -2
// 0040ddcd  750e                 jne 0x40dddd
// 0040ddcf  8b7f04               mov edi, dword ptr [edi + 4]
// 0040ddd2  6a00                 push 0
// 0040ddd4  ffd7                 call edi
// 0040ddd6  83c404               add esp, 4
// 0040ddd9  8bf8                 mov edi, eax
// 0040dddb  eb3a                 jmp 0x40de17
// 0040dddd  8d3428               lea esi, [eax + ebp]
// 0040dde0  8b06                 mov eax, dword ptr [esi]
// 0040dde2  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040dde5  8d4c2414             lea ecx, [esp + 0x14]
// 0040dde9  51                   push ecx
// 0040ddea  56                   push esi
// 0040ddeb  ffd2                 call edx
// 0040dded  85c0                 test eax, eax
// 0040ddef  7c23                 jl 0x40de14
// 0040ddf1  8b03                 mov eax, dword ptr [ebx]
// 0040ddf3  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0040ddf7  751b                 jne 0x40de14
// 0040ddf9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0040ddfc  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0040de00  7512                 jne 0x40de14
// 0040de02  8b5308               mov edx, dword ptr [ebx + 8]
// 0040de05  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0040de09  7509                 jne 0x40de14
// 0040de0b  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0040de0e  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0040de12  7416                 je 0x40de2a
// 0040de14  83c704               add edi, 4
// 0040de17  833fff               cmp dword ptr [edi], -1
// 0040de1a  75ac                 jne 0x40ddc8
// 0040de1c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040de20  5e                   pop esi
// 0040de21  5d                   pop ebp
// 0040de22  5b                   pop ebx
// 0040de23  5f                   pop edi
// 0040de24  83c414               add esp, 0x14
// 0040de27  c20c00               ret 0xc
// 0040de2a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0040de2e  8931                 mov dword ptr [ecx], esi
// 0040de30  8b16                 mov edx, dword ptr [esi]
// 0040de32  8b4204               mov eax, dword ptr [edx + 4]
// 0040de35  56                   push esi
// 0040de36  ffd0                 call eax
// 0040de38  5e                   pop esi
// 0040de39  5d                   pop ebp
// 0040de3a  c744240800000000     mov dword ptr [esp + 8], 0
// 0040de42  5b                   pop ebx
// 0040de43  8b442404             mov eax, dword ptr [esp + 4]
// 0040de47  5f                   pop edi
// 0040de48  83c414               add esp, 0x14
// 0040de4b  c20c00               ret 0xc
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