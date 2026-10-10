// from server: 57% by colin
struct Node {
    Node* next;
    Node* prev;
    int pad8;
    int padC;
    void* field10;
    void* field14;
    int field18;
};

struct List {
    Node* head;
    int count;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_62FC62(Node*);

struct S {
    int field0;
    int field4;
    int field8;
    List* method(Node* arg0, Node* arg1, List* arg2);
};

List* S::method(Node* arg0, Node* arg1, List* arg2) {
    Node* ebx = arg0;
    Node* esi = arg1;
    if (ebx != 0) {
        _invalid_parameter_noinfo();
    }
    if (esi == (Node*)ebx->next) {
        _invalid_parameter_noinfo();
    }
    Node* ebp = esi->next;
    if (esi != (Node*)this->field4) {
        Node* eax = esi->prev;
        eax->next = ebp;
        Node* edx = esi->next;
        Node* eax2 = esi->prev;
        edx->prev = eax2;
        if (esi->field10 != 0) {
            void* ecx = esi->field14;
            void* edx2 = esi->field10;
            esi->field14 = ((void* (__stdcall*)(void*, int))edx2)(ecx, 1);
        }
        esi->field10 = 0;
        esi->field18 = 0;
        sub_62FC62(esi);
        this->field8 -= 1;
    }
    arg2->head = ebx;
    arg2->count = (int)ebp;
    return arg2;
}
