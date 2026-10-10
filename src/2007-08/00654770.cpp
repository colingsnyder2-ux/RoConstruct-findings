// from server: 60% by colin
struct RBX_Name;
struct EnumDescriptor;

struct Descriptor {
    char pad0[0x6c];
    int m_6c;
};

struct EnumDescriptorItem {
    char pad0[4];
    void* m_4;
    char pad8[4];
    void* m_c;
};

struct EnumDescriptor_Item : Descriptor {
    void* m_owner;
    int m_value;
    unsigned int m_index;
    bool convertToValue(void* value) const;
    bool convertToString(void* value) const;
};

struct EnumDescriptor {
    char pad0[0x174];
    int m_174;
    bool convertToValue(unsigned int index, void* value) const;
    bool convertToString(unsigned int index, void* value) const;
    void addLegacyName(const char* name, int value);
    void addLegacy(int value, const char* name, int a4, int a5, int a6);
};

struct CInstanceRecord_CNameItem {
    bool f(int a1, int a2);
};

extern "C" void* __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, int lParam);

extern void* g_77ecd8;

bool CInstanceRecord_CNameItem::f(int a1, int a2)
{
    EnumDescriptorItem* item = (EnumDescriptorItem*)this;
    void* ebx = item->m_4;
    int ebp = a1;

    if (ebp == 0x20) {
        if (!((bool (__thiscall*)(void*))((*(void***)this)[0xa8/4]))(this))
            goto fail;
        if (*(int*)((char*)this + 0x6c) == 0)
            goto fail;
        {
            void* p = item->m_c;
            if (p != 0 && *(int*)((char*)p + 0xac) == 0)
                goto fail;
        }
        if (!((bool (__thiscall*)(void*, void*))((*(void***)this)[0x138/4]))(this, item))
            goto fail;
        if (*(int*)((char*)ebx + 0x174) != 0) {
            void** vt = *(void***)this;
            int r = ((int (__thiscall*)(void*))vt[0xec/4])(this);
            int arg = (r == 0) ? 1 : 0;
            ((void (__thiscall*)(void*, int))vt[0xe8/4])(this, arg);
        }
        ((void (__thiscall*)(void*))0x657410)(ebx);
        ((void (__thiscall*)(void*, void*, void*, int, int, int, int))0x65ad10)(
            ebx, item->m_4, item->m_c, (int)this, -0x35, 0, -1);
        return true;
    }

    if (!((bool (__thiscall*)(void*, void*))((*(void***)this)[0x13c/4]))(this, item))
        return false;

    ((void (__thiscall*)(void*, void*))0x659170)(ebx, item);

    void* esi = *(void**)((char*)ebx + 0x1a0);
    if (esi != 0 && *(int*)((char*)esi + 0x20) != 0 && *(void**)((char*)esi + 0x64) == this) {
        ((void (__thiscall*)(void*))0x630004)(esi);
        void* hwnd = *(void**)((char*)esi + 0x20);
        SendMessageA(hwnd, 0xb1, 0, -1);
        SendMessageA(hwnd, 0xb7, 0, 0);
        if (ebp != 9)
            SendMessageA(hwnd, 0x102, ebp, 0);
    }
    return true;

fail:
    return false;
}
