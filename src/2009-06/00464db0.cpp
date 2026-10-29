// roc 2009-06 00464db0  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464db0
//
// 00464db0  56                   push esi
// 00464db1  8b742408             mov esi, dword ptr [esp + 8]
// 00464db5  57                   push edi
// 00464db6  8b3e                 mov edi, dword ptr [esi]
// 00464db8  6a01                 push 1
// 00464dba  6a01                 push 1
// 00464dbc  e87fd2ffff           call 0x462040
// 00464dc1  8bc8                 mov ecx, eax
// 00464dc3  e8c8c4ffff           call 0x461290
// 00464dc8  f7d8                 neg eax
// 00464dca  1bc0                 sbb eax, eax
// 00464dcc  f7d8                 neg eax
// 00464dce  50                   push eax
// 00464dcf  8b4704               mov eax, dword ptr [edi + 4]
// 00464dd2  8bce                 mov ecx, esi
// 00464dd4  ffd0                 call eax
// 00464dd6  5f                   pop edi
// 00464dd7  5e                   pop esi
// 00464dd8  c20400               ret 4
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
    target->setEnabled(reinterpret_cast<Control*>(f())->query(1, 1) != 0);
}