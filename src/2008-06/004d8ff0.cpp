// from server: 89% by colin
struct S_004d8ff0 {
    int f0;
    int f4;
    int* f8;
    int fc;
    void method_004d8ff0();
};

struct Node_004d8ff0 {
    int pad0;
    int pad4;
    int pad8;
    int padc;
    int pad10;
    int pad14;
    Node_004d8ff0* f18;
};

extern "C" void __cdecl func_004d7e30(int*);
extern "C" void __cdecl func_00507d00(void*);
extern "C" void __cdecl func_00507d20(void*);

void S_004d8ff0::method_004d8ff0()
{
    int i = 0;
    if (fc > 0) {
        do {
            Node_004d8ff0* p = (Node_004d8ff0*)f8[i];
            if (p != 0) {
                do {
                    Node_004d8ff0* next = p->f18;
                    int* q = (int*)((char*)p + 8);
                    *q = 0x826c1c;
                    func_004d7e30(q);
                    func_00507d00(p);
                    p = next;
                } while (p != 0);
            }
            ++i;
        } while (i < fc);
    }
    func_00507d20(f8);
    f8 = 0;
    fc = 0;
    f4 = 0;
}
