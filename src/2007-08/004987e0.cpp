// from server: 23% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

struct RefCounted {
    void addRef();
    void release();
};

struct String {
    char buf[28];
    String(const String&);
    ~String();
};

struct AbuseReporterData {
    void* queue[4];
    void* mutex[8];
};

struct AbuseReporter {
    void* _data;
    void* _requestProcessor;
    void* _field8;
    AbuseReporter(const String& url);
};

extern "C" void __stdcall sub_40cc20(void*, void*, void*);
extern "C" void __stdcall sub_492f40(void*, void*, void*);
extern "C" void __stdcall sub_4956b0(void*);
extern "C" void __stdcall sub_498450(void*);
extern "C" void __stdcall sub_498730(void*, void*);
extern "C" void __stdcall sub_5713d0(void*);
extern "C" void __stdcall sub_572440(void*, void*, void*);
extern "C" void __stdcall sub_62fc62(void*);
extern "C" void* __stdcall sub_62fef6(unsigned int);
extern "C" void __stdcall sub_77e69c(void*, void*);
extern "C" void __stdcall sub_77e6ac(void*);

AbuseReporter::AbuseReporter(const String& url)
{
    void* d = sub_62fef6(0x1c);
    void* data = 0;
    if (d) {
        sub_498450(d);
        data = d;
    }
    this->_data = data;
    sub_498730((char*)this + 4, data);
    sub_40cc20((char*)this + 4, data, data);
    this->_field8 = 0;

    void* proc = sub_62fef6(0x14);
    if (proc) {
        char tmp[40];
        sub_77e69c(tmp, (char*)this + 0x28);
        void* ref = this->_data;
        void* ref2 = *(void**)((char*)this + 4);
        if (ref2) {
            _InterlockedExchangeAdd((volatile long*)((char*)ref2 + 4), 1);
        }
        sub_492f40(tmp, ref, ref2);
        sub_4956b0(tmp);
        int flag = 1;
        sub_572440(proc, &flag, (void*)0x79bd78);
    } else {
        proc = 0;
    }

    void* old = this->_field8;
    this->_field8 = proc;
    if (old) {
        sub_5713d0(old);
        sub_62fc62(old);
    }
}
