// from server: 100% by king_originala
// roc 2008-06 00638260  unit: RBX::H$1?sIntValue::V?$Value::?$FactoryProduct  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00638260
//
// 00638260  6aff                 push -1
// 00638262  6821a37d00           push 0x7da321
// 00638267  64a100000000         mov eax, dword ptr fs:[0]
// 0063826d  50                   push eax
// 0063826e  64892500000000       mov dword ptr fs:[0], esp
// 00638275  83ec20               sub esp, 0x20
// 00638278  56                   push esi
// 00638279  8bf1                 mov esi, ecx
// 0063827b  89742404             mov dword ptr [esp + 4], esi
// 0063827f  e85cf9ffff           call 0x637be0
// 00638284  6878848100           push 0x818478
// 00638289  8d4c240c             lea ecx, [esp + 0xc]
// 0063828d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00638295  c706cc938400         mov dword ptr [esi], 0x8493cc
// 0063829b  c74610c0938400       mov dword ptr [esi + 0x10], 0x8493c0
// 006382a2  c74614b8938400       mov dword ptr [esi + 0x14], 0x8493b8
// 006382a9  c74620b0938400       mov dword ptr [esi + 0x20], 0x8493b0
// 006382b0  c74624a0938400       mov dword ptr [esi + 0x24], 0x8493a0
// 006382b7  c7464490938400       mov dword ptr [esi + 0x44], 0x849390
// 006382be  c7466480938400       mov dword ptr [esi + 0x64], 0x849380
// 006382c5  c7868400000070938400 mov dword ptr [esi + 0x84], 0x849370
// 006382cf  c786a400000060938400 mov dword ptr [esi + 0xa4], 0x849360
// 006382d9  c786c400000050938400 mov dword ptr [esi + 0xc4], 0x849350
// 006382e3  c6863001000000       mov byte ptr [esi + 0x130], 0
// 006382ea  ff1558248000         call dword ptr [0x802458]
// 006382f0  8d442408             lea eax, [esp + 8]
// 006382f4  50                   push eax
// 006382f5  8bce                 mov ecx, esi
// 006382f7  c644243001           mov byte ptr [esp + 0x30], 1
// 006382fc  e88f2cf2ff           call 0x55af90
// 00638301  8d4c2408             lea ecx, [esp + 8]
// 00638305  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0063830a  ff1568248000         call dword ptr [0x802468]
// 00638310  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638314  8bc6                 mov eax, esi
// 00638316  5e                   pop esi
// 00638317  64890d00000000       mov dword ptr fs:[0], ecx
// 0063831e  83c42c               add esp, 0x2c
// 00638321  c3                   ret 

struct String;
extern void (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];

    String(const char* text) { stringConstruct(this, text); }
    ~String() { stringDestroy(this); }
};

struct Base {
    char storage[0x134];

    Base();
    ~Base();
    void setValue(const String&);
};

struct S : Base {
    S();
};

S::S() : Base()
{
    *reinterpret_cast<unsigned long*>(storage) = 0x8493cc;
    *reinterpret_cast<unsigned long*>(storage + 0x10) = 0x8493c0;
    *reinterpret_cast<unsigned long*>(storage + 0x14) = 0x8493b8;
    *reinterpret_cast<unsigned long*>(storage + 0x20) = 0x8493b0;
    *reinterpret_cast<unsigned long*>(storage + 0x24) = 0x8493a0;
    *reinterpret_cast<unsigned long*>(storage + 0x44) = 0x849390;
    *reinterpret_cast<unsigned long*>(storage + 0x64) = 0x849380;
    *reinterpret_cast<unsigned long*>(storage + 0x84) = 0x849370;
    *reinterpret_cast<unsigned long*>(storage + 0xa4) = 0x849360;
    *reinterpret_cast<unsigned long*>(storage + 0xc4) = 0x849350;
    storage[0x130] = 0;

    String value("Value");
    setValue(value);
}
