// from server: 100% by king_originala
// roc 2008-06 00464140  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464140
//
// 00464140  56                   push esi
// 00464141  8b742408             mov esi, dword ptr [esp + 8]
// 00464145  57                   push edi
// 00464146  8b3e                 mov edi, dword ptr [esi]
// 00464148  6a01                 push 1
// 0046414a  6a01                 push 1
// 0046414c  e87fd2ffff           call 0x4613d0
// 00464151  8bc8                 mov ecx, eax
// 00464153  e8c8c4ffff           call 0x460620
// 00464158  f7d8                 neg eax
// 0046415a  1bc0                 sbb eax, eax
// 0046415c  f7d8                 neg eax
// 0046415e  50                   push eax
// 0046415f  8b4704               mov eax, dword ptr [edi + 4]
// 00464162  8bce                 mov ecx, esi
// 00464164  ffd0                 call eax
// 00464166  5f                   pop edi
// 00464167  5e                   pop esi
// 00464168  c20400               ret 4

struct Control {
    int query(int, int);
};

struct Target {
    virtual void slot0();
    virtual void setEnabled(int);
};

struct S {
    char pad0[88];
    int m_x;
    int* f();
    void update(Target*);
};

void S::update(Target* target)
{
    target->setEnabled(reinterpret_cast<Control*>(f())->query(1, 1) != 0);
}
