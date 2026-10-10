// from server: 79% by colin
struct Humanoid {
    char pad0[0xc];
    int field_c;
    int field_10;
    char pad14[0x78 - 0x14];
    void* field_78;
    char pad7c[0x98 - 0x7c];
    void* field_98;
    char pad9c[0x124];
    char pad_neg[0x124];

    void sub_5a63b0(int a, int b, int c);
};

extern "C" int __stdcall sub_575460(void*);
extern "C" void __stdcall sub_5b4870(void*, void*);

struct HumanoidAux {
    char pad[0x1d8];
    void* field_1d8;
};

struct HumanoidHelper {
    void* sub_5a5c60();
    void sub_5a6320();
};

void Humanoid::sub_5a63b0(int a, int b, int c)
{
    void* p = field_78;
    if (p) {
        void* q = field_98;
        if (q) {
            void** vtbl = *(void***)p;
            int r = sub_575460(q);
            typedef void* (__thiscall *Fn)(void*, int);
            Fn fn = (Fn)vtbl[3];
            void* res = fn(p, r);
            if (res != field_78) {
                void* old = field_78;
                if (res != old) {
                    if (old) {
                        void** ovtbl = *(void***)old;
                        typedef void (__thiscall *Fn2)(void*, int);
                        Fn2 fn2 = (Fn2)ovtbl[1];
                        fn2(old, 1);
                    }
                }
                field_78 = res;
            }
        }
        HumanoidHelper* h = (HumanoidHelper*)((char*)this - 0x124);
        HumanoidAux* aux = (HumanoidAux*)h->sub_5a5c60();
        if (aux) {
            if (aux->field_1d8) {
                void* saved = field_78;
                HumanoidAux* aux2 = (HumanoidAux*)h->sub_5a5c60();
                void* arg;
                if (aux2) {
                    arg = aux2->field_1d8;
                } else {
                    arg = 0;
                }
                void** svtbl = *(void***)saved;
                typedef void* (__thiscall *Fn3)(void*);
                Fn3 fn3 = (Fn3)svtbl[4];
                void* r2 = fn3(saved);
                sub_5b4870(arg, r2);
            }
        }
    }
    HumanoidHelper* h2 = (HumanoidHelper*)((char*)this - 0x124);
    h2->sub_5a6320();
    int cnt = field_c;
    if (cnt > 0) {
        cnt--;
        field_c = cnt;
        if (cnt == 0) {
            field_10 = 3;
        }
    }
}
