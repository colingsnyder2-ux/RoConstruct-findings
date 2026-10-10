// from server: 80% by atomic.potato
extern "C" int __cdecl sub_827f20(void *);

struct CXTPReportColumn
{
    int GetIndex();
    int GetValue();
};

int CXTPReportColumn::GetIndex()
{
    return 0;
}

int CXTPReportColumn::GetValue()
{
    if (*(int *)((char *)this + 0x68) == 0)
        return sub_827f20(this) + *(int *)((char *)this + 0xa4);
    return *(int *)((char *)this + 0xa4);
}
