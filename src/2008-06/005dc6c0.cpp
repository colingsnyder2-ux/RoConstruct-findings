// from server: 100% by king_originala
// roc 2008-06 005dc6c0  unit: RBX::VPartInstance::?$FilteredSelection  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dc6c0
//
// 005dc6c0  53                   push ebx
// 005dc6c1  56                   push esi
// 005dc6c2  57                   push edi
// 005dc6c3  8bd9                 mov ebx, ecx
// 005dc6c5  e846c3ffff           call 0x5d8a10
// 005dc6ca  85c0                 test eax, eax
// 005dc6cc  7444                 je 0x5dc712
// 005dc6ce  8db028020000         lea esi, [eax + 0x228]
// 005dc6d4  85f6                 test esi, esi
// 005dc6d6  743a                 je 0x5dc712
// 005dc6d8  8bcb                 mov ecx, ebx
// 005dc6da  e831c4ffff           call 0x5d8b10
// 005dc6df  85c0                 test eax, eax
// 005dc6e1  742f                 je 0x5dc712
// 005dc6e3  8db828020000         lea edi, [eax + 0x228]
// 005dc6e9  85ff                 test edi, edi
// 005dc6eb  7425                 je 0x5dc712
// 005dc6ed  8bce                 mov ecx, esi
// 005dc6ef  e89cb40000           call 0x5e7b90
// 005dc6f4  85c0                 test eax, eax
// 005dc6f6  741a                 je 0x5dc712
// 005dc6f8  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005dc6fb  3bf1                 cmp esi, ecx
// 005dc6fd  7503                 jne 0x5dc702
// 005dc6ff  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005dc702  3bcf                 cmp ecx, edi
// 005dc704  7426                 je 0x5dc72c
// 005dc706  50                   push eax
// 005dc707  8bce                 mov ecx, esi
// 005dc709  e892b40000           call 0x5e7ba0
// 005dc70e  85c0                 test eax, eax
// 005dc710  75e6                 jne 0x5dc6f8
// 005dc712  f683e801000004       test byte ptr [ebx + 0x1e8], 4
// 005dc719  740d                 je 0x5dc728
// 005dc71b  d9ee                 fldz 
// 005dc71d  51                   push ecx
// 005dc71e  8bcb                 mov ecx, ebx
// 005dc720  d91c24               fstp dword ptr [esp]
// 005dc723  e848f7ffff           call 0x5dbe70
// 005dc728  5f                   pop edi
// 005dc729  5e                   pop esi
// 005dc72a  5b                   pop ebx
// 005dc72b  c3                   ret 
// 005dc72c  808be801000004       or byte ptr [ebx + 0x1e8], 4
// 005dc733  5f                   pop edi
// 005dc734  5e                   pop esi
// 005dc735  5b                   pop ebx
// 005dc736  c3                   ret 

struct Link;

struct Primitive
{
    Link *first();
    Link *next(Link *);
};

struct Link
{
    char padding[0x0c];
    Primitive *a;
    Primitive *b;
};

struct S
{
    char padding[0x1e8];
    unsigned char flags;

    char *getA();
    char *getB();
    void reset(float);
    void f();
};

void S::f()
{
    char *a = getA();
    if (a)
    {
        Primitive *first = (Primitive *)(a + 0x228);
        if (first)
        {
            char *b = getB();
            if (b)
            {
                Primitive *second = (Primitive *)(b + 0x228);
                if (second)
                {
                    Link *link = first->first();
                    while (link)
                    {
                        Primitive *other = link->a;
                        if (first == other)
                            other = link->b;
                        if (other == second)
                        {
                            flags |= 4;
                            return;
                        }
                        link = first->next(link);
                    }
                }
            }
        }
    }

    if (flags & 4)
        reset(0.0f);
}
