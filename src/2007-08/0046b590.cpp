// from server: 35% by colin
typedef unsigned int size_t;

struct String {
    char pad[0x1c];
    String();
    String(const String&);
    ~String();
    const char* c_str() const;
    size_t find_first_of(const char*, size_t) const;
    String substr(size_t, size_t) const;
};

struct Ostream {
    Ostream& operator<<(int);
    Ostream& operator<<(const char*);
};

extern Ostream& __stdcall getOstream();
extern String __stdcall makeString(const char*, const char*);
extern String __stdcall makeString2(const char*, const char*);

struct LDrawCommand {
    char pad0[0x70];
    String field70;
    char pad1[0x10];
    bool execute(const String&, int*);
};

String __stdcall concat3(const char*, const char*, const String&);
String __stdcall concat2(const char*, const String&);
String __stdcall concatStr(const char*, const String&);

extern "C" {
    Ostream& __stdcall sub_46B3A0(const char*, const char*);
}

bool LDrawCommand::execute(const String& a, int* b) {
    String s1 = makeString((const char*)0x796364, (const char*)0x796254);
    String s2 = makeString((const char*)0x796368, (const char*)0x796254);
    String s3 = makeString((const char*)0x796238, (const char*)0x796368);
    String s4 = makeString((const char*)0x796234, (const char*)0x796368);
    String s5 = makeString((const char*)0x796230, (const char*)0x796368);
    String s6 = makeString((const char*)0x796220, (const char*)0x796368);
    String s7 = makeString((const char*)0x796210, (const char*)0x796368);
    String s8 = makeString((const char*)0x7961fc, (const char*)0x796368);
    String s9 = makeString((const char*)0x7961d8, (const char*)0x796368);
    String s10 = makeString((const char*)0x7961bc, (const char*)0x796368);
    return true;
}
