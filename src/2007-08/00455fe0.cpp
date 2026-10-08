// from server: 75% by colin
// roc 2007-08 00455fe0  unit: ToggleIDEModeVerb  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455fe0
//
// 00455fe0  56                   push esi
// 00455fe1  8bf1                 mov esi, ecx
// 00455fe3  e8089f0a00           call 0x4ffef0
// 00455fe8  dd4610               fld qword ptr [esi + 0x10]
// 00455feb  dc05f82a7900         fadd qword ptr [0x792af8]
// 00455ff1  5e                   pop esi
// 00455ff2  ded9                 fcompp 
// 00455ff4  dfe0                 fnstsw ax
// 00455ff6  f6c441               test ah, 0x41
// 00455ff9  7503                 jne 0x455ffe
// 00455ffb  32c0                 xor al, al
// 00455ffd  c3                   ret 
// 00455ffe  e8ff9e1d00           call 0x62ff02
// 00456003  8b4004               mov eax, dword ptr [eax + 4]
// 00456006  8b4020               mov eax, dword ptr [eax + 0x20]
// 00456009  33c9                 xor ecx, ecx
// 0045600b  3888ed000000         cmp byte ptr [eax + 0xed], cl
// 00456011  0f94c1               sete cl
// 00456014  8ac1                 mov al, cl
// 00456016  c3                   ret 

extern "C" void __cdecl sub_4FFEF0();
extern "C" void* __cdecl sub_62FF02();
extern double dbl_792AF8;

struct ToggleIDEModeVerb {
    char pad[0x10];
    double field_0x10;
    bool method();
};

bool ToggleIDEModeVerb::method() {
    sub_4FFEF0();
    if (field_0x10 + dbl_792AF8 == 0.0) {
        return false;
    }
    void* p = sub_62FF02();
    unsigned char* q = *(unsigned char**)((char*)p + 4);
    unsigned char* r = *(unsigned char**)(q + 0x20);
    return r[0xed] == 0;
}
