// from server: 42% by atomic.potato
typedef void (__thiscall *Fn)(void *, void *);

struct CXTPReportRecordItemText {
    void DoPropExchange(void *);
};

void CXTPReportRecordItemText::DoPropExchange(void *arg)
{
    Fn fn = *(Fn *)0x98de5c;
    fn((char *)this + 0x7c, arg);
}
