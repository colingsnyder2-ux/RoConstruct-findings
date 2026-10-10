// from server: 53% by colin
struct CXTPReportViewPrintOptions {
    void GetPageRect(int* out, int* in);
    void GetMargins(int* out);
};

struct CXTPReportViewPrintOptionsHelper {
    int unknown[24];
};

extern "C" void __stdcall sub_7388F8(int* out, int* in);

void CXTPReportViewPrintOptions::GetPageRect(int* out, int* in)
{
    if (in == 0) {
        out[0] = 0;
        out[1] = 0;
        out[2] = 0;
        out[3] = 0;
        return;
    }

    int local[4];
    int tmp[4];

    void (CXTPReportViewPrintOptions::*fn)(int*) = 0;
    (this->*(*(void (CXTPReportViewPrintOptions::**)(int*))((char*)this + 0x5c)))(tmp);

    local[0] = tmp[0];
    local[1] = tmp[1];
    local[2] = tmp[2];
    local[3] = tmp[3];

    sub_7388F8(local, in);
    sub_7388F8(local, in);

    out[0] = local[0];
    out[1] = local[1];
    out[2] = local[2];
    out[3] = local[3];
}
