// from server: 73% by colin
// roc 2007-08 00492ab0  unit: RBX::Network::Players  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00492ab0
//
// 00492ab0  51                   push ecx
// 00492ab1  56                   push esi
// 00492ab2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00492ab6  56                   push esi
// 00492ab7  81c130010000         add ecx, 0x130
// 00492abd  c744240800000000     mov dword ptr [esp + 8], 0
// 00492ac5  e8264ef8ff           call 0x4178f0
// 00492aca  8bc6                 mov eax, esi
// 00492acc  5e                   pop esi
// 00492acd  59                   pop ecx
// 00492ace  c20400               ret 4

struct Players {
    char pad[0x130];
    int field130;
    int method(int* arg);
};

extern "C" int __stdcall sub_4178f0(int* a, int* b);

int Players::method(int* arg) {
    int local = 0;
    sub_4178f0(&field130, arg);
    return (int)arg;
}
