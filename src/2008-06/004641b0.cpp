// from server: 100% by king_originala
// roc 2008-06 004641b0  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004641b0
//
// 004641b0  56                   push esi
// 004641b1  8b742408             mov esi, dword ptr [esp + 8]
// 004641b5  57                   push edi
// 004641b6  8b3e                 mov edi, dword ptr [esi]
// 004641b8  6a01                 push 1
// 004641ba  6a00                 push 0
// 004641bc  e80fd2ffff           call 0x4613d0
// 004641c1  8bc8                 mov ecx, eax
// 004641c3  e858c4ffff           call 0x460620
// 004641c8  f7d8                 neg eax
// 004641ca  1bc0                 sbb eax, eax
// 004641cc  f7d8                 neg eax
// 004641ce  50                   push eax
// 004641cf  8b4704               mov eax, dword ptr [edi + 4]
// 004641d2  8bce                 mov ecx, esi
// 004641d4  ffd0                 call eax
// 004641d6  5f                   pop edi
// 004641d7  5e                   pop esi
// 004641d8  c20400               ret 4

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
    target->setEnabled(reinterpret_cast<Control*>(f())->query(0, 1) != 0);
}
