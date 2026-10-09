// from server: 87% by colin
// roc 2007-08 005556d0  unit: RBX::GuiTarget  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005556d0
//
// 005556d0  56                   push esi
// 005556d1  8b742408             mov esi, dword ptr [esp + 8]
// 005556d5  8b06                 mov eax, dword ptr [esi]
// 005556d7  8b5014               mov edx, dword ptr [eax + 0x14]
// 005556da  57                   push edi
// 005556db  8bce                 mov ecx, esi
// 005556dd  ffd2                 call edx
// 005556df  0fb7f8               movzx edi, ax
// 005556e2  8b06                 mov eax, dword ptr [esi]
// 005556e4  8b5010               mov edx, dword ptr [eax + 0x10]
// 005556e7  8bce                 mov ecx, esi
// 005556e9  ffd2                 call edx
// 005556eb  0fbfc0               movsx eax, ax
// 005556ee  8944240c             mov dword ptr [esp + 0xc], eax
// 005556f2  0fbfcf               movsx ecx, di
// 005556f5  db44240c             fild dword ptr [esp + 0xc]
// 005556f9  894c240c             mov dword ptr [esp + 0xc], ecx
// 005556fd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00555701  56                   push esi
// 00555702  db442410             fild dword ptr [esp + 0x10]
// 00555706  d9c9                 fxch st(1)
// 00555708  d91d641e8c00         fstp dword ptr [0x8c1e64]
// 0055570e  d91d681e8c00         fstp dword ptr [0x8c1e68]
// 00555714  8b11                 mov edx, dword ptr [ecx]
// 00555716  8b4264               mov eax, dword ptr [edx + 0x64]
// 00555719  ffd0                 call eax
// 0055571b  5f                   pop edi
// 0055571c  5e                   pop esi
// 0055571d  c3                   ret 

struct GuiTarget {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int getHeight();
    virtual int getWidth();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void setSize(int, int);
};

float g_556d0_a;
float g_556d0_b;

void f(GuiTarget* p, int a, int b, int c) {
    unsigned short w = (unsigned short)p->getWidth();
    int h = (short)p->getHeight();
    g_556d0_a = (float)h;
    g_556d0_b = (float)(short)w;
    p->setSize((short)w, h);
}
