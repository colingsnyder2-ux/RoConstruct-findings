// from server: 28% by colin
// roc 2008-06 00553e60  unit: RBX::RenderBase::AggregateChunk  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00553e60

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall sub_6A067A(void*);
extern "C" void __stdcall sub_46B070();
extern "C" void __stdcall sub_68D1A0();

struct Node {
    Node* next;
    char pad[0x18 - 4];
    void* field18;
    char pad2[0x28 - 0x1C];
    void* field28;
};

struct S {
    void* field0;
    char pad[0x18 - 4];
    Node** field18;
    void f();
};

void S::f() {
    Node* ebp = *field18;
    Node* esi = (Node*)field0;
    int flag = 0;
    while (1) {
        Node* ebx = *field18;
        Node* eax = (Node*)field0;
        if (esi != 0 && esi == eax) {
            // ok
        } else {
            _invalid_parameter_noinfo();
        }
        if (ebp == ebx) break;
        if (esi != 0) {
            esi = esi->next;
        } else {
            _invalid_parameter_noinfo();
        }
        if (ebp == (Node*)esi->field18) {
            _invalid_parameter_noinfo();
        }
        void* p = ebp->field28;
        if (p != 0) {
            sub_46B070();
            sub_6A067A(p);
        }
        sub_68D1A0();
        ebp = *(Node**)((char*)&ebp + 0);
        esi = *(Node**)((char*)&esi + 0);
    }
    sub_46B070();
}
