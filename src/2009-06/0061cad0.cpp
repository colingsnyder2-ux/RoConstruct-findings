// from server: 1% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    char pad[8];
    int type;
    int has;
    char pad2[4];
    void* ptr;
    char pad3[8];
    void* ptr2;
};

struct Inner {
    char pad[0x18];
    Node* head;
};

struct Outer {
    char pad[0x18];
    Inner* inner;
};

struct S {
    void f(Outer* o);
};

void sub_618d90(void*, void*);
void sub_61bb70(void*, void*, void*);
void sub_6192f0(void*, void*, void*, void*, void*, void*, void*);
void sub_61c9c0(void*, void*);
void sub_61a5f0(void*);
void sub_618370(void*);
void sub_402500(void*, void*);

void S::f(Outer* o)
{
    Inner* in = o->inner;
    Node* e = in->head;
    Node* first = e;
    Node* cur = e;
    Node* end = in->head;

    while (cur != first) {
        if (cur == 0 || cur == e) {
            _invalid_parameter_noinfo();
        }
        if (cur == end) break;
        if (cur == 0) {
            _invalid_parameter_noinfo();
            if (cur == 0) {
                _invalid_parameter_noinfo();
            }
        }
        void* p = *(void**)((char*)cur + 0x14);
        void* tmp;
        sub_618d90(&tmp, &p);
        Node* n = *(Node**)((char*)cur + 0x10);
        (void)n;
        if (tmp == end) {
            void* q = *(void**)((char*)cur + 4);
            void* r;
            sub_61c9c0(&r, &q);
            sub_61a5f0(r);
        } else {
            if (*(int*)((char*)cur + 0xc) == 3) {
                void* a = *(void**)((char*)cur + 4);
                void* b;
                sub_618d90(&b, &a);
                void* c = *(void**)((char*)b + 4);
                void* d = *(void**)b;
                void* out;
                sub_61bb70(&out, d, c);
            } else {
                if (*(int*)((char*)cur + 0x10) != 0) {
                    void* x = *(void**)((char*)cur + 0x10);
                    *(void**)((char*)cur + 0x10) = x;
                    sub_402500((char*)cur + 0x14, (char*)cur + 0x14);
                }
                void* p1 = *(void**)((char*)cur + 0x18);
                void* p2 = *(void**)((char*)cur + 0x30);
                void* p3 = *(void**)((char*)cur + 0x18);
                void* p4 = *(void**)p2;
                void* out;
                sub_6192f0(&out, p3, p4, p2, (void*)0x61a270, p1, 0);
            }
        }
        sub_618370(&cur);
        cur = *(Node**)((char*)&cur);
    }
}
