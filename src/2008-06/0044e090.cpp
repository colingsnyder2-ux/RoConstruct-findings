// from server: 46% by colin
struct CRobloxControlColorSelector {
    int field_0x9c;
    int field_0xc0;
    int field_0xc4;
    int field_0x15c;
    int field_0x174;
    int field_0x180;
    int method_0x78();
    void* method_0x84();
    void* getSomething();
    void drawItem(int, int, int, int, int, int, int, int, int, int, int, int, int, int);
    void method_0x6a135e(int*, int);
    void method_0x6a1358(int*, void*, void*);
};

extern int g_96dd30;
extern int g_96dd34;

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __stdcall InflateRect(int*, int, int);
extern "C" void* __stdcall mfc_2263();
extern "C" void* __stdcall mfc_2470();

void* __fastcall sub_6ab240(CRobloxControlColorSelector* self);
void __fastcall sub_6ab7c0(void* p);
void __fastcall sub_6a135e(void* self, int* a, int b);
void __fastcall sub_6a1358(void* self, int* a, void* b, void* c);
void* __fastcall sub_6dfd40();
void* __fastcall sub_6df520(void* self, int n);

void CRobloxControlColorSelector::drawItem(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n)
{
    int count = (g_96dd34 - g_96dd30) / 12;
    if (count <= 0)
        return;

    int idx = 0;
    int offset = 0;
    while (idx < count)
    {
        int col = idx % 8;
        int row = idx / 8;
        int x1 = field_0xc0 + col * 32 + 2;
        int y1 = field_0xc4 + row * 32 + 2;
        int x2 = x1 + 32;
        int y2 = y1 + 32;

        if (idx != field_0x174)
        {
            int cnt2 = (g_96dd34 - g_96dd30) / 12;
            if (idx >= cnt2)
                _invalid_parameter_noinfo();
            int* arr = (int*)g_96dd30;
            if (arr[offset / 4] != field_0x180)
                goto next;
        }

        {
            int b1 = method_0x78();
            int flag1 = 0;
            if (b1)
                flag1 = 1;
            if (idx != field_0x174)
                flag1 = 0;

            void* obj = sub_6ab240(this);

            int cnt3 = (g_96dd34 - g_96dd30) / 12;
            if (idx >= cnt3)
                _invalid_parameter_noinfo();
            int* arr2 = (int*)(g_96dd30 + offset);

            if (field_0x9c == -1)
            {
                if (field_0x15c != 0)
                    sub_6ab7c0((void*)field_0x15c);
            }

            int val = arr2[0];
            int sel = (val == field_0x180) ? 1 : 0;
            int isCur = (idx == field_0x174) ? 1 : 0;

            int rect[4];
            rect[0] = x1;
            rect[1] = y1;
            rect[2] = x2;
            rect[3] = y2;

            void* vobj = obj;
            void* vtbl = *(void**)vobj;
            void (__fastcall *fn)(void*, int, int, int, int, int, int, int, int, int, int, int, int, int, int) =
                (void (__fastcall *)(void*, int, int, int, int, int, int, int, int, int, int, int, int, int, int))*(void**)((char*)vtbl + 0x84);
            fn(vobj, n, rect[0], rect[1], rect[2], rect[3], isCur, sel, 0, 1, 5, 0, 0, 0, 0);
        }

    next:
        {
            int r[4];
            r[0] = x1;
            r[1] = y1;
            r[2] = x2;
            r[3] = y2;
            InflateRect(r, -3, -3);

            if (field_0x9c == -1)
            {
                if (field_0x15c != 0)
                    sub_6ab7c0((void*)field_0x15c);
            }

            if (field_0x9c != 0)
            {
                int cnt4 = (g_96dd34 - g_96dd30) / 12;
                if (idx >= cnt4)
                    _invalid_parameter_noinfo();
                int* arr3 = (int*)(g_96dd30 + offset);
                sub_6a135e(this, r, arr3[0]);
            }

            void* p1 = sub_6dfd40();
            void* p2 = sub_6df520(p1, 16);
            void* p3 = sub_6dfd40();
            void* p4 = sub_6df520(p3, 16);
            sub_6a1358(this, r, p2, p4);
        }

        offset += 12;
        idx++;
    }
}
