// from server: 45% by tester
// roc 2008-06 004a7e20  unit: RBX::VHint::?$FactoryProduct::Creator  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7e20

typedef unsigned int DWORD;

struct String {
    void* rep;
    void* pad;
    String();
    String(const String&);
    ~String();
    String& operator=(const String&);
};

struct Inner {
    char pad[0x20];
    String str;
    char flag;
};

struct Outer {
    char pad[0xe20];
    int count;
    Inner items[1];
    char f(int, const String&);
};

extern "C" {
    int __stdcall sub_4A5600(void*, int, int, void*);
    void __stdcall sub_4A6560(void*, void*);
    int __stdcall sub_4A7A30();
    int __stdcall sub_4A7D30();
    int __stdcall sub_80236C(void*, const char*);
    int __stdcall sub_80245C(void*, void*);
    int __stdcall sub_802468(void*);
    int __stdcall sub_80240C(void*, void*);
    void* __stdcall sub_802890();
}

char Outer::f(int a, const String& b)
{
    char result;
    if (sub_80236C((void*)0x80b716, (const char*)a)) {
        char tmp = 0;
        sub_4A5600((void*)0x4a5600, 8, 1, &tmp);
        return tmp;
    }
    char saved = *(char*)((char*)this + 0xe20);
    String local;
    sub_80245C((void*)0x80245c, &local);
    *(char*)((char*)&local + 0x1c) = saved;
    sub_4A7A30();
    sub_802468((void*)0x802468);
    if (*(char*)((char*)&local + 0x18) != 0) {
        int idx = *(int*)((char*)this + 0xe20);
        int off = idx * 8 - idx;
        sub_4A7D30();
        int idx2 = *(int*)((char*)this + 0xe20);
        int off2 = idx2 * 8 - idx2;
        sub_80240C((void*)0x80240c, (char*)this + off2 * 4 + 0x20);
        char dl = *(char*)((char*)this + 0xe20);
        dl |= 0x80;
        char tmp2 = dl;
        sub_4A5600((void*)0x4a5600, 8, 1, &tmp2);
        sub_4A6560((void*)0x4a6560, (void*)a);
        int idx3 = *(int*)((char*)this + 0xe20);
        int rem = idx3 % 0x7f;
        *(int*)((char*)this + 0xe20) = rem + 1;
        return tmp2;
    }
    void* p = *(void**)&local;
    void* (*fn)() = (void* (*)())sub_802890;
    if (p != 0) {
        p = *(void**)p;
    }
    fn();
    void* q = *(void**)((char*)&local + 4);
    if (q != *(void**)((char*)fn() + 0x18)) {
        fn();
    }
    char al = *(char*)((char*)q + 0x28);
    char tmp3 = al;
    sub_4A5600((void*)0x4a5600, 8, 1, &tmp3);
    return tmp3;
}
