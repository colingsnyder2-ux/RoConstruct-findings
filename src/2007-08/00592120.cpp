// from server: 40% by colin
// roc 2007-08 00592120  unit: RBX::VVisit::?$FactoryProduct  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592120
//
// 00592120  55                   push ebp
// 00592121  8bec                 mov ebp, esp
// 00592123  6aff                 push -1
// 00592125  68e36d7500           push 0x756de3
// 0059212a  64a100000000         mov eax, dword ptr fs:[0]
// 00592130  50                   push eax
// 00592131  64892500000000       mov dword ptr fs:[0], esp
// 00592138  83ec3c               sub esp, 0x3c
// 0059213b  53                   push ebx
// 0059213c  56                   push esi
// 0059213d  57                   push edi
// 0059213e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00592141  33f6                 xor esi, esi
// 00592143  8975fc               mov dword ptr [ebp - 4], esi
// 00592146  b301                 mov bl, 1
// 00592148  8d4db8               lea ecx, [ebp - 0x48]
// 0059214b  885dfc               mov byte ptr [ebp - 4], bl
// 0059214e  ff15a4e67700         call dword ptr [0x77e6a4]
// 00592154  8d45b8               lea eax, [ebp - 0x48]
// 00592157  50                   push eax
// 00592158  8d4d08               lea ecx, [ebp + 8]
// 0059215b  51                   push ecx
// 0059215c  c645fc02             mov byte ptr [ebp - 4], 2
// 00592160  e84b1dfcff           call 0x553eb0
// 00592165  83c408               add esp, 8
// 00592168  8d4db8               lea ecx, [ebp - 0x48]
// 0059216b  885dfc               mov byte ptr [ebp - 4], bl
// 0059216e  ff15ace67700         call dword ptr [0x77e6ac]
// 00592174  8975fc               mov dword ptr [ebp - 4], esi

struct RBXName {
    RBXName();
    ~RBXName();
};

extern "C" void __cdecl sub_553EB0(RBXName*, void*);

struct FactoryProduct {
    void construct();
};

void FactoryProduct::construct() {
    RBXName name;
    sub_553EB0(&name, this);
    name.~RBXName();
}
