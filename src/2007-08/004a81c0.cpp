// from server: 47% by colin
// roc 2007-08 004a81c0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a81c0
//
// 004a81c0  83ec0c               sub esp, 0xc
// 004a81c3  56                   push esi
// 004a81c4  6a00                 push 0
// 004a81c6  68107d8800           push 0x887d10
// 004a81cb  8bf1                 mov esi, ecx
// 004a81cd  8b06                 mov eax, dword ptr [esi]
// 004a81cf  6874718800           push 0x887174
// 004a81d4  6a00                 push 0
// 004a81d6  50                   push eax
// 004a81d7  e85a8b1800           call 0x630d36
// 004a81dc  83c414               add esp, 0x14
// 004a81df  85c0                 test eax, eax
// 004a81e1  751e                 jne 0x4a8201
// 004a81e3  68046e7800           push 0x786e04
// 004a81e8  8d4c2408             lea ecx, [esp + 8]
// 004a81ec  ff1510e77700         call dword ptr [0x77e710]
// 004a81f2  680c1e8400           push 0x841e0c
// 004a81f7  8d442408             lea eax, [esp + 8]
// 004a81fb  50                   push eax
// 004a81fc  e89d891800           call 0x630b9e
// 004a8201  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a8205  8b4018               mov eax, dword ptr [eax + 0x18]
// 004a8208  8b10                 mov edx, dword ptr [eax]
// 004a820a  8b5208               mov edx, dword ptr [edx + 8]
// 004a820d  51                   push ecx
// 004a820e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a8211  51                   push ecx
// 004a8212  8bc8                 mov ecx, eax
// 004a8214  ffd2                 call edx
// 004a8216  5e                   pop esi
// 004a8217  83c40c               add esp, 0xc
// 004a821a  c20400               ret 4

struct ChangePropertyItem {
    void* field0;
    void* field4;
    void Process(void* a);
};

extern "C" int __cdecl sub_630D36(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_630B9E(void*, void*);
extern "C" void* __stdcall sub_77E710(void*);
extern "C" void __stdcall sub_77E710_bad_cast(void*);

void ChangePropertyItem::Process(void* a)
{
    int result = sub_630D36(field0, 0, (void*)0x887174, (void*)0x887d10, 0);
    if (result == 0) {
        void* local;
        sub_77E710(&local);
        sub_630B9E((void*)0x841e0c, &local);
    }
    void* obj = *(void**)((char*)result + 0x18);
    void** vtbl = *(void***)obj;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[2];
    fn(obj, field4, a);
}
