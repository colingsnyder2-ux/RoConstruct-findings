// from server: 88% by colin
struct RECT {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall GetClientRect(void* hWnd, RECT* lpRect);

struct CSettingsDialog {
    char pad[0x16c];
    void* field_16c;
    float method(void* out);
};

float CSettingsDialog::method(void* out)
{
    void* hWnd = *(void**)((char*)field_16c + 0x20);
    RECT rc;
    GetClientRect(hWnd, &rc);
    float w = (float)(rc.right - rc.left);
    float h = (float)(rc.bottom - rc.top);
    float* p = (float*)out;
    p[0] = 0.0f;
    p[1] = 0.0f;
    p[2] = w;
    p[3] = h;
    return w;
}
