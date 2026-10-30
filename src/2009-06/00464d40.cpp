// roc 2009-06 00464d40  unit: CScriptEditor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00464d40
//
// 00464d40  56                   push esi
// 00464d41  8b742408             mov esi, dword ptr [esp + 8]
// 00464d45  57                   push edi
// 00464d46  8b3e                 mov edi, dword ptr [esi]
// 00464d48  6a01                 push 1
// 00464d4a  6a02                 push 2
// 00464d4c  e8efd2ffff           call 0x462040
// 00464d51  8bc8                 mov ecx, eax
// 00464d53  e838c5ffff           call 0x461290
// 00464d58  f7d8                 neg eax
// 00464d5a  1bc0                 sbb eax, eax
// 00464d5c  f7d8                 neg eax
// 00464d5e  50                   push eax
// 00464d5f  8b4704               mov eax, dword ptr [edi + 4]
// 00464d62  8bce                 mov ecx, esi
// 00464d64  ffd0                 call eax
// 00464d66  5f                   pop edi
// 00464d67  5e                   pop esi
// 00464d68  c20400               ret 4
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
    target->setEnabled(reinterpret_cast<Control*>(f())->query(2, 1) != 0);
}