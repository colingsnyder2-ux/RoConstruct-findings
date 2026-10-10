// from server: 57% by colin
struct SignalDesc {
    char pad0[0x30];
    int field30;
    int field34;
    char pad38[0x20];
    int field58;
    int field5C;

    void remove(int* p);
};

extern "C" void __stdcall sub_5a9a60(int, int);
extern "C" void __stdcall sub_5ff500(int);
extern "C" void __stdcall sub_602f70(int);
extern "C" void __stdcall sub_574370(int, int);

void SignalDesc::remove(int* p) {
    sub_5a9a60(0, (int)p);
    sub_5ff500((int)p);
    sub_602f70((int)p);
    int* arr = (int*)field58;
    int idx = p[6];
    int cnt = field5C;
    int last = arr[cnt - 1];
    arr[idx] = last;
    *(int*)(last + 0x18) = idx;
    sub_574370(cnt - 1, 0);
    p[6] = -1;
    p[7] = 0;
}
