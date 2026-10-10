// from server: 33% by colin
struct CXTPPropertyGridInplaceEdit
{
    char pad[0x20];
    void* field_20;
    char pad2[0x78];
    void* field_9c;
    void* field_a0;
    void OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags);
};

extern "C" void __stdcall sub_00630004(void*);
extern "C" void __stdcall sub_00630016(void*);
extern "C" void __stdcall sub_00630250(void*);
extern "C" int __stdcall sub_00699120(void*, void*, int);
extern "C" int __stdcall sub_006991c0(void*, int);
extern "C" void __stdcall sub_006f7fa0(void*, unsigned int, unsigned int, unsigned int);
extern "C" unsigned int __stdcall sub_00738412();

extern "C" void* __stdcall GetFocus();
extern "C" void* __stdcall GetKeyState(int);
extern "C" void* __stdcall GetKeyboardState(void*);
extern "C" int __stdcall ToUnicode(unsigned int, unsigned int, const void*, void*, int, unsigned int);
extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, unsigned int);

void CXTPPropertyGridInplaceEdit::OnKeyDown(unsigned int nChar, unsigned int nRepCnt, unsigned int nFlags)
{
    if (nChar == 9)
        return;

    if (nChar == 13)
    {
        if ((sub_00738412() & 0x1000) != 0)
        {
            sub_006f7fa0(this, nChar, nRepCnt, nFlags);
            return;
        }
        sub_00630004(field_9c);
        return;
    }

    if (nChar == 27)
    {
        sub_00630004(field_9c);
        return;
    }

    if (field_a0 == 0)
    {
        sub_006f7fa0(this, nChar, nRepCnt, nFlags);
        return;
    }

    {
        void* p = field_a0;
        int (__stdcall *fn)(void*) = *(int (__stdcall **)(void*))((char*)p + 0x58);
        if (fn(p) != 0)
        {
            sub_006f7fa0(this, nChar, nRepCnt, nFlags);
            return;
        }
    }

    if (*(void**)((char*)field_a0 + 0x7c) == 0)
    {
        sub_006f7fa0(this, nChar, nRepCnt, nFlags);
        return;
    }

    {
        void* edi = *(void**)((char*)field_a0 + 0xbc);
        if (*(int*)((char*)edi + 0x28) == 0)
        {
            sub_006f7fa0(this, nChar, nRepCnt, nFlags);
            return;
        }

        unsigned char keyboardState[256];
        GetKeyboardState(keyboardState);

        unsigned int vk = 0;
        sub_00630250(&vk);

        unsigned int ch = (unsigned int)GetKeyState(0);
        int idx = sub_006991c0(edi, ch);
        int start;
        if (idx == -1)
            start = *(int*)((char*)edi + 0x28) - 1;
        else
            start = idx;

        ToUnicode(nChar, nRepCnt, keyboardState, &vk, 1, 0);

        int cur = start;
        if (cur < *(int*)((char*)edi + 0x28) - 1)
            cur = cur + 1;
        else
            cur = 0;

        sub_00699120(edi, &vk, cur);

        unsigned int ch2 = (unsigned int)GetKeyState(0);
        int cmp = ToUnicode(nChar, nRepCnt, keyboardState, &vk, 1, 0);
        int done = (cmp == 0);

        if (done)
        {
            unsigned int ch3 = (unsigned int)GetKeyState(0);
            sub_00630016(this);
            *(int*)((char*)edi + 0x34) = cur;
            SendMessageA(field_20, 0xb1, 0, 0xffffffff);
            SendMessageA(field_20, 0xb7, 0, 0);
        }
        else
        {
            while (cur != start)
            {
                unsigned int ch4 = (unsigned int)GetKeyState(0);
                if (cur < *(int*)((char*)edi + 0x28) - 1)
                    cur = cur + 1;
                else
                    cur = 0;

                sub_00699120(edi, &vk, cur);

                unsigned int ch5 = (unsigned int)GetKeyState(0);
                int cmp2 = ToUnicode(nChar, nRepCnt, keyboardState, &vk, 1, 0);
                if (cmp2 == 0)
                {
                    unsigned int ch6 = (unsigned int)GetKeyState(0);
                    sub_00630016(this);
                    *(int*)((char*)edi + 0x34) = cur;
                    SendMessageA(field_20, 0xb1, 0, 0xffffffff);
                    SendMessageA(field_20, 0xb7, 0, 0);
                    break;
                }
            }
        }
    }
}
