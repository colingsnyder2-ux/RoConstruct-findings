// from server: 39% by colin
struct CXTPControlWindowList
{
    char pad[0x80];
    int m_nIndex;
    char pad2[0x4c];
    int m_nFlags;
    char pad3[0x20];
    void* m_pList;
    char pad4[4];
    void* m_pOwner;
    char pad5[4];
    void* m_pOwner2;

    void func_0067daf0(int arg);
};

extern "C" {
    int __stdcall GetDlgCtrlID(void*);
    void* __stdcall GetDlgItem(void*, int);
    int __stdcall GetWindowTextA(void*, char*, int);
    int __stdcall IsWindowVisible(void*);
    int __stdcall SendMessageA(void*, unsigned int, unsigned int, int);
}

extern int G_8b6b0c;
extern int G_8b6b10;
extern int G_8c8f40;

void* __stdcall sub_630202(void*, void*);
void* __stdcall sub_738364(void*);
void* __stdcall sub_646570(void*);
int __stdcall sub_6439b0(void*);
void* __stdcall sub_67d2a0(void*, int, int, int, int, int);
void __stdcall sub_67d690(void*, void*, int);
void __stdcall sub_63a700(void*, void*);
void __stdcall sub_63a690(void*, int);
void __stdcall sub_63a120(void*, int);
int __stdcall sub_63a130(void*);
void __stdcall sub_639e20(void*, void*);

void CXTPControlWindowList::func_0067daf0(int arg)
{
    int i = this->m_nIndex + 1;
    int count = *(int*)((char*)this->m_pList + 0x2c);
    while (i < count)
    {
        void* item;
        int idx = this->m_nIndex + 1;
        if (idx >= 0 && idx < *(int*)((char*)this->m_pList + 0x2c))
            item = *(void**)(*(int*)((char*)this->m_pList + 0x28) + idx * 4);
        else
            item = 0;
        if (*(int*)((char*)item + 0x84) < G_8b6b0c)
            break;
        (*(void(__thiscall**)(void*, void*))(*(int*)this->m_pList + 0x58))(this->m_pList, item);
        count = *(int*)((char*)this->m_pList + 0x2c);
        i = this->m_nIndex + 1;
    }

    void* p1 = sub_646570(this->m_pOwner);
    void* p2 = sub_738364(p1);
    void* p3 = sub_630202(p2, 0);
    void* ebx;
    if (p3 != 0)
    {
        ebx = *(void**)((char*)p3 + 0xd4);
    }
    else
    {
        ebx = 0;
    }

    if (sub_6439b0(this->m_pOwner) != 0 || ebx == 0)
    {
        this->m_nFlags = 0;
        return;
    }

    int ebp = this->m_nIndex + 1;
    this->m_nFlags |= 1;

    void* hwnd = GetDlgItem(ebx, 0x229);
    if (hwnd != 0)
    {
        int id = GetDlgCtrlID(hwnd);
        if ((unsigned)(id - 0x8000) <= 0x2e)
            G_8b6b0c = 0x8000;
        if ((unsigned)(id - 1) <= 0x2d)
            G_8b6b0c = 1;
    }

    int esi = G_8b6b0c;
    void* hwnd2 = GetDlgItem(ebx, esi);
    ebx = hwnd2;
    if (ebx == 0)
        return;

    while (IsWindowVisible(ebx))
    {
        char buf[0x100];
        GetWindowTextA(ebx, buf, 0x100);

        int flag = (G_8c8f40 != 0) ? 1 : 0x0b;
        void* p = sub_67d2a0(this->m_pList, esi, 0x785954, ebp, flag, 1);

        void* tmp1;
        void* tmp2;
        sub_67d690(&tmp2, &tmp1, ebp - this->m_nIndex);
        sub_63a700(p, tmp2);

        int isLast = (ebp == this->m_nIndex + 1) ? 1 : 0;
        (*(void(__thiscall**)(void*, int))(*(int*)p + 0x64))(p, isLast);

        int vis = (ebx == hwnd2) ? 1 : 0;
        if (*(int*)((char*)p + 0xa0) != vis)
        {
            *(int*)((char*)p + 0xa0) = vis;
            sub_63a690(p, 1);
        }

        sub_63a120(p, 8);
        *(int*)((char*)p + 0x8c) = 0xef1f;

        if (sub_63a130(this) < 0 && ebp == this->m_nIndex + 1)
        {
            int v = sub_63a130(p);
            sub_63a120(p, v | 0x80);
        }

        sub_639e20(p, buf);

        ebp++;
        if (ebp - this->m_nIndex > G_8b6b10)
            break;

        esi++;
        ebx = GetDlgItem(hwnd2, esi);
        if (ebx == 0)
            return;
    }
}
