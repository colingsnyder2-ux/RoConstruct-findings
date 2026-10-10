// from server: 35% by colin
// roc 2007-08 00440ce0  unit: CSelectionPropGrid  size: 737 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00440ce0

extern "C" {
    void __stdcall sub_4024C0(void*);
    void __stdcall sub_40DB50(void*, void*, void*, void*);
    void* __stdcall sub_438E90(void*);
    void* __stdcall sub_4CD5E0(void*);
    void __stdcall sub_4CD710(void*);
    void __stdcall sub_4D02F0(void*);
    void __stdcall sub_4D0870(void*);
    void __stdcall sub_62FC62(void*);
    void __stdcall sub_630B9E(void*, void*);
    void* __stdcall sub_77E698(const char*);
}

struct CSelectionPropGrid {
    void func(void* a, void* b, void* c);
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char isNil;
    char pad[2];
    void* data;
};

struct Tree {
    Node* head;
    int count;
};

void CSelectionPropGrid::func(void* a, void* b, void* c)
{
    char buf[0x48];
    void* local14;
    void* local18;
    void* local1c;
    void* local38;
    void* local3c;
    void* local5c;
    void* local6c;
    void* local70;
    void* local74;
    Node* node;
    Node* y;
    Node* x;
    Node* z;
    Node* w;
    char bl;
    void* p;

    local14 = this;
    p = *(void**)((char*)a + 0x74);

    if (*(char*)((char*)p + 0x21) != 0) {
        sub_77E698("invalid map/set<T> iterator");
        local18 = 0;
        sub_4024C0(&local38);
        local3c = (void*)0x784e78;
        sub_630B9E(&local38, (void*)0x83f364);
    }

    sub_4D0870(&local70);
    node = (Node*)local70;

    if (*(char*)((char*)node + 0x21) != 0) {
        y = *(Node**)((char*)node + 8);
    } else {
        Node* tmp = *(Node**)((char*)node + 8);
        if (*(char*)((char*)tmp + 0x21) != 0) {
            y = node;
        } else {
            void* q = *(void**)((char*)b + 0x74);
            y = *(Node**)((char*)q + 8);
            if (q != node) {
                goto fixup;
            }
        }
    }

    if (*(char*)((char*)y + 0x21) == 0) {
        *(Node**)((char*)y + 4) = *(Node**)((char*)node + 4);
    }

    {
        Tree* t = *(Tree**)((char*)this + 4);
        if (*(Node**)((char*)t + 4) == node) {
            *(Node**)((char*)t + 4) = y;
        } else {
            Node* par = *(Node**)((char*)node + 4);
            if (*(Node**)par == node) {
                *(Node**)par = y;
            } else {
                *(Node**)((char*)par + 8) = y;
            }
        }
    }

    {
        Tree* t = *(Tree**)((char*)this + 4);
        Node* h = *(Node**)((char*)t);
        if (*(Node**)h == node) {
            if (*(char*)((char*)y + 0x21) != 0) {
                *(Node**)h = *(Node**)((char*)node + 4);
            } else {
                *(Node**)h = (Node*)sub_438E90(y);
            }
        }
    }

    {
        Tree* t = *(Tree**)((char*)this + 4);
        Node* h = *(Node**)((char*)t + 4);
        if (*(Node**)((char*)h + 8) == node) {
            if (*(char*)((char*)y + 0x21) != 0) {
                *(Node**)((char*)h + 8) = *(Node**)((char*)node + 4);
            } else {
                *(Node**)((char*)h + 8) = (Node*)sub_4CD5E0(y);
            }
        }
    }

    goto after_fixup;

fixup:
    {
        Node* par = *(Node**)((char*)node + 4);
        *(Node**)((char*)y + 4) = par;
        *(Node**)y = *(Node**)node;
        if (y != *(Node**)((char*)node + 8)) {
            if (*(char*)((char*)y + 0x21) == 0) {
                *(Node**)((char*)y + 4) = *(Node**)((char*)y + 4);
            }
            *(Node**)((char*)y + 4) = *(Node**)((char*)y + 4);
            *(Node**)((char*)y + 4) = *(Node**)((char*)y + 4);
        }
    }

after_fixup:
    bl = 1;
    if (*(char*)((char*)node + 0x20) == bl) {
        Tree* t = *(Tree**)((char*)this + 4);
        Node* root = *(Node**)((char*)t + 4);
        while (y != root && *(char*)((char*)y + 0x20) == bl) {
            Node* par = *(Node**)((char*)y + 4);
            if (y == *(Node**)par) {
                Node* uncle = *(Node**)((char*)par + 8);
                if (*(char*)((char*)uncle + 0x20) == 0) {
                    *(char*)((char*)uncle + 0x20) = bl;
                    *(char*)((char*)par + 0x20) = 0;
                    sub_4CD710(par);
                    uncle = *(Node**)((char*)par + 8);
                }
                if (*(char*)((char*)uncle + 0x21) == 0) {
                    if (*(char*)((char*)uncle + 0x20) == bl) {
                        if (*(char*)((char*)uncle + 0x20) == bl) {
                            *(char*)((char*)uncle + 0x20) = 0;
                        }
                    }
                }
            } else {
                Node* uncle = *(Node**)par;
                if (*(char*)((char*)uncle + 0x20) == 0) {
                    *(char*)((char*)uncle + 0x20) = bl;
                    *(char*)((char*)par + 0x20) = 0;
                    sub_4D02F0(par);
                    uncle = *(Node**)par;
                }
                if (*(char*)((char*)uncle + 0x21) == 0) {
                    if (*(char*)((char*)uncle + 0x20) == bl) {
                        if (*(char*)((char*)uncle + 0x20) == bl) {
                            *(char*)((char*)uncle + 0x20) = 0;
                        }
                    }
                }
            }
            y = *(Node**)((char*)y + 4);
        }
        *(char*)((char*)y + 0x20) = bl;
    }

    {
        void* d = *(void**)((char*)node + 0x14);
        if (d != 0) {
            sub_40DB50(d, *(void**)((char*)node + 0x18), *(void**)((char*)node + 0x1c), *(void**)((char*)b + 0x6c));
            sub_62FC62(*(void**)((char*)node + 0x14));
        }
        *(void**)((char*)node + 0x14) = 0;
        *(void**)((char*)node + 0x18) = 0;
        *(void**)((char*)node + 0x1c) = 0;
        sub_62FC62(node);
    }

    {
        Tree* t = *(Tree**)((char*)this + 4);
        if (t->count > 0) {
            t->count--;
        }
    }

    *(void**)a = local6c;
    *(void**)((char*)a + 4) = local70;
}
