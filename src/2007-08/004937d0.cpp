// from server: 37% by colin
struct Notifier {
    char pad0[0x24];
    struct List {
        struct Node {
            Node* next;
            Node* prev;
        };
        Node* head;
    } list;
    void insert(const void* value);
};

extern "C" void* __stdcall sub_492E00(void* self, void* a, void* b);
extern "C" void __stdcall sub_492680(void* self, int a);
extern "C" void __stdcall sub_630A1E();
extern "C" void* __stdcall sub_77E69C(void* self, const void* src);
extern "C" void __stdcall sub_77E6AC(void* self);

extern void* g_8bde44;

void Notifier::insert(const void* value)
{
    void* p = 0;
    if (*(void**)((char*)value + 0x1c)) {
        void* vtbl = *(void**)g_8bde44;
        p = ((void* (__stdcall*)(void*))*(void**)((char*)vtbl + 4))((char*)(*(void**)((char*)value + 0x1c)) + 4);
    }
    char buf[0x10];
    sub_77E69C(buf, value);
    List::Node* node = list.head;
    List::Node* prev = node->prev;
    void* result = sub_492E00(&list, prev, prev->next);
    sub_492680(&list, 1);
    prev->next = (List::Node*)result;
    *(List::Node**)((char*)result + 4) = prev;
    sub_77E6AC(buf);
}
