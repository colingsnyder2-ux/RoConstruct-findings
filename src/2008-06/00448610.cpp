// from server: 100% by king_originala
// roc 2008-06 00448610  unit: VCRenderSettings::?$EnumPropDescriptor  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448610
//
// 00448610  56                   push esi
// 00448611  8bf1                 mov esi, ecx
// 00448613  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00448617  8d44240c             lea eax, [esp + 0xc]
// 0044861b  50                   push eax
// 0044861c  51                   push ecx
// 0044861d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00448620  e8db4c1a00           call 0x5ed300
// 00448625  84c0                 test al, al
// 00448627  7422                 je 0x44864b
// 00448629  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0044862d  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00448630  8954240c             mov dword ptr [esp + 0xc], edx
// 00448634  8b01                 mov eax, dword ptr [ecx]
// 00448636  8b400c               mov eax, dword ptr [eax + 0xc]
// 00448639  8d54240c             lea edx, [esp + 0xc]
// 0044863d  52                   push edx
// 0044863e  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00448642  52                   push edx
// 00448643  ffd0                 call eax
// 00448645  b001                 mov al, 1
// 00448647  5e                   pop esi
// 00448648  c20800               ret 8
// 0044864b  32c0                 xor al, al
// 0044864d  5e                   pop esi
// 0044864e  c20800               ret 8

enum Value { ValueZero = 0 };

struct Converter {
    bool convert(int value, int& result);
};

struct Setter {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(void* object, const Value& value) = 0;
};

struct S {
    char padding[0x1c];
    Setter* setter;
    Converter* converter;

    bool f(void* object, int value);
};

bool S::f(void* object, int value)
{
    if (converter->convert(value, value)) {
        value = *reinterpret_cast<volatile int*>(&value);
        setter->set(object, reinterpret_cast<const Value&>(value));
        return true;
    }
    return false;
}
