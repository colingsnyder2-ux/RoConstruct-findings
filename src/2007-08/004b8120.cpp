// from server: 18% by colin
// roc 2007-08 004b8120  unit: Exposer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b8120
//
// 004b8120  6aff                 push -1
// 004b8122  68f3b47400           push 0x74b4f3
// 004b8127  64a100000000         mov eax, dword ptr fs:[0]
// 004b812d  50                   push eax
// 004b812e  51                   push ecx
// 004b812f  56                   push esi
// 004b8130  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b8135  33c4                 xor eax, esp
// 004b8137  50                   push eax
// 004b8138  8d44240c             lea eax, [esp + 0xc]
// 004b813c  64a300000000         mov dword ptr fs:[0], eax
// 004b8142  8bf1                 mov esi, ecx
// 004b8144  89742408             mov dword ptr [esp + 8], esi
// 004b8148  33c0                 xor eax, eax
// 004b814a  c7064ceb7900         mov dword ptr [esi], 0x79eb4c
// 004b8150  894610               mov dword ptr [esi + 0x10], eax
// 004b8153  89442414             mov dword ptr [esp + 0x14], eax
// 004b8157  894614               mov dword ptr [esi + 0x14], eax
// 004b815a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b815e  8d4e1c               lea ecx, [esi + 0x1c]
// 004b8161  c644241401           mov byte ptr [esp + 0x14], 1
// 004b8166  894618               mov dword ptr [esi + 0x18], eax
// 004b8169  e8e2cefbff           call 0x475050
// 004b816e  8bc6                 mov eax, esi
// 004b8170  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b8174  64890d00000000       mov dword ptr fs:[0], ecx
// 004b817b  59                   pop ecx
// 004b817c  5e                   pop esi
// 004b817d  83c410               add esp, 0x10
// 004b8180  c20400               ret 4

struct Exposer {
    void* vfptr;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    void construct(int);
};

extern "C" void __stdcall sub_475050(int);

void Exposer::construct(int arg) {
    this->vfptr = (void*)0x79eb4c;
    this->field10 = 0;
    this->field14 = 0;
    this->field18 = arg;
    sub_475050((int)&this->field1C);
}
