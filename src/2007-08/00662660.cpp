// from server: 88% by colin
struct CXTPReportRecordItemPreview {
    void get(int* p1, int* p2);
};

void CXTPReportRecordItemPreview::get(int* p1, int* p2)
{
    int v = *(int*)((char*)p1 + 4);
    int* a = (int*)(*(int*)((char*)v + 0xb0));
    int c = *(int*)((char*)a + 0x138);
    int* base = (int*)((char*)a + 0x130);
    int r;
    if (c == -1)
        r = *(int*)((char*)base + 4);
    else
        r = c;
    *(int*)((char*)p2 + 0x24) = r;
    int v2 = *(int*)((char*)p1 + 4);
    int* a2 = (int*)(*(int*)((char*)v2 + 0xb0));
    *(int*)((char*)p2 + 0x20) = (int)((char*)a2 + 0x38);
}
