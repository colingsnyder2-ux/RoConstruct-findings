// from server: 71% by colin
// roc 2007-08 004a7ec0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7ec0
//
// 004a7ec0  83ec0c               sub esp, 0xc
// 004a7ec3  56                   push esi
// 004a7ec4  6a00                 push 0
// 004a7ec6  682c7e8800           push 0x887e2c
// 004a7ecb  8bf1                 mov esi, ecx
// 004a7ecd  8b06                 mov eax, dword ptr [esi]
// 004a7ecf  6874718800           push 0x887174
// 004a7ed4  6a00                 push 0
// 004a7ed6  50                   push eax
// 004a7ed7  e85a8e1800           call 0x630d36
// 004a7edc  83c414               add esp, 0x14
// 004a7edf  85c0                 test eax, eax
// 004a7ee1  751e                 jne 0x4a7f01
// 004a7ee3  68046e7800           push 0x786e04
// 004a7ee8  8d4c2408             lea ecx, [esp + 8]
// 004a7eec  ff1510e77700         call dword ptr [0x77e710]
// 004a7ef2  680c1e8400           push 0x841e0c
// 004a7ef7  8d442408             lea eax, [esp + 8]
// 004a7efb  50                   push eax
// 004a7efc  e89d8c1800           call 0x630b9e
// 004a7f01  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a7f04  8b7604               mov esi, dword ptr [esi + 4]
// 004a7f07  8b11                 mov edx, dword ptr [ecx]
// 004a7f09  8b4204               mov eax, dword ptr [edx + 4]
// 004a7f0c  56                   push esi
// 004a7f0d  ffd0                 call eax
// 004a7f0f  5e                   pop esi
// 004a7f10  83c40c               add esp, 0xc
// 004a7f13  c3                   ret 

struct ChangePropertyItem {
    void* field0;
    void* field4;
    void run();
};

extern "C" int __cdecl func_00630d36(void*, void*, void*, void*, void*);
extern "C" void* __cdecl func_00630b9e(void*, void*);
extern "C" void* __stdcall func_0077e710(void*);

extern char G_00887e2c;
extern char G_00887174;
extern char G_00786e04;
extern char G_00841e0c;

void ChangePropertyItem::run()
{
    void* p = (void*)func_00630d36(field0, 0, &G_00887174, &G_00887e2c, 0);
    if (p == 0) {
        char local[4];
        func_0077e710(&G_00786e04);
        p = (void*)func_00630b9e(&G_00841e0c, local);
    }
    void* vtable = *(void**)((char*)p + 0x18);
    void* fn = *(void**)((char*)vtable + 4);
    ((void (__thiscall*)(void*, void*))fn)(vtable, field4);
}
