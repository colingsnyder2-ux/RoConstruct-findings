// from server: 100% by king_originala
// roc 2008-06 0056e200  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e200
//
// 0056e200  83ec08               sub esp, 8
// 0056e203  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056e207  c7042400000000       mov dword ptr [esp], 0
// 0056e20e  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e211  8b01                 mov eax, dword ptr [ecx]
// 0056e213  8b4008               mov eax, dword ptr [eax + 8]
// 0056e216  56                   push esi
// 0056e217  52                   push edx
// 0056e218  ffd0                 call eax
// 0056e21a  dd5c2404             fstp qword ptr [esp + 4]
// 0056e21e  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056e222  8d4c2404             lea ecx, [esp + 4]
// 0056e226  51                   push ecx
// 0056e227  56                   push esi
// 0056e228  e843fd0400           call 0x5bdf70
// 0056e22d  83c408               add esp, 8
// 0056e230  8bc6                 mov eax, esi
// 0056e232  5e                   pop esi
// 0056e233  83c408               add esp, 8
// 0056e236  c20800               ret 8

struct String;
String* __cdecl convertNumber(String*, const double&);

struct Getter {
    virtual void slot0();
    virtual void slot1();
    virtual double get(void*);
};

struct S {
    unsigned char padding[24];
    Getter* volatile getter;
    String* convert(String*, void*);
};

String* S::convert(String* result, void* object)
{
    union {
        volatile int initial;
        double value;
    } number;

    number.initial = 0;
    number.value = getter->get(object);
    convertNumber(result, number.value);
    return result;
}
