// from server: 89% by colin
struct S {
    int f();
    int field0;
    int field4;
    int field8;
    int fieldC;
};

extern "C" void __cdecl sub_507D00(void*);
extern "C" void __cdecl sub_507D20(void*);
extern "C" void __cdecl sub_4D7E30(void*);

int S::f()
{
    int i = 0;
    if (fieldC > 0) {
        do {
            int* p = (int*)field8;
            int* node = (int*)p[i];
            if (node) {
                do {
                    int* next = (int*)node[6];
                    node[2] = 0x826bfc;
                    sub_4D7E30(node + 2);
                    sub_507D00(node);
                    node = next;
                } while (node);
            }
            i++;
        } while (i < fieldC);
    }
    sub_507D20((void*)field8);
    field8 = 0;
    fieldC = 0;
    field4 = 0;
    return 0;
}
