// from server: 100% by king_originala
// roc 2008-06 005e6360  unit: RBX::Clump  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6360
//
// 005e6360  53                   push ebx
// 005e6361  56                   push esi
// 005e6362  8bf1                 mov esi, ecx
// 005e6364  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005e6367  57                   push edi
// 005e6368  50                   push eax
// 005e6369  e812fdffff           call 0x5e6080
// 005e636e  8bf8                 mov edi, eax
// 005e6370  8b17                 mov edx, dword ptr [edi]
// 005e6372  8b420c               mov eax, dword ptr [edx + 0xc]
// 005e6375  83c404               add esp, 4
// 005e6378  8bcf                 mov ecx, edi
// 005e637a  ffd0                 call eax
// 005e637c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005e6380  85c0                 test eax, eax
// 005e6382  751f                 jne 0x5e63a3
// 005e6384  8b17                 mov edx, dword ptr [edi]
// 005e6386  8b4214               mov eax, dword ptr [edx + 0x14]
// 005e6389  8bcf                 mov ecx, edi
// 005e638b  ffd0                 call eax
// 005e638d  83f808               cmp eax, 8
// 005e6390  7511                 jne 0x5e63a3
// 005e6392  8b03                 mov eax, dword ptr [ebx]
// 005e6394  85c0                 test eax, eax
// 005e6396  7508                 jne 0x5e63a0
// 005e6398  8bc7                 mov eax, edi
// 005e639a  5f                   pop edi
// 005e639b  5e                   pop esi
// 005e639c  5b                   pop ebx
// 005e639d  c20400               ret 4
// 005e63a0  48                   dec eax
// 005e63a1  8903                 mov dword ptr [ebx], eax
// 005e63a3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005e63a6  2b4e34               sub ecx, dword ptr [esi + 0x34]
// 005e63a9  33ff                 xor edi, edi
// 005e63ab  c1f902               sar ecx, 2
// 005e63ae  55                   push ebp
// 005e63af  85c9                 test ecx, ecx
// 005e63b1  763d                 jbe 0x5e63f0
// 005e63b3  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005e63b9  8da42400000000       lea esp, [esp]
// 005e63c0  8b5638               mov edx, dword ptr [esi + 0x38]
// 005e63c3  2b5634               sub edx, dword ptr [esi + 0x34]
// 005e63c6  c1fa02               sar edx, 2
// 005e63c9  3bfa                 cmp edi, edx
// 005e63cb  7202                 jb 0x5e63cf
// 005e63cd  ffd5                 call ebp
// 005e63cf  8b4634               mov eax, dword ptr [esi + 0x34]
// 005e63d2  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005e63d5  8d04b8               lea eax, [eax + edi*4]
// 005e63d8  53                   push ebx
// 005e63d9  e882ffffff           call 0x5e6360
// 005e63de  85c0                 test eax, eax
// 005e63e0  7510                 jne 0x5e63f2
// 005e63e2  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005e63e5  2b4e34               sub ecx, dword ptr [esi + 0x34]
// 005e63e8  47                   inc edi
// 005e63e9  c1f902               sar ecx, 2
// 005e63ec  3bf9                 cmp edi, ecx
// 005e63ee  72d0                 jb 0x5e63c0
// 005e63f0  33c0                 xor eax, eax
// 005e63f2  5d                   pop ebp
// 005e63f3  5f                   pop edi
// 005e63f4  5e                   pop esi
// 005e63f5  5b                   pop ebx
// 005e63f6  c20400               ret 4

struct Primitive {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int isExcluded();
    virtual void slot4();
    virtual int kind();
};

extern Primitive* __cdecl getFirstB(void*);
extern void (__cdecl* invalidParameter)();

struct Clump {
    char pad0[0x1c];
    void* source;
    char pad1[0x14];
    Clump** begin;
    Clump** volatile end;

    Primitive* find(int* index);
};

Primitive* Clump::find(int* index)
{
    Primitive* primitive = getFirstB(source);
    if (!primitive->isExcluded() && primitive->kind() == 8) {
        if (*index == 0)
            return primitive;
        --*index;
    }

    unsigned int i = 0;
    if (i < (unsigned int)(end - begin)) {
        void (__cdecl* handler)() = invalidParameter;
        do {
            if (i >= (unsigned int)(end - begin))
                handler();

            Clump*& child = begin[i];
            Primitive* result = child->find(index);
            if (result)
                return result;
            ++i;
        } while (i < (unsigned int)(end - begin));
    }

    return 0;
}
