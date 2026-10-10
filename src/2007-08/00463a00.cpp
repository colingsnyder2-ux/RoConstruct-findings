// from server: 74% by colin
struct MediaQueryListListener;
struct MediaQueryList;

struct Listener {
    char pad0[0x34];
    char pad34[0x44];
    char field78;
    char field79;
    char field7a;
    char pad7b[0x184 - 0x7b];
    void* field184;
    char pad188[0x190 - 0x188];
    void* field190;
    void evaluate();
};

struct MediaQueryEvaluator {
    void* vtable;
};

struct ScriptState;

extern "C" void __stdcall LeaveCriticalSection(void*);

struct CritSectHolder {
    void* cs;
    char locked;
    CritSectHolder(void* c) : cs(c), locked(0) {}
    ~CritSectHolder() {
        if (locked) {
            LeaveCriticalSection(cs);
        }
    }
};

void Listener::evaluate() {
    CritSectHolder holder((char*)this + 0x34);
    if (field190) {
        if (field79) {
            void** vt = *(void***)field190;
            typedef unsigned int (__thiscall *Fn1)(void*);
            Fn1 f = (Fn1)vt[7];
            if (f(field190) < 0) {
                field79 = 0;
            }
        }
        if (field78 != field79 || (field79 && field7a != 1)) {
            void** vt = *(void***)field190;
            typedef void (__thiscall *Fn2)(void*);
            Fn2 f = (Fn2)vt[8];
            f(field190);
            if (field78) {
                void** vt2 = *(void***)field190;
                typedef int (__thiscall *Fn3)(void*, void*, int);
                Fn3 f3 = (Fn3)vt2[13];
                field7a = 1;
                if (f3(field190, field184, 5) == 0) {
                    void** vt3 = *(void***)field190;
                    typedef int (__thiscall *Fn4)(void*);
                    Fn4 f4 = (Fn4)vt3[7];
                    field79 = (f4(field190) >= 0);
                }
            } else {
                field79 = 0;
            }
        }
    }
}
