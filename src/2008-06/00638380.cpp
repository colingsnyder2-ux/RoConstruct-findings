// from server: 100% by king_originala
// roc 2008-06 00638380  unit: RBX::_N$1?sBoolValue::V?$Value::?$FactoryProduct  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638380
//
// 00638380  6aff                 push -1
// 00638382  6841a37d00           push 0x7da341
// 00638387  64a100000000         mov eax, dword ptr fs:[0]
// 0063838d  50                   push eax
// 0063838e  64892500000000       mov dword ptr fs:[0], esp
// 00638395  83ec20               sub esp, 0x20
// 00638398  56                   push esi
// 00638399  8bf1                 mov esi, ecx
// 0063839b  89742404             mov dword ptr [esp + 4], esi
// 0063839f  e8ecf8ffff           call 0x637c90
// 006383a4  d9ee                 fldz 
// 006383a6  6878848100           push 0x818478
// 006383ab  dd9e30010000         fstp qword ptr [esi + 0x130]
// 006383b1  8d4c240c             lea ecx, [esp + 0xc]
// 006383b5  c744243000000000     mov dword ptr [esp + 0x30], 0
// 006383bd  c7068c948400         mov dword ptr [esi], 0x84948c
// 006383c3  c7461080948400       mov dword ptr [esi + 0x10], 0x849480
// 006383ca  c7461478948400       mov dword ptr [esi + 0x14], 0x849478
// 006383d1  c7462070948400       mov dword ptr [esi + 0x20], 0x849470
// 006383d8  c7462460948400       mov dword ptr [esi + 0x24], 0x849460
// 006383df  c7464450948400       mov dword ptr [esi + 0x44], 0x849450
// 006383e6  c7466440948400       mov dword ptr [esi + 0x64], 0x849440
// 006383ed  c7868400000030948400 mov dword ptr [esi + 0x84], 0x849430
// 006383f7  c786a400000020948400 mov dword ptr [esi + 0xa4], 0x849420
// 00638401  c786c400000010948400 mov dword ptr [esi + 0xc4], 0x849410
// 0063840b  ff1558248000         call dword ptr [0x802458]
// 00638411  8d442408             lea eax, [esp + 8]
// 00638415  50                   push eax
// 00638416  8bce                 mov ecx, esi
// 00638418  c644243001           mov byte ptr [esp + 0x30], 1
// 0063841d  e86e2bf2ff           call 0x55af90
// 00638422  8d4c2408             lea ecx, [esp + 8]
// 00638426  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063842b  ff1568248000         call dword ptr [0x802468]
// 00638431  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638435  8bc6                 mov eax, esi
// 00638437  5e                   pop esi
// 00638438  64890d00000000       mov dword ptr fs:[0], ecx
// 0063843f  83c42c               add esp, 0x2c
// 00638442  c3                   ret 

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *stringConstructor)(String*, const char*);
extern void (__thiscall *stringDestructor)(String*);

inline String::String(const char* text) {
    stringConstructor(this, text);
}

inline String::~String() {
    stringDestructor(this);
}

extern unsigned long table0[];
extern unsigned long table10[];
extern unsigned long table14[];
extern unsigned long table20[];
extern unsigned long table24[];
extern unsigned long table44[];
extern unsigned long table64[];
extern unsigned long table84[];
extern unsigned long tableA4[];
extern unsigned long tableC4[];

struct Base {
    unsigned long words[76];
    Base();
    ~Base();
    void setName(const String&);
};

struct S : Base {
    double value;
    S();
};

S::S() : Base(), value(0.0) {
    words[0]  = (unsigned long)table0;
    words[4]  = (unsigned long)table10;
    words[5]  = (unsigned long)table14;
    words[8]  = (unsigned long)table20;
    words[9]  = (unsigned long)table24;
    words[17] = (unsigned long)table44;
    words[25] = (unsigned long)table64;
    words[33] = (unsigned long)table84;
    words[41] = (unsigned long)tableA4;
    words[49] = (unsigned long)tableC4;
    setName(String("Value"));
}
