// from server: 47% by colin
struct CXTPReportRow_Batch {
    void sub_6D5200(int, int, int);
};

extern "C" {
    void __stdcall SetRectEmpty(void*);
    void __stdcall sub_653E10();
    void __stdcall sub_653860();
}

void CXTPReportRow_Batch::sub_6D5200(int a1, int a2, int a3)
{
    int local1;
    int local2;
    int local3;
    int local4;
    int local5;
    int local6;
    int local7;
    int local8;
    int local9;
    int local10;
    int local11;

    (*(int*)(*(int*)((char*)this + 0x24) + 0x5c))++;
    sub_653E10();
    local1 = 0x7c78cc;
    local2 = 0;
    local3 = 0;
    local4 = a1;
    local5 = *(int*)((char*)this + 0x24);
    local6 = (int)this;
    SetRectEmpty(&local7);
    local8 = a2;
    (*(void(__thiscall**)(void*, int*, int))(*(int*)this + 0xd8))(this, &local9, a3);
    (*(int*)(*(int*)((char*)this + 0x24) + 0x5c))--;
    sub_653860();
}
