// from server: 74% by colin
// from server: 73% by colin
// roc 2008-06 00467440  unit: CSettingsDialog  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467440

struct Vector2int16 {
    short x;
    short y;
};

struct G3D_Rect {
    int x1;
    int y1;
    int x2;
    int y2;
};

extern "C" __declspec(dllimport) int __stdcall GetClientRect(void* hwnd, G3D_Rect* rect);
extern "C" short __cdecl round_to_short(float value);

struct CSettingsDialog {
    char pad[0x16c];
    void* field_16c;
    Vector2int16 getSize();
};

Vector2int16 CSettingsDialog::getSize() {
    G3D_Rect rect;
    GetClientRect(*(void**)((char*)field_16c + 0x20), &rect);
    int w = rect.x2 - rect.x1;
    int h = rect.y2 - rect.y1;
    Vector2int16 result;
    result.x = round_to_short((float)w);
    result.y = round_to_short((float)h);
    return result;
}
