// from server: 100% by king_originala
// roc 2008-06 006298d0  unit: RBX::ClickDetector  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006298d0
//
// 006298d0  56                   push esi
// 006298d1  8b742408             mov esi, dword ptr [esp + 8]
// 006298d5  6a00                 push 0
// 006298d7  6850dd9200           push 0x92dd50
// 006298dc  687c909200           push 0x92907c
// 006298e1  6a00                 push 0
// 006298e3  56                   push esi
// 006298e4  e8dd7e0700           call 0x6a17c6
// 006298e9  83c414               add esp, 0x14
// 006298ec  85c0                 test eax, eax
// 006298ee  751d                 jne 0x62990d
// 006298f0  50                   push eax
// 006298f1  68402a9300           push 0x932a40
// 006298f6  687c909200           push 0x92907c
// 006298fb  50                   push eax
// 006298fc  56                   push esi
// 006298fd  e8c47e0700           call 0x6a17c6
// 00629902  83c414               add esp, 0x14
// 00629905  85c0                 test eax, eax
// 00629907  7504                 jne 0x62990d
// 00629909  5e                   pop esi
// 0062990a  c20400               ret 4
// 0062990d  b801000000           mov eax, 1
// 00629912  5e                   pop esi
// 00629913  c20400               ret 4

namespace RBX {
    class Instance {
    public:
        virtual ~Instance();
    };

    class PartInstance : public Instance {};
    class ModelInstance : public Instance {};
}

int __stdcall func_006298d0(RBX::Instance* instance)
{
    return dynamic_cast<RBX::PartInstance*>(instance) != 0 ||
           dynamic_cast<RBX::ModelInstance*>(instance) != 0;
}
