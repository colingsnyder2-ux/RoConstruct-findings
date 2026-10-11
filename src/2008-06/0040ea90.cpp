// from server: 37% by colin
// roc 2008-06 0040ea90 188 bytes
// VCBrowserViewExternal::?$CProxy_IBrowserViewExternalEvents

extern "C" void* __stdcall calloc(unsigned int, unsigned int);
extern "C" void* __stdcall _recalloc(void*, unsigned int, unsigned int);
extern "C" void __cdecl memset(void*, int, unsigned int);

struct CProxy {
    unsigned int* data;
    unsigned int count;
    void Add(unsigned int value);
};

void CProxy::Add(unsigned int value) {
    if (this->count == 0) {
        unsigned int* p = (unsigned int*)calloc(4, 4);
        if (p == 0) {
            return;
        }
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        p[3] = 0;
        this->data = p;
        this->count = 4;
    }

    unsigned int* begin = this->data;
    unsigned int n = this->count;
    unsigned int* end = begin + n;
    unsigned int i = 1;
    unsigned int* it = begin;
    while (it < end) {
        if (*it == 0) {
            *it = value;
            return;
        }
        it++;
        i++;
    }

    unsigned int newCount = n * 2;
    unsigned int* newData = (unsigned int*)_recalloc(this->data, newCount, 4);
    if (newData == 0) {
        return;
    }
    this->data = newData;
    memset(newData + n, 0, (newCount - n) * 4);
    newData[n] = value;
    this->count = newCount;
}
