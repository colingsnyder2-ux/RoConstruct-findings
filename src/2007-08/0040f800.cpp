// from server: 49% by colin
struct Node {
    Node* next;
    char pad[8];
};

struct Inner {
    char pad0[0xc];
    Node* head;
    char pad1[8];
    Node* head2;
};

struct Outer {
    char pad0[4];
    Node* head;
    char pad1[4];
    Inner inner;
    int f();
};

extern "C" void __stdcall sub_55D3D0(void*);
extern "C" void __cdecl sub_62FC62(void*);

int Outer::f()
{
    Node* n = inner.head;
    if (n) {
        do {
            Node* cur = n;
            n = n->next;
            sub_55D3D0((char*)cur + 4);
            sub_62FC62(cur);
        } while (n);
    }
    Node* m = head;
    if (m) {
        do {
            Node* cur = m;
            m = m->next;
            ((Outer*)cur)->f();
            sub_62FC62(cur);
        } while (m);
    }
    sub_55D3D0((char*)this + 0xc);
    return 0;
}
