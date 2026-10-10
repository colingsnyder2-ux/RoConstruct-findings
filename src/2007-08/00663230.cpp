// from server: 44% by colin
struct CXTPReportRecordItemDateTime;

struct CXTPReportRecordItemDateTime
{
    int Compare(const CXTPReportRecordItemDateTime* other);
};

extern "C" int __stdcall sub_630202(int);
extern "C" int __stdcall sub_630D60(double);
extern "C" int __stdcall sub_662500(int);
extern "C" int __stdcall sub_663190(const void*);

int CXTPReportRecordItemDateTime::Compare(const CXTPReportRecordItemDateTime* other)
{
    int result = sub_630202(sub_662500(*(int*)((char*)other + 8)));
    if (result == 0)
        return 0;

    if (*(int*)((char*)this + 0x84) == *(int*)((char*)result + 0x84))
    {
        if (*(int*)((char*)this + 0x84) == 0)
        {
            double a = *(double*)((char*)this + 0x7c);
            double b = *(double*)((char*)result + 0x7c);
            if (a == b)
                return 0;
        }
        else if (*(int*)((char*)this + 0x84) == 2)
        {
            return 0;
        }
    }

    if (*(int*)((char*)this + 0x84) == 0 && *(int*)((char*)result + 0x84) == 0)
    {
        int cmp = sub_663190((char*)result + 0x7c);
        return (cmp == 0) ? -1 : 1;
    }

    double diff = *(double*)((char*)this + 0x7c) - *(double*)((char*)result + 0x7c);
    return sub_630D60(diff);
}
