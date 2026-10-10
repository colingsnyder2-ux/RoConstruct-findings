// from server: 52% by colin
// roc 2007-08 00545fd0  unit: RBX::MD5HasherImpl  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545fd0

extern "C" __declspec(dllimport) char* __stdcall PathAddBackslashA(char* pszPath);
extern "C" void __stdcall ThrowLastError(unsigned long err);

struct MD5HasherImpl {
    char* resultString;
    void finish();
    void toString();
};

void MD5HasherImpl::finish()
{
    char* p = this->resultString;
    int len = *(int*)(p - 0xc);
    int cap = *(int*)(p - 8);
    int ref = *(int*)(p - 4);
    int newLen = len + 1;
    int diff = cap - newLen;
    int check = 1 - ref;
    if ((check | diff) < 0) {
        // grow
        char* tmp = this->resultString;
        // call reserve-like helper
        extern void __stdcall growHelper(char* s, int n);
        growHelper(tmp, newLen);
    }
    char* s = this->resultString;
    PathAddBackslashA(s);
    char* q = this->resultString;
    int n;
    if (q == 0) {
        n = 0;
    } else {
        char* e = q + 1;
        char c;
        do {
            c = *q;
            q++;
        } while (c != 0);
        n = (int)(q - e);
        if (n < 0) {
            ThrowLastError(0x80070057);
            return;
        }
    }
    if (n > *(int*)(this->resultString - 8)) {
        ThrowLastError(0x80070057);
        return;
    }
    *(int*)(this->resultString - 0xc) = n;
    char* r = this->resultString;
    r[n] = 0;
}
