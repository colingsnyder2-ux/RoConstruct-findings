// from server: 51% by colin
// roc 2007-08 00657c20  unit: CXTPReportControl  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00657c20

struct CXTPReportRow;
struct CXTPReportRows;

struct CXTPReportControl {
    char pad[0x94];
    int m_nTopRow;
    char pad2[0x9c - 0x98];
    int m_nClientHeight;
    CXTPReportRows* m_pRows;
    char pad4[0xb8 - 0xa4];
    int m_nFocusedRow;
    char pad5[0x200 - 0xbc];
    void* m_pPaintManager;
    void SetFocusedRow(int nRow);
    void EnsureVisible(int nRow);
};

struct CXTPReportRows {
    int GetCount();
    CXTPReportRow* GetAt(int nIndex);
};

struct CXTPReportRow {
    int GetIndex();
    int GetHeight();
};

struct CXTPReportRowPaintInfo {
    int m_nHeight;
    char pad[0x14 - 4];
    ~CXTPReportRowPaintInfo();
    CXTPReportRowPaintInfo(CXTPReportControl* pControl);
};

extern "C" int __stdcall sub_630940();
extern "C" int __stdcall sub_630946();

void CXTPReportControl::EnsureVisible(int nRow)
{
    if (nRow == -1)
        return;
    if (nRow < 0)
        return;
    if (nRow >= this->m_pRows->GetCount())
        return;
    if (nRow < this->m_nFocusedRow) {
        this->SetFocusedRow(nRow);
        return;
    }

    CXTPReportRowPaintInfo info(this);
    int nTop = this->m_nTopRow;
    int nClientHeight = this->m_nClientHeight;
    int nFocused = this->m_nFocusedRow;
    int nRowHeight = 0;
    int nCount = this->m_pRows->GetCount();
    int i = nFocused;
    while (i < nCount) {
        CXTPReportRow* pRow = this->m_pRows->GetAt(i);
        int h = pRow->GetHeight();
        int total = h + nRowHeight;
        if (total > nClientHeight)
            break;
        if (i == nRow)
            goto done;
        nRowHeight = total;
        i++;
    }

    {
        int nRemaining = nClientHeight - nTop;
        int j = nRow;
        while (j >= 0) {
            CXTPReportRow* pRow = this->m_pRows->GetAt(j);
            int h = pRow->GetHeight();
            int diff = nRemaining - h;
            if (diff < 0) {
                if (j != nRow)
                    j++;
                break;
            }
            j--;
            nRemaining = diff;
        }
        nRow = j;
    }

    this->SetFocusedRow(nRow);
    this->EnsureVisible(nRow);

done:
    info.~CXTPReportRowPaintInfo();
}
