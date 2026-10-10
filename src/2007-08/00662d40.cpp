// from server: 30% by colin
struct CXTPReportRecordItemPreview {
    char pad[0x7c];
    unsigned short flags;
    void Construct(unsigned int);
    void SetFlags(unsigned short, int);
    void DoPropExchange(void*);
};

extern "C" void __stdcall sub_653f40();
extern "C" void __stdcall sub_7385da(void*);
extern "C" void __stdcall sub_7385e6(void*, unsigned int);
extern "C" void __stdcall sub_7385e0(void*, unsigned short, int);

void CXTPReportRecordItemPreview::DoPropExchange(void* pPropExchange)
{
    sub_653f40();
    *(void**)this = (void*)0x7c9514;
    sub_7385da(&this->pad[0]);
    sub_7385e6(&this->pad[0], *(unsigned int*)((char*)pPropExchange + 4));
    unsigned short f = *(unsigned short*)&this->pad[0];
    f &= 0xbfff;
    sub_7385e0(&this->pad[0], f, 0);
}
