// from server: 21% by colin
struct CXTPReportRecordItemVariant {
    int Compare(CXTPReportRecordItemVariant* other);
};

extern int g_nFormat;

char* func_006d89d0();
int __stdcall func_006a0c26(char*);
int __stdcall func_007bca80(char*, char*, int, int);
int __stdcall func_006c8e20();

int CXTPReportRecordItemVariant::Compare(CXTPReportRecordItemVariant* other)
{
    int idx1 = (*(int (__thiscall**)(CXTPReportRecordItemVariant*))(*(int*)this + 0xd4))(this);
    if (idx1 == -1)
    {
        int idx2 = (*(int (__thiscall**)(CXTPReportRecordItemVariant*))(*(int*)other + 0xd4))(other);
        if (idx2 == -1)
        {
            char* p1 = func_006d89d0();
            char* p2 = (char*)func_006a0c26(p1);
            if (p2 == 0)
                return 0;
            int flag = (*(int*)(*(int*)((char*)this + 0x4c) + 0x50) + 0x40) == 0;
            int fmt = g_nFormat;
            if (fmt == 0x400)
                fmt = func_006c8e20();
            int r = func_007bca80((char*)this + 0x7c, p2 + 0x7c, fmt, flag);
            return r - 1;
        }
    }
    int idxA = (*(int (__thiscall**)(CXTPReportRecordItemVariant*))(*(int*)other + 0xd4))(other);
    int idxB = (*(int (__thiscall**)(CXTPReportRecordItemVariant*))(*(int*)this + 0xd4))(this);
    return idxB - idxA;
}
