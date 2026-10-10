// from server: 13% by colin
struct CXTPGroupLine {
    void Draw();
};

extern "C" {
    unsigned long __stdcall GetSysColor(int);
    long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);
    int __stdcall SetRect(void*, int, int, int, int);
}

extern int G1_func_00630490();
extern int G1_func_0069edf0();
extern int G1_func_0069ea00();
extern int G1_func_00738322();
extern int G1_func_00630250();
extern int G1_func_00680000();
extern int G1_func_0063062e();
extern int G1_func_00680550();
extern int G1_func_007383e8();
extern int G1_func_00738688();
extern int G1_func_007383ca();
extern int G1_func_006805d0();
extern int G1_func_0063048a();
extern int G1_func_00630a1e();

void CXTPGroupLine::Draw()
{
    char buf[0x94];
    int saved;
    int color;
    int rect[4];
    int pt[2];
    int pt2[2];
    int flag;
    int i;

    G1_func_00630490();
    color = GetSysColor(0x12);
    if (G1_func_0069edf0()) {
        if (G1_func_0069ea00() < 0) {
            color = GetSysColor(0x12);
        }
    }
    flag = G1_func_00738322() & 0x2000;
    G1_func_00630250();
    G1_func_00680000();
    G1_func_0063062e();
    G1_func_00680550();
    G1_func_007383e8();
    G1_func_00738688();
    G1_func_007383ca();
    G1_func_007383ca();
    G1_func_006805d0();
    G1_func_0063048a();
    G1_func_00630a1e();
}
