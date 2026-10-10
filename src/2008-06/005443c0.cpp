// from server: 35% by tester
// roc 2008-06 005443c0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005443c0

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
};

struct List {
    Node* head;
};

struct S {
    char pad0[4];
    List* list;
    void f();
};

extern "C" int __cdecl sub_402410(void* p);
extern "C" Node* __cdecl sub_541da0(List* l);
extern "C" char* __cdecl sub_542e00(Node* n);
extern "C" Node* __cdecl sub_5450f0(Node* n);
extern "C" Node* __cdecl sub_54c640(List* l);

void S::f() {
    if (!sub_402410(this)) {
        _invalid_parameter_noinfo();
    }
    Node* n = sub_541da0(this->list);
    if (*sub_542e00(n) != 0) {
        _invalid_parameter_noinfo();
        return;
    }
    Node* first = sub_541da0(this->list);
    if (*sub_542e00(first->next) == 0) {
        this->list->head = sub_5450f0(first->next);
    } else {
        Node* cur = sub_54c640(this->list);
        while (*sub_542e00(cur) == 0 && this->list->head == sub_541da0((List*)cur)->next) {
            this->list->head = cur;
            cur = sub_54c640(this->list);
        }
        this->list->head = cur;
    }
}
