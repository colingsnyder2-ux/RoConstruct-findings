// from server: 49% by colin
extern "C" double __stdcall ceil(double);

struct CXTPReportRecordItemVariant
{
    double m_dbl;
    int m_nType;
    bool Compare(const CXTPReportRecordItemVariant* other);
};

bool CXTPReportRecordItemVariant::Compare(const CXTPReportRecordItemVariant* other)
{
    if (m_nType != 0)
        return false;
    if (other->m_nType != 0)
        return false;

    double a = m_dbl;
    if (a < 0.0)
        a = ceil(a) - a;
    else
        a = a - ceil(a);

    double b = other->m_dbl;
    if (b < 0.0)
        b = ceil(b) - b;
    else
        b = b - ceil(b);

    return a == b;
}
