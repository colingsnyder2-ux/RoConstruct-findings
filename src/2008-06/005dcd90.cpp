// from server: 100% by king_originala
// roc 2008-06 005dcd90  unit: RBX::VHint::?$FactoryProduct  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dcd90
//
// 005dcd90  56                   push esi
// 005dcd91  8bf1                 mov esi, ecx
// 005dcd93  837e2400             cmp dword ptr [esi + 0x24], 0
// 005dcd97  7642                 jbe 0x5dcddb
// 005dcd99  8b46d4               mov eax, dword ptr [esi - 0x2c]
// 005dcd9c  6a00                 push 0
// 005dcd9e  6860749300           push 0x937460
// 005dcda3  687c909200           push 0x92907c
// 005dcda8  6a00                 push 0
// 005dcdaa  50                   push eax
// 005dcdab  e8164a0c00           call 0x6a17c6
// 005dcdb0  83c414               add esp, 0x14
// 005dcdb3  85c0                 test eax, eax
// 005dcdb5  7514                 jne 0x5dcdcb
// 005dcdb7  8b442408             mov eax, dword ptr [esp + 8]
// 005dcdbb  50                   push eax
// 005dcdbc  8d8ed0feffff         lea ecx, [esi - 0x130]
// 005dcdc2  e889fdffff           call 0x5dcb50
// 005dcdc7  5e                   pop esi
// 005dcdc8  c20400               ret 4
// 005dcdcb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005dcdcf  51                   push ecx
// 005dcdd0  8d8ed0feffff         lea ecx, [esi - 0x130]
// 005dcdd6  e885feffff           call 0x5dcc60
// 005dcddb  5e                   pop esi
// 005dcddc  c20400               ret 4

extern char instanceType;
extern char playerType;

extern "C" void* __cdecl __RTDynamicCast(
    void*, long, void*, void*, int);

struct Base {
    void first(void*);
    void second(void*);
};

struct S {
    char padding[0x24];
    unsigned int count;

    void f(void*);
};

void S::f(void* argument)
{
    if (count > 0) {
        void* object = *(void**)((char*)this - 0x2c);
        if (!__RTDynamicCast(object, 0, &instanceType, &playerType, 0)) {
            ((Base*)((char*)this - 0x130))->first(argument);
            return;
        }
        ((Base*)((char*)this - 0x130))->second(argument);
    }
}
