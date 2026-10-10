// from server: 95% by atomic.potato
extern "C" int __stdcall PropertyGridCount(void*);

struct CXTPPropertyGridInplaceEdit
{
    int Contains(int index);
};

int CXTPPropertyGridInplaceEdit::Contains(int index)
{
    if (index >= 0 && index < PropertyGridCount((char*)this + 0x84))
        return 1;
    return 0;
}
