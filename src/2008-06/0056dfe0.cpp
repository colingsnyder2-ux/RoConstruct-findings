// from server: 39% by colin
// roc-cl: 21022
// roc-flags: /O1 /GS- /EHsc /MD
struct type_info {
    bool operator==(const type_info&) const;
};

struct bad_cast {
    bad_cast(const char*);
};

struct any {
    struct placeholder {
        virtual ~placeholder();
        virtual const type_info& type() const;
    };
    placeholder* content;
};

struct Vector3 {
    float x, y, z;
    Vector3(const any& a);
};

Vector3::Vector3(const any& a) {
    if (a.content) {
        const type_info& ti = a.content->type();
        if (ti == *(const type_info*)0x946364) {
            const float* p = (const float*)((const char*)a.content + 4);
            x = p[0];
            y = p[1];
            z = p[2];
            return;
        }
    }
    bad_cast bc("bad cast");
    *(volatile int*)0 = 0;
}
