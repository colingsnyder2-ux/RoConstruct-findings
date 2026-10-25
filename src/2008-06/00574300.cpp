// from server: 100% by king_originala
// roc 2008-06 00574300  unit: RBX::UnifiedWidget  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00574300
//
// 00574300  56                   push esi
// 00574301  8bf1                 mov esi, ecx
// 00574303  8b06                 mov eax, dword ptr [esi]
// 00574305  8b5054               mov edx, dword ptr [eax + 0x54]
// 00574308  ffd2                 call edx
// 0057430a  84c0                 test al, al
// 0057430c  7418                 je 0x574326
// 0057430e  8b06                 mov eax, dword ptr [esi]
// 00574310  8b5070               mov edx, dword ptr [eax + 0x70]
// 00574313  57                   push edi
// 00574314  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00574318  57                   push edi
// 00574319  8bce                 mov ecx, esi
// 0057431b  ffd2                 call edx
// 0057431d  57                   push edi
// 0057431e  8bce                 mov ecx, esi
// 00574320  e85bffffff           call 0x574280
// 00574325  5f                   pop edi
// 00574326  5e                   pop esi
// 00574327  c20400               ret 4

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
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual bool v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28(int);

    void sub_574280(int);
    void f(int);
};

void S::f(int a)
{
    if (v21()) {
        v28(a);
        sub_574280(a);
    }
}
