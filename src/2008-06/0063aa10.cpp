// from server: 100% by king_originala
// roc 2008-06 0063aa10  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063aa10
//
// 0063aa10  51                   push ecx
// 0063aa11  85c9                 test ecx, ecx
// 0063aa13  7405                 je 0x63aa1a
// 0063aa15  8d4114               lea eax, [ecx + 0x14]
// 0063aa18  eb02                 jmp 0x63aa1c
// 0063aa1a  33c0                 xor eax, eax
// 0063aa1c  56                   push esi
// 0063aa1d  8bb130010000         mov esi, dword ptr [ecx + 0x130]
// 0063aa23  50                   push eax
// 0063aa24  b95cd49700           mov ecx, 0x97d45c
// 0063aa29  e8f20bf3ff           call 0x56b620
// 0063aa2e  85c0                 test eax, eax
// 0063aa30  740e                 je 0x63aa40
// 0063aa32  56                   push esi
// 0063aa33  8d4c240b             lea ecx, [esp + 0xb]
// 0063aa37  51                   push ecx
// 0063aa38  8d4810               lea ecx, [eax + 0x10]
// 0063aa3b  e860e6ffff           call 0x6390a0
// 0063aa40  5e                   pop esi
// 0063aa41  59                   pop ecx
// 0063aa42  c20400               ret 4

struct Part {
    char data[284];
};

struct Action {
    void invoke(char* result, int value);
};

struct Result {
    char padding[16];
    Action action;
};

struct Lookup {
    Result* find(Part* part);
};

extern Lookup lookup;

struct S {
    char padding[20];
    Part part;
    int value;

    void f(int unused);
};

void S::f(int unused)
{
    char result;
    Part* p = this ? &part : 0;
    int v = value;
    Result* found = lookup.find(p);
    if (found)
        found->action.invoke(&result, v);
}
