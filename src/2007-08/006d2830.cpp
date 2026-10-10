// from server: 93% by colin
extern "C" void __stdcall sub_62FC68(unsigned int code);

struct CXTPReportHyperlinkArray
{
    void* GetAt(int index);
};

void* CXTPReportHyperlinkArray::GetAt(int index)
{
    if (index >= 0 && index < ((int (__thiscall*)(CXTPReportHyperlinkArray*))((*(void***)this)[0x58 / 4]))(this))
        return ((void* (__thiscall*)(CXTPReportHyperlinkArray*, int))((*(void***)this)[0x64 / 4]))(this, index);
    sub_62FC68(0x8002000b);
    return 0;
}
