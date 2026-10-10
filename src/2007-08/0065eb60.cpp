// from server: 48% by colin
// roc 2007-08 0065eb60  unit: CXTPReportColumn  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065eb60

struct CXTPReportColumn {
    int sub_65EB30();
    int sub_65E9D0();
    int sub_65E5B0();
    int func(int arg);
    char pad[0xa4];
    int m_bVisible;
};

struct CXTPReportColumns {
    int m_nCount;
    CXTPReportColumn** m_pColumns;
};

struct CXTPReportColumn_this {
    char pad[0x54];
    CXTPReportColumns* m_pColumns;
};

int CXTPReportColumn::func(int arg) {
    CXTPReportColumn_this* self = (CXTPReportColumn_this*)this;
    CXTPReportColumns* cols = self->m_pColumns;
    int total = 0;
    int visible = 0;
    int i;
    int nCount = cols->m_nCount;
    for (i = 0; i < nCount; i++) {
        CXTPReportColumn* col;
        if (i >= 0 && i < nCount) {
            if (i >= cols->m_nCount) {
                col = 0;
            } else {
                col = cols->m_pColumns[i];
            }
        } else {
            col = 0;
        }
        if (col->sub_65E5B0()) {
            if (col->m_bVisible) {
                visible = (int)col;
                total += col->sub_65EB30();
            } else {
                arg -= col->sub_65EB30();
            }
        }
    }
    nCount = cols->m_nCount;
    for (i = 0; i < nCount; i++) {
        CXTPReportColumn* col;
        if (i >= 0 && i < nCount) {
            if (i >= cols->m_nCount) {
                col = 0;
            } else {
                col = cols->m_pColumns[i];
            }
        } else {
            col = 0;
        }
        if (!col->sub_65E5B0()) {
            continue;
        }
        int w = col->sub_65EB30();
        if (col->m_bVisible) {
            if (col == (CXTPReportColumn*)visible) {
                if (arg > col->sub_65E9D0()) {
                    continue;
                }
                w = col->sub_65E9D0();
            } else {
                if (total < 1) total = 1;
                int t = col->sub_65EB30() * arg / total;
                if (t > col->sub_65E9D0()) {
                    w = col->sub_65EB30() * arg / total;
                } else {
                    w = col->sub_65E9D0();
                }
                arg -= w;
                total -= col->sub_65EB30();
            }
        }
        if (col == (CXTPReportColumn*)visible) {
            return w;
        }
    }
    return 0;
}
