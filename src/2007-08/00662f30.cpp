// from server: 55% by colin
struct _variant_t {
    unsigned short vt;
    unsigned short wReserved1;
    unsigned short wReserved2;
    unsigned short wReserved3;
    union {
        long lVal;
        double dblVal;
        void* p;
    };
    _variant_t();
    _variant_t(const _variant_t&);
    _variant_t(const char*);
    ~_variant_t();
    _variant_t& operator=(const _variant_t&);
};

struct CXTPReportRecordItemVariant {
    char pad[0x7c];
    _variant_t m_var;
    
    void SetValue(const _variant_t& value);
};

void CXTPReportRecordItemVariant::SetValue(const _variant_t& value)
{
    _variant_t tmp;
    tmp = value;
    _variant_t str;
    str = _variant_t("some string");
    // call 0x686940 with (value, 0x791ec4, m_var)
    // ...
}
