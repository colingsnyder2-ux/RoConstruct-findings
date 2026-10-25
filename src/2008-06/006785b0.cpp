// from server: 94% by king_originala
// roc 2008-06 006785b0  unit: Ogre::RbxSceneManagerFactory  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006785b0
//
// 006785b0  d905b8c38100         fld dword ptr [0x81c3b8]
// 006785b6  56                   push esi
// 006785b7  8bc1                 mov eax, ecx
// 006785b9  57                   push edi
// 006785ba  c70000000000         mov dword ptr [eax], 0
// 006785c0  8d5008               lea edx, [eax + 8]
// 006785c3  bf63000000           mov edi, 0x63
// 006785c8  d912                 fst dword ptr [edx]
// 006785ca  be000080bf           mov esi, 0xbf800000
// 006785cf  897204               mov dword ptr [edx + 4], esi
// 006785d2  897208               mov dword ptr [edx + 8], esi
// 006785d5  89720c               mov dword ptr [edx + 0xc], esi
// 006785d8  897210               mov dword ptr [edx + 0x10], esi
// 006785db  83c214               add edx, 0x14
// 006785de  83ef01               sub edi, 1
// 006785e1  79e5                 jns 0x6785c8
// 006785e3  5f                   pop edi
// 006785e4  ddd8                 fstp st(0)
// 006785e6  5e                   pop esi
// 006785e7  c3                   ret 

// from server: 85% by king_originala
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc 2008-06 006785b0  unit: Ogre::RbxSceneManagerFactory  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006785b0
//
// 006785b0  d905b8c38100         fld dword ptr [0x81c3b8]
// 006785b6  56                   push esi
// 006785b7  8bc1                 mov eax, ecx
// 006785b9  57                   push edi
// 006785ba  c70000000000         mov dword ptr [eax], 0
// 006785c0  8d5008               lea edx, [eax + 8]
// 006785c3  bf63000000           mov edi, 0x63
// 006785c8  d912                 fst dword ptr [edx]
// 006785ca  be000080bf           mov esi, 0xbf800000
// 006785cf  897204               mov dword ptr [edx + 4], esi
// 006785d2  897208               mov dword ptr [edx + 8], esi
// 006785d5  89720c               mov dword ptr [edx + 0xc], esi
// 006785d8  897210               mov dword ptr [edx + 0x10], esi
// 006785db  83c214               add edx, 0x14
// 006785de  83ef01               sub edi, 1
// 006785e1  79e5                 jns 0x6785c8
// 006785e3  5f                   pop edi
// 006785e4  ddd8                 fstp st(0)
// 006785e6  5e                   pop esi
// 006785e7  c3                   ret 

extern float initialValue;

struct S {
    int count;
    int reserved;
    struct Record {
        float value;
        unsigned int a, b, c, d;
    } records[100];

    S();
};

S::S()
{
    float value = initialValue;
    count = 0;
    Record* p = records;
    int n = 99;
    do {
        p->value = value;
        p->a = 0xbf800000;
        p->b = 0xbf800000;
        p->c = 0xbf800000;
        p->d = 0xbf800000;
        ++p;
    } while (--n >= 0);
}
