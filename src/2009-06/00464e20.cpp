// roc 2009-06 00464e20  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464e20
//
// 00464e20  56                   push esi
// 00464e21  8b742408             mov esi, dword ptr [esp + 8]
// 00464e25  57                   push edi
// 00464e26  8b3e                 mov edi, dword ptr [esi]
// 00464e28  6a01                 push 1
// 00464e2a  6a00                 push 0
// 00464e2c  e80fd2ffff           call 0x462040
// 00464e31  8bc8                 mov ecx, eax
// 00464e33  e858c4ffff           call 0x461290
// 00464e38  f7d8                 neg eax
// 00464e3a  1bc0                 sbb eax, eax
// 00464e3c  f7d8                 neg eax
// 00464e3e  50                   push eax
// 00464e3f  8b4704               mov eax, dword ptr [edi + 4]
// 00464e42  8bce                 mov ecx, esi
// 00464e44  ffd0                 call eax
// 00464e46  5f                   pop edi
// 00464e47  5e                   pop esi
// 00464e48  c20400               ret 4
// copied from an identical function in another client (function ?update@S@@QAEXPAUTarget@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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