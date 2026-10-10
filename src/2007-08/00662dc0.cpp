// from server: 81% by colin
struct CXTPReportRecordItemVariant {
    int Compare(const CXTPReportRecordItemVariant* other);
};

extern "C" int __stdcall sub_6626F0(CXTPReportRecordItemVariant*);
extern "C" int __stdcall sub_630202(int, int);
extern "C" int __stdcall sub_6558F0();
extern "C" int __stdcall sub_738E76(void*, void*, int, int);

extern int dword_8B63C0;

int CXTPReportRecordItemVariant::Compare(const CXTPReportRecordItemVariant* other)
{
    int a = (*(int (__thiscall **)(CXTPReportRecordItemVariant*))(*(int*)this + 0xD0))(this);
    if (a == -1) {
        int b = (*(int (__thiscall **)(const CXTPReportRecordItemVariant*))(*(int*)other + 0xD0))(other);
        if (b == -1) {
            int v = sub_630202(sub_6626F0((CXTPReportRecordItemVariant*)other), 0);
            if (v == 0)
                return 0;
            int* p = *(int**)((char*)this + 0x4C);
            int* q = *(int**)((char*)p + 0x50);
            int eax = dword_8B63C0;
            int edx = (*(int*)((char*)q + 0x40) == 0) ? 1 : 0;
            int edi = edx;
            if (eax == 0x400)
                eax = sub_6558F0();
            int r = sub_738E76((char*)this + 0x7C, (char*)v + 0x7C, eax, edi);
            return r - 1;
        }
    }
    int c = (*(int (__thiscall **)(const CXTPReportRecordItemVariant*))(*(int*)other + 0xD0))(other);
    int d = (*(int (__thiscall **)(CXTPReportRecordItemVariant*))(*(int*)this + 0xD0))(this);
    return d - c;
}
