// from server: 59% by atomic.potato
struct CXTPReportHyperlinkArray
{
    virtual int GetCount();
    virtual void SetAt(int index, void* value);
};

void CXTPReportHyperlinkArray::SetAt(int index, void* value)
{
    if (index < 0)
        goto fail;
    if (index >= GetCount())
        goto fail;
    SetAt(index, value);
    return;
fail:
    throw 0x8002000b;
}
