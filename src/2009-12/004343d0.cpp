// from server: 36% by atomic.potato
extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node {
    Node* next;
    Node* prev;
    char pad[0x10];
    void* data;
};

struct Iter {
    Node* node;
    Node* tree;
};

struct S {
};

void __cdecl f(Iter* out, Node* first, Node* last, void* arg)
{
    Node* cur = first;
    Node* end = last;
    void (*fn)() = *(void (**)())0x98b760;
    while (cur != end) {
        if (cur == 0 || cur == end) {
            fn();
        }
        if (cur == 0) {
            fn();
        }
        if (cur->next == 0) {
            fn();
        }
        ((void (__stdcall *)(void*))*(void**)&arg)(arg);
        cur = cur->next;
    }
    out->node = cur;
    out->tree = end;
}
