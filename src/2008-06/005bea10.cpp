// from server: 37% by colin
// roc 2008-06 005bea10  unit: RBX::Soundscape::SoundService  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bea10

struct std_string {
    void append(const std_string&);
    void append(const char*);
    ~std_string();
};

struct SoundService {
    void __cdecl method(const std_string&, const std_string&);
};

extern "C" void __stdcall sub_5be040(std_string* out, const std_string* in);
extern "C" void __stdcall sub_802448();
extern "C" void __stdcall sub_802450();
extern "C" void __stdcall sub_802468();

void SoundService::method(const std_string& a, const std_string& b)
{
    std_string tmp1;
    std_string tmp2;
    sub_5be040(&tmp1, &a);
    sub_802448();
    tmp1.append("%d: %s");
    sub_802450();
    tmp1.~std_string();
    sub_802448();
    sub_5be040(&tmp2, &b);
    sub_802450();
    tmp2.~std_string();
}
