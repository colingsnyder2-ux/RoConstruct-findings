// roc 2010-06 0040e1a0  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e1a0
//
// 0040e1a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040e1a4  83ec14               sub esp, 0x14
// 0040e1a7  85c0                 test eax, eax
// 0040e1a9  750b                 jne 0x40e1b6
// 0040e1ab  b803400080           mov eax, 0x80004003
// 0040e1b0  83c414               add esp, 0x14
// 0040e1b3  c20c00               ret 0xc
// 0040e1b6  c70000000000         mov dword ptr [eax], 0
// 0040e1bc  b801000000           mov eax, 1
// 0040e1c1  c7042400020480       mov dword ptr [esp], 0x80040200
// 0040e1c8  84054406c000         test byte ptr [0xc00644], al
// 0040e1ce  751a                 jne 0x40e1ea
// 0040e1d0  09054406c000         or dword ptr [0xc00644], eax
// 0040e1d6  c7053c06c00004000000 mov dword ptr [0xc0063c], 4
// 0040e1e0  c7054006c000ffffffff mov dword ptr [0xc00640], 0xffffffff
// 0040e1ea  833d3c06c000ff       cmp dword ptr [0xc0063c], -1
// 0040e1f1  57                   push edi
// 0040e1f2  bf3c06c000           mov edi, 0xc0063c
// 0040e1f7  0f8486000000         je 0x40e283
// 0040e1fd  53                   push ebx
// 0040e1fe  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0040e202  55                   push ebp
// 0040e203  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0040e207  56                   push esi
// 0040e208  8b07                 mov eax, dword ptr [edi]
// 0040e20a  83f8fe               cmp eax, -2
// 0040e20d  750e                 jne 0x40e21d
// 0040e20f  8b7f04               mov edi, dword ptr [edi + 4]
// 0040e212  6a00                 push 0
// 0040e214  ffd7                 call edi
// 0040e216  83c404               add esp, 4
// 0040e219  8bf8                 mov edi, eax
// 0040e21b  eb3a                 jmp 0x40e257
// 0040e21d  8d3428               lea esi, [eax + ebp]
// 0040e220  8b06                 mov eax, dword ptr [esi]
// 0040e222  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040e225  8d4c2414             lea ecx, [esp + 0x14]
// 0040e229  51                   push ecx
// 0040e22a  56                   push esi
// 0040e22b  ffd2                 call edx
// 0040e22d  85c0                 test eax, eax
// 0040e22f  7c23                 jl 0x40e254
// 0040e231  8b03                 mov eax, dword ptr [ebx]
// 0040e233  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0040e237  751b                 jne 0x40e254
// 0040e239  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0040e23c  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0040e240  7512                 jne 0x40e254
// 0040e242  8b5308               mov edx, dword ptr [ebx + 8]
// 0040e245  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0040e249  7509                 jne 0x40e254
// 0040e24b  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0040e24e  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0040e252  7416                 je 0x40e26a
// 0040e254  83c704               add edi, 4
// 0040e257  833fff               cmp dword ptr [edi], -1
// 0040e25a  75ac                 jne 0x40e208
// 0040e25c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0040e260  5e                   pop esi
// 0040e261  5d                   pop ebp
// 0040e262  5b                   pop ebx
// 0040e263  5f                   pop edi
// 0040e264  83c414               add esp, 0x14
// 0040e267  c20c00               ret 0xc
// 0040e26a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0040e26e  8931                 mov dword ptr [ecx], esi
// 0040e270  8b16                 mov edx, dword ptr [esi]
// 0040e272  8b4204               mov eax, dword ptr [edx + 4]
// 0040e275  56                   push esi
// 0040e276  ffd0                 call eax
// 0040e278  5e                   pop esi
// 0040e279  5d                   pop ebp
// 0040e27a  c744240800000000     mov dword ptr [esp + 8], 0
// 0040e282  5b                   pop ebx
// 0040e283  8b442404             mov eax, dword ptr [esp + 4]
// 0040e287  5f                   pop edi
// 0040e288  83c414               add esp, 0x14
// 0040e28b  c20c00               ret 0xc
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