// from server: 69% by colin
// roc 2007-08 004a7e00  unit: RBX::Network::Replicator::ChangePropertyItem  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7e00
//
// 004a7e00  83ec0c               sub esp, 0xc
// 004a7e03  56                   push esi
// 004a7e04  6a00                 push 0
// 004a7e06  68687e8800           push 0x887e68
// 004a7e0b  8bf1                 mov esi, ecx
// 004a7e0d  8b06                 mov eax, dword ptr [esi]
// 004a7e0f  6874718800           push 0x887174
// 004a7e14  6a00                 push 0
// 004a7e16  50                   push eax
// 004a7e17  e81a8f1800           call 0x630d36
// 004a7e1c  83c414               add esp, 0x14
// 004a7e1f  85c0                 test eax, eax
// 004a7e21  751e                 jne 0x4a7e41
// 004a7e23  68046e7800           push 0x786e04
// 004a7e28  8d4c2408             lea ecx, [esp + 8]
// 004a7e2c  ff1510e77700         call dword ptr [0x77e710]
// 004a7e32  680c1e8400           push 0x841e0c
// 004a7e37  8d442408             lea eax, [esp + 8]
// 004a7e3b  50                   push eax
// 004a7e3c  e85d8d1800           call 0x630b9e
// 004a7e41  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a7e44  8b7604               mov esi, dword ptr [esi + 4]
// 004a7e47  8b11                 mov edx, dword ptr [ecx]
// 004a7e49  8b4204               mov eax, dword ptr [edx + 4]
// 004a7e4c  56                   push esi
// 004a7e4d  ffd0                 call eax
// 004a7e4f  5e                   pop esi
// 004a7e50  83c40c               add esp, 0xc
// 004a7e53  c3                   ret 

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" void* __stdcall func_0077e710(int);

struct ChangePropertyItem {
    int f();
};

int ChangePropertyItem::f()
{
    int* p = (int*)func_00630d36(*(int*)this, 0, 0x887174, 0x887e68, 0);
    if (p == 0) {
        int local;
        func_0077e710(0x786e04);
        func_00630b9e(0x841e0c, (int)&local);
        p = (int*)&local;
    }
    int* q = (int*)p[6];
    int* r = (int*)*(int*)this;
    int (*fn)(int) = (int (*)(int))r[1];
    return fn(*(int*)((char*)this + 4));
}
