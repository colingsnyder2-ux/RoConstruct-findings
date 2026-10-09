// from server: 70% by colin
// roc 2007-08 004a7f20  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a7f20
//
// 004a7f20  83ec0c               sub esp, 0xc
// 004a7f23  56                   push esi
// 004a7f24  6a00                 push 0
// 004a7f26  68a87d8800           push 0x887da8
// 004a7f2b  8bf1                 mov esi, ecx
// 004a7f2d  8b06                 mov eax, dword ptr [esi]
// 004a7f2f  6874718800           push 0x887174
// 004a7f34  6a00                 push 0
// 004a7f36  50                   push eax
// 004a7f37  e8fa8d1800           call 0x630d36
// 004a7f3c  83c414               add esp, 0x14
// 004a7f3f  85c0                 test eax, eax
// 004a7f41  751e                 jne 0x4a7f61
// 004a7f43  68046e7800           push 0x786e04
// 004a7f48  8d4c2408             lea ecx, [esp + 8]
// 004a7f4c  ff1510e77700         call dword ptr [0x77e710]
// 004a7f52  680c1e8400           push 0x841e0c
// 004a7f57  8d442408             lea eax, [esp + 8]
// 004a7f5b  50                   push eax
// 004a7f5c  e83d8c1800           call 0x630b9e
// 004a7f61  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a7f64  8b4604               mov eax, dword ptr [esi + 4]
// 004a7f67  8b11                 mov edx, dword ptr [ecx]
// 004a7f69  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a7f6d  8b5204               mov edx, dword ptr [edx + 4]
// 004a7f70  50                   push eax
// 004a7f71  56                   push esi
// 004a7f72  ffd2                 call edx
// 004a7f74  8bc6                 mov eax, esi
// 004a7f76  5e                   pop esi
// 004a7f77  83c40c               add esp, 0xc
// 004a7f7a  c20400               ret 4

struct ChangePropertyItem {
    void* field0;
    void* field4;
    void* ChangePropertyItem_impl(void*);
};

extern "C" void* __cdecl sub_00630d36(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_00630b9e(void*, void*);
extern "C" void* __stdcall sub_0077e710(void*);

void* ChangePropertyItem::ChangePropertyItem_impl(void* arg)
{
    void* result;
    result = sub_00630d36(field0, 0, (void*)0x887174, (void*)0x887da8, 0);
    if (result == 0) {
        void* local;
        sub_0077e710(&local);
        sub_00630b9e((void*)0x841e0c, &local);
        result = 0;
    }
    void* p = *(void**)((char*)result + 0x18);
    void* v = *(void**)((char*)p);
    void* fn = *(void**)((char*)v + 4);
    void* a = field4;
    void* b = arg;
    ((void (__thiscall*)(void*, void*, void*))fn)(p, b, a);
    return b;
}
