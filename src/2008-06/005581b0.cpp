// from server: 100% by king_originala
// roc 2008-06 005581b0  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005581b0
//
// 005581b0  53                   push ebx
// 005581b1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005581b5  56                   push esi
// 005581b6  53                   push ebx
// 005581b7  8bf1                 mov esi, ecx
// 005581b9  e892f7ffff           call 0x557950
// 005581be  85c0                 test eax, eax
// 005581c0  754e                 jne 0x558210
// 005581c2  8bb608010000         mov esi, dword ptr [esi + 0x108]
// 005581c8  85f6                 test esi, esi
// 005581ca  7505                 jne 0x5581d1
// 005581cc  5e                   pop esi
// 005581cd  5b                   pop ebx
// 005581ce  c20400               ret 4
// 005581d1  8b4610               mov eax, dword ptr [esi + 0x10]
// 005581d4  2b460c               sub eax, dword ptr [esi + 0xc]
// 005581d7  55                   push ebp
// 005581d8  57                   push edi
// 005581d9  c1f803               sar eax, 3
// 005581dc  33ff                 xor edi, edi
// 005581de  85c0                 test eax, eax
// 005581e0  762a                 jbe 0x55820c
// 005581e2  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005581e8  3bf8                 cmp edi, eax
// 005581ea  7202                 jb 0x5581ee
// 005581ec  ffd5                 call ebp
// 005581ee  8b460c               mov eax, dword ptr [esi + 0xc]
// 005581f1  8b0cf8               mov ecx, dword ptr [eax + edi*8]
// 005581f4  53                   push ebx
// 005581f5  e8b6ffffff           call 0x5581b0
// 005581fa  85c0                 test eax, eax
// 005581fc  7510                 jne 0x55820e
// 005581fe  8b4610               mov eax, dword ptr [esi + 0x10]
// 00558201  2b460c               sub eax, dword ptr [esi + 0xc]
// 00558204  47                   inc edi
// 00558205  c1f803               sar eax, 3
// 00558208  3bf8                 cmp edi, eax
// 0055820a  72e2                 jb 0x5581ee
// 0055820c  33c0                 xor eax, eax
// 0055820e  5f                   pop edi
// 0055820f  5d                   pop ebp
// 00558210  5e                   pop esi
// 00558211  5b                   pop ebx
// 00558212  c20400               ret 4

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct S;

struct Entry {
    S* object;
    void* control;
};

struct Children {
    char padding[12];
    Entry* begin;
    Entry* end;
};

struct S {
    char padding[0x108];
    Children* children;

    S* match(const void* key);
    S* find(const void* key);
};

S* S::find(const void* key)
{
    S* result = match(key);
    if (result)
        return result;

    Children* list = children;
    if (!list)
        return 0;

    unsigned int i = 0;
    if (i < static_cast<unsigned int>(list->end - list->begin)) {
        void (__cdecl *handler)() = invalid_parameter_noinfo;
        do {
            if (i >= static_cast<unsigned int>(list->end - list->begin))
                handler();

            result = list->begin[i].object->find(key);
            if (result)
                return result;

            ++i;
        } while (i < static_cast<unsigned int>(list->end - list->begin));
    }

    return 0;
}
