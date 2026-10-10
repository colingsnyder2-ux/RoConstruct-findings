// from server: 32% by colin
// roc 2007-08 006460b0  size: 441 bytes
// CXTPCommandBar::OnLButtonDown or similar

extern "C" {
    __declspec(dllimport) void __stdcall MessageBeep(unsigned int uType);
}

// Forward declarations of external functions
extern "C" int __stdcall sub_77dcc8();
extern "C" int __stdcall sub_77d578();
extern "C" int __stdcall sub_77d92c();
extern "C" int __stdcall sub_77dcb8();
extern "C" int __stdcall sub_77dd98();
extern "C" int __stdcall sub_77ddbc();
extern "C" int __stdcall sub_77ed7c();

// Internal function declarations
int __cdecl sub_643980();
int __cdecl sub_6a4b50();
int __cdecl sub_6d26b0();
void __cdecl sub_62ff20();

struct CXTPCommandBar {
    int OnLButtonDown(unsigned int nFlags, int point);
};

int CXTPCommandBar::OnLButtonDown(unsigned int nFlags, int point) {
    int* pList = (int*)sub_643980();
    if (pList != 0) {
        return 0;
    }
    
    int i = 0;
    if (pList[0x34/4] > 0) {
        do {
            if (i < 0 || i >= pList[0x34/4]) {
                sub_62ff20();
            }
            int* pItem = (int*)pList[0x30/4];
            int item = pItem[i];
            int savedVal = pList[0x48/4];
            
            int count = sub_77dcc8();
            if (count > savedVal) {
                int result = sub_77d578();
                int cmp = sub_6a4b50();
                if (cmp != 0) {
                    // Found item
                    int ebp = pList[0x48/4];
                    int esi = item + 0x54;
                    int cnt = sub_77dcc8();
                    if (cnt - 1 > ebp) {
                        pList[0x48/4] = ebp + 1;
                        sub_77d92c();
                        
                        int idx = pList[0x34/4] - 1;
                        int local = 0;
                        if (idx >= 0) {
                            do {
                                if (idx < 0 || idx >= pList[0x34/4]) {
                                    sub_62ff20();
                                }
                                int* arr = (int*)pList[0x30/4];
                                int curItem = arr[idx];
                                int val = pList[0x48/4];
                                int r = sub_77d92c();
                                int b = sub_77dd98();
                                int cmp2 = sub_77dcb8();
                                bool flag = (cmp2 != 0);
                                sub_77ddbc();
                                if (flag) {
                                    sub_6d26b0();
                                    int* vtbl = (int*)curItem;
                                    int (*fn1)(void*) = (int (*)(void*))vtbl[0x68/4];
                                    fn1((void*)curItem);
                                    int (*fn2)(void*) = (int (*)(void*))vtbl[4/4];
                                    fn2((void*)curItem);
                                }
                                idx--;
                            } while (idx >= 0);
                        }
                        sub_77ddbc();
                        return 0;
                    }
                    if (item != 0 && *(int*)(item + 0x68) != 0) {
                        int* vtbl = (int*)this;
                        int (*fn)(void*, int) = (int (*)(void*, int))vtbl[0x1b4/4];
                        fn((void*)this, item);
                    }
                    return 0;
                }
            }
            i++;
        } while (i < pList[0x34/4]);
    }
    
    if (nFlags != 0x10 && nFlags != 0x11) {
        MessageBeep(0);
    }
    return 0;
}
