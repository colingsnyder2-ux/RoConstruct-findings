// from server: 64% by colin
// roc 2007-08 004a8220  unit: RBX::Network::Replicator::ChangePropertyItem  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8220
//
// 004a8220  83ec0c               sub esp, 0xc
// 004a8223  56                   push esi
// 004a8224  6a00                 push 0
// 004a8226  68b0118900           push 0x8911b0
// 004a822b  8bf1                 mov esi, ecx
// 004a822d  8b06                 mov eax, dword ptr [esi]
// 004a822f  6874718800           push 0x887174
// 004a8234  6a00                 push 0
// 004a8236  50                   push eax
// 004a8237  e8fa8a1800           call 0x630d36
// 004a823c  83c414               add esp, 0x14
// 004a823f  85c0                 test eax, eax
// 004a8241  751e                 jne 0x4a8261
// 004a8243  68046e7800           push 0x786e04
// 004a8248  8d4c2408             lea ecx, [esp + 8]
// 004a824c  ff1510e77700         call dword ptr [0x77e710]
// 004a8252  680c1e8400           push 0x841e0c
// 004a8257  8d442408             lea eax, [esp + 8]
// 004a825b  50                   push eax
// 004a825c  e83d891800           call 0x630b9e
// 004a8261  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a8265  8b4018               mov eax, dword ptr [eax + 0x18]
// 004a8268  8b10                 mov edx, dword ptr [eax]
// 004a826a  8b5208               mov edx, dword ptr [edx + 8]
// 004a826d  51                   push ecx
// 004a826e  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a8271  51                   push ecx
// 004a8272  8bc8                 mov ecx, eax
// 004a8274  ffd2                 call edx
// 004a8276  5e                   pop esi
// 004a8277  83c40c               add esp, 0xc
// 004a827a  c20400               ret 4
// library ROBLOX2016-main/Network/Replicator.h (function ?process@ChangePropertyItem@Replicator@Network@RBX@@)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD


extern "C" int __cdecl sub_630D36(int, int, int, int, int);
extern "C" int __cdecl sub_630B9E(int, int);
extern "C" int __stdcall sub_77E710(int);

struct RBX_Reflection_PropertyDescriptor;

struct RBX_Network_Replicator_ChangePropertyItem
{
    int process(int);
};

int RBX_Network_Replicator_ChangePropertyItem::process(int a2)
{
    int v;
    int result;
    int obj;
    int fn;

    result = sub_630D36(*(int*)this, 0, 0x887174, 0x8911b0, 0);
    if (result == 0) {
        sub_77E710(0x786e04);
        result = sub_630B9E(0x841e0c, (int)&v);
    }
    obj = *(int*)(result + 0x18);
    fn = *(int*)(obj);
    fn = *(int*)(fn + 8);
    return ((int (__thiscall*)(int, int, int))fn)(obj, *(int*)((char*)this + 4), a2);
}
