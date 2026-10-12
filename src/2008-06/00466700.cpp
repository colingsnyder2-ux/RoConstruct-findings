// from server: 27% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Node {
    Node* field0;
    int field4;
};

struct List {
    Node* begin;
    Node* end;
    Node* cap;
};

struct VSelection {
    virtual bool filter(void*, void*, void*, void*);
    List list;
};

struct FilteredListener {
    VSelection* sel;
    List list;
    bool filter(void* a, void* b, void* c, void* d);
};

bool FilteredListener::filter(void* a, void* b, void* c, void* d)
{
    Node* it = list.begin;
    Node* last = list.end;
    if (it > last)
        _invalid_parameter_noinfo();

    Node* first = it;
    Node* cur = it;

    while (true) {
        Node* e = list.end;
        if (list.begin > e)
            _invalid_parameter_noinfo();

        Node* n = list.begin;
        if (first != 0 && first != n)
            _invalid_parameter_noinfo();

        if (cur == e)
            break;

        if (first == 0) {
            _invalid_parameter_noinfo();
            Node* p = 0;
            if (cur < p->field0)
                _invalid_parameter_noinfo();
        } else {
            Node* p = first;
            if (cur < p->field0)
                _invalid_parameter_noinfo();
        }

        Node* inner = cur->field0;
        void* v = *(void**)((char*)inner + 4);
        void* self = *(void**)this;
        bool (*fn)(void*, void*, void*, void*) = *(bool(**)(void*,void*,void*,void*))((char*)self + 0x10);
        void* arg = (char*)inner + 0x10;
        if (!fn(this, d, &arg, v)) {
            if (first == 0) {
                _invalid_parameter_noinfo();
                Node* p = 0;
                if (cur < p->field0)
                    _invalid_parameter_noinfo();
            } else {
                Node* p = first;
                if (cur < p->field0)
                    _invalid_parameter_noinfo();
            }
            cur = (Node*)((char*)cur + 4);
            continue;
        }

        if (first == 0) {
            _invalid_parameter_noinfo();
            Node* p = 0;
            if (cur < p->field0)
                _invalid_parameter_noinfo();
        }

        Node* inner2 = cur->field0;
        if (inner2->field4 == (int)d) {
            break;
        }

        if (first == 0) {
            _invalid_parameter_noinfo();
            Node* p = 0;
            if (cur < p->field0)
                _invalid_parameter_noinfo();
        } else {
            Node* p = first;
            if (cur < p->field0)
                _invalid_parameter_noinfo();
        }

        Node* inner3 = cur->field0;
        _InterlockedExchangeAdd((volatile long*)((char*)inner3 + 4), 0);
        break;
    }

    return true;
}
