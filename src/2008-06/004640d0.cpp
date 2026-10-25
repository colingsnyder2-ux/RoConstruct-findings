// from server: 100% by colin
// roc 2008-06 004640d0  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004640d0
//
// 004640d0  56                   push esi
// 004640d1  8b742408             mov esi, dword ptr [esp + 8]
// 004640d5  57                   push edi
// 004640d6  8b3e                 mov edi, dword ptr [esi]
// 004640d8  6a01                 push 1
// 004640da  6a02                 push 2
// 004640dc  e8efd2ffff           call 0x4613d0
// 004640e1  8bc8                 mov ecx, eax
// 004640e3  e838c5ffff           call 0x460620
// 004640e8  f7d8                 neg eax
// 004640ea  1bc0                 sbb eax, eax
// 004640ec  f7d8                 neg eax
// 004640ee  50                   push eax
// 004640ef  8b4704               mov eax, dword ptr [edi + 4]
// 004640f2  8bce                 mov ecx, esi
// 004640f4  ffd0                 call eax
// 004640f6  5f                   pop edi
// 004640f7  5e                   pop esi
// 004640f8  c20400               ret 4

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
    target->setEnabled(reinterpret_cast<Control*>(f())->query(2, 1) != 0);
}
