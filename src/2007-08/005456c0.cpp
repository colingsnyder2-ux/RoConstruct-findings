// from server: 44% by colin
// roc 2007-08 005456c0  unit: RBX::MD5HasherImpl  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005456c0
//
// 005456c0  51                   push ecx
// 005456c1  56                   push esi
// 005456c2  8bf1                 mov esi, ecx
// 005456c4  8b06                 mov eax, dword ptr [esi]
// 005456c6  8b5010               mov edx, dword ptr [eax + 0x10]
// 005456c9  c744240400000000     mov dword ptr [esp + 4], 0
// 005456d1  ffd2                 call edx
// 005456d3  83c60c               add esi, 0xc
// 005456d6  56                   push esi
// 005456d7  8b742410             mov esi, dword ptr [esp + 0x10]
// 005456db  8bce                 mov ecx, esi
// 005456dd  ff159ce67700         call dword ptr [0x77e69c]
// 005456e3  8bc6                 mov eax, esi
// 005456e5  5e                   pop esi
// 005456e6  59                   pop ecx
// 005456e7  c20400               ret 4

struct MD5HasherImpl {
    void* vtable;
    char context[0xc];
    void* resultString;
    void addData(const char* data, unsigned int nBytes);
};

void MD5HasherImpl::addData(const char* data, unsigned int nBytes)
{
    void* p = this->vtable;
    void (*fn)(void*) = *(void (**)(void*))((char*)p + 0x10);
    fn(this);
    char* src = (char*)this + 0xc;
    void* dst = (void*)data;
    void* (*copy)(void*, const void*) = *(void* (**)(void*, const void*))0x77e69c;
    copy(dst, src);
}
