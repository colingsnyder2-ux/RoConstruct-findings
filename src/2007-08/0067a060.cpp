// from server: 75% by colin
struct CXTPPopupBar {
    char pad[0x1b0];
    int field_1b0;
    char pad2[4];
    char field_1b4[0x18];
    int field_1cc;
    int method_67a060(int, int, int);
    int method_6439b0();
    int method_679020();
    int method_646a90(int, int, int);
};

extern "C" int __stdcall PtInRect(const void*, int, int);
extern "C" void* __stdcall LoadCursorA(void*, int);
extern "C" void* __stdcall SetCursor(void*);
extern "C" int __stdcall sub_62ff02();
extern "C" int __stdcall sub_62ff20();
extern "C" int __stdcall sub_73836a(int, int);

int CXTPPopupBar::method_67a060(int a, int b, int c)
{
    if (this->field_1b0 != 0)
    {
        if (PtInRect(this->field_1b4, a, b) != 0)
        {
            if (this->method_6439b0() == 0)
            {
                sub_62ff02();
                void* h = LoadCursorA(0, 0x7f86);
                SetCursor(h);
                int* p = (int*)sub_73836a(0x632280, 0x8c9314);
                if (p == 0)
                {
                    sub_62ff20();
                }
                p[1] += 1;
                this->field_1cc = 1;
                this->method_679020();
                this->field_1cc = 0;
                int* q = (int*)sub_73836a(0x632280, 0x8c9314);
                if (q == 0)
                {
                    sub_62ff20();
                }
                q[1] += -1;
            }
        }
    }
    return this->method_646a90(c, a, b);
}
