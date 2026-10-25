// from server: 91% by atomic.potato
// roc 2011-06 006654b0  unit: RBX::VCamera::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006654b0
//
// 006654b0  56                   push esi
// 006654b1  8bf1                 mov esi, ecx
// 006654b3  e878eaffff           call 0x663f30
// 006654b8  85c0                 test eax, eax
// 006654ba  741e                 je 0x6654da
// 006654bc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006654c0  8b10                 mov edx, dword ptr [eax]
// 006654c2  6a00                 push 0
// 006654c4  51                   push ecx
// 006654c5  8bc8                 mov ecx, eax
// 006654c7  8b4210               mov eax, dword ptr [edx + 0x10]
// 006654ca  ffd0                 call eax
// 006654cc  50                   push eax
// 006654cd  8bce                 mov ecx, esi
// 006654cf  e82cffffff           call 0x665400
// 006654d4  b001                 mov al, 1
// 006654d6  5e                   pop esi
// 006654d7  c20400               ret 4
// 006654da  32c0                 xor al, al
// 006654dc  5e                   pop esi
// 006654dd  c20400               ret 4

struct Inner {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual int v4(int, int);
};

struct S {
    Inner* GetInner();
    int DoThing(int);
    bool Method(int arg);
};

bool S::Method(int arg) {
    Inner* p = GetInner();
    if (p) {
        DoThing(p->v4(arg, 0));
        return true;
    }
    return false;
}
