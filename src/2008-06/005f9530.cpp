// from server: 100% by king_originala
// roc 2008-06 005f9530  unit: UString_sink::?$stream_buffer  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9530
//
// 005f9530  8b442404             mov eax, dword ptr [esp + 4]
// 005f9534  56                   push esi
// 005f9535  8bf1                 mov esi, ecx
// 005f9537  83f801               cmp eax, 1
// 005f953a  752c                 jne 0x5f9568
// 005f953c  b802000000           mov eax, 2
// 005f9541  844658               test byte ptr [esi + 0x58], al
// 005f9544  7553                 jne 0x5f9599
// 005f9546  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005f9549  c70100000000         mov dword ptr [ecx], 0
// 005f954f  8b5620               mov edx, dword ptr [esi + 0x20]
// 005f9552  c70200000000         mov dword ptr [edx], 0
// 005f9558  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005f955b  c70100000000         mov dword ptr [ecx], 0
// 005f9561  094658               or dword ptr [esi + 0x58], eax
// 005f9564  5e                   pop esi
// 005f9565  c20400               ret 4
// 005f9568  83f802               cmp eax, 2
// 005f956b  752c                 jne 0x5f9599
// 005f956d  f6465804             test byte ptr [esi + 0x58], 4
// 005f9571  7526                 jne 0x5f9599
// 005f9573  8b16                 mov edx, dword ptr [esi]
// 005f9575  8b4230               mov eax, dword ptr [edx + 0x30]
// 005f9578  ffd0                 call eax
// 005f957a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005f957d  c70100000000         mov dword ptr [ecx], 0
// 005f9583  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f9586  c70200000000         mov dword ptr [edx], 0
// 005f958c  8b4634               mov eax, dword ptr [esi + 0x34]
// 005f958f  c70000000000         mov dword ptr [eax], 0
// 005f9595  834e5804             or dword ptr [esi + 0x58], 4
// 005f9599  5e                   pop esi
// 005f959a  c20400               ret 4

struct S {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void flush();

    char padding04[12];
    int *p10;
    int *p14;
    char padding18[8];
    int *p20;
    int *p24;
    char padding28[8];
    int *p30;
    int *p34;
    char padding38[32];
    unsigned int flags;

    void f(int mode);
};

void S::f(int mode)
{
    if (mode == 1) {
        if (!(flags & 2)) {
            *p10 = 0;
            *p20 = 0;
            *p30 = 0;
            flags |= 2;
        }
    } else if (mode == 2) {
        if (!(flags & 4)) {
            flush();
            *p14 = 0;
            *p24 = 0;
            *p34 = 0;
            flags |= 4;
        }
    }
}
