// from server: 72% by colin
// roc 2007-08 00563fa0  unit: RBX::UngroupSelectionVerb  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563fa0
//
// 00563fa0  51                   push ecx
// 00563fa1  56                   push esi
// 00563fa2  8bf1                 mov esi, ecx
// 00563fa4  6a01                 push 1
// 00563fa6  8d4e14               lea ecx, [esi + 0x14]
// 00563fa9  e852e3ffff           call 0x562300
// 00563fae  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00563fb4  8b4804               mov ecx, dword ptr [eax + 4]
// 00563fb7  85c9                 test ecx, ecx
// 00563fb9  740a                 je 0x563fc5
// 00563fbb  8b4008               mov eax, dword ptr [eax + 8]
// 00563fbe  2bc1                 sub eax, ecx
// 00563fc0  c1f803               sar eax, 3
// 00563fc3  7505                 jne 0x563fca
// 00563fc5  32c0                 xor al, al
// 00563fc7  5e                   pop esi
// 00563fc8  59                   pop ecx
// 00563fc9  c3                   ret 
// 00563fca  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00563fcd  85c9                 test ecx, ecx
// 00563fcf  7407                 je 0x563fd8
// 00563fd1  e8fad9ffff           call 0x5619d0
// 00563fd6  eb02                 jmp 0x563fda
// 00563fd8  33c0                 xor eax, eax
// 00563fda  6840f05500           push 0x55f040
// 00563fdf  8bc8                 mov ecx, eax
// 00563fe1  e82ab6ffff           call 0x55f610
// 00563fe6  f7d8                 neg eax
// 00563fe8  1bc0                 sbb eax, eax
// 00563fea  f7d8                 neg eax
// 00563fec  5e                   pop esi
// 00563fed  59                   pop ecx
// 00563fee  c3                   ret 

struct DataModel;

struct IDataState;

struct EditSelectionVerb {
    char pad0[0x14];
    int field14;
    char pad1[0x8];
    int field20;
};

struct UngroupSelectionVerb : EditSelectionVerb {
    bool isEnabled() const;
};

extern "C" int __stdcall sub_562300(int*, int);
extern "C" int __stdcall sub_5619D0(int);
extern "C" int __stdcall sub_55F610(int, int);

bool UngroupSelectionVerb::isEnabled() const {
    int v = sub_562300((int*)&this->field14, 1);
    int* p = *(int**)(v + 0x104);
    int count = 0;
    if (p[1] != 0) {
        count = (p[2] - p[1]) >> 3;
    }
    if (count == 0) {
        return false;
    }
    int r;
    if (this->field20 != 0) {
        r = sub_5619D0(this->field20);
    } else {
        r = 0;
    }
    int result = sub_55F610(r, 0x55f040);
    return result != 0;
}
