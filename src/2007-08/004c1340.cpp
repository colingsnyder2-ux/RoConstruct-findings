// from server: 35% by colin
// roc 2007-08 004c1340  unit: RakPeer  size: 762 bytes

struct RakPeer {
    unsigned short field_8;
    char field_4;
    char field_5;
    char pad_6[2];
    unsigned int field_22c;
    unsigned int field_230;
    unsigned int field_234;
    unsigned int field_238;
    unsigned int field_258;
    unsigned int field_25c;
    unsigned int field_2a8;
    unsigned int field_2ac;
    unsigned int field_714;
    unsigned int field_718;
    char field_729;
    unsigned int field_8d0;
    unsigned int field_8d4;
    unsigned int field_8d8;
    unsigned int field_8dc;
    unsigned int field_8e0;
    unsigned int field_8e8;
    unsigned int field_8ec;
    unsigned int field_8f0;
    unsigned int field_8f4;

    void method_4bf680(unsigned int, unsigned int, unsigned int, unsigned int);
    void method_4b9780();
    void method_4ba930();
    void method_4ba980();
    void method_4c9e00(int);
    void method_4ca670(int);
    void method_4b7f70();
    void method_4c1340(unsigned int, unsigned int);
};

extern "C" {
    unsigned int __cdecl sub_4b7f70();
    void __cdecl sub_4ca670(int);
    void __cdecl sub_62fc62(void*);
    void __cdecl sub_630af7(void*, unsigned int, unsigned int, void*);
    void __cdecl sub_4b8870();
    void __stdcall sub_77ef28(void*);
}

void RakPeer::method_4c1340(unsigned int arg1, unsigned int arg2)
{
    unsigned int count = field_8;
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int startTime;
    unsigned int elapsed;
    unsigned int* ptr;
    unsigned int* ptr2;
    unsigned int val;

    if (arg1 > 0) {
        if (count > 0) {
            i = 0;
            j = count;
            do {
                unsigned char* p = (unsigned char*)(field_22c + i);
                if (*p != 0) {
                    method_4bf680(*(unsigned int*)(p + 4), *(unsigned int*)(p + 8), 0, arg2);
                }
                i += 0x840;
                j--;
            } while (j != 0);
        }

        startTime = sub_4b7f70();

        if (arg2 > 0) {
            if (count > 0) {
                k = 0;
                do {
                    unsigned char* p = (unsigned char*)(field_22c);
                    while (*p == 0) {
                        k++;
                        p += 0x840;
                        if (k >= count) goto done;
                    }
                    sub_4ca670(0xf);
                    elapsed = sub_4b7f70() - startTime;
                    if (elapsed < arg2) {
                        k = 0;
                        continue;
                    }
                    break;
                } while (1);
            }
        }
    }

done:
    i = 0;
    if (field_2ac > 0) {
        do {
            unsigned int* obj = (unsigned int*)(field_2a8 + i * 4);
            unsigned int* vtable = (unsigned int*)*obj;
            void (*fn)(void*) = (void (*)(void*))vtable[6];
            fn(this);
            i++;
        } while (i < field_2ac);
    }

    if (field_5 != 0) {
        do {
            field_4 = 1;
            sub_4ca670(0xf);
        } while (field_5 != 0);
    }

    if (count > 0) {
        i = 0;
        j = count;
        do {
            *(unsigned char*)(field_22c + i) = 0;
            method_4c9e00(0);
            i += 0x840;
            j--;
        } while (j != 0);
    }

    if (field_238 != 0) {
        if (field_238 > 0x200) {
            sub_62fc62((void*)field_230);
            field_238 = 0;
            field_230 = 0;
        }
        field_234 = 0;
    }

    field_8 = 0;

    ptr = (unsigned int*)((char*)this + 0x8d0);
    while (*ptr != ptr[3]) {
        unsigned char* node = (unsigned char*)*ptr;
        if (node[4] == 0) break;
        if (*ptr == 0) break;
        *ptr = *(unsigned int*)(node + 8);
        if (*ptr == 0) break;
        unsigned int* vtable = (unsigned int*)*(unsigned int*)this;
        void (*fn)(void*) = (void (*)(void*))vtable[16];
        fn((void*)*(unsigned int*)node);
        ptr[4]++;
        unsigned int* next = (unsigned int*)ptr[2];
        next[1] = 0;
        ptr[2] = *(unsigned int*)(next + 2);
    }
    method_4b9780();

    i = 0;
    while (1) {
        unsigned int a = field_8ec;
        unsigned int b = field_8f0;
        unsigned int size;
        if (a <= b) {
            size = b - a;
        } else {
            size = field_8f4 - a + b;
        }
        if (i >= size) break;

        unsigned int idx = a + i;
        if (idx >= field_8f4) {
            idx = idx - field_8f4;
        }
        unsigned int* arr = (unsigned int*)field_8e8;
        unsigned int val2 = arr[idx];
        unsigned int* vtable = (unsigned int*)*(unsigned int*)this;
        void (*fn)(void*) = (void (*)(void*))vtable[16];
        fn((void*)val2);
        i++;
    }

    if (field_8f4 != 0) {
        if (field_8f4 > 0x20) {
            sub_62fc62((void*)field_8e8);
            field_8f4 = 0;
        }
        field_8ec = 0;
        field_8f0 = 0;
    }

    field_729 = 0;
    i = 0;
    if (field_718 > 0) {
        do {
            void* p = (void*)(field_714 + i * 4);
            sub_77ef28(*(void**)p);
            i++;
        } while (i < field_718);
    }

    if (field_714 != 0) {
        sub_62fc62((void*)field_714);
    }
    field_714 = 0;
    field_718 = 0;

    method_4ba930();
    field_25c = 0;
    field_258 = 0;
    method_4ba980();

    if (field_22c != 0) {
        unsigned int* p = (unsigned int*)field_22c;
        unsigned int n = *(unsigned int*)((char*)p - 4);
        sub_630af7((void*)p, 0x840, n, (void*)0x4b8870);
        sub_62fc62((void*)((char*)p - 4));
    }
    field_22c = 0;
}
