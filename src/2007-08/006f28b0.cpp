// from server: 24% by colin
struct CXTPGraphicBitmapPng {
    char pad[0x20];
    void* m_hWnd;
    char pad2[0x30];
    int m_field54;
    int m_field58;
    char pad3[0x0c];
    int m_field68;
    int m_field6c;
    char pad4[0x0c];
    int m_field7c;
    char pad5[0x3c];
    int m_fieldb8;
    int m_fieldbc;
    int m_fieldc0;
    int m_fieldc4;

    void Refresh();
};

extern "C" void* __cdecl sub_62fef6(int);
extern "C" void __cdecl sub_63023e();
extern "C" void __cdecl sub_6308aa();
extern "C" void __cdecl sub_630976();
extern "C" void __cdecl sub_63097c();
extern "C" void __cdecl sub_6805f0();
extern "C" void __cdecl sub_680680();
extern "C" void __cdecl sub_6806b0();
extern "C" void __cdecl sub_680740();
extern "C" int __fastcall sub_6f0c90(int);
extern "C" int __fastcall sub_6f10f0(int);
extern "C" void __fastcall sub_6f1570(int);
extern "C" void __fastcall sub_6f1590(int);
extern "C" void __fastcall sub_6f1820(int);
extern "C" void __fastcall sub_6f2890(int);
extern "C" void* __cdecl sub_7384a2(int, int);
extern "C" int (__stdcall *Ellipse)(void*, int, int, int, int);
extern "C" int (__stdcall *SetPixel)(void*, int, int, int);
extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

void CXTPGraphicBitmapPng::Refresh()
{
    if (m_fieldc0 == 0)
    {
        sub_63023e();
        return;
    }

    int mode = sub_6f0c90((int)this);

    if (mode != 0)
    {
        void* obj = sub_62fef6(0xc);
        if (obj != 0)
        {
            *(int*)((char*)obj + 4) = 0;
            *(int*)obj = 0x7db274;
            *(int*)((char*)obj + 8) = 0;
        }
        else
        {
            obj = 0;
        }

        sub_6f1590((int)this);
        void* hdc = sub_7384a2(m_field6c, obj ? *(int*)((char*)obj + 4) : 0);
        sub_6f1570((int)this);
        Ellipse(hdc, 0, 0, m_fieldc4, 0);
        SetPixel(hdc, 0, 0, 0);
        sub_7384a2(m_field6c, hdc ? *(int*)((char*)hdc + 4) : 0);
        if (*(int*)(m_field7c + 8) != 0)
        {
            sub_6f1820((int)this);
        }
        if (m_field7c != 0)
        {
            (*(void(__thiscall**)(int, int))m_field7c)(m_field7c, 1);
        }
        m_field7c = (int)obj;
        InvalidateRect(m_hWnd, 0, 0);
    }
    else
    {
        void* obj = sub_62fef6(0xc);
        if (obj != 0)
        {
            *(int*)((char*)obj + 4) = 0;
            *(int*)obj = 0x7db274;
            *(int*)((char*)obj + 8) = 0;
        }
        else
        {
            obj = 0;
        }

        sub_6f1590((int)this);
        void* hdc = sub_7384a2(m_field6c, obj ? *(int*)((char*)obj + 4) : 0);
        sub_6f1570((int)this);
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        int a = 0, b = 0;
        if (a > x1) { x1 = a; }
        if (b > y1) { y1 = b; }
        if (mode == 4)
        {
            sub_6308aa();
        }
        if (mode == 5)
        {
            sub_6805f0();
            sub_6806b0();
            Ellipse(hdc, 0, 0, 0, 0);
            sub_680740();
            sub_680680();
        }
        if (mode == 3)
        {
            sub_6805f0();
            sub_6f1570((int)this);
            sub_63097c();
            sub_6f1570((int)this);
            sub_630976();
            sub_680680();
        }
        sub_7384a2(m_field6c, hdc ? *(int*)((char*)hdc + 4) : 0);
        if (*(int*)(m_field7c + 8) != 0)
        {
            sub_6f1820((int)this);
        }
        if (m_field7c != 0)
        {
            (*(void(__thiscall**)(int, int))m_field7c)(m_field7c, 1);
        }
        m_field7c = (int)obj;
        InvalidateRect(m_hWnd, 0, 0);
    }

    sub_6f2890((int)this);
    sub_63023e();
}
