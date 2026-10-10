// from server: 66% by atomic.potato
struct CXTPReportColumn
{
    int IsTreeColumn() const;
    void SetTreeColumn(int);
    int data[23];
};

int CXTPReportColumn::IsTreeColumn() const
{
    int *p = *(int **)((char *)this + 0x58);
    return p[16] == (int)this;
}

void CXTPReportColumn::SetTreeColumn(int value)
{
    if (value)
    {
        int *p = *(int **)((char *)this + 0x58);
        p[16] = (int)this;
    }
    else if (IsTreeColumn())
    {
        int *p = *(int **)((char *)this + 0x58);
        p[16] = 0;
    }
}
