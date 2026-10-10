// from server: 38% by colin
// roc 2007-08 006d1fc0  unit: CXTPReportInplaceList  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d1fc0

extern "C" void __stdcall sub_6305DA();
extern "C" void __stdcall sub_6D0FA0();
extern "C" void __stdcall sub_77DDAC();

struct CXTPReportInplaceList {
    void Construct();
};

void CXTPReportInplaceList::Construct()
{
    sub_6305DA();
    *(void**)this = (void*)0x7c5c1c;
    char* p = (char*)this + 0x54;
    *(void**)p = 0;
    sub_6D0FA0();
    *(void**)this = (void*)0x7d7bec;
    *(void**)p = (void*)0x7d7bdc;
    *(void**)((char*)this + 0x78) = 0;
    sub_77DDAC();
    *(int*)((char*)this + 0x80) = 0;
    *(void**)((char*)this + 0x7c) = (void*)0x794a08;
    *(int*)((char*)this + 0x84) = 0;
    *(int*)((char*)this + 0x88) = 0;
}
