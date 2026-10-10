// from server: 39% by colin
extern "C" {
void __stdcall InflateRect(void* rect, int dx, int dy);
}

struct CXTPControlColorSelector {
    int field_0;
    char pad[0x94];
    int field_9c;
    char pad2[0xb8];
    int field_158;
    char pad3[0xc];
    int field_168;
    char pad4[0x4];
    int field_170;

    void func_00672ed0(int param);
};

extern int G1_func_006724a0(CXTPControlColorSelector* self);
extern void G1_func_00672e00(CXTPControlColorSelector* self, void* out, int idx);
extern int G1_func_0063a000(CXTPControlColorSelector* self);
extern void G1_func_0063a580(int val);
extern void* G1_func_00668f70();
extern void* G1_func_00668770(void* self, int size);
extern void G1_func_006308b0(void* self, void* out, int val);
extern void G1_func_006308aa(void* self, void* out, void* a, void* b);

void CXTPControlColorSelector::func_00672ed0(int param)
{
    int count;
    int i;
    int rect[4];
    int local_10;
    int local_14;
    int local_20;
    void* obj;
    int* p;

    count = G1_func_006724a0(this);
    if (count <= 0)
        return;

    local_10 = 0x8c8d58;
    for (i = 0; i < count; i++)
    {
        G1_func_00672e00(this, &local_20, i);

        if (i == this->field_168 || *(int*)local_10 == this->field_170)
        {
            int (*fn)(CXTPControlColorSelector*);
            fn = *(int (**)(CXTPControlColorSelector*))(*(int*)this + 0x78);
            if (fn(this))
            {
                if (i == this->field_168)
                    local_14 = 1;
                else
                    local_14 = 0;
            }
            else
            {
                local_14 = 0;
            }

            obj = (void*)G1_func_0063a000(this);

            if (this->field_9c == -1)
            {
                if (this->field_158)
                    G1_func_0063a580(this->field_158);
            }

            {
                int v1 = *(int*)local_10;
                int v2 = (v1 == this->field_170) ? 1 : 0;
                int v3 = (i == this->field_168) ? 1 : 0;
                int v4 = local_20;
                int v5 = *(int*)((char*)&local_20 + 4);
                int v6 = *(int*)((char*)&local_20 + 8);
                int v7 = *(int*)((char*)&local_20 + 12);
                int (*fn2)(void*, int, int, int, int, int, int, int, int, int, int, int, int, int);
                fn2 = *(int (**)(void*, int, int, int, int, int, int, int, int, int, int, int, int, int))(*(int*)obj + 0x84);
                fn2(obj, param, v3, v4, v5, v6, v7, v2, 0, 1, 5, v1, v3, v2);
            }
        }

        InflateRect(&local_20, -3, -3);

        if (this->field_9c == -1)
        {
            if (this->field_158)
                G1_func_0063a580(this->field_158);
        }

        if (this->field_9c != -1 || this->field_158 != 0)
        {
            int v = *(int*)local_10;
            G1_func_006308b0((void*)param, &local_20, v);
        }

        {
            void* a = G1_func_00668f70();
            void* b = G1_func_00668770(a, 0x10);
            void* c = G1_func_00668f70();
            void* d = G1_func_00668770(c, 0x10);
            G1_func_006308aa((void*)param, &local_20, d, b);
        }

        local_10 += 0xc;
    }
}
