// roc 2009-06 00475cb0  unit: Ogre::RbxSceneManagerFactory  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00475cb0
//
// 00475cb0  d90594758b00         fld dword ptr [0x8b7594]
// 00475cb6  56                   push esi
// 00475cb7  8bc1                 mov eax, ecx
// 00475cb9  57                   push edi
// 00475cba  c70000000000         mov dword ptr [eax], 0
// 00475cc0  8d5008               lea edx, [eax + 8]
// 00475cc3  bf63000000           mov edi, 0x63
// 00475cc8  d912                 fst dword ptr [edx]
// 00475cca  be000080bf           mov esi, 0xbf800000
// 00475ccf  897204               mov dword ptr [edx + 4], esi
// 00475cd2  897208               mov dword ptr [edx + 8], esi
// 00475cd5  89720c               mov dword ptr [edx + 0xc], esi
// 00475cd8  897210               mov dword ptr [edx + 0x10], esi
// 00475cdb  83c214               add edx, 0x14
// 00475cde  83ef01               sub edi, 1
// 00475ce1  79e5                 jns 0x475cc8
// 00475ce3  5f                   pop edi
// 00475ce4  ddd8                 fstp st(0)
// 00475ce6  5e                   pop esi
// 00475ce7  c3                   ret 
// copied from an identical function in another client (function ??0S@@QAE@XZ)

// from server: 100% by EspClaude
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct S {
    int count;
    int reserved;
    struct Record {
        float value;
        float v[4];
    } records[100];
    S();
};
S::S()
{
    count = 0;
    Record* p = records;
    int n = 99;
    do {
        p->value = -1.0f;
        for (int j = 0; j < 4; j++)
            p->v[j] = -1.0f;
        ++p;
    } while (--n >= 0);
}