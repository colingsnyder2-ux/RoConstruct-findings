// from server: 100% by king_originala
// roc 2008-06 00466b90  unit: CSettingsExplorer  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00466b90
//
// 00466b90  6aff                 push -1
// 00466b92  681afa7b00           push 0x7bfa1a
// 00466b97  64a100000000         mov eax, dword ptr fs:[0]
// 00466b9d  50                   push eax
// 00466b9e  64892500000000       mov dword ptr fs:[0], esp
// 00466ba5  51                   push ecx
// 00466ba6  56                   push esi
// 00466ba7  68cc030000           push 0x3cc
// 00466bac  e86f9d2300           call 0x6a0920
// 00466bb1  8bf0                 mov esi, eax
// 00466bb3  83c404               add esp, 4
// 00466bb6  89742404             mov dword ptr [esp + 4], esi
// 00466bba  33c0                 xor eax, eax
// 00466bbc  89442410             mov dword ptr [esp + 0x10], eax
// 00466bc0  3bf0                 cmp esi, eax
// 00466bc2  7423                 je 0x466be7
// 00466bc4  8bce                 mov ecx, esi
// 00466bc6  e875adfbff           call 0x421940
// 00466bcb  c706f4bd8100         mov dword ptr [esi], 0x81bdf4
// 00466bd1  c78678030000e0bd8100 mov dword ptr [esi + 0x378], 0x81bde0
// 00466bdb  c7869c030000ccbd8100 mov dword ptr [esi + 0x39c], 0x81bdcc
// 00466be5  8bc6                 mov eax, esi
// 00466be7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00466beb  5e                   pop esi
// 00466bec  64890d00000000       mov dword ptr fs:[0], ecx
// 00466bf3  83c410               add esp, 0x10
// 00466bf6  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Primary
{
    virtual ~Primary();
    char padding[0x374];
};

struct Secondary
{
    virtual ~Secondary();
    char padding[0x20];
};

struct Tertiary
{
    virtual ~Tertiary();
    char padding[0x2c];
};

struct Base : Primary, Secondary, Tertiary
{
    Base();
};

struct CSettingsExplorer : Base
{
    virtual ~CSettingsExplorer();
};

CSettingsExplorer* createSettingsExplorer()
{
    return new CSettingsExplorer;
}
