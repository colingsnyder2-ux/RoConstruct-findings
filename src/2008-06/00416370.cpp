// from server: 46% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

struct Variant {
    unsigned short type;
    unsigned char data[14];
    long moveTo(Variant* destination);
};

struct std_string {
    void* pad[2];
    const char* c_str() const;
    ~std_string();
};

struct Verb {
    void* vtable;
    void* pad;
    type_info* info;
    bool matches(const type_info&) const;
    bool matches2(const type_info&) const;
    bool matches3(const type_info&) const;
    void getText(std_string* out) const;
    void getText2(std_string* out) const;
    void getText3(std_string* out) const;
    void doIt(void* dataState);
    bool isEnabled() const;
    bool isChecked() const;
    bool isSelected() const;
    void getText4(std_string* out) const;
};

struct CopyVerb {
    void* vtable;
    void* pad;
    type_info* info;
    void doIt(void* dataState);
};

extern type_info type_info_929614;
extern type_info type_info_92bed0;
extern type_info type_info_929644;
extern type_info type_info_92bedc;
extern type_info type_info_92bee8;

extern "C" long (__stdcall *VariantClear)(Variant*);
extern "C" void (__stdcall *unknown_80291c)(Variant*);
extern "C" void* (__stdcall *unknown_802464)(void*);
extern "C" void (__stdcall *unknown_802468)(void*);

bool __cdecl getBool_415ed0(void* p);
bool __cdecl getBool_415f60(void* p);
float __cdecl getFloat_415ff0(void* p);
double __cdecl getDouble_416080(void* p);
void* __cdecl getPtr_416260(void* p);
void* __cdecl getPtr_4165e0(void* p, void* q);
void __cdecl getText_416310(void* p, std_string* out);
void __cdecl getText_416340(void* p, std_string* out);
void __cdecl construct_415a20(std_string* out, void* p);
void __cdecl construct_4162f0(std_string* out, void* p);

void CopyVerb::doIt(void* dataState)
{
    Variant result;
    if (this->info->operator==(type_info_929614)) {
        *(unsigned short*)dataState = 1;
        return;
    }
    if (this->info->operator==(type_info_92bed0)) {
        bool b = getBool_415ed0((char*)this + 4);
        result.type = 3;
        *(void**)(result.data) = (void*)b;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (this->info->operator==(type_info_929644)) {
        bool b = getBool_415f60((char*)this + 4);
        result.type = 11;
        *(unsigned short*)(result.data) = b ? 0 : 1;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (this->info->operator==(type_info_92bedc)) {
        float f = getFloat_415ff0((char*)this + 4);
        result.type = 4;
        *(float*)(result.data) = f;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (this->info->operator==(type_info_92bee8)) {
        double d = getDouble_416080((char*)this + 4);
        result.type = 5;
        *(double*)(result.data) = d;
        result.moveTo((Variant*)dataState);
        unknown_80291c(&result);
        return;
    }
    if (((Verb*)this)->matches(type_info_929614)) {
        std_string s;
        getText_416310((char*)this + 4, &s);
        void* p = unknown_802464(&s);
        Variant out;
        construct_4162f0((std_string*)&out, p);
        unknown_802468(&s);
        out.moveTo((Variant*)dataState);
        unknown_80291c(&out);
        return;
    }
    if (((Verb*)this)->matches2(type_info_929614)) {
        std_string s;
        getText_416340((char*)this + 4, &s);
        void* p = unknown_802464(&s);
        Variant out;
        construct_4162f0((std_string*)&out, p);
        unknown_802468(&s);
        out.moveTo((Variant*)dataState);
        unknown_80291c(&out);
        return;
    }
    if (((Verb*)this)->matches3(type_info_929614)) {
        void* p = getPtr_416260((char*)this + 4);
        void* q = getPtr_4165e0(p, 0);
        Variant out;
        construct_415a20((std_string*)&out, q);
        out.moveTo((Variant*)dataState);
        unknown_80291c(&out);
        return;
    }
    *(unsigned short*)dataState = 0;
}
