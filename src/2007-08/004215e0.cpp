// from server: 76% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CSelectionTreeCtrl {
    void __cdecl fill(int* out, int a, int b, int c, int d, int e);
};

void CSelectionTreeCtrl::fill(int* out, int a, int b, int c, int d, int e) {
    int* first = (int*)b;
    int* last = (int*)c;
    int val = d;
    int fn = e;
    while (first != last) {
        int* tmp = (int*)first[0];
        int* ref = (int*)first[1];
        int* slot = (int*)&tmp;
        if (ref != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)ref + 4), 1);
        }
        ((void (__cdecl*)(int))val)((int)fn);
        first += 2;
    }
    out[0] = fn;
    out[1] = val;
    out[2] = a;
}
