// from server: 63% by colin
// roc 2007-08 00684a50  unit: CXTPPropertyGrid  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684a50

extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CXTPPropertyGrid {
    void sub_682aa0();
    void sub_6849d0(void*);
    void* sub_682a20();
    void sub_683be0();
    void sub_683e70(void*);
    void sub_69d340(void*, int, int);
    void* sub_69bc20(void*, int);
    void sub_697e40(void*);
    void sub_698490(void*);
    void Func(void* param);
};

void CXTPPropertyGrid::Func(void* param)
{
    char* p = (char*)param;
    sub_682aa0();
    sub_6849d0((void*)0);
    void* v = sub_682a20();
    *(int*)((char*)v + 0x148) = 0;
    void* w = sub_682a20();
    sub_69d340(w, *(int*)(p + 0x44), 1);
    if (*(unsigned int*)(p + 0x3c) > 0 || *(unsigned int*)(p + 0x40) > 0) {
        void* x = sub_682a20();
        if (SendMessageA(*(void**)((char*)x + 0x20), 0x18b, 0, 0) > 0) {
            int i = 0;
            do {
                void* y = sub_682a20();
                void* z = sub_69bc20(y, 0);
                unsigned int a = *(unsigned int*)(p + 0x40);
                if (a > 0 && z != 0 && *(unsigned int*)((char*)z + 0x88) == a) {
                    sub_697e40(z);
                    sub_683e70(z);
                    if (*(unsigned int*)(p + 0x3c) == 0) {
                        *(unsigned int*)(p + 0x40) = 0;
                        break;
                    }
                    *(unsigned int*)(p + 0x40) = 0;
                }
                unsigned int b = *(unsigned int*)(p + 0x3c);
                if (b > 0 && z != 0 && *(unsigned int*)((char*)z + 0x88) == b) {
                    sub_698490(z);
                    break;
                }
                i++;
                void* c = sub_682a20();
                if (i >= SendMessageA(*(void**)((char*)c + 0x20), 0x18b, 0, 0))
                    break;
            } while (1);
        }
    }
    void* d = sub_682a20();
    SendMessageA(*(void**)((char*)d + 0x20), 0xb, 1, 0);
    sub_683be0();
}
