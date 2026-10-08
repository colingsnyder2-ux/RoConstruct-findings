// from server: 23% by colin
// roc-repair: genuine WinNT.h definitions (no SDK shipped)
typedef unsigned long DWORD;
struct PAVCXTPReportHyperlink {
    struct CXTPArrayT {
        DWORD operator[](DWORD offset) const;
    };

    CXTPArrayT* array;
};

DWORD PAVCXTPReportHyperlink::CXTPArrayT::operator[](DWORD offset) const {
    return *(DWORD*)((DWORD)this + offset);
}
