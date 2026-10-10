// from server: 56% by colin
struct COleVariant {
    void Clear();
    COleVariant();
    ~COleVariant();
};

struct CdbBookmark {
    bool IsNull() const;
    void Clear();
    ~CdbBookmark();
};

extern "C" void __stdcall VariantInit(COleVariant*);
extern "C" void __stdcall VariantClear(COleVariant*);
extern "C" void __stdcall CdbBookmark_ctor(CdbBookmark*);
extern "C" void __stdcall CdbBookmark_dtor(CdbBookmark*);
extern "C" bool __stdcall CdbBookmark_IsNull(const CdbBookmark*);
extern "C" void __stdcall CdbBookmark_Clear(CdbBookmark*);

struct CXTMaskEdit {
    bool NotifyPosNotInRange(const COleVariant&, const CdbBookmark&);
};

bool CXTMaskEdit::NotifyPosNotInRange(const COleVariant& v, const CdbBookmark& bm)
{
    COleVariant local;
    VariantInit(&local);
    CdbBookmark b;
    CdbBookmark_ctor(&b);
    bool result = false;
    if (!bm.IsNull())
        b = bm;
    else
        b.Clear();
    result = b.IsNull();
    b.~CdbBookmark();
    local.~COleVariant();
    return result;
}
