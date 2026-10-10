// from server: 65% by colin
struct Node {
    Node* next;
    char pad[4];
    unsigned char key;
    unsigned char flag;
    char pad2[2];
};

struct Ctx {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
};

struct Obj {
    void* vtable;
    Obj* field4;
    int field8;
    char pad[8];
    Node* field14;
    char pad2[0x1A];
    unsigned char field32;
    char pad3[0x79];
    unsigned short fieldAC[1];
};

int sub_613E90(Obj* obj, int a2, Ctx* ctx, int a4);
int sub_613D40(int a2, Ctx* ctx);

int sub_613E90(Obj* obj, int a2, Ctx* ctx, int a4) {
    if (obj == 0) {
        ctx->field10 = -1;
        ctx->field14 = -1;
        ctx->field0 = 8;
        ctx->field8 = 0xFF;
        return 8;
    }

    int idx = (int)obj->field32 - 1;
    if (idx >= 0) {
        void** vt = (void**)obj->vtable;
        int* table = (int*)vt[6];
        unsigned short* p = (unsigned short*)((char*)obj + idx * 2 + 0xAC);
        while (1) {
            unsigned short v = *p;
            int off = v * 3;
            if (a2 == table[off]) {
                break;
            }
            idx--;
            p--;
            if (idx < 0) {
                goto fallback;
            }
        }
        if (idx < 0) {
            goto fallback;
        }
        ctx->field10 = -1;
        ctx->field14 = -1;
        ctx->field0 = 6;
        ctx->field8 = idx;
        if (a4 == 0) {
            Node* n = obj->field14;
            if (n != 0) {
                while (1) {
                    if ((int)n->key > idx) {
                        n = n->next;
                        if (n != 0) {
                            continue;
                        }
                        return 6;
                    }
                    n->flag = 1;
                    break;
                }
            }
        }
        return 6;
    }

fallback:
    {
        int r = sub_613E90(obj->field4, a2, ctx, 0);
        if (r == 8) {
            return 8;
        }
        int r2 = sub_613D40(a2, ctx);
        ctx->field8 = r2;
        ctx->field0 = 7;
        return 7;
    }
}
