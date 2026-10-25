// from server: 100% by king_originala
// roc 2008-06 0063b0f0  unit: G3D::VColor3::V?$Value::?$SignalDesc  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b0f0
//
// 0063b0f0  51                   push ecx
// 0063b0f1  85c9                 test ecx, ecx
// 0063b0f3  7405                 je 0x63b0fa
// 0063b0f5  8d4114               lea eax, [ecx + 0x14]
// 0063b0f8  eb02                 jmp 0x63b0fc
// 0063b0fa  33c0                 xor eax, eax
// 0063b0fc  56                   push esi
// 0063b0fd  8bb130010000         mov esi, dword ptr [ecx + 0x130]
// 0063b103  50                   push eax
// 0063b104  b9ecd29700           mov ecx, 0x97d2ec
// 0063b109  e81205f3ff           call 0x56b620
// 0063b10e  85c0                 test eax, eax
// 0063b110  740e                 je 0x63b120
// 0063b112  56                   push esi
// 0063b113  8d4c240b             lea ecx, [esp + 0xb]
// 0063b117  51                   push ecx
// 0063b118  8d4810               lea ecx, [eax + 0x10]
// 0063b11b  e8b0e4ffff           call 0x6395d0
// 0063b120  5e                   pop esi
// 0063b121  59                   pop ecx
// 0063b122  c20400               ret 4

struct Base {
    char data;
};

struct Token {};

struct Action {
    void invoke(Token*, int);
};

struct Result {
    char padding[16];
    Action action;
};

struct Lookup {
    Result* find(Base*);
};

extern Lookup lookup;

struct S {
    char padding0[20];
    Base base;
    char padding1[283];
    int value;

    void f(void*);
};

void S::f(void*)
{
    Base* key = this ? &base : 0;
    int saved = value;
    Result* result = lookup.find(key);
    if (result) {
        Token token;
        result->action.invoke(&token, saved);
    }
}
