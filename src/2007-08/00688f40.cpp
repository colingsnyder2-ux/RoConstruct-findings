// from server: 30% by colin
extern "C" void __stdcall sub_401000(unsigned int);
extern "C" void __stdcall sub_402870(void*);
extern "C" void __stdcall sub_402880(void*, unsigned int);
extern "C" void __stdcall sub_630688(int, int);
extern "C" int __stdcall sub_63068e(void*, void*, unsigned int);
extern "C" void __stdcall sub_630a1e(void);
extern "C" int __stdcall sub_7389ee(void*, void*);

extern "C" void* __stdcall sub_77e25c(void*, void*, unsigned int);
extern "C" void* __stdcall sub_77e258(void*, void*, unsigned int);
extern "C" void __stdcall sub_77d434(void*, void*);
extern "C" void __stdcall sub_77ddbc(void*);

struct CXTPPropExchangeXMLNode {
    int ReadString(void*);
};

int CXTPPropExchangeXMLNode::ReadString(void* param) {
    int result;
    void* buf;
    unsigned int len;
    unsigned int i;
    unsigned int n;
    char stackbuf[0x80];
    char stackbuf2[0x80];
    void* p;
    void* q;
    int flag;

    result = sub_7389ee(this, &param);
    if (*(int*)&param == 1) {
        len = (unsigned int)result;
        if (len > 0xFFFFFFFF) {
            sub_401000(0x80070057);
        }
        if (len > 0x80) {
            sub_402880(stackbuf, len);
            p = stackbuf;
        } else {
            p = stackbuf;
        }
        flag = 0;
        if (sub_63068e(this, p, len) != (int)len) {
            sub_630688(0, 3);
        }
        q = sub_77e25c(&flag, p, len);
        sub_77d434(this, q);
        sub_77ddbc(&flag);
        if (p != stackbuf) {
            sub_402870(p);
        }
    } else {
        n = (unsigned int)result * 2;
        if (n > 0xFFFFFFFF) {
            sub_401000(0x80070057);
        }
        if (n > 0x80) {
            sub_402880(stackbuf2, n);
            p = stackbuf2;
        } else {
            p = stackbuf2;
        }
        flag = 2;
        if (sub_63068e(this, p, n) != (int)n) {
            sub_630688(0, 3);
        }
        q = sub_77e258(&flag, p, (unsigned int)result);
        sub_77d434(this, q);
        sub_77ddbc(&flag);
        if (p != stackbuf2) {
            sub_402870(p);
        }
    }
    return (int)this;
}
