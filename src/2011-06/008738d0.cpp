// from server: 45% by atomic.potato
extern "C" void __stdcall sub_80A058(void*);
extern "C" void __stdcall sub_80A30A();
extern "C" void __stdcall sub_871FB0(int);

struct Inner {
    char pad0[8];
    int field8;
    char padC[0x14];
    int field20;
    int field24;
};

struct Grid {
    void Remove(int index, int flag);
};

struct S {
    char pad0[0x54];
    int count54;
    int pad58;
    int count5c;
    char pad60[0x30];
    int field90;
    int field94;
    char pad98[0x10];
    int fieldA8;
    char padAC[0x1C];
    int fieldC8;
    char padCC[0x14];
    int fieldE0;
    char padE4[0x1C];
    int field100;

    void func(Inner* p);
};

void S::func(Inner* p) {
    if (p == 0) return;
    int n = count5c;
    for (int i = 0; i < n; i++) {
        if (i < 0 || i >= count54) {
            sub_80A30A();
            return;
        }
        Inner** arr = (Inner**)((char*)this + 0x54);
        Inner* e = arr[1 + i];
        if (e->field24 == p->field24 && e->field20 == p->field8) {
            if (field90 == e->field20 && field94 == e->field24) {
                sub_871FB0(0);
            }
            if (fieldC8 == e->field20 && *(int*)((char*)this + 0xa8 + 0x24) == e->field24) {
                void* q = (char*)this + 0xa8;
                ((void (__stdcall*)(void*))0xa4275c)(q);
                *(int*)((char*)q + 8) = 0;
                *(int*)((char*)q + 0x20) = 0;
                *(int*)((char*)q + 0x24) = -1;
                *(int*)((char*)q + 0x1c) = 0;
                ((void (__stdcall*)(void*))0xa419ac)((char*)q + 0xc);
                ((void (__stdcall*)(void*))0xa419ac)((char*)q + 0x28);
            }
            if (field100 == e->field20 && *(int*)((char*)this + 0xe0 + 0x24) == e->field24) {
                void* q = (char*)this + 0xe0;
                ((void (__stdcall*)(void*))0xa4275c)(q);
                *(int*)((char*)q + 8) = 0;
                *(int*)((char*)q + 0x20) = 0;
                *(int*)((char*)q + 0x24) = -1;
                *(int*)((char*)q + 0x1c) = 0;
                ((void (__stdcall*)(void*))0xa419ac)((char*)q + 0xc);
                ((void (__stdcall*)(void*))0xa419ac)((char*)q + 0x28);
            }
            ((Grid*)((char*)this + 0x54))->Remove(i, 1);
            ((void (__stdcall*)(void*))0xa42e08)(e);
            sub_80A058(e);
            return;
        }
    }
}
