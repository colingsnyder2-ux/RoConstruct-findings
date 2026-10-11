// from server: 63% by colin
struct CXTPPropertyGridInplaceEdit
{
    int OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags);
};

extern "C" int __stdcall sub_7BC00A();
extern "C" int __stdcall sub_802FD8();

int CXTPPropertyGridInplaceEdit::OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags)
{
    if (*(int*)((char*)this + 0x5c) != 0)
    {
        if (*(int*)((char*)this + 0x20) != 0)
        {
            int v = sub_7BC00A();
            if ((v & 0x800) == 0)
            {
                if (sub_802FD8() == 0)
                {
                    ((void (__thiscall*)(void*))0x774f00)((char*)this);
                    ((void (__thiscall*)(void*))0x775510)((char*)this);
                    return 1;
                }
            }
        }
    }

    void** vtbl = *(void***)this;
    void (__thiscall* fn)(void*, int, int, int) = (void (__thiscall*)(void*, int, int, int))vtbl[0x120 / 4];
    fn((char*)this, 0x300, 0, 0);
    return 0;
}
