// from server: 64% by atomic.potato
struct type_info {
    bool operator==(const type_info&) const;
};

struct placeholder {
    virtual ~placeholder();
};

struct any {
    placeholder* content;
};

extern "C" int __stdcall _except_handler4_common();

bool __stdcall sub_98B768(const type_info&, const type_info&);

void* f(any* a) {
    if (a == 0)
        return 0;
    type_info* t;
    if (a->content != 0) {
        t = (type_info*)((char*)a->content - 4);
    } else {
        t = (type_info*)0xB0030C;
    }
    if (sub_98B768(*t, *(type_info*)0xB0033C)) {
        return (char*)a->content + 4;
    }
    return 0;
}
