// from server: 79% by colin
struct CXTSplitterWnd {
    char pad0[0x80];
    int m_rows;
    int m_cols;
    char pad88[0x8];
    int m_unk90;
    char pad94[0x60];
    int m_unkF4;
    int m_unkF8;
    char padFC[0x4];
    int GetRowInfo(int, int);
    int GetColInfo(int, int);
    void SetRowInfo(int, int, int);
    void SetColInfo(int, int, int);
    void RecalcLayout();
    void DeleteRow(int);
};

extern "C" int __stdcall sub_62FF4A(int, int);
extern "C" int __stdcall sub_6305B0(int, int, int);
extern "C" int __stdcall sub_630652(int, int, int);
extern "C" int __stdcall sub_738AD2(int, int);

void CXTSplitterWnd::DeleteRow(int row) {
    int local1;
    int local2;
    int i;
    int j;
    int info;

    if (m_unkF4 != -1) {
        if (m_unkF4 == row) {
            return;
        }
        (*(void (__thiscall **)(CXTSplitterWnd *))(*(int *)this + 0x1ac))(this);
    }

    m_unkF4 = row;

    if ((*(int (__thiscall **)(CXTSplitterWnd *, int *, int *))(*(int *)this + 0x16c))(this, &local2, &local1)) {
        if (local2 == row) {
            local2++;
            if (local2 >= m_cols) {
                local2 = 0;
            }
            (*(void (__thiscall **)(CXTSplitterWnd *, int, int, int))(*(int *)this + 0x170))(this, local1, local2, 0);
        }
    }

    for (i = 0; i < m_rows; i++) {
        info = sub_630652((int)this, i, row);
        sub_62FF4A(info, 0);

        if (m_unkF8 != -1 && m_unkF8 <= 0) {
            j = i * 0x10 + 0x10;
        } else {
            j = i * 0x10;
        }
        sub_738AD2(info, m_cols + j + 0xe900);

        for (j = row + 1; j < m_cols; j++) {
            int a = sub_630652((int)this, i, j);
            int b = sub_6305B0((int)this, i, j - 1);
            sub_738AD2(a, b);
        }
    }

    m_cols--;
    m_unk90 = *(int *)(m_unk90 + (row * 3 + 2) * 4);
    (*(void (__thiscall **)(CXTSplitterWnd *))(*(int *)this + 0x148))(this);
}
