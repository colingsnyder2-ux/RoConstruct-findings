// from server: 64% by colin
// roc 2007-08 004a8100  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8100
//
// 004a8100  83ec0c               sub esp, 0xc
// 004a8103  56                   push esi
// 004a8104  6a00                 push 0
// 004a8106  682c7e8800           push 0x887e2c
// 004a810b  8bf1                 mov esi, ecx
// 004a810d  8b06                 mov eax, dword ptr [esi]
// 004a810f  6874718800           push 0x887174
// 004a8114  6a00                 push 0
// 004a8116  50                   push eax
// 004a8117  e81a8c1800           call 0x630d36
// 004a811c  83c414               add esp, 0x14
// 004a811f  85c0                 test eax, eax
// 004a8121  751e                 jne 0x4a8141
// 004a8123  68046e7800           push 0x786e04
// 004a8128  8d4c2408             lea ecx, [esp + 8]
// 004a812c  ff1510e77700         call dword ptr [0x77e710]
// 004a8132  680c1e8400           push 0x841e0c
// 004a8137  8d442408             lea eax, [esp + 8]
// 004a813b  50                   push eax
// 004a813c  e85d8a1800           call 0x630b9e
// 004a8141  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a8145  8b4018               mov eax, dword ptr [eax + 0x18]
// 004a8148  8b10                 mov edx, dword ptr [eax]
// 004a814a  8b5208               mov edx, dword ptr [edx + 8]
// 004a814d  51                   push ecx
// 004a814e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a8151  51                   push ecx
// 004a8152  8bc8                 mov ecx, eax
// 004a8154  ffd2                 call edx
// 004a8156  5e                   pop esi
// 004a8157  83c40c               add esp, 0xc
// 004a815a  c20400               ret 4

struct RBX_Network_Replicator_ChangePropertyItem {
    void* vtable;
    int field_4;
    void ChangePropertyItem(int arg);
};

extern "C" void* __cdecl func_00630d36(void*, int, void*, int, void*);
extern "C" void __cdecl func_00630b9e(void*, void*);
extern "C" void __stdcall func_0077e710(void*);

void RBX_Network_Replicator_ChangePropertyItem::ChangePropertyItem(int arg)
{
    void* p = func_00630d36(vtable, 0, (void*)0x887174, 0, (void*)0x887e2c);
    if (p == 0) {
        void* local;
        func_0077e710(&local);
        func_00630b9e((void*)0x841e0c, &local);
        p = 0;
    }
    void* obj = *(void**)((char*)p + 0x18);
    void** vt = *(void***)obj;
    void (*fn)(void*, int, int) = (void (*)(void*, int, int))vt[2];
    fn(obj, field_4, arg);
}
