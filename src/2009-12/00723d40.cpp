// from server: 39% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    void* data;
};

struct List {
    Node* head;
    char pad0[0x10];
    Node* sentinel;
    int size;
    char pad1[0x10];
    unsigned int flags;
};

struct Outer {
    List* list;
    char pad0[0x10];
    List* list2;
    int field18;
    char pad1[0x10];
    unsigned int field2c;

    void func();
};

extern "C" void __stdcall sub_7f385a(void*);

void Outer::func()
{
    Node* first;
    Node* cur;
    Node* end;
    List* lst;

    lst = this->list;
    first = lst->head;
    cur = first;
    end = lst->sentinel;

    while (cur != end) {
        if (this->field2c & 1) {
            if (this->field2c & 4) {
                goto skip;
            }
        }
        if (cur->data) {
            void** vt = *(void***)cur->data;
            void (*fn)(void*, int) = (void (*)(void*, int))vt[0x44/4];
            fn(cur->data, 0);
        }
        {
            void* tmp = cur->data;
            cur->data = 0;
            if (tmp) {
                void** vt = *(void***)tmp;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                fn(tmp, 1);
            }
        }
    skip:
        cur = cur->next;
    }

    lst = this->list;
    Node* h = lst->head;
    lst->head = (Node*)lst;
    lst->sentinel->prev = lst->sentinel;
    this->field18 = 0;
    while (h != (Node*)lst) {
        Node* nxt = h->next;
        sub_7f385a(h);
        h = nxt;
    }
    this->field2c &= 0xfffffffc;
}
