// from server: 100% by king_originala
// roc 2008-06 005e62d0  unit: RBX::Clump  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e62d0
//
// 005e62d0  53                   push ebx
// 005e62d1  56                   push esi
// 005e62d2  8bf1                 mov esi, ecx
// 005e62d4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005e62d7  57                   push edi
// 005e62d8  50                   push eax
// 005e62d9  33db                 xor ebx, ebx
// 005e62db  e8a0fdffff           call 0x5e6080
// 005e62e0  8bf8                 mov edi, eax
// 005e62e2  8b17                 mov edx, dword ptr [edi]
// 005e62e4  8b420c               mov eax, dword ptr [edx + 0xc]
// 005e62e7  83c404               add esp, 4
// 005e62ea  8bcf                 mov ecx, edi
// 005e62ec  ffd0                 call eax
// 005e62ee  85c0                 test eax, eax
// 005e62f0  7511                 jne 0x5e6303
// 005e62f2  8b17                 mov edx, dword ptr [edi]
// 005e62f4  8b4214               mov eax, dword ptr [edx + 0x14]
// 005e62f7  8bcf                 mov ecx, edi
// 005e62f9  ffd0                 call eax
// 005e62fb  83f808               cmp eax, 8
// 005e62fe  7503                 jne 0x5e6303
// 005e6300  8d58f9               lea ebx, [eax - 7]
// 005e6303  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005e6306  2b4e34               sub ecx, dword ptr [esi + 0x34]
// 005e6309  33ff                 xor edi, edi
// 005e630b  c1f902               sar ecx, 2
// 005e630e  85c9                 test ecx, ecx
// 005e6310  763c                 jbe 0x5e634e
// 005e6312  55                   push ebp
// 005e6313  8b2d90288000         mov ebp, dword ptr [0x802890]
// 005e6319  8da42400000000       lea esp, [esp]
// 005e6320  8b5638               mov edx, dword ptr [esi + 0x38]
// 005e6323  2b5634               sub edx, dword ptr [esi + 0x34]
// 005e6326  c1fa02               sar edx, 2
// 005e6329  3bfa                 cmp edi, edx
// 005e632b  7202                 jb 0x5e632f
// 005e632d  ffd5                 call ebp
// 005e632f  8b4634               mov eax, dword ptr [esi + 0x34]
// 005e6332  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005e6335  8d04b8               lea eax, [eax + edi*4]
// 005e6338  e893ffffff           call 0x5e62d0
// 005e633d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 005e6340  2b4e34               sub ecx, dword ptr [esi + 0x34]
// 005e6343  47                   inc edi
// 005e6344  c1f902               sar ecx, 2
// 005e6347  03d8                 add ebx, eax
// 005e6349  3bf9                 cmp edi, ecx
// 005e634b  72d3                 jb 0x5e6320
// 005e634d  5d                   pop ebp
// 005e634e  5f                   pop edi
// 005e634f  5e                   pop esi
// 005e6350  8bc3                 mov eax, ebx
// 005e6352  5b                   pop ebx
// 005e6353  c3                   ret 

struct Geometry;
struct Clump;

struct Edge {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual int query();
    virtual void slot4();
    virtual int type();
};

typedef Edge Primitive;
typedef void (__cdecl* InvalidHandler)();

extern Primitive* __cdecl getFirstB(Geometry*);
extern "C" InvalidHandler _invalid_parameter_noinfo;

struct Children {
    void* allocator;
    Clump** first;
    Clump** last;

    unsigned int size() const;
    Clump*& at(unsigned int index, InvalidHandler handler);
};

inline unsigned int Children::size() const
{
    return static_cast<unsigned int>(last - first);
}

inline Clump*& Children::at(unsigned int index, InvalidHandler handler)
{
    if (index >= size())
        handler();
    return *(first + index);
}

struct Clump {
    char padding0[0x1c];
    Geometry* geometry;
    char padding1[0x10];
    Children children;

    int count();
};

int Clump::count()
{
    int result = 0;
    Primitive* primitive = getFirstB(geometry);

    if (!primitive->query()) {
        int type = primitive->type();
        if (type == 8)
            result = type - 7;
    }

    unsigned int i = 0;
    if (i < children.size()) {
        InvalidHandler handler = _invalid_parameter_noinfo;
        do {
            result += children.at(i, handler)->count();
            ++i;
        } while (i < children.size());
    }

    return result;
}
