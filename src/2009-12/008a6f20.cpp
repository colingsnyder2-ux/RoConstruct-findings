// from server: 50% by atomic.potato
struct CXTPReportHeaderDragWnd {
    char pad0[0x20];
    void* field20;
    char pad24[0x30];
    void* field54;
    void* field58;
    void* field5c;
    int method(int, int, int, int, int, int, int);
};

extern "C" void* __stdcall LoadCursorA(void*, const char*);
extern "C" unsigned int __stdcall SetTimer(void*, unsigned int, unsigned int, void*);

void* sub_7f3b1e();
void* sub_7f4226(int, int, int, int, int, int, int, int, int, int, int, int, int);

int CXTPReportHeaderDragWnd::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    int v8 = a5;
    int v9 = a7;
    this->field54 = (void*)a5;
    this->field5c = (void*)a7;
    this->field58 = (void*)a6;
    int v10 = a3;
    int v11 = a4 - a3;
    if (v11 == 0) {
        int* p = (int*)a6;
        int (*fn)(void) = (int (*)(void))p[0x68/4];
        int r = fn();
        v8 = r + a3;
    }
    int v12 = a4 - a2;
    int v13 = v8 - a3;
    sub_7f3b1e();
    void* cur = LoadCursorA(0, (const char*)0x7f00);
    void* h = sub_7f4226(a2, a3, v13, v12, 0x88000000, 0, 0, 0, 0, 0, 0, 0, 0);
    int (*fn2)(void*, int, void*) = (int (*)(void*, int, void*))((int*)this)[0x64/4];
    int r2 = fn2(this, 0x88, h);
    int result = r2;
    if (result != 0) {
        void* p54 = this->field54;
        if (p54 != 0) {
            void* p24 = *(void**)((char*)p54 + 0x24);
            if (p24 != 0) {
                if (*(int*)((char*)p24 + 0x234) != 0) {
                    SetTimer(this->field20, 1, 0x64, 0);
                }
            }
        }
    }
    return result;
}
