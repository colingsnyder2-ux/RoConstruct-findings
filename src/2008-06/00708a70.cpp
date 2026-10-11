// from server: 43% by colin
extern "C" void* __cdecl sub_710CC0();
extern "C" int __stdcall SetCursor(int);

struct CXTSplitterWnd {
    int OnMouseMove(int nFlags);
};

int CXTSplitterWnd::OnMouseMove(int nFlags)
{
    if (nFlags == 1)
        goto label_b4;
    if (nFlags >= 0x65 && nFlags <= 0x73)
        goto label_b4;
    if (nFlags == 2)
        goto label_9f;
    if (nFlags >= 0xc9 && nFlags <= 0xd7)
        goto label_9f;
    return SetCursor(nFlags);

label_9f:
    {
        char* p = (char*)sub_710CC0();
        return SetCursor(*(int*)(p + 0xb4));
    }

label_b4:
    {
        char* p = (char*)sub_710CC0();
        return SetCursor(*(int*)(p + 0xb8));
    }
}
