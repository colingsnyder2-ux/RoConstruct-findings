// from server: 39% by colin
// roc 2008-06 0065b1b0  unit: RBX::BallBallContact  size: 627 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065b1b0

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void __stdcall G3D_alignedFree(void* p);
extern "C" void __cdecl sub_6A067A(void* p);
extern "C" void* __cdecl sub_6A165B(void* dst, int size, int align, void* ctor);

struct Node {
    Node* next;
    void* data;
    char pad[0x20];
    Node* field28;
};

struct Entry {
    void* a;
    void* b;
};

struct Arr {
    Entry* begin;
    Entry* end;
};

struct BallBallContact {
    char pad0[0xc];
    Arr arrs[1];
    char pad1[0x6c - 0xc - 8];
    Node* list6c;
    Node* list70;
    Node* list74;
    char pad2[0x80 - 0x78];
    void* ptr80;
    int val84;
    int val88;

    void method();
};

extern int g_count;

void BallBallContact::method()
{
    int i = 0;
    if (g_count > 0) {
        Arr* arr = &arrs[0];
        do {
            int limit;
            {
                char* b = (char*)arr->begin;
                char* e = (char*)arr->end;
                if ((((int)(e - b)) & 0xfffffff8) == 0) {
                    goto next;
                }
                limit = 0x10000 >> i;
            }
            {
                int j = 0;
                if (limit > 0) {
                    do {
                        Entry* base = arr->begin;
                        int cnt = (int)((char*)arr->end - (char*)base) >> 3;
                        if (j >= cnt) _invalid_parameter_noinfo();
                        if (base[j].a != 0) {
                            Entry* base2 = arr->begin;
                            int cnt2 = (int)((char*)arr->end - (char*)base2) >> 3;
                            if (j >= cnt2) _invalid_parameter_noinfo();
                            if (base2[j].a != 0) {
                                Entry* base3 = arr->begin;
                                int cnt3 = (int)((char*)arr->end - (char*)base3) >> 3;
                                if (j >= cnt3) _invalid_parameter_noinfo();
                                void* old = base3[j].a;
                                Entry* base4 = arr->begin;
                                int cnt4 = (int)((char*)arr->end - (char*)base4) >> 3;
                                if (j >= cnt4) _invalid_parameter_noinfo();
                                void* src = base4[j].a;
                                void* newval = *(void**)((char*)src + 4);
                                Entry* base5 = arr->begin;
                                base5[j].a = newval;
                                sub_6A067A(old);
                                this->val84--;
                                continue;
                            }
                        }
                        {
                            Entry* base6 = arr->begin;
                            int cnt6 = (int)((char*)arr->end - (char*)base6) >> 3;
                            if (j >= cnt6) _invalid_parameter_noinfo();
                            if (base6[j].b != 0) {
                                Entry* base7 = arr->begin;
                                int cnt7 = (int)((char*)arr->end - (char*)base7) >> 3;
                                if (j >= cnt7) _invalid_parameter_noinfo();
                                if (base7[j].b != 0) {
                                    Entry* base8 = arr->begin;
                                    int cnt8 = (int)((char*)arr->end - (char*)base8) >> 3;
                                    if (j >= cnt8) _invalid_parameter_noinfo();
                                    void* old = base8[j].b;
                                    Entry* base9 = arr->begin;
                                    int cnt9 = (int)((char*)arr->end - (char*)base9) >> 3;
                                    if (j >= cnt9) _invalid_parameter_noinfo();
                                    void* src = base9[j].b;
                                    void* newval = *(void**)((char*)src + 0x28);
                                    Entry* base10 = arr->begin;
                                    base10[j].b = newval;
                                    sub_6A067A(old);
                                    continue;
                                }
                            }
                        }
                        j++;
                    } while (j < limit);
                }
            }
        next:
            i++;
            arr = (Arr*)((char*)arr + 0x18);
        } while (i < g_count);
    }

    while (list6c != 0) {
        Node* n = list6c;
        list6c = n->next;
        sub_6A067A(n);
    }
    while (list70 != 0) {
        Node* n = list70;
        list70 = n->next;
        sub_6A067A(n);
    }
    while (list74 != 0) {
        Node* n = list74;
        list74 = n->field28;
        sub_6A067A(n);
    }
    G3D_alignedFree(ptr80);
    ptr80 = 0;
    val84 = 0;
    val88 = 0;
    sub_6A165B((char*)this + 0xc, 0x18, 4, (void*)0x67fb10);
}
