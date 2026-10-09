// from server: 51% by colin
// roc 2007-08 00492090  unit: RBX::Network::P8Players::?$GetImpl  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492090
//
// 00492090  6aff                 push -1
// 00492092  6899407400           push 0x744099
// 00492097  64a100000000         mov eax, dword ptr fs:[0]
// 0049209d  50                   push eax
// 0049209e  83ec44               sub esp, 0x44
// 004920a1  a188518b00           mov eax, dword ptr [0x8b5188]
// 004920a6  33c4                 xor eax, esp
// 004920a8  50                   push eax
// 004920a9  8d442448             lea eax, [esp + 0x48]
// 004920ad  64a300000000         mov dword ptr fs:[0], eax
// 004920b3  6858b87900           push 0x79b858
// 004920b8  8d4c2408             lea ecx, [esp + 8]
// 004920bc  ff1598e67700         call dword ptr [0x77e698]
// 004920c2  8d442404             lea eax, [esp + 4]
// 004920c6  50                   push eax
// 004920c7  8d4c2424             lea ecx, [esp + 0x24]
// 004920cb  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004920d3  e8e80cf8ff           call 0x412dc0
// 004920d8  68c0108400           push 0x8410c0
// 004920dd  8d4c2424             lea ecx, [esp + 0x24]
// 004920e1  51                   push ecx
// 004920e2  e8b7ea1900           call 0x630b9e

struct RBX_Network_P8Players_GetImpl {
    void construct();
};

extern "C" void __stdcall sub_00412dc0(void*);
extern "C" void __stdcall sub_00630b9e(void*, void*);
extern "C" void __stdcall sub_0077e698(void*, const char*);

void RBX_Network_P8Players_GetImpl::construct()
{
    char buf[0x44];
    void* p;

    sub_0077e698(buf, "can't set value");
    sub_00412dc0(&p);
    sub_00630b9e(buf, &p);
}
