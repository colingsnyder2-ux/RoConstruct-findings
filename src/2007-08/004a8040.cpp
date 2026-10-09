// from server: 78% by colin
// roc 2007-08 004a8040  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8040
//
// 004a8040  83ec0c               sub esp, 0xc
// 004a8043  56                   push esi
// 004a8044  6a00                 push 0
// 004a8046  68687e8800           push 0x887e68
// 004a804b  8bf1                 mov esi, ecx
// 004a804d  8b06                 mov eax, dword ptr [esi]
// 004a804f  6874718800           push 0x887174
// 004a8054  6a00                 push 0
// 004a8056  50                   push eax
// 004a8057  e8da8c1800           call 0x630d36
// 004a805c  83c414               add esp, 0x14
// 004a805f  85c0                 test eax, eax
// 004a8061  751e                 jne 0x4a8081
// 004a8063  68046e7800           push 0x786e04
// 004a8068  8d4c2408             lea ecx, [esp + 8]
// 004a806c  ff1510e77700         call dword ptr [0x77e710]
// 004a8072  680c1e8400           push 0x841e0c
// 004a8077  8d442408             lea eax, [esp + 8]
// 004a807b  50                   push eax
// 004a807c  e81d8b1800           call 0x630b9e
// 004a8081  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a8085  8b4018               mov eax, dword ptr [eax + 0x18]
// 004a8088  8b10                 mov edx, dword ptr [eax]
// 004a808a  8b5208               mov edx, dword ptr [edx + 8]
// 004a808d  51                   push ecx
// 004a808e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a8091  51                   push ecx
// 004a8092  8bc8                 mov ecx, eax
// 004a8094  ffd2                 call edx
// 004a8096  5e                   pop esi
// 004a8097  83c40c               add esp, 0xc
// 004a809a  c20400               ret 4

struct ChangePropertyItem {
    void* field0;
    void* field4;
    void ChangeProperty(void* arg);
};

extern "C" void* __cdecl sub_630d36(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_630b9e(void*, void*);
extern "C" void* __stdcall sub_77e710(void*);

extern void* g_887e68;
extern void* g_887174;
extern void* g_786e04;
extern void* g_841e0c;

void ChangePropertyItem::ChangeProperty(void* arg)
{
    void* result = sub_630d36(field0, 0, &g_887174, &g_887e68, 0);
    if (result == 0) {
        void* local;
        sub_77e710(&g_786e04);
        result = sub_630b9e(&local, &g_841e0c);
    }
    void* obj = *(void**)((char*)result + 0x18);
    void** vtable = *(void***)obj;
    void* fn = vtable[2];
    ((void (__thiscall*)(void*, void*, void*))fn)(obj, field4, arg);
}
