// from server: 62% by colin
// roc 2007-08 004a6780  unit: RBX::Network::Replicator  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a6780
//
// 004a6780  8b818c1d0000         mov eax, dword ptr [ecx + 0x1d8c]
// 004a6786  56                   push esi
// 004a6787  8b742408             mov esi, dword ptr [esp + 8]
// 004a678b  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 004a6791  3bc1                 cmp eax, ecx
// 004a6793  740e                 je 0x4a67a3
// 004a6795  85c9                 test ecx, ecx
// 004a6797  7410                 je 0x4a67a9
// 004a6799  50                   push eax
// 004a679a  e82199f7ff           call 0x4200c0
// 004a679f  84c0                 test al, al
// 004a67a1  7406                 je 0x4a67a9
// 004a67a3  b001                 mov al, 1
// 004a67a5  5e                   pop esi
// 004a67a6  c20400               ret 4
// 004a67a9  56                   push esi
// 004a67aa  e891f0feff           call 0x495840
// 004a67af  83c404               add esp, 4
// 004a67b2  3bf0                 cmp esi, eax
// 004a67b4  0f94c0               sete al
// 004a67b7  5e                   pop esi
// 004a67b8  c20400               ret 4

struct Replicator {
    char pad[0x1d8c];
    int field_1d8c;
    bool method(int* arg);
};

struct Other {
    char pad[0xbc];
    int field_bc;
};

extern "C" bool __stdcall sub_4200C0(int);
extern "C" int* __stdcall sub_495840(void*);

bool Replicator::method(int* arg) {
    int eax = this->field_1d8c;
    Other* esi = (Other*)arg;
    int ecx = esi->field_bc;
    if (eax != ecx) {
        return true;
    }
    if (ecx != 0) {
        if (sub_4200C0(eax)) {
            return true;
        }
    }
    return sub_495840(esi) == (int*)esi;
}
