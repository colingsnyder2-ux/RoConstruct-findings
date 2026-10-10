// from server: 77% by colin
struct CXTPStatusBar {
    void OnDraw(int, int);
};

extern "C" int __stdcall sub_630484(int);
extern "C" int __stdcall sub_630430(int, int, int, int);
extern "C" int __stdcall sub_73841e(int, int, int);
extern "C" int __stdcall sub_738418(int, int, int);

void CXTPStatusBar::OnDraw(int param1, int param2)
{
    int local[10];
    sub_630484((int)local);
    int count = *(int*)((char*)this + 0x9c);
    int i = 0;
    local[0] = 0x7d0914;
    local[5] = (int)this;
    local[8] = count;
    local[2] = i;
    if (count > 0) {
        do {
            int pane = ((int (__thiscall*)(void*, int))0x692c60)(this, i);
            int val = *(int*)((char*)pane + 0x20);
            local[3] = val;
            int r = sub_630430(val, -1, (int)&local[1], 0);
            if (r == 0) {
                sub_73841e((int)&local[2], param1, 0);
            }
            i = local[2] + 1;
            local[2] = i;
        } while (i < local[8]);
    }
    sub_738418((int)this, param1, param2);
}
