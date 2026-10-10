// from server: 68% by colin
struct PaneBase {
    char pad0[0xcc];
    void* ptrCC;
    char padD0[0x74];
    int field144;

    void method_66f200();
    void method_66ed20(int, int);
    void method_66e420(int, int);
};

struct Inner {
    char pad0[8];
    void* ptr8;
};

struct Node {
    Node* next;
    Inner* inner;
};

extern "C" void __stdcall sub_7386d6(void*, int, int, int, int, int);

void PaneBase::method_66f200()
{
    void* pcc = ptrCC;
    if (pcc != 0) {
        void** vtbl = *(void***)pcc;
        int (*fn)(void*) = (int (*)(void*))vtbl[0x128 / 4];
        if (fn(pcc) != 0) {
            if ((*(unsigned char*)((char*)pcc + 0xd0) & 8) != 0) {
                method_66ed20(0, 0);
            }
        }
    }

    method_66e420(1, 0);

    void* p = *(void**)((char*)this + 0xd0);
    if (p == 0) {
        field144 = 1;
        return;
    }

    Node* n = *(Node**)((char*)p + 0x48);
    if (n == 0) {
        field144 = 1;
        return;
    }

    do {
        Inner* inner = n->inner;
        n = n->next;
        if (*(int*)((char*)inner + 0x18) == 3) {
            PaneBase* pb = (PaneBase*)((char*)inner - 0xe4);
            if (pb != 0) {
                if (*(void**)((char*)pb + 0x20) != 0) {
                    if ((*(unsigned char*)((char*)pb + 0xd0) & 8) != 0) {
                        void** vt = *(void***)pb;
                        void (*f2)(PaneBase*, int) = (void (*)(PaneBase*, int))vt[0x150 / 4];
                        f2(pb, 1);
                    }
                    sub_7386d6(*(void**)((char*)pb + 0x20), 0x364, 0, 0, 1, 1);
                }
            }
        }
    } while (n != 0);

    field144 = 1;
}
