// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" int __stdcall PathFileExistsA(const char*);

struct MD5_CTX {
    unsigned int state[4];
    unsigned int count[2];
    unsigned char buffer[64];
};

struct MD5Hasher {
    virtual void addData_istream(void*);
    virtual void addData_string(const void*);
    virtual void addData_buf(const void*, unsigned int);
    virtual const void* toString();
    virtual void toBuffer(char*);
};

struct MD5HasherImpl : MD5Hasher {
    MD5_CTX context;
    unsigned char resultBuffer[16];
    char resultString[28];
    bool resultReady;

    MD5HasherImpl(const char* path);
};

extern "C" void __stdcall MD5_Init(void*);
extern "C" void __stdcall MD5_Update(void*, const void*, unsigned int);
extern "C" void __stdcall MD5_Final(unsigned char*, void*);

extern "C" void* __stdcall sub_52CB30();
extern "C" void* __stdcall sub_545860();
extern "C" void __stdcall sub_546040(void*, const char*);
extern "C" void __stdcall sub_547A10(void*, int);
extern "C" void __stdcall sub_62FC62(void*);

extern "C" void __stdcall string_ctor(void*);
extern "C" void __stdcall string_dtor(void*);
extern "C" void __stdcall string_copy_ctor(void*, const void*);
extern "C" void __stdcall string_assign(void*, const void*);

extern "C" void __stdcall ofstream_ctor(void*, const char*, int, int);
extern "C" void __stdcall ofstream_dtor(void*);
extern "C" void __stdcall ios_clear(void*, int, bool);
extern "C" void __stdcall istream_read(void*, char*, int);
extern "C" void __stdcall istream_seekg(void*, long, int);
extern "C" void __stdcall ostream_write(void*, const char*, int);

MD5HasherImpl::MD5HasherImpl(const char* path)
{
    resultReady = false;
    MD5_Init(&context);

    void* stream = sub_545860();
    void* vtable = *(void**)stream;
    ((void (__stdcall*)(void*, const char*))((void**)vtable)[2])(stream, path);

    char buf[1024];
    ((void (__stdcall*)(void*, char*))((void**)vtable)[3])(stream, buf);

    string_ctor(&resultString);
    string_assign(&resultString, buf);

    string_dtor(buf);
    sub_62FC62(stream);

    sub_547A10(&resultString, 1);

    const char* cstr;
    if (*(unsigned int*)((char*)this + 0x18) < 0x10)
        cstr = (const char*)this + 4;
    else
        cstr = *(const char**)((char*)this + 4);

    sub_546040(&resultString, cstr);

    if (!PathFileExistsA(cstr)) {
        ofstream_ctor(buf, cstr, 0x22, 0x40);
        ios_clear(buf, 0, false);
        ostream_write(buf, (const char*)this + 4, *(int*)((char*)this + 4));
        ofstream_dtor(buf);
    }

    void* p = (char*)&resultString - 0x10;
    if (_InterlockedExchangeAdd((volatile long*)((char*)p + 0xc), -1) == 1) {
        void* vt = *(void**)p;
        ((void (__stdcall*)(void*))((void**)vt)[1])(p);
    }
}
