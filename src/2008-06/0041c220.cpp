// from server: 100% by king_originala
// roc 2008-06 0041c220  unit: VDHTMLWindow::?$BoundFuncDesc  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041c220
//
// 0041c220  6aff                 push -1
// 0041c222  689ee37c00           push 0x7ce39e
// 0041c227  64a100000000         mov eax, dword ptr fs:[0]
// 0041c22d  50                   push eax
// 0041c22e  64892500000000       mov dword ptr fs:[0], esp
// 0041c235  51                   push ecx
// 0041c236  8b442428             mov eax, dword ptr [esp + 0x28]
// 0041c23a  56                   push esi
// 0041c23b  8bf1                 mov esi, ecx
// 0041c23d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0041c241  50                   push eax
// 0041c242  51                   push ecx
// 0041c243  8974240c             mov dword ptr [esp + 0xc], esi
// 0041c247  e854f6ffff           call 0x41b8a0
// 0041c24c  50                   push eax
// 0041c24d  8bce                 mov ecx, esi
// 0041c24f  e83c951700           call 0x595790
// 0041c254  8b542418             mov edx, dword ptr [esp + 0x18]
// 0041c258  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041c25c  8d4e40               lea ecx, [esi + 0x40]
// 0041c25f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041c267  c70628ef8000         mov dword ptr [esi], 0x80ef28
// 0041c26d  895638               mov dword ptr [esi + 0x38], edx
// 0041c270  89463c               mov dword ptr [esi + 0x3c], eax
// 0041c273  e848881700           call 0x594ac0
// 0041c278  8d4e48               lea ecx, [esi + 0x48]
// 0041c27b  c644241001           mov byte ptr [esp + 0x10], 1
// 0041c280  e83b881700           call 0x594ac0
// 0041c285  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0041c289  8b542424             mov edx, dword ptr [esp + 0x24]
// 0041c28d  51                   push ecx
// 0041c28e  52                   push edx
// 0041c28f  8bce                 mov ecx, esi
// 0041c291  c644241802           mov byte ptr [esp + 0x18], 2
// 0041c296  e815acffff           call 0x416eb0
// 0041c29b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041c29f  8bc6                 mov eax, esi
// 0041c2a1  5e                   pop esi
// 0041c2a2  64890d00000000       mov dword ptr fs:[0], ecx
// 0041c2a9  83c410               add esp, 0x10
// 0041c2ac  c21800               ret 0x18

extern "C" void* __stdcall getDescriptor(const char*, unsigned);

struct Base {
    virtual ~Base();
    char storage[52];

    Base(void*);
};

struct Value {
    void* type;
    void* data;

    Value();
    ~Value();
};

struct Callback {
    unsigned first;
    unsigned second;
};

struct S : Base {
    Callback callback;
    Value firstValue;
    Value secondValue;

    S(Callback, const char*, const char*, const char*, unsigned);
    virtual ~S();
    void initialize(const char*, const char*);
};

S::S(Callback function, const char* name, const char* first,
     const char* second, unsigned flags)
    : Base(getDescriptor(name, flags)),
      callback(function),
      firstValue(),
      secondValue()
{
    initialize(first, second);
}
