// from server: 100% by king_originala
// roc 2008-06 0049ee50  unit: RBX::Network::VClient::?$FactoryProduct  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049ee50
//
// 0049ee50  56                   push esi
// 0049ee51  8bf1                 mov esi, ecx
// 0049ee53  57                   push edi
// 0049ee54  8d7e14               lea edi, [esi + 0x14]
// 0049ee57  e8f45b0f00           call 0x594a50
// 0049ee5c  8907                 mov dword ptr [edi], eax
// 0049ee5e  8d4640               lea eax, [esi + 0x40]
// 0049ee61  50                   push eax
// 0049ee62  e889df0c00           call 0x56cdf0
// 0049ee67  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049ee6b  50                   push eax
// 0049ee6c  6aff                 push -1
// 0049ee6e  51                   push ecx
// 0049ee6f  e81c510b00           call 0x553f90
// 0049ee74  83c408               add esp, 8
// 0049ee77  50                   push eax
// 0049ee78  8bcf                 mov ecx, edi
// 0049ee7a  e8c15c0f00           call 0x594b40
// 0049ee7f  8d5648               lea edx, [esi + 0x48]
// 0049ee82  52                   push edx
// 0049ee83  e838dd0c00           call 0x56cbc0
// 0049ee88  50                   push eax
// 0049ee89  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049ee8d  6aff                 push -1
// 0049ee8f  50                   push eax
// 0049ee90  e8fb500b00           call 0x553f90
// 0049ee95  83c408               add esp, 8
// 0049ee98  50                   push eax
// 0049ee99  8bcf                 mov ecx, edi
// 0049ee9b  e8a05c0f00           call 0x594b40
// 0049eea0  8d4e50               lea ecx, [esi + 0x50]
// 0049eea3  51                   push ecx
// 0049eea4  e817dd0c00           call 0x56cbc0
// 0049eea9  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049eead  50                   push eax
// 0049eeae  6aff                 push -1
// 0049eeb0  52                   push edx
// 0049eeb1  e8da500b00           call 0x553f90
// 0049eeb6  83c408               add esp, 8
// 0049eeb9  50                   push eax
// 0049eeba  8bcf                 mov ecx, edi
// 0049eebc  e87f5c0f00           call 0x594b40
// 0049eec1  83c658               add esi, 0x58
// 0049eec4  56                   push esi
// 0049eec5  e8f6dc0c00           call 0x56cbc0
// 0049eeca  50                   push eax
// 0049eecb  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049eecf  6aff                 push -1
// 0049eed1  50                   push eax
// 0049eed2  e8b9500b00           call 0x553f90
// 0049eed7  83c408               add esp, 8
// 0049eeda  50                   push eax
// 0049eedb  8bcf                 mov ecx, edi
// 0049eedd  e85e5c0f00           call 0x594b40
// 0049eee2  5f                   pop edi
// 0049eee3  5e                   pop esi
// 0049eee4  c21000               ret 0x10

extern "C" void *__cdecl getInitialType();
extern "C" void *__cdecl getFirstType();
extern "C" void *__cdecl getOtherType();
extern "C" const char *__cdecl getValue(void *, int);

struct Property {
    void *type;
    void set(const char *, void *, void *);
};

struct S {
    unsigned char prefix[0x14];
    Property property;
    unsigned char padding[0x28];
    unsigned char first[8];
    unsigned char second[8];
    unsigned char third[8];
    unsigned char fourth[8];

    void initialize(void *, void *, void *, void *);
};

void S::initialize(void *a, void *b, void *c, void *d)
{
    property.type = getInitialType();
    property.set(getValue(a, -1), getFirstType(), first);
    property.set(getValue(b, -1), getOtherType(), second);
    property.set(getValue(c, -1), getOtherType(), third);
    property.set(getValue(d, -1), getOtherType(), fourth);
}
