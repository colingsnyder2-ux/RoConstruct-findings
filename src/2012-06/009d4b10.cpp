// from server: 60% by Intel
extern "C" bool __stdcall sub_b24660(void*);

struct CXTPPrintPageHeaderFooter {
    bool method_009d4b10();
};

bool CXTPPrintPageHeaderFooter::method_009d4b10()
{
    if (!sub_b24660(reinterpret_cast<void*>(reinterpret_cast<char*>(this) + 0x64)))
        return false;
    if (!sub_b24660(reinterpret_cast<void*>(reinterpret_cast<char*>(this) + 0x68)))
        return false;
    if (!sub_b24660(reinterpret_cast<void*>(reinterpret_cast<char*>(this) + 0x6c)))
        return false;
    return true;
}
