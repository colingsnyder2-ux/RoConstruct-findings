// from server: 39% by colin
struct CXTPControlSelector {
    void Draw(int);
};

extern "C" {
    void* __stdcall sub_63A000();
    void* __stdcall sub_63CD70(int);
    void* __stdcall sub_668F70();
    void* __stdcall sub_668770(int);
    void* __stdcall sub_6308AA(void*, void*, void*);
    void* __stdcall sub_6308B0(void*, void*, void*);
}

void CXTPControlSelector::Draw(int arg)
{
    int i, j;
    int baseX, baseY;
    int stepX, stepY;
    void* pDC;
    void* pPaint;
    void* pControl;
    int rect[4];
    int pt[2];

    pDC = sub_63A000();

    if (*(int*)((char*)this + 0x190) <= 0)
        return;

    baseX = *(int*)((char*)this + 0xc0);
    baseY = *(int*)((char*)this + 0xc4);
    stepX = *(int*)((char*)this + 0x180);
    stepY = *(int*)((char*)this + 0x184);

    for (i = 0; i < *(int*)((char*)this + 0x190); i++) {
        for (j = 0; j < *(int*)((char*)this + 0x194); j++) {
            int x1, y1, x2, y2;

            x1 = baseX + j * stepX;
            y1 = baseY + i * stepY;
            x2 = x1 + stepX;
            y2 = y1 + stepY;

            rect[0] = x1;
            rect[1] = y1;
            rect[2] = x2;
            rect[3] = y2;

            pPaint = sub_63CD70(0x2e);

            if (i < *(int*)((char*)this + 0x178) && j < *(int*)((char*)this + 0x17c)) {
                pControl = sub_668F70();
                sub_6308B0(pControl, rect, sub_668770(0xd));
                pControl = sub_668F70();
                pPaint = sub_668770(0xe);
            } else {
                pControl = sub_668F70();
                sub_6308B0(pControl, rect, sub_668770(5));
            }

            pt[0] = (int)sub_63CD70(0x2b);
            pt[1] = (int)sub_63CD70(0x2b);
            sub_6308AA(pControl, pt, pt);

            (*(void(__thiscall**)(void*, void*, int, int, int, int, int))(*(int*)this + 0x140))(this, pControl, rect[0], rect[1], rect[2], rect[3], (int)pPaint);
        }
    }
}
