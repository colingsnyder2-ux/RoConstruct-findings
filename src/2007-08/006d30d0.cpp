// from server: 23% by colin
struct CXTPReportRow_Batch {
    char pad0[0x20];
    void* m_pControl;
    char pad1[0x54 - 0x24];
    void* m_pRecords;
    char pad2[0x90 - 0x58];
    int m_bSomething;
    char pad3[0xac - 0x94];
    void* m_pRow;
    int FindRow(void* pRow);
    int Process();
};

extern "C" {
    int __stdcall SendMessageA(void* hWnd, unsigned int Msg, unsigned int wParam, long lParam);
    int __stdcall InvalidateRect(void* hWnd, const void* lpRect, int bErase);
    int __stdcall GetTextExtentPoint32A(void* hdc, const char* lpString, int cbString, void* lpSize);
}

extern "C" int __stdcall sub_77ecd8(void*, int, int, int);
extern "C" int __stdcall sub_77ecdc(void*, int, int);
extern "C" int __stdcall sub_77d0b8(void*, int, int, void*);
extern "C" int __stdcall sub_77dd98(void*);
extern "C" int __stdcall sub_77dcb8(void*, void*);
extern "C" int __stdcall sub_77ddbc(void*);

extern "C" int __cdecl sub_630946(void*, void*);
extern "C" int __cdecl sub_680550(void*, void*, void*);
extern "C" int __cdecl sub_6805d0(void*);
extern "C" int __cdecl sub_630940(void*);
extern "C" int __cdecl sub_6302ec(void*, int);
extern "C" int __cdecl sub_6d2fb0(void*, int, void*);
extern "C" int __cdecl sub_6d34f0(void*, int);
extern "C" int __cdecl sub_6f8c80(void*, void*);
extern "C" int __cdecl sub_653870(void*);
extern "C" int __cdecl sub_65e5b0(void*);
extern "C" int __cdecl sub_42f520(void*);

int CXTPReportRow_Batch::FindRow(void* pRow)
{
    int count = sub_77ecd8(m_pControl, 0x18b, 0, 0);
    int i = count - 1;
    if (i < 0)
        return -1;
    while (1) {
        int v = sub_77ecd8(m_pControl, 0x199, i, 0);
        if (v == (int)pRow)
            return i;
        i--;
        if (i < 0)
            return -1;
    }
}

int CXTPReportRow_Batch::Process()
{
    if (m_pRecords == 0)
        return 0;
    if (m_pControl == 0)
        return 0;

    char buf[0x40];
    sub_630946(this, buf);

    void* p = *(void**)((char*)m_pRecords + 0xb0);
    p = (char*)p + 0x30;

    char buf2[0x40];
    sub_680550(buf2, buf, p);

    int sz[2];
    sub_77d0b8(*(void**)&buf2[0], 1, 0x787034, sz);

    int w = sz[0] + 5;

    int cur = sub_77ecd8(m_pControl, 0x1a1, 0, 0);
    if (cur != w) {
        sub_77ecd8(m_pControl, 0x1a0, 0, (unsigned short)w);
    }

    void* pRow = *(void**)((char*)m_pRecords + 0xac);
    int nRows = *(int*)((char*)pRow + 0x30);
    int changed = 0;

    int i = sub_77ecd8(m_pControl, 0x18b, 0, 0) - 1;
    while (i >= 0) {
        int v = sub_77ecd8(m_pControl, 0x199, i, 0);
        int r = sub_6d34f0(pRow, v);
        if (r != 0) {
            if (sub_65e5b0((void*)r) == 0) {
                if (sub_42f520((void*)r) != 0) {
                    i--;
                    continue;
                }
            }
        }
        sub_77ecd8(m_pControl, 0x182, i, 0);
        changed = 1;
        i--;
    }

    int idx = 0;
    while (idx < nRows) {
        if (idx < 0 || idx >= *(int*)((char*)pRow + 0x30)) {
            idx++;
            continue;
        }
        void** arr = *(void***)((char*)pRow + 0x2c);
        void* item = arr[idx];
        if (item == 0) {
            idx++;
            continue;
        }
        if (sub_65e5b0(item) != 0) {
            idx++;
            continue;
        }
        if (sub_42f520(item) == 0) {
            idx++;
            continue;
        }
        int r = sub_653870(item);
        if (FindRow((void*)r) >= 0) {
            idx++;
            continue;
        }

        if (m_bSomething != 0) {
            int n = sub_77ecd8(m_pControl, 0x18b, 0, 0);
            int j = 0;
            while (j < n) {
                int tmp;
                sub_6d2fb0(this, 0, &tmp);
                char b[0x40];
                sub_6f8c80(item, b);
                int len = sub_77dd98(b);
                int cmp = sub_77dcb8(&tmp, (void*)len);
                int flag = cmp > 0;
                sub_77ddbc(b);
                sub_77ddbc(&tmp);
                if (!flag) {
                    j++;
                    n = sub_77ecd8(m_pControl, 0x18b, 0, 0);
                    continue;
                }
                break;
            }
            char b2[0x40];
            sub_6f8c80(item, b2);
            int len2 = sub_77dd98(b2);
            int pos = sub_77ecd8(m_pControl, 0x181, j, len2);
            sub_77ddbc(b2);
            if (pos >= 0) {
                int r2 = sub_653870(item);
                sub_77ecd8(m_pControl, 0x19a, pos, r2);
                changed = 1;
            }
        } else {
            char b3[0x40];
            sub_6f8c80(item, b3);
            int len3 = sub_77dd98(b3);
            int pos = sub_77ecd8(m_pControl, 0x180, 0, len3);
            sub_77ddbc(b3);
            if (pos >= 0) {
                int r3 = sub_653870(item);
                sub_77ecd8(m_pControl, 0x19a, pos, r3);
                changed = 1;
            }
        }
        idx++;
    }

    int n = sub_77ecd8(m_pControl, 0x18b, 0, 0);
    sub_6302ec(this, n > 0);

    if (changed) {
        sub_77ecdc(m_pControl, 0, 1);
    }

    char c1[0x10];
    sub_6805d0(c1);
    char c2[0x10];
    sub_630940(c2);

    return 1;
}
