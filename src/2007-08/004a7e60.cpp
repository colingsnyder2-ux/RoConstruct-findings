// from server: 68% by colin
// roc 2007-08 004a7e60  unit: RBX::Network::Replicator::ChangePropertyItem  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7e60
//
// 004a7e60  83ec0c               sub esp, 0xc
// 004a7e63  56                   push esi
// 004a7e64  6a00                 push 0
// 004a7e66  68f07d8800           push 0x887df0
// 004a7e6b  8bf1                 mov esi, ecx
// 004a7e6d  8b06                 mov eax, dword ptr [esi]
// 004a7e6f  6874718800           push 0x887174
// 004a7e74  6a00                 push 0
// 004a7e76  50                   push eax
// 004a7e77  e8ba8e1800           call 0x630d36
// 004a7e7c  83c414               add esp, 0x14
// 004a7e7f  85c0                 test eax, eax
// 004a7e81  751e                 jne 0x4a7ea1
// 004a7e83  68046e7800           push 0x786e04
// 004a7e88  8d4c2408             lea ecx, [esp + 8]
// 004a7e8c  ff1510e77700         call dword ptr [0x77e710]
// 004a7e92  680c1e8400           push 0x841e0c
// 004a7e97  8d442408             lea eax, [esp + 8]
// 004a7e9b  50                   push eax
// 004a7e9c  e8fd8c1800           call 0x630b9e
// 004a7ea1  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a7ea4  8b7604               mov esi, dword ptr [esi + 4]
// 004a7ea7  8b11                 mov edx, dword ptr [ecx]
// 004a7ea9  8b4204               mov eax, dword ptr [edx + 4]
// 004a7eac  56                   push esi
// 004a7ead  ffd0                 call eax
// 004a7eaf  5e                   pop esi
// 004a7eb0  83c40c               add esp, 0xc
// 004a7eb3  c3                   ret 

extern "C" int __cdecl func_00630d36(int, int, int, int, int);
extern "C" int __cdecl func_00630b9e(int, int);
extern "C" void* __stdcall func_0077e710(int);

struct ChangePropertyItem {
    int f();
};

int ChangePropertyItem::f()
{
    int result = func_00630d36(*(int*)this, 0, 0x887174, 0x887df0, 0);
    if (result == 0) {
        char local[4];
        func_0077e710((int)local);
        func_00630b9e((int)local, 0x841e0c);
        result = *(int*)local;
    }
    int* p = *(int**)(result + 0x18);
    int* q = *(int**)((char*)this + 4);
    int (*fn)(int*) = *(int (**)(int*))(*(int*)p + 4);
    return fn(q);
}
