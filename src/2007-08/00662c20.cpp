// from server: 26% by colin
// roc 2007-08 00662c20  unit: CXTPReportRecordItemPreview  size: 285 bytes
// library xtp-11.2.2-vc8/Source/ReportControl/XTPReportRecordItemText.cpp

extern "C" {
    void __stdcall sub_77dd74();
    unsigned char __stdcall sub_77dcd0();
    void __stdcall sub_77dcc8();
    void __stdcall sub_77dd98();
    void __stdcall sub_77ddbc();
}

struct CXTPReportRecordItemPreview {
    void DoPropExchange(void* pPropExchange, int arg2);
};

void CXTPReportRecordItemPreview::DoPropExchange(void* pPropExchange, int arg2)
{
    int* p = (int*)pPropExchange;
    int* p2 = (int*)p[1];
    int* p3 = (int*)p2[0xb0 / 4];
    int* p4 = (int*)p3[0];
    int (*fn)(void*) = (int (*)(void*))p4[0xc4 / 4];
    int result = fn(pPropExchange);
    if (result == 0)
        return;

    int* pThis = (int*)this;
    int* p5 = (int*)((char*)pThis + 0x2c);
    sub_77dd74();
    sub_77dcd0();
    if (sub_77dcd0() != 0)
        return;

    int v14 = pThis[0x14 / 4];
    int v18 = pThis[0x18 / 4];
    int v1c = pThis[0x1c / 4];
    int v20 = pThis[0x20 / 4];
    int* p6 = (int*)pThis[4 / 4];
    int v24 = pThis[0x24 / 4];
    int v18b = v14;
    int v1cb = v18;
    int v20b = v1c;
    int v24b = v20;
    int* p7 = (int*)p6[0xb0 / 4];
    int v22c = p7[0x22c / 4];
    v14 += p7[0x220 / 4];
    int* p8 = (int*)((char*)p7 + 0x220);
    int v220 = v22c;
    int v228 = p8[8 / 4];
    v20 -= v220;
    int v22c2 = v228;
    int v224 = p8[4 / 4];
    v1c -= v22c2;
    v18b = v14;
    sub_77dcc8();
    sub_77dd98();
    int* p9 = (int*)v24;
    int (*fn2)(void*) = (int (*)(void*))p9[0x70 / 4];
    fn2((void*)v24);
    sub_77ddbc();
}
