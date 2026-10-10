// from server: 40% by atomic.potato
struct CBitmapDC
{
    int IsValid();
    void* GetBitmap();
};

int CBitmapDC::IsValid()
{
    return 0;
}

void* CBitmapDC::GetBitmap()
{
    CBitmapDC* p = this;
    if (p->IsValid())
        return (char*)p + 0x30;
    return (char*)p + 0x9c;
}
