// from server: 58% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    int pad[4];
};

struct List {
    Node* head;
    Node* tail;
    int size;
    Node* field_10;
    Node* field_14;
};

struct S {
    List* field_0;
    Node* field_4;
    int pad[2];
    Node* field_10;
    Node* field_14;
    void f();
};

void g(S* s);

void S::f() {
    if (field_10 == 0)
        _invalid_parameter_noinfo();
    if (field_14 == field_10->next)
        _invalid_parameter_noinfo();
    field_14 = field_14->prev;
    if (field_0 == 0)
        _invalid_parameter_noinfo();
    if (field_4 == field_0->field_10)
        _invalid_parameter_noinfo();
    Node* p = field_4->next;
    Node* q = field_10;
    if (q != 0 && q != (Node*)((char*)field_4 + 0x18))
        _invalid_parameter_noinfo();
    if (field_14 == p) {
        g(this);
        g(this);
    }
}
