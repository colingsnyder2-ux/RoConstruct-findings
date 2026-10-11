// from server: 44% by atomic.potato
struct Node {
    Node* next;
    char pad[8];
    unsigned int fieldC;
    unsigned int field10;
};

struct S {
    char pad[0x108];
    Node* field108;
    int f();
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_6a17c6(int, int, int, int, int);

int S::f()
{
    Node* p = field108;
    if (p == 0)
        return 0;

    unsigned int v10 = p->field10;
    if (p->fieldC > v10)
        _invalid_parameter_noinfo();

    Node* first = p;
    Node* cur = field108;
    unsigned int c = cur->fieldC;
    if (c > cur->field10)
        _invalid_parameter_noinfo();

    Node* n = cur->next;
    while (n != 0 && n != first)
        _invalid_parameter_noinfo();

    while (c != v10)
    {
        if (n != 0)
        {
            int r = *(int*)n;
            if (sub_6a17c6(r, 0, 0x92907c, 0x951950, 0) != 0)
                return 0;
        }
        else
        {
            if (c > 0)
                _invalid_parameter_noinfo();
            int r = *(int*)c;
            if (sub_6a17c6(r, 0, 0x92907c, 0x951950, 0) != 0)
                return 0;
        }
        c += 8;
    }
    return 0;
}
