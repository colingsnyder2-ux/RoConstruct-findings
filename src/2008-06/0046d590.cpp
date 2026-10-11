// from server: 23% by colin
struct LDraw2RobloxColorMap {
    void destroy();
};

struct Node {
    Node* next;
    char pad[0x0c];
    void* obj;
};

struct List {
    Node* head;
    Node* tail;
    void clear();
};

struct SharedPtr {
    void* px;
    void* pn;
    void release();
};

struct Inner {
    char pad[0x0c];
    void* obj;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall basic_string_dtor(void*);

void LDraw2RobloxColorMap::destroy()
{
    *(void**)this = (void*)0x81c904;

    List* list1 = (List*)((char*)this + 0x3c);
    Node* n1 = list1->head;
    Node* end1 = *(Node**)((char*)this + 0x54);
    end1 = end1->next;

    while (n1 != end1) {
        if (n1 == 0 || n1 != list1->head) {
            _invalid_parameter_noinfo();
        }
        if (n1 != end1) {
            if (n1 == 0) {
                _invalid_parameter_noinfo();
            }
            if (n1 != *(Node**)((char*)n1 + 0x18)) {
                _invalid_parameter_noinfo();
            }
            Inner* inner = (Inner*)((char*)n1 + 0x10);
            if (inner->obj != 0) {
                void** vt = *(void***)inner->obj;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                fn(inner->obj, 1);
            }
            SharedPtr* sp = (SharedPtr*)&n1;
            sp->release();
            n1 = *(Node**)((char*)this + 0x3c);
            end1 = *(Node**)((char*)this + 0x54);
            end1 = end1->next;
        } else {
            n1 = n1->next;
        }
    }

    List* list2 = (List*)((char*)this + 0x5c);
    Node* n2 = list2->head;
    Node* end2 = *(Node**)((char*)this + 0x74);
    end2 = end2->next;

    while (n2 != end2) {
        if (n2 == 0 || n2 != list2->head) {
            _invalid_parameter_noinfo();
        }
        if (n2 != end2) {
            if (n2 == 0) {
                _invalid_parameter_noinfo();
            }
            if (n2 != *(Node**)((char*)n2 + 0x18)) {
                _invalid_parameter_noinfo();
            }
            Inner* inner = (Inner*)((char*)n2 + 0x28);
            if (inner->obj != 0) {
                void** vt = *(void***)inner->obj;
                void (*fn)(void*, int) = (void (*)(void*, int))vt[0];
                fn(inner->obj, 1);
            }
            SharedPtr* sp = (SharedPtr*)&n2;
            sp->release();
            n2 = *(Node**)((char*)this + 0x5c);
            end2 = *(Node**)((char*)this + 0x74);
            end2 = end2->next;
        } else {
            n2 = n2->next;
        }
    }

    list2->clear();
    list1->clear();
    basic_string_dtor((char*)this + 0x20);
    basic_string_dtor((char*)this + 4);
}
