// from server: 36% by colin
struct CXTPReportRecordItemNumber
{
    char gap0[0x40];
    char field40[0x20];
    char field60[0x20];
    double m_nValue;
    CXTPReportRecordItemNumber* GetValue(CXTPReportRecordItemNumber* other);
};

extern "C" int (__stdcall* sub_77dcd0)(void*);
extern "C" void (__stdcall* sub_77dd74)(void*, void*);
extern "C" void (__stdcall* sub_77ddac)(void*);
extern "C" void* (__stdcall* sub_77dd98)(void*);
extern "C" void (__stdcall* sub_77dd94)(void*, void*);
extern "C" void (__stdcall* sub_77ddbc)(void*);

CXTPReportRecordItemNumber* CXTPReportRecordItemNumber::GetValue(CXTPReportRecordItemNumber* other)
{
    if (sub_77dcd0(&field60))
    {
        sub_77ddac(&gap0[0]);
        double v = m_nValue;
        void* p = sub_77dd98(&field40[0]);
        sub_77dd94(&gap0[0], p);
        sub_77dd74(other, &gap0[0]);
        sub_77ddbc(&gap0[0]);
    }
    else
    {
        sub_77dd74(other, &field60);
    }
    return other;
}
